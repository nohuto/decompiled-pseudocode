/*
 * XREFs of EtwTraceEnqueueWork @ 0x1403BE4F4
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x14031CA10 (KiInsertQueue.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     KeInsertQueue @ 0x1403BCC20 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403BCD90 (IopPassiveInterruptDpc.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403BD5D0 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403BD9A0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403BDE10 (IoSetIoCompletionEx3.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     FsRtlpPostStackOverflow @ 0x1405821AC (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405BD220 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1296);
  v7 = 0;
  v5 = a2;
  v6 = v3;
  v8 = &v5;
  v10 = 0;
  v9 = 12;
  return EtwTraceKernelEvent((int)&v8, 1, 0x21000000u, 1342, a3 != 0 ? 6299138 : 6292994);
}
