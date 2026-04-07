/*
 * XREFs of ?SetOverrideScalingCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@@Z @ 0x1800A4ED0
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800D5450 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimatedTransitionVisual::SetOverrideScalingCenter(
        CAnimatedTransitionVisual *this,
        struct D2D_POINT_3F *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 91) = *(_QWORD *)a2;
  *((_DWORD *)this + 184) = v2;
  *((_BYTE *)this + 926) = 1;
}
