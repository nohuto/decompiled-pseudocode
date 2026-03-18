/*
 * XREFs of ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1800E6D58
 * Callers:
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800DE4DC (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1800E69A0 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x18029DC6C (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802AB818 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

const struct KeyframeValue *__fastcall CKeyframeAnimation::GetLastKeyframeValue(CKeyframeAnimation *this)
{
  __int64 v1; // r8
  const struct KeyframeValue *result; // rax
  int v3; // ecx

  v1 = *((_QWORD *)this + 44);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 112);
    if ( v3 )
      return *(const struct KeyframeValue **)(*(_QWORD *)(v1 + 104) + 24LL * (unsigned int)(v3 - 1) + 8);
  }
  return result;
}
