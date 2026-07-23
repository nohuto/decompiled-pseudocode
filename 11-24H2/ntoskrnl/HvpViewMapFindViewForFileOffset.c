/*
 * XREFs of HvpViewMapFindViewForFileOffset @ 0x140968764
 * Callers:
 *     HvpViewMapShrinkStorage @ 0x1407DF59C (HvpViewMapShrinkStorage.c)
 *     HvpViewMapExtendStorage @ 0x140968314 (HvpViewMapExtendStorage.c)
 *     HvpViewMapUnCOWAndSealRange @ 0x1409683D0 (HvpViewMapUnCOWAndSealRange.c)
 *     HvpViewMapSealRange @ 0x1409684E4 (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1409685D0 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14096AEDC (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x14096CB60 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 *     HvpViewMapAdjustFlag @ 0x14096CF44 (HvpViewMapAdjustFlag.c)
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
