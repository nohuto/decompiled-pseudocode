/*
 * XREFs of HalpNumaCompareMemorySideCacheNodeAndLevel @ 0x1406FF594
 * Callers:
 *     HalpNumaQueryMemorySideCacheInfo @ 0x1406FF5C0 (HalpNumaQueryMemorySideCacheInfo.c)
 *     HalpNumaCompareMemorySideCacheEntries @ 0x140C13950 (HalpNumaCompareMemorySideCacheEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaCompareMemorySideCacheNodeAndLevel(unsigned int a1, int a2, unsigned int a3, int a4)
{
  if ( a1 >= a3 )
  {
    if ( a1 > a3 )
      return 1LL;
    if ( a2 >= a4 )
      return a2 > a4;
  }
  return 0xFFFFFFFFLL;
}
