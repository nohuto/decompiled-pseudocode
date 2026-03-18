/*
 * XREFs of KeSaveProcessorSpecificFeatures @ 0x1404F71DC
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KiSaveXSaveSupport @ 0x140B5F3B4 (KiSaveXSaveSupport.c)
 */

__int64 KeSaveProcessorSpecificFeatures()
{
  return KiSaveXSaveSupport();
}
