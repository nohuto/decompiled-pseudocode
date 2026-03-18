/*
 * XREFs of PnpWatchdogSecondChanceCallback @ 0x1405A2080
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x1404C86F0 (PnpWatchdogEtwWrite.c)
 *     PnpWatchdogBugcheck @ 0x1405A1D24 (PnpWatchdogBugcheck.c)
 */

char __fastcall PnpWatchdogSecondChanceCallback(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !(_BYTE)dword_140FC420C && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v1 = 1;
  if ( PnpWatchdogBugcheckConfig && (PnpWatchdogBugcheckConfig == 1 || v1) )
    PnpWatchdogBugcheck(a1);
  return PnpWatchdogEtwWrite(a1, 2);
}
