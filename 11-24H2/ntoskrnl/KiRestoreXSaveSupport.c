/*
 * XREFs of KiRestoreXSaveSupport @ 0x140B4D104
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1404C6B18 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140B4D11C (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
