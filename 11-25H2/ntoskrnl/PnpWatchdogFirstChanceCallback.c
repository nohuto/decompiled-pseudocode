/*
 * XREFs of PnpWatchdogFirstChanceCallback @ 0x140716340
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x1404C86F0 (PnpWatchdogEtwWrite.c)
 *     PnpRecordBlackbox @ 0x14096E5E8 (PnpRecordBlackbox.c)
 */

char __fastcall PnpWatchdogFirstChanceCallback(__int64 a1)
{
  char result; // al

  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 16));
  result = PnpWatchdogEtwWrite(a1, 0);
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
