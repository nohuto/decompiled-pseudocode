/*
 * XREFs of ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402C80F4
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1402625B8 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlGetNextBestSourceMode @ 0x1402C6C60 (BmlGetNextBestSourceMode.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402C75BC (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1402C7A9C (BmlCompareSourceModesWithContentRes.c)
 *     BmlFillPreferredMonitorMode @ 0x1402C9BA0 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareModeExtents(int *a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v2 = *a1;
  if ( (unsigned int)*a1 > *a2 )
    return 1LL;
  v3 = a1[1];
  v4 = a2[1];
  if ( v3 > v4 )
    return 1LL;
  if ( v2 == *a2 )
    return (unsigned int)-(v4 != v3);
  return 0xFFFFFFFFLL;
}
