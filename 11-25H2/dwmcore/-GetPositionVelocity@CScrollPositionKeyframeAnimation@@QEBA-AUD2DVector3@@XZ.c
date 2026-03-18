/*
 * XREFs of ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18022C8D4
 * Callers:
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800F286C (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800F5774 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 * Callees:
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180038440 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::GetPositionVelocity(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  const char *v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CExpressionValue::HasValue((CExpressionValue *)(a1 + 632)) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD0,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      v4);
  if ( *(_DWORD *)(v3 + 704) != 52 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD1,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      v4);
  v5 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)v1 = *(_QWORD *)v2;
  *(_DWORD *)(v1 + 8) = v5;
  return v1;
}
