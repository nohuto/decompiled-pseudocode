/*
 * XREFs of ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180003FFC
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180003BA4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180003E74 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180003EA8 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800DD49C (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2330 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E28D0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTransitionVisualController::HasVisibleStyle(HWND a1)
{
  return (GetWindowLongPtrW(a1, -16) & 0x10000000) != 0;
}
