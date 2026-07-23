/*
 * XREFs of KeQueryActiveProcessorCount @ 0x140476B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryActiveProcessorCount(PKAFFINITY ActiveProcessors)
{
  unsigned __int64 v1; // rax

  if ( ActiveProcessors )
  {
    v1 = KeActiveProcessors.Bitmap[0];
    *ActiveProcessors = KeActiveProcessors.Bitmap[0];
  }
  else
  {
    if ( !KiActiveGroups )
      return 0;
    v1 = KeActiveProcessors.Bitmap[0];
  }
  return __popcnt(v1);
}
