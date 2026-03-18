/*
 * XREFs of KiSchedulerApcTerminate @ 0x1408A7B70
 * Callers:
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x140475EB4 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
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
