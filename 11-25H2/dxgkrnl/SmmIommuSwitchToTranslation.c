/*
 * XREFs of SmmIommuSwitchToTranslation @ 0x14027D7F4
 * Callers:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x14027DF24 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmAssignDomain @ 0x140092768 (SmmAssignDomain.c)
 *     SmmMapExistingMemoryToDomain @ 0x1400928CC (SmmMapExistingMemoryToDomain.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     SmmIdentityMapMemory @ 0x14027CFC0 (SmmIdentityMapMemory.c)
 *     SmmIommuCreateDomain @ 0x14027D37C (SmmIommuCreateDomain.c)
 *     SmmIommuDeleteDomain @ 0x14027D498 (SmmIommuDeleteDomain.c)
 *     SmmSwapDomains @ 0x14027DA90 (SmmSwapDomains.c)
 */

__int64 __fastcall SmmIommuSwitchToTranslation(__int64 a1)
{
  __int64 v1; // r15
  char v3; // r14
  int Domain; // eax
  int v5; // edi
  __int64 v6; // rbp
  const wchar_t *v7; // r9

  v1 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  Domain = SmmIommuCreateDomain();
  v5 = Domain;
  if ( Domain >= 0 )
  {
    SmmAssignDomain(a1, 0LL, ((unsigned int)dword_14015E600 >> 10) & 1);
    if ( (dword_14015E600 & 0x400) != 0 )
    {
      v5 = SmmIdentityMapMemory(a1);
      if ( v5 < 0 )
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 2368;
        v6 = 0LL;
        v7 = L"Failed to identity map domain. SysMmAdapter=0x%.16I64x";
        goto LABEL_14;
      }
    }
    else
    {
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
    }
    if ( (dword_14015E604 & 1) != 0 )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 2403;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Verifier fault: Fail to attach to translation domain. SysMmAdapter=0x%.16I64x",
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
    WdLogGlobalForLineNumber = 2415;
    v7 = L"Failed to swap/attach IOMMU domains. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
    goto LABEL_14;
  }
  v6 = Domain;
  WdLogSingleEntry2(2LL, a1, Domain);
  WdLogGlobalForLineNumber = 2358;
  v7 = L"Failed to create IOMMU domain. SysMmAdapter=0x%.16I64x, Status=0x%.8x";
LABEL_14:
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v7, a1, v6, 0LL, 0LL, 0LL);
  if ( v3 )
  {
    if ( !*(_QWORD *)(a1 + 368) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2424;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pAdapter->Iommu.CallbackContext != nullptr",
        2424LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 328))(a1, *(_QWORD *)(a1 + 368));
  }
  return (unsigned int)v5;
}
