/*
 * XREFs of HvpViewMapExtendStorage @ 0x1408834A4
 * Callers:
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x1404B4320 (CmSiExtendSection.c)
 *     HvpViewMapFindViewForFileOffset @ 0x140881C24 (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140883560 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140884B94 (HvpViewMapCreateViewsForRegion.c)
 */

__int64 __fastcall HvpViewMapExtendStorage(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  unsigned __int64 ViewForFileOffset; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = (unsigned int)(a2 + 4096);
  if ( a1[1] >= v2 )
    return 0LL;
  if ( v2 > a1[2] )
  {
    result = CmSiExtendSection(*a1, (unsigned int)(a2 + 4096));
    if ( (int)result < 0 )
      return result;
  }
  v4 = a1[1];
  if ( !v4
    || (ViewForFileOffset = HvpViewMapFindViewForFileOffset((__int64)a1, v4 - 1)) == 0
    || (v6 = *(_QWORD *)(ViewForFileOffset + 48), v7 = *(_QWORD *)(ViewForFileOffset + 32), v6 >= v7) )
  {
LABEL_10:
    if ( v4 < v2 )
    {
      result = HvpViewMapCreateViewsForRegion(a1, v4, v2, 0LL);
      if ( (int)result < 0 )
        return result;
      a1[1] = v2;
    }
    return 0LL;
  }
  v4 = v2;
  if ( v7 <= v2 )
    v4 = *(_QWORD *)(ViewForFileOffset + 32);
  result = HvpViewMapMakeViewRangeValid((_DWORD)a1, ViewForFileOffset, v6, v4, 0);
  if ( (int)result >= 0 )
  {
    a1[1] = v4;
    goto LABEL_10;
  }
  return result;
}
