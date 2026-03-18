/*
 * XREFs of ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800F0164
 * Callers:
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800EFCB8 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180038440 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18003ACE0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x1800EFB8C (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1800F17E0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1800F19C0 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ @ 0x1800F46B4 (-HasActiveInertiaForce@CScrollAnimation@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(CScrollKeyframeAnimation *this)
{
  char v2; // al
  KeyframeValue *LastKeyframeValue; // rax
  int Value; // eax
  unsigned int v5; // edi
  const char *v7; // r9
  const char *v8; // r9
  float AnimationTimeLength; // xmm6_4
  double CurrentValue; // xmm0_8
  float v11; // xmm1_4
  __int64 v12; // rdi
  float ForceEngineCurrentValue; // xmm7_4
  __int64 v14; // rdi
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_BYTE *)this + 712);
  if ( (v2 & 2) == 0 )
  {
    *((_BYTE *)this + 712) = v2 | 2;
    LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
    Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (CScrollKeyframeAnimation *)((char *)this + 552));
    v5 = Value;
    if ( Value < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)Value);
      return v5;
    }
    if ( !CExpressionValue::HasValue((CScrollKeyframeAnimation *)((char *)this + 552)) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xEC,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        v7);
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    if ( AnimationTimeLength != 0.0 )
    {
      if ( *((_DWORD *)this + 47) == 1 )
      {
        if ( *((_DWORD *)this + 156) != 52 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xF5,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v8);
        v12 = *((_QWORD *)this + 68);
        if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v12)
          && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v12 + 344)) )
        {
          ForceEngineCurrentValue = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(v12 + 344));
        }
        else
        {
          ForceEngineCurrentValue = *(float *)(v12 + 92);
        }
        v14 = *((_QWORD *)this + 68);
        if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)v14)
          && CScrollAnimation::HasActiveInertiaForce(*(CScrollAnimation **)(v14 + 336)) )
        {
          v15 = CScrollAnimation::GetForceEngineCurrentValue(*(CScrollAnimation **)(v14 + 336));
        }
        else
        {
          v15 = *(float *)(v14 + 88);
        }
        v16 = *((float *)this + 138);
        v17 = *((float *)this + 139);
        v18 = *((float *)this + 140);
        *((_DWORD *)this + 176) = 52;
        *((float *)this + 158) = (float)(v16 - v15) * (float)(1.0 / AnimationTimeLength);
        *((float *)this + 159) = (float)(v17 - ForceEngineCurrentValue) * (float)(1.0 / AnimationTimeLength);
        *((float *)this + 160) = (float)(v18 - 0.0) * (float)(1.0 / AnimationTimeLength);
      }
      else
      {
        if ( *((_DWORD *)this + 47) != 2 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x10A,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v8);
        if ( *((_DWORD *)this + 156) != 18 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x101,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v8);
        CurrentValue = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 68), 2);
        v11 = *((float *)this + 138);
        *((_DWORD *)this + 176) = 18;
        *((float *)this + 158) = (float)(v11 - *(float *)&CurrentValue) / AnimationTimeLength;
      }
    }
  }
  return 0LL;
}
