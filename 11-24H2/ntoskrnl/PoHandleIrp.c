/*
 * XREFs of PoHandleIrp @ 0x1403CBD64
 * Callers:
 *     IopPoHandleIrp @ 0x1403CBD00 (IopPoHandleIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     PopEnableIrpWatchdog @ 0x140314DDC (PopEnableIrpWatchdog.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PoDeviceAcquireIrp @ 0x1403CC078 (PoDeviceAcquireIrp.c)
 *     PoDeviceReleaseIrp @ 0x1403CC27C (PoDeviceReleaseIrp.c)
 *     PopDispatchQuerySetIrp @ 0x1403CC360 (PopDispatchQuerySetIrp.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1403CC400 (PopDiagTraceDIrpAfterSx.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, _DWORD *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _DWORD *v3; // r15
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // bp
  PDEVICE_OBJECT DeviceObject; // r14
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = 1;
  DeviceObject = CurrentStackLocation->DeviceObject;
  if ( !*(_QWORD *)(v5 + 40) )
  {
    if ( *(_BYTE *)(v5 + 184) == 2 && !*(_DWORD *)(v5 + 188) && *(_DWORD *)(v5 + 192) == 1 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      _InterlockedAnd((volatile signed __int32 *)(v7 + 296), 0xFFFF7FFF);
      v15 = *(_QWORD *)(v7 + 264);
      if ( v15 )
        PopEnableIrpWatchdog(v15);
      PopIrpLockThread = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( *(_BYTE *)(v5 + 184) == 2 && *(_DWORD *)(v5 + 188) == 1 )
    {
      _m_prefetchw((const void *)(v7 + 296));
      v10 = *(_DWORD *)(v7 + 296);
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 296), v10, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x8000) != 0 )
        PopDiagTraceDIrpAfterSx(Irp);
    }
LABEL_12:
    p_Flags = &DeviceObject->Flags;
    if ( (DeviceObject->Flags & 0x8000) == 0 )
      goto LABEL_13;
    goto LABEL_17;
  }
  LOBYTE(a2) = *(_BYTE *)(v5 + 184);
  PoDeviceReleaseIrp(Irp, a2);
  p_Flags = &DeviceObject->Flags;
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x8000) != 0 || (Flags & 0x2000) != 0 && KeGetCurrentIrql() == 2 )
    goto LABEL_12;
  v8 = 0;
LABEL_17:
  LOBYTE(a2) = CurrentStackLocation->MinorFunction;
  PoDeviceAcquireIrp(Irp, a2, DeviceObject);
  if ( !v8 )
    return v8;
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v3 = 0;
    return v8;
  }
LABEL_13:
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  PopDispatchQuerySetIrp(Irp);
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v3 = 259;
  return v8;
}
