/*
 * XREFs of AlpcpWaitForSingleObject @ 0x14043B370
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x1408AB350 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     AlpcpLogUnwait @ 0x140736928 (AlpcpLogUnwait.c)
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

  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v9 = KeWaitForSingleObject(Object, WaitReason, a3, a4, Timeout);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v9);
  return v9;
}
