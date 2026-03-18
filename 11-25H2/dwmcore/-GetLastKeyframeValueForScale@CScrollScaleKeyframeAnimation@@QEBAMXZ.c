/*
 * XREFs of ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802B5408
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800F20B0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800F5774 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x1802A741C (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1800F17E0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1800F19C0 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(CScrollScaleKeyframeAnimation *this)
{
  KeyframeValue *LastKeyframeValue; // rbx
  int Value; // eax
  const char *v3; // r9
  float v4; // xmm6_4
  int v6[16]; // [rsp+20h] [rbp-68h] BYREF
  CPathData *v7; // [rsp+60h] [rbp-28h] BYREF
  int v8; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
  memset_0(v6, 0, sizeof(v6));
  v7 = 0LL;
  v8 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)v6);
  if ( Value < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      (const char *)(unsigned int)Value,
      v6[0]);
  if ( v8 != 18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x30,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      v3);
  v4 = *(float *)v6;
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v7);
  return v4;
}
