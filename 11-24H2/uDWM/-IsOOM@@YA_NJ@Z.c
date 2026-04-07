/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x180089170
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1800890F4 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800966C8 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char v1; // r8
  unsigned int i; // edx

  v1 = 0;
  for ( i = 0; i < 9; ++i )
  {
    if ( dword_1801065D0[i] == a1 )
      return 1;
  }
  return v1;
}
