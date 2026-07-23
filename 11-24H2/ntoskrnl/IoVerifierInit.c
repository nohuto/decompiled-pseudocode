/*
 * XREFs of IoVerifierInit @ 0x140B84318
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B85980 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140BA6ED4 (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x14059364C (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140B8425C (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
