/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x1407FB110
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiProcessWsInSwapSupport @ 0x140406864 (MiProcessWsInSwapSupport.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x140A06D04 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x140A3D5EC (MiFreeWorkingSetSwapContext.c)
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
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  ProcessPartition = MiGetProcessPartition((__int64)v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag(v1, 0x73576D4Du);
}
