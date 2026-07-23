/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x1404B7FCC
 * Callers:
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     PopPowerActionWatchdog @ 0x1405D10B0 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x14075229C (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(int a1)
{
  KIRQL v2; // di
  int v3; // ecx

  if ( a1 < 3 )
  {
    if ( a1 == 1 )
      PopUpdatePowerActionWatchdogTimeouts();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F0BAA8);
    if ( dword_140F0BB34 == a1 )
      goto LABEL_16;
    if ( dword_140F0BB34 )
    {
      if ( !KeCancelTimer(&stru_140F0BAF0) )
      {
        PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
        goto LABEL_16;
      }
      qword_140F0BB38 = 0LL;
      dword_140F0BB34 = 0;
    }
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v3 = PopPowerActionTransitioningWatchdogTimeout;
      }
      else
      {
        if ( a1 != 2 )
          goto LABEL_16;
        v3 = PopPowerActionResumingWatchdogTimeout;
      }
      if ( v3 )
      {
        qword_140F0BB38 = MEMORY[0xFFFFF78000000008];
        dword_140F0BB40 = v3;
        dword_140F0BB34 = a1;
        KiSetTimerEx((__int64)&stru_140F0BAF0, -10000000LL * v3, 0, 0, (__int64)&dword_140F0BAB0);
      }
    }
LABEL_16:
    KeReleaseSpinLock(&qword_140F0BAA8, v2);
  }
}
