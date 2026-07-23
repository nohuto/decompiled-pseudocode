/*
 * XREFs of KiSchedulerApcTerminate @ 0x1408FDDD0
 * Callers:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x140471F54 (KiIsProcessTerminationRequested.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  __debugbreak();
}
