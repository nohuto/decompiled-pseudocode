/*
 * XREFs of MiSlabUpdateRecentFailure @ 0x1403B62A8
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1403B5490 (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x1403B5608 (MiFreeSlabEntries.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x14045CB68 (MiGetSlabCurrentTime.c)
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
