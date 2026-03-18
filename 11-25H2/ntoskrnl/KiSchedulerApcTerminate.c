/*
 * XREFs of KiSchedulerApcTerminate @ 0x1408F47B0
 * Callers:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x140475BD8 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  __debugbreak();
}
