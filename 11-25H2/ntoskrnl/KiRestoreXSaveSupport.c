/*
 * XREFs of KiRestoreXSaveSupport @ 0x140B3B008
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1404CA720 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140B3B020 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
