/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x14049F1D0
 * Callers:
 *     MmHasImageBeenImportOptimized @ 0x1406FB5B0 (MmHasImageBeenImportOptimized.c)
 *     MiParseImageLoadConfig @ 0x1408F42B8 (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8760C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC3E38 (KeQuerySpeculationControlInformation.c)
 *     VfUtilIsProtectedDriver @ 0x140B834AC (VfUtilIsProtectedDriver.c)
 *     MmApplyVerifierToRunningImage @ 0x140BA4790 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiFeatureSettings & 0x20000) == 0;
}
