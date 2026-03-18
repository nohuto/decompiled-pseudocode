/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x1402FDE30
 * Callers:
 *     IopCheckTopDeviceHint @ 0x140861D00 (IopCheckTopDeviceHint.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 */

char __fastcall IopVerifyDeviceObjectOnStack(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  KIRQL CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v9; // rcx
  volatile __int64 *v10; // r8
  __int64 v11; // rdx
  volatile signed __int64 **v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // di
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  signed __int32 v24[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = 0;
  if ( a3 )
  {
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
  }
  do
  {
    if ( a1 == a2 )
    {
      if ( !a3 )
        return 1;
      v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(v13, retaddr);
        goto LABEL_21;
      }
      _m_prefetchw(v13);
      v14 = (__int64)*v13;
      if ( !*v13 )
      {
        if ( v13 == (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
        {
LABEL_21:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          return 1;
        }
        v14 = KxWaitForLockChainValid((__int64 *)v13);
      }
      *v13 = 0LL;
      v15 = (__int64)v13[1];
      if ( (((unsigned __int8)v15 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v14 + 8), v15)) & 4) != 0 )
      {
        _InterlockedOr(v24, 0);
        v18 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v19, _InterlockedExchange64((volatile __int64 *)(v17 + 8 * v16), 0LL));
        if ( v18 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v22 = *SchedulerAssist;
            do
            {
              v23 = v22;
              v22 = _InterlockedCompareExchange(SchedulerAssist, v22 & 0xFFDFFFFF, v22);
            }
            while ( v23 != v22 );
            if ( (v22 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
      }
      goto LABEL_21;
    }
    a1 = *(_QWORD *)(a1 + 24);
  }
  while ( a1 );
  if ( a3 )
    KeReleaseQueuedSpinLock(0xAuLL, CurrentIrql);
  return 0;
}
