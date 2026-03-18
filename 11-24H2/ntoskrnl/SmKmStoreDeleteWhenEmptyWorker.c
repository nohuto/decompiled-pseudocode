/*
 * XREFs of SmKmStoreDeleteWhenEmptyWorker @ 0x14042B640
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14042B6B0 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SmKmStoreDelete @ 0x140A55CF0 (SmKmStoreDelete.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmptyWorker(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // r9

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 64);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  v3 = SmKmStoreRefFromStoreIndex(v1, v2);
  SmKmStoreDelete(v1, *(unsigned int *)(*(_QWORD *)v3 + 6832LL), 0LL);
  return guard_dispatch_icall_no_overrides(v1, 0LL, 9LL, v4);
}
