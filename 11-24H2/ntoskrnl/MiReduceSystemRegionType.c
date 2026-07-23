/*
 * XREFs of MiReduceSystemRegionType @ 0x14026D544
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14026C384 (MiMakeSystemRangeAvailable.c)
 *     MiSplitBitmapPages @ 0x14026C5E4 (MiSplitBitmapPages.c)
 *     MiObtainDynamicVa @ 0x14026CBCC (MiObtainDynamicVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReduceSystemRegionType(unsigned int a1)
{
  if ( a1 == 12 )
  {
    return 8;
  }
  else if ( a1 == 10 )
  {
    return 6;
  }
  return a1;
}
