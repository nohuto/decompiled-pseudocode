/*
 * XREFs of SmmIommuSwitchToGpuVaIoMmu @ 0x14027D4D8
 * Callers:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x14027DF24 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmAssignDomain @ 0x140092768 (SmmAssignDomain.c)
 *     SmmMapExistingMemoryToDomain @ 0x1400928CC (SmmMapExistingMemoryToDomain.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     SmmIommuCreateDomain @ 0x14027D37C (SmmIommuCreateDomain.c)
 *     SmmIommuDeleteDomain @ 0x14027D498 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x14027DA90 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToGpuVaIoMmu(__int64 a1)
{
  __int64 v1; // r12
  char v3; // r15
  int Domain; // eax
  int v5; // edi
  __int64 v6; // r14
  const wchar_t *v7; // r9

  v1 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  Domain = SmmIommuCreateDomain();
  v5 = Domain;
  if ( Domain < 0 )
  {
    v6 = Domain;
    WdLogSingleEntry2(2LL, a1, Domain);
    v7 = L"Failed to create IOMMU domain. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
    WdLogGlobalForLineNumber = 2502;
  }
  else
  {
    SmmAssignDomain(a1, 0LL, 0);
    v5 = SmmMapExistingMemoryToDomain(a1);
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( *(_QWORD *)(a1 + 368) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 320))(a1);
      if ( v5 < 0 )
        return (unsigned int)v5;
      v3 = 1;
    }
    if ( (dword_14015E604 & 1) != 0 )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 2533;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Verifier fault: Fail to attach to Pasid domain. SysMmAdapter=0x%.16I64x",
        a1,
        0LL,
        0LL,
        0LL,
        0LL);
      v5 = -1073741823;
    }
    else
    {
      v5 = SmmSwapDomains(a1, *(_QWORD *)(a1 + 112), v1);
      if ( v5 >= 0 )
        return (unsigned int)v5;
    }
    v6 = v5;
    WdLogSingleEntry2(2LL, a1, v5);
    v7 = L"Failed to swap/attach IOMMU domains. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
    WdLogGlobalForLineNumber = 2543;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v7, a1, v6, 0LL, 0LL, 0LL);
  if ( v3 )
  {
    if ( !*(_QWORD *)(a1 + 368) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2552;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pAdapter->Iommu.CallbackContext != nullptr",
        2552LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 328))(a1, *(_QWORD *)(a1 + 368));
  }
  return (unsigned int)v5;
}
