/*
 * XREFs of KeQueryCurrentStackInformation @ 0x140259B80
 * Callers:
 *     PnprGetStackLimits @ 0x1405A7AEC (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140651A48 (EtwpCovSampCaptureKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140B98BE4 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
