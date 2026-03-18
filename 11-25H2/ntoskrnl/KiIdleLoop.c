/*
 * XREFs of KiIdleLoop @ 0x1406A0960
 * Callers:
 *     KiSystemStartup @ 0x140B3B3A0 (KiSystemStartup.c)
 * Callees:
 *     KiEndIdleCycleAccumulation @ 0x14028D760 (KiEndIdleCycleAccumulation.c)
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiIdleSchedule @ 0x140330B40 (KiIdleSchedule.c)
 *     KiAcquirePrcbLock @ 0x14040A940 (KiAcquirePrcbLock.c)
 *     KiReleasePrcbLock @ 0x140438EF0 (KiReleasePrcbLock.c)
 *     PoIdle @ 0x14044B7A0 (PoIdle.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 */

void __fastcall __noreturn KiIdleLoop(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 IdleThread; // rdi
  __int64 NextThread; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { clac }
  retaddr = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( 1 )
  {
    while ( 1 )
    {
      if ( HvlEnableIdleYield )
        _mm_pause();
      _enable();
      _disable();
      if ( (CurrentPrcb->DpcRequestSummary & 0xBF) != 0 )
        KiRetireDpcList(CurrentPrcb);
      if ( CurrentPrcb->QuantumEnd )
      {
        CurrentPrcb->QuantumEnd = 0;
        _enable();
        KiQuantumEnd(a1, a2, a3);
        _disable();
      }
      _InterlockedOr8((volatile signed __int8 *)&CurrentPrcb->IdleHalt, 1u);
      if ( !CurrentPrcb->NextThread )
        break;
      CurrentPrcb->IdleHalt = 0;
      _enable();
      IdleThread = (__int64)CurrentPrcb->IdleThread;
      KiAcquirePrcbLock((__int64)CurrentPrcb);
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      if ( NextThread != IdleThread )
      {
        _disable();
        KiEndIdleCycleAccumulation((__int64)CurrentPrcb, IdleThread);
        _enable();
        KiUpdatePriorityMatrixForRunningTransition(CurrentPrcb, NextThread);
        KiReleasePrcbLock((__int64)CurrentPrcb);
        goto LABEL_25;
      }
      KiReleasePrcbLock((__int64)CurrentPrcb);
    }
    if ( CurrentPrcb->IdleSchedule )
    {
      CurrentPrcb->IdleHalt = 0;
      _enable();
      if ( KiIdleSchedule((__int64)CurrentPrcb) )
      {
LABEL_25:
        CurrentPrcb->InterruptRequest |= (CurrentPrcb->DpcRequestSummary & 0xAF) != 0;
        if ( (_BYTE)KeSmapEnabled )
          __asm { stac }
        SwapContext(1LL);
        if ( (_BYTE)KeSmapEnabled )
          __asm { clac }
      }
    }
    else
    {
      if ( (CurrentPrcb->DpcRequestSummary & 0xBF) == 0 )
      {
        if ( (_BYTE)KeSmapEnabled )
          __asm { stac }
        if ( KiIrqlFlags )
          KzSetIrqlUnsafe(0);
        else
          __writecr8(0LL);
        PoIdle((ULONG_PTR)CurrentPrcb);
        _enable();
        a1 = 2LL;
        if ( KiIrqlFlags )
          KzSetIrqlUnsafe(2u);
        else
          __writecr8(2uLL);
        if ( (_BYTE)KeSmapEnabled )
          __asm { clac }
      }
      CurrentPrcb->IdleHalt = 0;
    }
  }
}
