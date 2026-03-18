/*
 * XREFs of SmmMapNonPagedObjectToIommu @ 0x14003A2E8
 * Callers:
 *     ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003A24C (-SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003ADD4 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003B450 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005E6C8 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 */

__int64 __fastcall SmmMapNonPagedObjectToIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  bool v3; // bl
  unsigned __int64 LogicalAddress; // rax
  unsigned __int64 v8; // rbp
  int v9; // edx
  int v10; // eax
  PHYSICAL_ADDRESS v11; // r8
  int v12; // edi

  v3 = 1;
  if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1148;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pPhysicalObject->Flags.NonPaged == 1",
      1148LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
  v8 = LogicalAddress;
  if ( (*(_DWORD *)(a1 + 44) & 0x200) == 0 && (dword_140161610 & 4) == 0 )
    v3 = 0;
  v9 = *(_DWORD *)(a1 + 44) & 0x1E;
  switch ( v9 )
  {
    case 4:
      v10 = SmmMapMdlToIommu(a3, LogicalAddress, *(struct _MDL **)(a1 + 8), v3);
      goto LABEL_13;
    case 10:
      v11.QuadPart = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a1 + 8)).QuadPart >> 12;
LABEL_12:
      v10 = SmmMapContiguousRangeToIommu(a3, v8, v11.QuadPart, *(_QWORD *)a1, v3);
LABEL_13:
      v12 = v10;
      if ( v10 >= 0 )
        return (unsigned int)v12;
      goto LABEL_16;
    case 6:
      v11.QuadPart = *(_QWORD *)(a1 + 8) >> 12;
      goto LABEL_12;
  }
  v12 = -1073741811;
LABEL_16:
  WdLogSingleEntry2(2LL, a2, v12);
  WdLogGlobalForLineNumber = 1196;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to map SysMm adapter object 0x%.16I64x to IOMMU. Status=0x%.8x",
    a2,
    v12,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v12;
}
