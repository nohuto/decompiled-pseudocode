/*
 * XREFs of MiSlabUpdateRecentFailure @ 0x14035371C
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x140354C04 (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x140354D7C (MiFreeSlabEntries.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x140263454 (MiGetSlabCurrentTime.c)
 */

unsigned __int64 __fastcall MiSlabUpdateRecentFailure(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 SlabCurrentTime; // rax
  _QWORD *v3; // r10

  result = *a1;
  if ( *a1 )
  {
    SlabCurrentTime = MiGetSlabCurrentTime();
    result = SlabCurrentTime - *v3;
    if ( result >= 0x11E1A300 )
      *v3 = 0LL;
  }
  return result;
}
