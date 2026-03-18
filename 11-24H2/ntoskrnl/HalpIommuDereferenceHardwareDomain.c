/*
 * XREFs of HalpIommuDereferenceHardwareDomain @ 0x140553A18
 * Callers:
 *     HalpIommuLeaveDmaDomain @ 0x1404B4B04 (HalpIommuLeaveDmaDomain.c)
 *     IommupDomainAttachPasidDevice @ 0x14054E124 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x1405540A8 (HalpIommuJoinDmaDomain.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuFlushDomainTB @ 0x140488C74 (HalpIommuFlushDomainTB.c)
 *     HalpIommuFreeDomainId @ 0x140552218 (HalpIommuFreeDomainId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpIommuDereferenceHardwareDomain(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v5; // r14
  __int64 v6; // rcx
  __int64 *v7; // rax
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // r9

  v2 = (KSPIN_LOCK *)(a1 + 32);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  if ( a1 != HalpIommuBypassDomain )
    --*(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a2 + 16) )
  {
    v6 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v7 = *(__int64 **)(a2 + 8), *v7 != a2) )
      __fastfail(3u);
    v8 = HalpHvIommu == 0;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v9 = *(_QWORD *)(a2 + 24);
    if ( v8 )
    {
      HalpIommuFlushDomainTB(*(_QWORD *)(a2 + 24), a2 + 32, 0);
      if ( *(_QWORD *)(v9 + 80) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 16), a2 + 32, 0LL, v10);
      if ( *(_DWORD *)(a2 + 32) != 3 || (*(_BYTE *)(a2 + 48) & 4) == 0 )
        HalpIommuFreeDomainId(v9, *(_DWORD *)(a2 + 80));
    }
    HalpMmAllocCtxFree(v6, a2);
    v2 = (KSPIN_LOCK *)(a1 + 32);
  }
  KeReleaseSpinLock(v2, v5);
}
