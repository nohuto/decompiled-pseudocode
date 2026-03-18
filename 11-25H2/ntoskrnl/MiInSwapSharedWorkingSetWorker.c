/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x1407EB280
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x140455294 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x140A04C08 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A39390 (MiFreeWorkingSetSwapContext.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  struct _KPROCESS *v1; // rdi
  __int64 ProcessPartition; // rax
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v1 = *(struct _KPROCESS **)(a1 + 48);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v1, &ApcState);
  EtwTraceWorkingSetSwap(v1);
  _InterlockedExchange(&v1[3].StackCount.Value, 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange(&v1[3].StackCount.Value, 0);
  EtwTraceWorkingSetSwap(v1);
  KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  ProcessPartition = MiGetProcessPartition((__int64)v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag(v1, 0x73576D4Du);
}
