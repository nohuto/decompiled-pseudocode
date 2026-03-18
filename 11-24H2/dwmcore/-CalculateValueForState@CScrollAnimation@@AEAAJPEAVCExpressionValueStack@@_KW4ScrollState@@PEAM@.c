/*
 * XREFs of ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1800E4228
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800E40F0 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E1B18 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E4B4C (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueForState(
        CScrollAnimation *a1,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        int a4,
        float *a5)
{
  int v5; // r9d
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax

  v5 = a4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v9 = CScrollAnimation::CalculateInertiaValue(a1, a2, a3, a5);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x145u, 0LL);
        return v7;
      }
    }
    else
    {
      *a5 = 0.0;
    }
  }
  else
  {
    v6 = CScrollAnimation::CalculateInContactValue(a1, a2, a3, a5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x13Cu, 0LL);
      return v7;
    }
  }
  return 0;
}
