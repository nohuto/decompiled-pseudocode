/*
 * XREFs of HvpViewMapExtendStorage @ 0x14097FB04
 * Callers:
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x1404B3BF4 (CmSiExtendSection.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14097F77C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapFindViewForFileOffset @ 0x14097FF54 (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140980000 (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapExtendStorage(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 ViewForFileOffset; // rax
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
    || (ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v4 - 1)) == 0
    || (v6 = *(_QWORD *)(ViewForFileOffset + 48), v7 = *(_QWORD *)(ViewForFileOffset + 32), v6 >= v7) )
  {
LABEL_10:
    if ( v4 < v2 )
    {
      result = HvpViewMapCreateViewsForRegion((__int64)a1, v4, v2, 0);
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
