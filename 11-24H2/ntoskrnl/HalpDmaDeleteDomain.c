/*
 * XREFs of HalpDmaDeleteDomain @ 0x14054E4C4
 * Callers:
 *     HalpDmaDereferenceDomainObject @ 0x140397F8C (HalpDmaDereferenceDomainObject.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaDeleteDomain(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx

  v3 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 40), a2);
  if ( v3 < 0 )
    KeBugCheckEx(0x1D9u, 0LL, v3, BugCheckParameter3, 0LL);
  HalpMmAllocCtxFree(v4, BugCheckParameter3);
}
