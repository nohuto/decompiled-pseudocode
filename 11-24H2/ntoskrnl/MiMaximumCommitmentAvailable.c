/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x14046538C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  return (qword_140E3CDC8 - qword_140E3D740) & -(__int64)(qword_140E3D740 < (unsigned __int64)qword_140E3CDC8);
}
