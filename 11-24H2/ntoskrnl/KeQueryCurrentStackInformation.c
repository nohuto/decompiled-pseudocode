/*
 * XREFs of KeQueryCurrentStackInformation @ 0x14028A190
 * Callers:
 *     PnprGetStackLimits @ 0x1405A4ADC (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140650148 (EtwpCovSampCaptureKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140B9ABE4 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer(a1, a2);
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
