/*
 * XREFs of HalFreeCommonBufferVector @ 0x140397BB0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpDmaDereferenceDomainObject @ 0x140397F8C (HalpDmaDereferenceDomainObject.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall HalFreeCommonBufferVector(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // al
  KIRQL v5; // al
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 104));
  v6 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v7 = *(_QWORD **)(a2 + 8), *v7 != a2) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 104), v5);
  if ( *(_BYTE *)(a2 + 72) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 40), *(_QWORD *)(a2 + 56));
  HalpDmaDereferenceDomainObject(v2);
  MmUnmapLockedPages(*(PVOID *)(a2 + 48), *(PMDL *)(a2 + 40));
  MiFreePagesFromMdl(*(_QWORD *)(a2 + 40), 0, 0, 0);
  ExFreePoolWithTag(*(PVOID *)(a2 + 40), 0);
  HalpMmAllocCtxFree(v8, *(_QWORD *)(a2 + 64));
  HalpMmAllocCtxFree(v9, a2);
}
