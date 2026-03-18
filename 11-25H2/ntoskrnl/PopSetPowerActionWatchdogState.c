/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x1404BDE2C
 * Callers:
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     PopPowerActionWatchdog @ 0x1405CEF30 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140747E8C (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(int a1)
{
  KIRQL v2; // di
  int v3; // ecx

  if ( a1 < 3 )
  {
    if ( a1 == 1 )
      PopUpdatePowerActionWatchdogTimeouts();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F0AF88);
    if ( dword_140F0B014 == a1 )
      goto LABEL_16;
    if ( dword_140F0B014 )
    {
      if ( !KeCancelTimer(&stru_140F0AFD0) )
      {
        PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
        goto LABEL_16;
      }
      qword_140F0B018 = 0LL;
      dword_140F0B014 = 0;
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
        qword_140F0B018 = MEMORY[0xFFFFF78000000008];
        dword_140F0B020 = v3;
        dword_140F0B014 = a1;
        KiSetTimerEx((__int64)&stru_140F0AFD0, -10000000LL * v3, 0, 0, (__int64)&dword_140F0AF90);
      }
    }
LABEL_16:
    KeReleaseSpinLock(&qword_140F0AF88, v2);
  }
}
