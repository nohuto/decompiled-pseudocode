/*
 * XREFs of IoVerifierInit @ 0x140B72314
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B739A0 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140B94EF4 (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x140592FBC (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140B72258 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
