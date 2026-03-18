/*
 * XREFs of KeQueryCurrentStackInformation @ 0x1402571A0
 * Callers:
 *     PnprGetStackLimits @ 0x1405A42DC (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140645A98 (EtwpCovSampCaptureKernelStack.c)
 *     ViDeadlockAnalyze @ 0x140B88C04 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
