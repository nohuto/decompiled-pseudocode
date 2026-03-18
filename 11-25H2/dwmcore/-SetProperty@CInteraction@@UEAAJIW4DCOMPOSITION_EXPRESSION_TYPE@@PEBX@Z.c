/*
 * XREFs of ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180227690
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x180139AD0 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 */

__int64 __fastcall CInteraction::SetProperty(__int64 a1, int a2, __int64 a3, char *a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v7; // r8d

  v4 = a2 - 13;
  if ( !v4 )
  {
    v7 = 0;
LABEL_6:
    CInteraction::SetRailsEnabled_RenderThread(a1, *a4, v7);
    return 0;
  }
  if ( v4 == 1 )
  {
    v7 = 1;
    goto LABEL_6;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x247u, 0LL);
  return v5;
}
