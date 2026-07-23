/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x14049A000
 * Callers:
 *     MmHasImageBeenImportOptimized @ 0x1406F91F0 (MmHasImageBeenImportOptimized.c)
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC167C (KeQuerySpeculationControlInformation.c)
 *     VfUtilIsProtectedDriver @ 0x140B854AC (VfUtilIsProtectedDriver.c)
 *     MmApplyVerifierToRunningImage @ 0x140BA6790 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiFeatureSettings & 0x20000) == 0;
}
