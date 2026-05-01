/*
 * XREFs of ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x1803905EC
 * Callers:
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180391780 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D1EB0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803DC1E0 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180390554 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x180390F20 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 */

__int64 __fastcall GetDefaultCortanaWidthWithoutGutter(const struct tagRECT *a1, int a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 344;
  if ( a1->right - a1->left < 1196 )
    v3 = 320;
  v8 = 0;
  if ( (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x39, &v8) >= 0 && (v5 = v8) != 0
    || (v6 = MulDiv(a1->right - a1->left, 96, a2), IsWideAtStartupEnabled(v6))
    && (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x37, &v8) >= 0
    && (v5 = v8) != 0 )
  {
    v3 += v5;
  }
  return v3;
}
