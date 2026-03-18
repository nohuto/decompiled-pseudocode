/*
 * XREFs of ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1800E478C
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E34EC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18021E5FC (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x180223834 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4Modifie.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800E4868 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E62CC (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 */

__int64 __fastcall CConditionalExpression::ProcessConditionalExpression(
        CConditionalExpression *a1,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        int a4,
        bool *a5,
        float *a6)
{
  int IsAnyConditionSatisfied; // eax
  unsigned int v11; // ebx
  int Value; // eax
  unsigned int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_DWORD *)a1 + 91) = *((_DWORD *)a1 + 81);
  IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(a1, a2, a3, a5);
  v11 = IsAnyConditionSatisfied;
  if ( IsAnyConditionSatisfied < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x280,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
      (const char *)(unsigned int)IsAnyConditionSatisfied);
    return v11;
  }
  else
  {
    if ( !*a5 )
      return 0LL;
    Value = CConditionalExpression::GetValue(a1, a2, a3, a6);
    v14 = Value;
    if ( Value >= 0 )
    {
      if ( a4 == 1 )
        *a6 = *a6 * -1.0;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x289,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
      (const char *)(unsigned int)Value);
    return v14;
  }
}
