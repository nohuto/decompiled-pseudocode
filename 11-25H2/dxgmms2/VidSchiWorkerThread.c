/*
 * XREFs of VidSchiWorkerThread @ 0x1400A5280
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1400A5228 (VidSchiSetSchedulerStatus.c)
 *     VidSchiAcceptDriverCallback @ 0x1400A6770 (VidSchiAcceptDriverCallback.c)
 *     VidSchiRun_PriorityTable @ 0x1400AE500 (VidSchiRun_PriorityTable.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(char *StartContext)
{
  struct _KTHREAD *CurrentThread; // rax
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)StartContext + 22) = CurrentThread;
  *((_QWORD *)StartContext + 21) = CurrentThread;
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 16LL);
  *((_DWORD *)StartContext + 59) = 16;
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  if ( (*((_DWORD *)StartContext + 698) & 2) != 0 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(StartContext + 1136), 1u);
  VidSchiAcceptDriverCallback(StartContext);
  *((_QWORD *)StartContext + 191) = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 1504, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus((__int64)StartContext, 1, 1);
  while ( 1 )
    VidSchiRun_PriorityTable((struct _VIDSCH_GLOBAL *)StartContext);
}
