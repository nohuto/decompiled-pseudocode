/*
 * XREFs of IoVerifierInit @ 0x140B82314
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B83980 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140BA4ED4 (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x14059661C (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140B82258 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
