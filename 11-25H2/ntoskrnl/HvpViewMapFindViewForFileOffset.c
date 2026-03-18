/*
 * XREFs of HvpViewMapFindViewForFileOffset @ 0x140881C24
 * Callers:
 *     HvpViewMapShrinkStorage @ 0x1407CF774 (HvpViewMapShrinkStorage.c)
 *     HvpViewMapSealRange @ 0x1408819A4 (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x140881A90 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapUnCOWAndSealRange @ 0x140882F18 (HvpViewMapUnCOWAndSealRange.c)
 *     HvpViewMapExtendStorage @ 0x1408834A4 (HvpViewMapExtendStorage.c)
 *     HvpViewMapAdjustFlag @ 0x140A401E4 (HvpViewMapAdjustFlag.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140A40360 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpViewMapFindViewForFileOffset(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  int v5; // edx
  unsigned __int64 v6; // rcx

  v2 = a1 + 40;
  result = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && result )
    result ^= v2;
  v5 = *(_BYTE *)(v2 + 8) & 1;
  while ( result )
  {
    if ( a2 < *(_QWORD *)(result + 40) )
    {
      v6 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 < *(_QWORD *)(result + 48) )
        return result;
      v6 = *(_QWORD *)(result + 8);
    }
    if ( v5 && v6 )
      result ^= v6;
    else
      result = v6;
  }
  return result;
}
