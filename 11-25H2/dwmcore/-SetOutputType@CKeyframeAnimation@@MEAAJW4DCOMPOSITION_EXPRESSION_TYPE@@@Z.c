/*
 * XREFs of ?SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180060DA0
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18005FFF0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetOutputType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ebx

  v2 = (unsigned int)(a2 - 11);
  if ( (unsigned int)v2 <= 0x3C && (v3 = 0x1C000200010000C1LL, _bittest64(&v3, v2)) )
  {
    *(_DWORD *)(a1 + 160) = a2;
    return 0;
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xA1u, 0LL);
  }
  return v4;
}
