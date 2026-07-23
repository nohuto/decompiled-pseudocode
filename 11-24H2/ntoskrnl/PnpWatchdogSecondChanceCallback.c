/*
 * XREFs of PnpWatchdogSecondChanceCallback @ 0x1405A2730
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x1404C2730 (PnpWatchdogEtwWrite.c)
 *     PnpWatchdogBugcheck @ 0x1405A23D4 (PnpWatchdogBugcheck.c)
 */

char __fastcall PnpWatchdogSecondChanceCallback(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !(_BYTE)dword_140FC521C && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v1 = 1;
  if ( PnpWatchdogBugcheckConfig && (PnpWatchdogBugcheckConfig == 1 || v1) )
    PnpWatchdogBugcheck(a1);
  return PnpWatchdogEtwWrite(a1, 2);
}
