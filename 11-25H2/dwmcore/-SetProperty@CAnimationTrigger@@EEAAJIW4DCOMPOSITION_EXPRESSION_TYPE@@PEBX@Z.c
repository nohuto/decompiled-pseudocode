/*
 * XREFs of ?SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18029EE20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x18022C09C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 */

__int64 __fastcall CAnimationTrigger::SetProperty(CAnimationTrigger *a1, int a2, int a3, _BYTE *a4)
{
  unsigned int v5; // ebx
  char v6; // cl
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v5 = 0;
  if ( a3 != 17 )
  {
    v8 = 74;
LABEL_5:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, v8, 0LL);
    return v5;
  }
  if ( a2 )
  {
    v8 = 69;
    goto LABEL_5;
  }
  v6 = *((_BYTE *)a1 + 128);
  if ( *a4 != (v6 & 1) )
  {
    if ( *a4 )
    {
      *((_BYTE *)a1 + 128) = v6 | 1;
      CAnimationTrigger::TransitionTrue(a1);
    }
    else
    {
      *((_BYTE *)a1 + 128) = v6 & 0xFE;
    }
  }
  return v5;
}
