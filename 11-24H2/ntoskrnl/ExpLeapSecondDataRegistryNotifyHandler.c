/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1407B6610
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x1407B68FC (ExpReadLeapSecondData.c)
 */

__int64 __fastcall ExpLeapSecondDataRegistryNotifyHandler(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ExpReadLeapSecondData(ExLeapSecondData, a2);
}
