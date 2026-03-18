/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x140003A2C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1400048E4 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x140010780 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
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
    if ( dword_1400131A0[i] == a1 )
      return 1;
  }
  return v1;
}
