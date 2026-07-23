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

NTSTATUS __fastcall HvpViewMapExtendStorage(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  unsigned __int64 ViewForFileOffset; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  NTSTATUS result; // eax

  v2 = (unsigned int)(a2 + 4096);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return 0;
  if ( v2 > *(_QWORD *)(a1 + 16) )
  {
    result = CmSiExtendSection(*(void **)a1, (LARGE_INTEGER)(unsigned int)(a2 + 4096));
    if ( result < 0 )
      return result;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4
    || (ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v4 - 1)) == 0
    || (v6 = *(_QWORD *)(ViewForFileOffset + 48), v7 = *(_QWORD *)(ViewForFileOffset + 32), v6 >= v7) )
  {
LABEL_10:
    if ( v4 < v2 )
    {
      result = HvpViewMapCreateViewsForRegion(a1, v4, v2, 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) = v2;
    }
    return 0;
  }
  v4 = v2;
  if ( v7 <= v2 )
    v4 = *(_QWORD *)(ViewForFileOffset + 32);
  result = HvpViewMapMakeViewRangeValid(a1, ViewForFileOffset, v6, v4, 0);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1 + 8) = v4;
    goto LABEL_10;
  }
  return result;
}
