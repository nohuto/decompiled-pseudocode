/*
 * XREFs of HalpDmaDeleteDomain @ 0x140550B84
 * Callers:
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaDeleteDomain(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rcx

  v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 40), a2, a3, a4);
  if ( v5 < 0 )
    KeBugCheckEx(0x1D9u, 0LL, v5, BugCheckParameter3, 0LL);
  HalpMmAllocCtxFree(v6, BugCheckParameter3);
}
