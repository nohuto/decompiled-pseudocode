/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x1403F5EC4
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1404F3650 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1403F607C (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  __int64 v0; // rbx

  v0 = qword_140E37700 + ((qword_140E2EFB0 - qword_140E38A88) << 9);
  return v0 + MiGetNumberOfCachedPtes(&qword_140E376A8);
}
