/*
 * XREFs of KiIdleLoop @ 0x1406ACBD0
 * Callers:
 *     KiSystemStartup @ 0x140B4D3E0 (KiSystemStartup.c)
 * Callees:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiIdleSchedule @ 0x1402A5920 (KiIdleSchedule.c)
 *     KiEndIdleCycleAccumulation @ 0x14036AA80 (KiEndIdleCycleAccumulation.c)
 *     KiAcquirePrcbLock @ 0x140406340 (KiAcquirePrcbLock.c)
 *     KiReleasePrcbLock @ 0x140427EA0 (KiReleasePrcbLock.c)
 *     PoIdle @ 0x140441770 (PoIdle.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 */

void __noreturn KiIdleLoop()
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
        KiRetireDpcList((__int64)CurrentPrcb);
      if ( CurrentPrcb->QuantumEnd )
      {
        CurrentPrcb->QuantumEnd = 0;
        _enable();
        KiQuantumEnd();
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
      if ( KiIdleSchedule(CurrentPrcb) )
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
