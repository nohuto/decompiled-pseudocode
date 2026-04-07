/*
 * XREFs of _lambda_074c95c81bff18b0cb7765135f89e04b_::operator() @ 0x1800D186C
 * Callers:
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D7260 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180053D00 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall lambda_074c95c81bff18b0cb7765135f89e04b_::operator()(__int64 a1, CAnimatedTransitionVisual **a2)
{
  CGroupingStoryboard *v4; // rcx

  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], *(float *)(a1 + 8));
  v4 = *(CGroupingStoryboard **)a1;
  *((_BYTE *)a2[5] + 923) = 1;
  *((_BYTE *)a2[5] + 936) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(v4, (struct CAnimationComponent *)a2);
}
