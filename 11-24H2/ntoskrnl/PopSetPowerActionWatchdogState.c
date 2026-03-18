/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x1404BCE5C
 * Callers:
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     PopPowerActionWatchdog @ 0x1405D3990 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140753F7C (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(int a1)
{
  KIRQL v2; // di
  int v3; // ecx

  if ( a1 < 3 )
  {
    if ( a1 == 1 )
      PopUpdatePowerActionWatchdogTimeouts();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F0B228);
    if ( dword_140F0B2B4 == a1 )
      goto LABEL_16;
    if ( dword_140F0B2B4 )
    {
      if ( !KeCancelTimer(&stru_140F0B270) )
      {
        PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
        goto LABEL_16;
      }
      qword_140F0B2B8 = 0LL;
      dword_140F0B2B4 = 0;
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
        qword_140F0B2B8 = MEMORY[0xFFFFF78000000008];
        dword_140F0B2C0 = v3;
        dword_140F0B2B4 = a1;
        KiSetTimerEx((__int64)&stru_140F0B270, -10000000LL * v3, 0, 0, (__int64)&dword_140F0B230);
      }
    }
LABEL_16:
    KeReleaseSpinLock(&qword_140F0B228, v2);
  }
}
