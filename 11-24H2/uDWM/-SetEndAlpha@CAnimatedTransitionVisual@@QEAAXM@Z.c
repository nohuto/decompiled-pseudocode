/*
 * XREFs of ?SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180053970
 * Callers:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180051730 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180051E68 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CWindowClose@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180053850 (-_WindowEnumCallback@CWindowClose@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimatedTransitionVisual::SetEndAlpha(CAnimatedTransitionVisual *this, float a2)
{
  *((float *)this + 221) = a2;
  CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
}
