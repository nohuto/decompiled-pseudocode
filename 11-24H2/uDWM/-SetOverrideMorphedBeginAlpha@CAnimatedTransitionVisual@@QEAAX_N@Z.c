/*
 * XREFs of ?SetOverrideMorphedBeginAlpha@CAnimatedTransitionVisual@@QEAAX_N@Z @ 0x1800A4E90
 * Callers:
 *     ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D8010 (-_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D88F0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimatedTransitionVisual::SetOverrideMorphedBeginAlpha(CAnimatedTransitionVisual *this)
{
  *((_BYTE *)this + 921) = 1;
}
