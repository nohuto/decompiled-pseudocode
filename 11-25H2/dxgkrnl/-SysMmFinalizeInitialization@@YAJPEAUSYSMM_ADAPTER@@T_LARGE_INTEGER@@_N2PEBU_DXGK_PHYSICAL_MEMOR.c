/*
 * XREFs of ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x14027EF80
 * Callers:
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x140199AB4 (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1400486B0 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x14004C244 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x140092A14 (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x14027DF24 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     SmmCreateHardwareReservedRanges @ 0x14027E250 (SmmCreateHardwareReservedRanges.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1403477B0 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 */

__int64 __fastcall SysMmFinalizeInitialization(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int128 *a5,
        unsigned int a6,
        unsigned int a7,
        union SYSMM_IOMMU_STATE *a8)
{
  __int64 v8; // r12
  __int64 v10; // r13
  int v12; // ebp
  __int64 result; // rax
  __int64 i; // rsi
  int v15; // edx
  unsigned int v16; // ecx
  _BYTE v17[16]; // [rsp+50h] [rbp-38h] BYREF

  v8 = a4;
  v10 = a3;
  v12 = 0;
  *(_DWORD *)a8 = 0;
  if ( !*(_QWORD *)(a1 + 400) && a5 && (dword_14015E600 & 0x400) == 0 )
  {
    result = SmmCreateHardwareReservedRanges(a1, a5, a6);
    v12 = result;
    if ( (int)result < 0 )
      return result;
    if ( *(_DWORD *)(a1 + 96) )
    {
      if ( (*(_DWORD *)(a1 + 92) & 1) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 905;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pAdapter->Iommu.Flags.DmaRemappingEnabled == 0",
          905LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
        (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v17,
        (struct SYSMM_IOMMU *)(a1 + 64));
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 28); i = (unsigned int)(i + 1) )
      {
        v12 = SmmMapHardwareReservedRangeToIommu(
                (const struct SYSMM_LOGICAL_BLOCK **)(*(_QWORD *)(a1 + 400) + 24 * i),
                (struct SYSMM_IOMMU *)(a1 + 64));
        if ( v12 < 0 )
        {
          SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v17);
          return (unsigned int)v12;
        }
      }
      SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v17);
    }
  }
  v15 = *(_DWORD *)(a1 + 20);
  if ( (v15 & 2) == 0 )
    goto LABEL_24;
  v16 = *(_DWORD *)(a1 + 88) & 0xFFFFFFFE;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 88) = (2 * v8) & 0xFFFFFFFB | (v10 | v16) & 0xFFFFFFF9;
  if ( (v15 & 1) != 0 )
    goto LABEL_19;
  if ( (_BYTE)v8 )
  {
    v12 = SysMmEnableIommu(a1, 0x20u);
    goto LABEL_19;
  }
  if ( !a7 )
  {
LABEL_19:
    if ( v12 < 0 )
      goto LABEL_20;
LABEL_24:
    SysMmQueryIommuState((const struct SYSMM_ADAPTER *)a1, a8);
    return 0LL;
  }
  v12 = SysMmEnableIommu(a1, 8u);
  if ( v12 >= 0 || a7 == 1 )
    goto LABEL_24;
LABEL_20:
  WdLogSingleEntry3(2LL, v10, v8, a7);
  WdLogGlobalForLineNumber = 975;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to enable IOMMU via legacy initialization. IommuSupported=%u, Required=%u, LegacyFlagMode=%u",
    v10,
    v8,
    a7,
    0LL,
    0LL);
  return (unsigned int)v12;
}
