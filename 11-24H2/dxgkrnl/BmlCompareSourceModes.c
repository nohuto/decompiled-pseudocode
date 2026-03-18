/*
 * XREFs of BmlCompareSourceModes @ 0x1402DDA38
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1402DC470 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1402DDCA8 (BmlCompareRegionsWithPivot.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DE3FC (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetPixelFormatPreference @ 0x1402DE648 (BmlGetPixelFormatPreference.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1402DE6EC (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1402DE9C4 (BmlCompareSourceModesWithContentRes.c)
 */

__int64 __fastcall BmlCompareSourceModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // ebx
  int PixelFormatPreference; // r15d
  int v16; // eax
  int v17; // r8d
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax

  v5 = a3;
  v9 = 1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1909;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1910;
  }
  if ( a4 == a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1912;
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return v9;
  v10 = 120 * v5;
  v11 = *(_QWORD *)(120 * v5 + a1 + 16);
  if ( *(_BYTE *)(v11 + 129) && (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
LABEL_18:
    if ( *(_BYTE *)(*(_QWORD *)(v10 + a1 + 16) + 129LL) )
    {
      if ( (*(_BYTE *)(v10 + a1 + 124) & 1) != 0 )
      {
        result = BmlCompareSourceModesWithContentRes(a1, (unsigned __int16)v5, a4, a5);
        if ( (_DWORD)result )
          return result;
      }
    }
    v14 = *(_DWORD *)(v10 + a1 + 120);
    PixelFormatPreference = BmlGetPixelFormatPreference(*(unsigned int *)(a5 + 96), v14);
    v16 = BmlGetPixelFormatPreference(*(unsigned int *)(a4 + 96), v14);
    if ( v16 <= PixelFormatPreference )
    {
      if ( v16 >= PixelFormatPreference )
      {
        v18 = *(unsigned int *)(a4 + 76);
        v19 = *(unsigned int *)(a5 + 76);
        v20 = v18 * *(unsigned int *)(a4 + 80);
        v21 = v19 * *(unsigned int *)(a5 + 80);
        if ( v20 <= v21 )
        {
          if ( v20 >= v21 )
            v9 = BmlCompareValues<unsigned int>(v18, v19);
          else
            v9 = -1;
        }
        if ( v9 )
        {
          v22 = BmlCompareSourceModesWithMonitors(a1, (unsigned __int16)v5, v18, a4, a5);
          if ( v22 )
            return v22;
        }
      }
      else
      {
        return (unsigned int)-1;
      }
    }
    return v9;
  }
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v5, a4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1773;
  }
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v5, a5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1774;
  }
  v12 = *(_DWORD *)(v11 + 116);
  if ( !v12
    || (*(_QWORD *)v11 & 0x8000000100LL) == 0
    || (v17 = *(_DWORD *)(a4 + 96), (v17 == v12) == (*(_DWORD *)(a5 + 96) == v12)) )
  {
    if ( (*(_DWORD *)v11 & 0x100LL) != 0 )
    {
      result = BmlCompareRegionsWithPivot(
                 (struct _D3DKMDT_2DREGION *)(a4 + 76),
                 (struct _D3DKMDT_2DREGION *)(a5 + 76),
                 (struct _D3DKMDT_2DREGION *)(v11 + 96));
      if ( (_DWORD)result )
        return result;
    }
    goto LABEL_18;
  }
  result = 0xFFFFFFFFLL;
  if ( v17 == v12 )
    return 1LL;
  return result;
}
