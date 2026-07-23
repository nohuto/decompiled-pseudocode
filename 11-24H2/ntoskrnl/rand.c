/*
 * XREFs of rand @ 0x1404FCDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  RtlCopyFromUser__fo_ = 214013 * RtlCopyFromUser__fo_ + 2531011;
  return (RtlCopyFromUser__fo_ >> 16) & 0x7FFF;
}
