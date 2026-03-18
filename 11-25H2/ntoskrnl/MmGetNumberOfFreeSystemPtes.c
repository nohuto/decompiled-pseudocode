/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x1403F4B78
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1404F33F8 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1403F4D30 (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  __int64 v0; // rbx

  v0 = qword_140E37380 + ((qword_140E2EC30 - qword_140E38708) << 9);
  return v0 + MiGetNumberOfCachedPtes(&qword_140E37328);
}
