/*
 * XREFs of BreakForInstrumentation @ 0x1800F4EF8
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800F4F44 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800F5020 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool BreakForInstrumentation()
{
  char v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( g_fDisableInstrumentationBreaks )
    return 0;
  v2 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Avalon.Graphics", L"DisableInstrumentationBreaking", &v2) )
    return v2 == 0;
  return v0;
}
