/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1402FED30
 * Callers:
 *     IopCheckVpbMounted @ 0x1402FE890 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140592974 (IopDecrementDeviceObjectHandleCount.c)
 *     IopLoadFileSystemDriver @ 0x1407066FC (IopLoadFileSystemDriver.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14099F4B0 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 *     IopShutdownBaseFileSystems @ 0x140B439D0 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // bp
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v9; // rcx
  volatile __int64 *v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  volatile signed __int64 **v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // di
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // rcx
  signed __int32 v26[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v9 = (__int64)ArbitraryUserPointer + 160;
  v10 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v11 = _InterlockedExchange64(v10, v9);
    if ( v11 )
      KxWaitForLockOwnerShip(v9, v11, v10, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v9, v10);
  }
  v12 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v12;
  if ( v12 < 0 )
  {
    v25 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v25 )
    {
      IoAddTriageDumpDataBlock(v25, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !v12 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete((PVOID)BugCheckParameter2);
  v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v13, retaddr);
    goto LABEL_16;
  }
  _m_prefetchw(v13);
  v14 = (__int64)*v13;
  if ( *v13 )
  {
LABEL_12:
    *v13 = 0LL;
    v15 = (__int64)v13[1];
    if ( (((unsigned __int8)v15 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v14 + 8), v15)) & 4) != 0 )
    {
      _InterlockedOr(v26, 0);
      v18 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v19, _InterlockedExchange64((volatile __int64 *)(v17 + 8 * v16), 0LL));
      if ( v18 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v23 = *SchedulerAssist;
          do
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange(SchedulerAssist, v23 & 0xFFDFFFFF, v23);
          }
          while ( v24 != v23 );
          if ( (v23 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
    goto LABEL_16;
  }
  if ( v13 != (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
  {
    v14 = KxWaitForLockChainValid((__int64 *)v13);
    goto LABEL_12;
  }
LABEL_16:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v6;
}
