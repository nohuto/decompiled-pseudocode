/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1402DE6EC
 * Callers:
 *     BmlCompareSourceModes @ 0x1402DDA38 (BmlCompareSourceModes.c)
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x14004F75C (--$DIFF@H@@YAHHH@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1402DE910 (BmlGetModeCategoryForRegion.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1402DE95C (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1402DE9A8 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithMonitors(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  bool v5; // bp
  __int64 v6; // r12
  char v7; // si
  __int64 v10; // rdi
  __int64 v11; // r8
  unsigned int v12; // ebx
  int v13; // r10d
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 v17; // r8
  __int64 v18; // r10
  unsigned int ModeCategoryForRegion; // eax
  unsigned int v20; // r11d
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // r10d
  int v24; // edi
  int ScaledAspectRatio; // eax
  unsigned int v26; // ebx
  int v27; // eax
  unsigned int v28; // eax

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v10 = a1 + 120LL * a2;
  v11 = a2;
  v12 = 1;
  v13 = *(_DWORD *)(v10 + 52);
  if ( v13 && *(_DWORD *)(v10 + 56) )
  {
    if ( *(_DWORD *)(a4 + 76) == v13 )
      v5 = *(_DWORD *)(a4 + 80) == *(_DWORD *)(v10 + 56);
    if ( *(_DWORD *)(a5 + 76) == v13 && *(_DWORD *)(a5 + 80) == *(_DWORD *)(v10 + 56) )
      v7 = 1;
  }
  v14 = a1 + 120LL * a2;
  if ( *(_DWORD *)(v14 + 36) && *(_DWORD *)(v14 + 40) )
  {
    LOBYTE(v11) = v5;
    BmlGetModeCategoryForRegion(a4 + 76, v14 + 36, v11);
    LOBYTE(v17) = v7;
    ModeCategoryForRegion = BmlGetModeCategoryForRegion(a5 + 76, v18 + 36, v17);
    if ( v20 > ModeCategoryForRegion )
      return v12;
    if ( v20 < ModeCategoryForRegion )
      return (unsigned int)-1;
  }
  else
  {
    WdLogSingleEntry4(3LL, a1, a2, *(unsigned int *)(v14 + 36), *(unsigned int *)(v14 + 40));
    WdLogGlobalForLineNumber = 1217;
  }
  if ( !*(_DWORD *)(v10 + 52) || !*(_DWORD *)(v10 + 56) )
  {
    WdLogSingleEntry4(3LL, a1, v6, *(unsigned int *)(v10 + 52), *(unsigned int *)(v10 + 56));
    WdLogGlobalForLineNumber = 1231;
    return 0LL;
  }
  LOBYTE(v15) = v5;
  BmlGetModeCategoryForRegion(a4 + 76, v10 + 52, v15);
  LOBYTE(v21) = v7;
  v22 = BmlGetModeCategoryForRegion(a5 + 76, v10 + 52, v21);
  if ( v23 < v22 )
    return (unsigned int)-1;
  if ( v23 > v22 )
    return v12;
  if ( v23 != 3 )
    return 0LL;
  v24 = *(_DWORD *)(120 * v6 + a1 + 60);
  ScaledAspectRatio = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a4 + 76));
  v26 = DIFF<int>(ScaledAspectRatio, v24);
  v27 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a5 + 76));
  v28 = DIFF<int>(v27, v24);
  return BmlCompareValues<int>(v28, v26);
}
