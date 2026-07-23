/*
 * XREFs of AlpcpWaitForSingleObject @ 0x14042B310
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x140993FB0 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     AlpcpLogUnwait @ 0x140740878 (AlpcpLogUnwait.c)
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
