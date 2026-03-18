/*
 * XREFs of ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800F33E8
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1800F22B0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1800F330C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802311E0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800F34F4 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::IsAnyConditionSatisfied(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  bool v4; // bl
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // ecx
  unsigned int i; // ebp
  int v13; // eax
  bool v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 0;
  v9 = *((_DWORD *)this + 91);
  v10 = 0;
  v11 = *((_DWORD *)this + 81);
  if ( v9 == v11 )
  {
    for ( i = 0; i < (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 4); ++i )
    {
      v15 = 0;
      v13 = CConditionalExpression::CalculateConditionValue(this, i, a2, a3, &v15);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x209u, 0LL);
        return v10;
      }
      if ( v15 )
      {
        *((_DWORD *)this + 91) = i;
        break;
      }
    }
    v9 = *((_DWORD *)this + 91);
    v11 = *((_DWORD *)this + 81);
    if ( v9 == v11 )
    {
      v9 = *((_DWORD *)this + 80);
      *((_DWORD *)this + 91) = v9;
    }
  }
  if ( a4 )
  {
    if ( v9 != *((_DWORD *)this + 80) && v9 != v11 || *((_QWORD *)this + 44) )
      v4 = 1;
    *a4 = v4;
  }
  return v10;
}
