/*
 * XREFs of KeSaveExtendedProcessorState @ 0x1403D3A90
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x140518610 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     DifKeSaveExtendedProcessorStateWrapper @ 0x14062ED60 (DifKeSaveExtendedProcessorStateWrapper.c)
 * Callees:
 *     KiSaveExtendedAndSupervisorState @ 0x1403D3AFC (KiSaveExtendedAndSupervisorState.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall KeSaveExtendedProcessorState(ULONG64 Mask, PXSTATE_SAVE XStateSave)
{
  bool v2; // zf

  if ( (KeFeatureBits & 0x800000) != 0 )
    v2 = (~MEMORY[0xFFFFF780000003D8] & Mask) == 0;
  else
    v2 = (Mask & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  if ( !v2 )
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)Mask, HIDWORD(Mask));
  return KiSaveExtendedAndSupervisorState(Mask);
}
