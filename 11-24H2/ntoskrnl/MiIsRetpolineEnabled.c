/*
 * XREFs of MiIsRetpolineEnabled @ 0x14043F7B4
 * Callers:
 *     MiPerformFixups @ 0x14093BA30 (MiPerformFixups.c)
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiCaptureRetpolineRelocationTables @ 0x14093F254 (MiCaptureRetpolineRelocationTables.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A83CC0 (MiCaptureRetpolineImportInfo.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A849C4 (MiMarkKernelImageRetpolineBits.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MmMarkHiberPhase @ 0x140B64E88 (MmMarkHiberPhase.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
