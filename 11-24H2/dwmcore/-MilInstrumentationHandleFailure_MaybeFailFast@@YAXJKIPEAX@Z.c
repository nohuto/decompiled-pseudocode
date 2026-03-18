/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800823C0
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x18019ECB0 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801F16B4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?IsFailFastTriggered@@YA_NXZ @ 0x180245B80 (-IsFailFastTriggered@@YA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1802B4C14 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(int a1, unsigned int a2, unsigned int a3, void *a4)
{
  bool v8; // dl

  if ( (unsigned int)(a1 + 2003303422) <= 1
    || a1 == -2147024890
    || a1 == -2003302654
    || (a2 & 0x10) != 0 && IsOOM(a1)
    || IsFailFastTriggered() && (g_hrFailFastExpectedError >= 0 || a1 == g_hrFailFastExpectedError) )
  {
    ModuleFailFastForHRESULT(a1, a4);
  }
  if ( (a2 & 4) != 0 )
    DoStackCapture(a1, a3, a4);
  if ( (a2 & 1) != 0 )
    MilInstrumentationBreak(a2, v8);
}
