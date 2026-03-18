/*
 * XREFs of ?TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z @ 0x18024EE6C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::TimeSpanFrom(CExpressionValueStack *this, int a2)
{
  unsigned int v3; // ebx
  struct CExpressionValue *v4; // rax
  float v5; // xmm0_4
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 2) )
  {
    v4 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v4 + 18) == 18 )
    {
      *((_DWORD *)v4 + 18) = 42;
      v5 = (float)a2;
      v3 = 0;
      *(float *)v4 = v5 * *(float *)v4;
      return v3;
    }
    v7 = 6945;
  }
  else
  {
    v7 = 6933;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v7,
    0LL);
  return v3;
}
