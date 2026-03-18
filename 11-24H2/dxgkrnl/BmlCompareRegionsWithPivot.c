/*
 * XREFs of BmlCompareRegionsWithPivot @ 0x1402DDCA8
 * Callers:
 *     BmlGetRecommendedContentSizeForPath @ 0x1402DC1E4 (BmlGetRecommendedContentSizeForPath.c)
 *     BmlCompareTargetModes @ 0x1402DD4E0 (BmlCompareTargetModes.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DD6F4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModes @ 0x1402DDA38 (BmlCompareSourceModes.c)
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x14004F75C (--$DIFF@H@@YAHHH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1402DE95C (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 */

__int64 __fastcall BmlCompareRegionsWithPivot(
        struct _D3DKMDT_2DREGION *a1,
        struct _D3DKMDT_2DREGION *a2,
        struct _D3DKMDT_2DREGION *a3)
{
  unsigned __int64 v5; // r10
  signed __int64 v6; // r11
  signed __int64 v7; // rax
  int v8; // ecx
  bool v9; // sf
  bool v10; // of
  int ScaledAspectRatio; // ebx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax

  v5 = a3->cx * (unsigned __int64)a3->cy;
  v6 = v5 - a1->cx * (unsigned __int64)a1->cy;
  if ( (__int64)(a1->cx * (unsigned __int64)a1->cy - v5) > 0 )
    v6 = a1->cx * (unsigned __int64)a1->cy - v5;
  v7 = v5 - a2->cx * (unsigned __int64)a2->cy;
  if ( (__int64)(a2->cx * (unsigned __int64)a2->cy - v5) > 0 )
    v7 = a2->cx * (unsigned __int64)a2->cy - v5;
  if ( v6 == v7 )
  {
    ScaledAspectRatio = BmlGetScaledAspectRatio(a3);
    v13 = BmlGetScaledAspectRatio(a1);
    v14 = DIFF<int>(v13, ScaledAspectRatio);
    v15 = BmlGetScaledAspectRatio(a2);
    v16 = DIFF<int>(v15, ScaledAspectRatio);
    if ( v16 <= v14 )
    {
      v8 = 0;
      v10 = __OFSUB__(v16, v14);
      v9 = v16 - v14 < 0;
      goto LABEL_8;
    }
  }
  else if ( v6 >= v7 )
  {
    v8 = 0;
    v10 = __OFSUB__(v7, v6);
    v9 = v7 - v6 < 0;
LABEL_8:
    LOBYTE(v8) = v9 == v10;
    return (unsigned int)(v8 - 1);
  }
  return 1LL;
}
