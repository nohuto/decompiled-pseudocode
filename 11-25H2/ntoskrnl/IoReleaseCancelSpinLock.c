/*
 * XREFs of IoReleaseCancelSpinLock @ 0x1402FE5A0
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  volatile signed __int64 **v1; // rdi
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // di
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  v2 = Irql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v1);
    v3 = (__int64)*v1;
    if ( !*v1 )
    {
      if ( v1 == (volatile signed __int64 **)_InterlockedCompareExchange64(v1[1], 0LL, (signed __int64)v1) )
        goto LABEL_9;
      v3 = KxWaitForLockChainValid((__int64 *)v1);
    }
    *v1 = 0LL;
    v4 = (__int64)v1[1];
    if ( (((unsigned __int8)v4 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v3 + 8), v4)) & 4) != 0 )
    {
      _InterlockedOr(v13, 0);
      v7 = KeDisableInterrupts();
      KiHaltOnAddressWakeEntireList(v8, _InterlockedExchange64((volatile __int64 *)(v6 + 8 * v5), 0LL));
      if ( v7 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v11 = *SchedulerAssist;
          do
          {
            v12 = v11;
            v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
          }
          while ( v12 != v11 );
          if ( (v11 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(v1, retaddr);
  }
LABEL_9:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v2);
  __writecr8(v2);
}
