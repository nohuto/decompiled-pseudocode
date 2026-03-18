/*
 * XREFs of MiReduceSystemRegionType @ 0x14038F4F0
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14038E334 (MiMakeSystemRangeAvailable.c)
 *     MiSplitBitmapPages @ 0x14038E594 (MiSplitBitmapPages.c)
 *     MiObtainDynamicVa @ 0x14038EB7C (MiObtainDynamicVa.c)
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
