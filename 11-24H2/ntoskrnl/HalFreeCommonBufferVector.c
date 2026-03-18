/*
 * XREFs of HalFreeCommonBufferVector @ 0x1403A8F20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalFreeCommonBufferVector(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  v5 = *(_QWORD *)(a2 + 16) * *(unsigned int *)(a2 + 24);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 104));
  v7 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = *(_QWORD **)(a2 + 8), *v8 != a2) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 104), v6);
  if ( *(_BYTE *)(a2 + 72) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 40), *(_QWORD *)(a2 + 56), v5 >> 12, v9);
  HalpDmaDereferenceDomainObject(v2);
  MmUnmapLockedPages(*(PVOID *)(a2 + 48), *(PMDL *)(a2 + 40));
  MiFreePagesFromMdl(*(_QWORD *)(a2 + 40), 0, 0, 0);
  ExFreePoolWithTag(*(PVOID *)(a2 + 40), 0);
  HalpMmAllocCtxFree(v10, *(_QWORD *)(a2 + 64));
  HalpMmAllocCtxFree(v11, a2);
}
