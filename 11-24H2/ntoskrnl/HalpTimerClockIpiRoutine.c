/*
 * XREFs of HalpTimerClockIpiRoutine @ 0x1403394D0
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14033A0D0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpTimerWatchdogResetCountdown @ 0x14033A1F0 (HalpTimerWatchdogResetCountdown.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     HalpScanForProfilingCorruption @ 0x140441980 (HalpScanForProfilingCorruption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerClockIpiRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v8; // rbx

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
        guard_dispatch_icall_no_overrides(HalpTimerWatchdogResetCountdown, v4, v5, v6);
    }
    if ( HalpTimerWatchdogResetCount == -1 )
      HalpTimerWatchdogTriggerSystemReset(0LL);
  }
  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
  {
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    v8 = (_QWORD *)(HalpCounterSetInfo + 24 * v2);
    if ( MEMORY[0xFFFFF78000000008] - v8[2] >= 0x4C4B40uLL )
    {
      if ( (_QWORD *)*v8 != v8 )
        guard_dispatch_icall_no_overrides(0LL, 0LL, v5, v6);
      HalpScanForProfilingCorruption((unsigned int)v2);
      v8[2] = MEMORY[0xFFFFF78000000008];
    }
  }
  return 1;
}
