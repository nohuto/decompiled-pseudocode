/*
 * XREFs of VmpPrefetchWorker @ 0x14079F660
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     VmpPrefetchVirtualAddresses @ 0x1403990BC (VmpPrefetchVirtualAddresses.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VmpPrefetchWorker(PVOID P)
{
  struct _KPROCESS *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = (struct _KPROCESS *)*((_QWORD *)P + 4);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v2, &ApcState);
  VmpPrefetchVirtualAddresses(*(PEX_SPIN_LOCK *)(*((_QWORD *)P + 4) + 1648LL), *((_QWORD **)P + 5), *((_QWORD *)P + 6));
  KiUnstackDetachProcess((__int64)&ApcState, 0, v3, v4);
  ObfDereferenceObject(*((PVOID *)P + 4));
  ExFreePoolWithTag(P, 0);
}
