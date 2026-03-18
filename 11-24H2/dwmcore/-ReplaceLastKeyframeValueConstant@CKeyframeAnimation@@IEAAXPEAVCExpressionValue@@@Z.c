/*
 * XREFs of ?ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z @ 0x18029EB8C
 * Callers:
 *     ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180216140 (-EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18022DE90 (-EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CKeyframeAnimation::ReplaceLastKeyframeValueConstant(
        CKeyframeAnimation *this,
        struct CExpressionValue *a2,
        __int64 a3,
        const char *a4)
{
  _DWORD *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 44) + 104LL)
                  + 24LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 44) + 112LL) - 1)
                  + 8);
  if ( v4[5] != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
      a4);
  if ( v4[4] != *((_DWORD *)a2 + 18) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x72,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
      a4);
  CExpressionValue::CopyFrom((CExpressionValue *)(v4 + 6), a2);
}
