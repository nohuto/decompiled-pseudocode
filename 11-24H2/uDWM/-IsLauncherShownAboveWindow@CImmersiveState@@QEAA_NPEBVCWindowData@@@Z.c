/*
 * XREFs of ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180053678
 * Callers:
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000321C (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18004232C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180051E68 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?IsLauncherShownAboveRect@CImmersiveState@@QEAA_NAEBUtagRECT@@@Z @ 0x18009ACFC (-IsLauncherShownAboveRect@CImmersiveState@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?IsImmersiveAppBand@CImmersiveState@@SA_NW4ZBID@@@Z @ 0x18009B0F8 (-IsImmersiveAppBand@CImmersiveState@@SA_NW4ZBID@@@Z.c)
 */

char __fastcall CImmersiveState::IsLauncherShownAboveWindow(CImmersiveState *this, const struct CWindowData *a2)
{
  char IsImmersiveAppBand; // al
  const struct tagRECT *v3; // rdx
  unsigned int v4; // ecx
  CImmersiveState *v5; // r8
  char v6; // r9
  int v7; // eax

  IsImmersiveAppBand = CImmersiveState::IsImmersiveAppBand(*((unsigned int *)a2 + 32), a2, this);
  v6 = 0;
  if ( IsImmersiveAppBand || v4 <= 0xC && (v7 = 4130, _bittest(&v7, v4)) )
  {
    if ( CImmersiveState::IsLauncherShownAboveRect(v5, v3 + 3) )
      return 1;
  }
  return v6;
}
