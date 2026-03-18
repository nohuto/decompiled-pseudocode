/*
 * XREFs of KiRestoreXSaveSupport @ 0x140B4B008
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1404CD748 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140B4B020 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
