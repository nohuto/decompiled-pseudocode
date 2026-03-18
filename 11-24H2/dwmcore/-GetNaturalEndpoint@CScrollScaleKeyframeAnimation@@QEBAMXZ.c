/*
 * XREFs of ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180223EB4
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1800DED50 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800DF384 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180012614 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetNaturalEndpoint(CScrollScaleKeyframeAnimation *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CExpressionValue::HasValue((CScrollScaleKeyframeAnimation *)((char *)this + 552)) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC4,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      v3);
  if ( *(_DWORD *)(v1 + 624) != 18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      v3);
  return *(float *)v2;
}
