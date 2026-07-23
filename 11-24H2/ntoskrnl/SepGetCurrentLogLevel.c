/*
 * XREFs of SepGetCurrentLogLevel @ 0x140404C60
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x140606348 (SepGetLearningModeObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 SepGetCurrentLogLevel()
{
  if ( KeGetCurrentIrql() )
    return 2LL;
  else
    return KeGetCurrentThread()->ApcState.InProgressFlags & 1;
}
