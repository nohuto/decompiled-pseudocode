/*
 * XREFs of ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800E6EC4
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EE50 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1800E6D90 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z @ 0x18000E750 (-SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180152FAC (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18028E234 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::GetSampledStartingValue(CKeyframeAnimation *this, struct CExpressionValue *a2)
{
  _QWORD *v2; // rsi
  bool v5; // zf
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 336);
  if ( *((_DWORD *)this + 40) == 11 )
    v5 = *((_QWORD *)this + 43) == 0LL;
  else
    v5 = *v2 == 0LL;
  if ( v5 && (v6 = CKeyframeAnimation::SampleStartingValue(this), v7 = v6, v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6FA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    v9 = *((unsigned int *)this + 40);
    if ( (_DWORD)v9 == 11 )
      CExpressionValue::SetPathValue(a2, *((const struct CPathData **)this + 43));
    else
      CExpressionValue::SetValue(a2, v9, *v2);
    return 0LL;
  }
}
