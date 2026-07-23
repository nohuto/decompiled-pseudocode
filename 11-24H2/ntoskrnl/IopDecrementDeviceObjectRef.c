/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1403E6060
 * Callers:
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140593004 (IopDecrementDeviceObjectHandleCount.c)
 *     IopLoadFileSystemDriver @ 0x14071038C (IopLoadFileSystemDriver.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1408AD120 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     IopShutdownBaseFileSystems @ 0x140B55A20 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 v4; // bp
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v7; // rcx
  volatile __int64 *v8; // rdx
  _QWORD *v9; // rax
  int v10; // eax
  volatile signed __int64 **v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // di
  __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 v23; // rcx
  signed __int32 v24[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v7 = (__int64)ArbitraryUserPointer + 160;
  v8 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = (_QWORD *)_InterlockedExchange64(v8, v7);
    if ( v9 )
      KxWaitForLockOwnerShip(v7, v9);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  v10 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v10;
  if ( v10 < 0 )
  {
    v23 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v23 )
    {
      IoAddTriageDumpDataBlock(v23, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !v10 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v11);
    v13 = (__int64)*v11;
    if ( !*v11 )
    {
      if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
        goto LABEL_11;
      v13 = KxWaitForLockChainValid((__int64 *)v11);
    }
    *v11 = 0LL;
    v14 = (__int64)v11[1];
    if ( (((unsigned __int8)v14 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v13 + 8), v14)) & 4) != 0 )
    {
      _InterlockedOr(v24, 0);
      v17 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v18, _InterlockedExchange64((volatile __int64 *)(v16 + 8 * v15), 0LL));
      if ( v17 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v21 = *SchedulerAssist;
          do
          {
            v22 = v21;
            v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
          }
          while ( v22 != v21 );
          if ( (v21 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
    goto LABEL_11;
  }
  KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
LABEL_11:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v4;
}
