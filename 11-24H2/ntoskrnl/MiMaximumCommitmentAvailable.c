/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x14045BA70
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  return (qword_140E3CF08 - qword_140E3D880) & -(__int64)(qword_140E3D880 < (unsigned __int64)qword_140E3CF08);
}
