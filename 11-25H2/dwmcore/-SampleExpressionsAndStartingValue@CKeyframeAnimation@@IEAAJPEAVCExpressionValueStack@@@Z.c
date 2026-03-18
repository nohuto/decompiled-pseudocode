/*
 * XREFs of ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180039DD0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003A6F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleExpressionsAndStartingValue(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  __int64 i; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // edi
  bool v10; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 536) & 8) != 0 )
    return 0LL;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 96); i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)this + 45);
    v7 = *((_QWORD *)this + 22);
    v10 = 0;
    CBaseExpression::CalculateValue(*(CBaseExpression **)(v6 + 8 * i), a2, v7, &v10);
  }
  if ( (*((_BYTE *)this + 537) & 0x20) == 0 || (v8 = CKeyframeAnimation::SampleStartingValue(this), v9 = v8, v8 >= 0) )
  {
    *((_BYTE *)this + 536) |= 8u;
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x8C3u, 0LL);
  return v9;
}
