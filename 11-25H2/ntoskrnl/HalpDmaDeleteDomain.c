/*
 * XREFs of HalpDmaDeleteDomain @ 0x14054E224
 * Callers:
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaDeleteDomain(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  __int64 v3; // rcx

  v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 40));
  if ( v2 < 0 )
    KeBugCheckEx(0x1D9u, 0LL, v2, BugCheckParameter3, 0LL);
  HalpMmAllocCtxFree(v3, BugCheckParameter3);
}
