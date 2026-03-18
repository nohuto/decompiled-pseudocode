/*
 * XREFs of MiInSwapStoreWorker @ 0x140A4A910
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SmSwapStore @ 0x140A4A9C4 (SmSwapStore.c)
 *     MiInSwapStoreContextDereference @ 0x140A4AA48 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140A4AA6C (EtwTraceWorkingSetInSwapStoreFail.c)
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
  KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
