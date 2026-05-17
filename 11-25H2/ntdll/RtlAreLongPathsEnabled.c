/*
 * XREFs of RtlAreLongPathsEnabled @ 0x1800EBA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
