/*
 * XREFs of MiReduceSystemRegionType @ 0x1403A6254
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1403A5094 (MiMakeSystemRangeAvailable.c)
 *     MiSplitBitmapPages @ 0x1403A52F4 (MiSplitBitmapPages.c)
 *     MiObtainDynamicVa @ 0x1403A58DC (MiObtainDynamicVa.c)
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
