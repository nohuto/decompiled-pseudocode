/*
 * XREFs of AlpcpWaitForSingleObject @ 0x140438750
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x14088AA00 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     AlpcpLogUnwait @ 0x140742948 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE a3,
        BOOLEAN a4,
        PLARGE_INTEGER Timeout)
{
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax

  KeLeaveCriticalRegionThread();
  v9 = KeWaitForSingleObject(Object, WaitReason, a3, a4, Timeout);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v9);
  return v9;
}
