/*
 * XREFs of ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1802318E0
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1800F5140 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800F5774 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180221C00 (-EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180038440 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::GetNaturalEndpoint(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  const char *v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CExpressionValue::HasValue((CExpressionValue *)(a1 + 552)) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBE,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      v4);
  if ( *(_DWORD *)(v3 + 624) != 52 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBF,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      v4);
  v5 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)v1 = *(_QWORD *)v2;
  *(_DWORD *)(v1 + 8) = v5;
  return v1;
}
