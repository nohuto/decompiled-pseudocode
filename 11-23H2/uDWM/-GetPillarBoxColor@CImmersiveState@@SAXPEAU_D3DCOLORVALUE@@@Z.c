/*
 * XREFs of ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800C4484
 * Callers:
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C2194 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18006F0B2 (GetStaticImmersiveColorPrivForHighContrastState.c)
 */

void __fastcall CImmersiveState::GetPillarBoxColor(struct _D3DCOLORVALUE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char IsHighContrastMode; // al
  int StaticImmersiveColorPrivForHighContrastState; // eax
  D3DVALUE v7; // xmm0_4

  IsHighContrastMode = CDesktopManager::IsHighContrastMode((__int64)a1, a2, a3, a4);
  StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                   570,
                                                   IsHighContrastMode);
  v7 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)StaticImmersiveColorPrivForHighContrastState] / 255.0;
  a1->a = 1.0;
  a1->r = v7;
  a1->g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)StaticImmersiveColorPrivForHighContrastState >> 8]
        / 255.0;
  a1->b = GammaLUT_sRGB_to_scRGB[BYTE2(StaticImmersiveColorPrivForHighContrastState)] / 255.0;
}
