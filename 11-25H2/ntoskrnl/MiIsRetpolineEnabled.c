/*
 * XREFs of MiIsRetpolineEnabled @ 0x1404498D0
 * Callers:
 *     MiParseImageLoadConfig @ 0x140942E10 (MiParseImageLoadConfig.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140944F04 (MiCaptureRetpolineRelocationTables.c)
 *     MiPerformFixups @ 0x140946214 (MiPerformFixups.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A839D8 (MiMarkKernelImageRetpolineBits.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A8DD30 (MiCaptureRetpolineImportInfo.c)
 *     MmMarkHiberPhase @ 0x140B52C88 (MmMarkHiberPhase.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
