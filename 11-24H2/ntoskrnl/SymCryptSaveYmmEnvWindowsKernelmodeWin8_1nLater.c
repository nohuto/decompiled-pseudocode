/*
 * XREFs of SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x14051AD40
 * Callers:
 *     SymCryptSaveYmm @ 0x1405B14DC (SymCryptSaveYmm.c)
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x1403E5EF0 (KeSaveExtendedProcessorState.c)
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048D93C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFatal @ 0x1405B1490 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater(PXSTATE_SAVE XStateSave)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0 )
    SymCryptFatal(544042361LL);
  if ( KeGetCurrentIrql() <= 2u )
  {
    if ( KeSaveExtendedProcessorState(4uLL, XStateSave) < 0 )
      return 32776;
    return v2;
  }
  else
  {
    return 32776;
  }
}
