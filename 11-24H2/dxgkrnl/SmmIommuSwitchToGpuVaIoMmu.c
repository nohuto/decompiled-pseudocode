/*
 * XREFs of SmmIommuSwitchToGpuVaIoMmu @ 0x140284848
 * Callers:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285294 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmAssignDomain @ 0x140094C18 (SmmAssignDomain.c)
 *     SmmMapExistingMemoryToDomain @ 0x140094D7C (SmmMapExistingMemoryToDomain.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     SmmIommuCreateDomain @ 0x1402846EC (SmmIommuCreateDomain.c)
 *     SmmIommuDeleteDomain @ 0x140284808 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x140284E00 (SmmSwapDomains.c)
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
    WdLogGlobalForLineNumber = 2510;
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
    if ( (dword_140161614 & 1) != 0 )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 2541;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
    WdLogGlobalForLineNumber = 2551;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, a1, v6, 0LL, 0LL, 0LL);
  if ( v3 )
  {
    if ( !*(_QWORD *)(a1 + 368) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2560;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pAdapter->Iommu.CallbackContext != nullptr",
        2560LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 328))(a1, *(_QWORD *)(a1 + 368));
  }
  return (unsigned int)v5;
}
