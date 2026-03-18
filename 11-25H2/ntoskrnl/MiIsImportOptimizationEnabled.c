/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x1404A0180
 * Callers:
 *     MmHasImageBeenImportOptimized @ 0x1406EF740 (MmHasImageBeenImportOptimized.c)
 *     MiParseImageLoadConfig @ 0x140942E10 (MiParseImageLoadConfig.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC0980 (KeQuerySpeculationControlInformation.c)
 *     VfUtilIsProtectedDriver @ 0x140B734CC (VfUtilIsProtectedDriver.c)
 *     MmApplyVerifierToRunningImage @ 0x140B947B0 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiFeatureSettings & 0x20000) == 0;
}
