/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x18010DBA0
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18010DBCC (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18010DC5C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_180121300;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 9 )
      return result;
  }
  return 1;
}
