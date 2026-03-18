/*
 * XREFs of ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x1802B9540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F4630 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 */

float __fastcall CExpressionForce::Accelerate(CExpressionForce *this, struct IntegrationState *a2, float a3)
{
  __int64 v3; // r8
  struct CExpressionValueStack *v4; // rdx
  CConditionalExpression *v5; // rcx
  float v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 15);
  v4 = (struct CExpressionValueStack *)*((_QWORD *)this + 14);
  v5 = (CConditionalExpression *)*((_QWORD *)this + 12);
  v7 = 0.0;
  CConditionalExpression::GetValue(v5, v4, v3, &v7);
  return v7;
}
