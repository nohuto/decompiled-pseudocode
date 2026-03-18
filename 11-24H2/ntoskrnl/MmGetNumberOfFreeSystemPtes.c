/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x1403FC504
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1404F5D50 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1403FC6BC (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  __int64 v0; // rbx

  v0 = qword_140E375C0 + ((qword_140E2EE70 - qword_140E38948) << 9);
  return v0 + MiGetNumberOfCachedPtes(&qword_140E37568);
}
