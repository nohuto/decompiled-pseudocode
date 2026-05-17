/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x1800E5178
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1800E5100 (TpCallbackSendPendingAlpcMessage.c)
 *     TppCallbackPerformDeferredWork @ 0x1800E5140 (TppCallbackPerformDeferredWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1801643D0 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = ZwAlpcSendWaitReceivePort(
         *(_QWORD *)(a1 + 216),
         *(unsigned int *)(a1 + 224),
         *(_QWORD *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 208), v3);
  return v2;
}
