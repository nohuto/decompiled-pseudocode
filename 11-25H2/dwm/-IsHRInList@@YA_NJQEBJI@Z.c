/*
 * XREFs of ?IsHRInList@@YA_NJQEBJI@Z @ 0x14001075C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsHRInList(int a1, const int *const a2, unsigned int a3)
{
  __int64 i; // r9

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( a1 == a2[i] )
      return 1;
  }
  return 0;
}
