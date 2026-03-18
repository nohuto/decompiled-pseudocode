/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x140467298
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  return (qword_140E3CB88 - qword_140E3D500) & -(__int64)(qword_140E3D500 < (unsigned __int64)qword_140E3CB88);
}
