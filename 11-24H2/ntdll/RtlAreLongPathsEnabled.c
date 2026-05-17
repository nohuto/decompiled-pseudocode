/*
 * XREFs of RtlAreLongPathsEnabled @ 0x1800EA6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
