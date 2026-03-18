/*
 * XREFs of EtwTraceEnqueueWork @ 0x1402811B8
 * Callers:
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x140281900 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x140282550 (IoSetIoCompletionEx3.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140285150 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140285500 (KiInsertQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     IopPassiveInterruptDpc @ 0x140461CF0 (IopPassiveInterruptDpc.c)
 *     KeInsertQueue @ 0x140464700 (KeInsertQueue.c)
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405B9380 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
