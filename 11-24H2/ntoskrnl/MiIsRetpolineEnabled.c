/*
 * XREFs of MiIsRetpolineEnabled @ 0x140446FE0
 * Callers:
 *     MiCaptureRetpolineRelocationTables @ 0x1408F3470 (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x1408F42B8 (MiParseImageLoadConfig.c)
 *     MiPerformFixups @ 0x140958AE0 (MiPerformFixups.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A877D0 (MiCaptureRetpolineImportInfo.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A884D4 (MiMarkKernelImageRetpolineBits.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MmMarkHiberPhase @ 0x140B62DB8 (MmMarkHiberPhase.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
