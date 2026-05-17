/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x18006A498
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x18006A420 (TpCallbackSendPendingAlpcMessage.c)
 *     TppCallbackPerformDeferredWork @ 0x18006A460 (TppCallbackPerformDeferredWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x180162E40 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(_QWORD *)(a1 + 216),
         *(unsigned int *)(a1 + 224),
         *(_QWORD *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 208));
  return v2;
}
