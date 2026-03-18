/*
 * XREFs of MiInSwapStoreWorker @ 0x140A4CEB0
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SmSwapStore @ 0x140A4CF64 (SmSwapStore.c)
 *     MiInSwapStoreContextDereference @ 0x140A4CFE8 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140A4D00C (EtwTraceWorkingSetInSwapStoreFail.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  struct _KPROCESS *v2; // rcx
  int v3; // edi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(struct _KPROCESS **)(a1 + 32);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v2, &ApcState);
  v3 = SmSwapStore(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 1880LL), 2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v3 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
