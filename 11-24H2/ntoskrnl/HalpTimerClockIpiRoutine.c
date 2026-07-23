/*
 * XREFs of HalpTimerClockIpiRoutine @ 0x1403189B0
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1403195B0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1403196D0 (HalpTimerWatchdogResetCountdown.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     HalpScanForProfilingCorruption @ 0x140435878 (HalpScanForProfilingCorruption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerClockIpiRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v6; // rbx

  v3 = *(_QWORD *)(a1 + 136);
  LOBYTE(a2) = *(_BYTE *)(v3 + 41);
  KeClockInterruptNotify(v3, a2, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( HalpWatchdogTimer && CurrentPrcb->ClockOwner )
  {
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
    {
      if ( off_140E00B00[0] == HalpTimerWatchdogResetCountdown )
        HalpTimerWatchdogResetCountdown();
      else
        guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v4);
    }
    if ( HalpTimerWatchdogResetCount == -1 )
      HalpTimerWatchdogTriggerSystemReset(0LL);
  }
  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
  {
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    v6 = (_QWORD *)(HalpCounterSetInfo + 24 * v2);
    if ( MEMORY[0xFFFFF78000000008] - v6[2] >= 0x4C4B40uLL )
    {
      if ( (_QWORD *)*v6 != v6 )
        guard_dispatch_icall_no_overrides(0LL, 0LL);
      HalpScanForProfilingCorruption((unsigned int)v2);
      v6[2] = MEMORY[0xFFFFF78000000008];
    }
  }
  return 1;
}
