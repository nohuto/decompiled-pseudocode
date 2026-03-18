/*
 * XREFs of ?VidMmWorkerThreadProc2@@YAXPEAX@Z @ 0x14009FBE0
 * Callers:
 *     <none>
 * Callees:
 *     WorkerThreadRun @ 0x14009FC84 (WorkerThreadRun.c)
 */

void __fastcall VidMmWorkerThreadProc2(void *a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v3; // rcx
  int ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)a1 + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  v3 = (struct _KEVENT *)(*((_QWORD *)a1 + 3) + 48LL);
  *((_BYTE *)a1 + 212) = 1;
  KeSetEvent(v3, 0, 0);
  WorkerThreadRun((struct VIDMM_WORKER_THREAD2 *)a1);
  ObfDereferenceObject(*((PVOID *)a1 + 1));
  PsTerminateSystemThread(0);
}
