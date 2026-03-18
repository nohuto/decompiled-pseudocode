/*
 * XREFs of SmmMapPagedObjectToIommu @ 0x140061E3C
 * Callers:
 *     ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140039AA8 (-SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003A634 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003AEA0 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall SmmMapPagedObjectToIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  unsigned int v3; // ebx
  __int64 LogicalAddress; // rdx

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 44) & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1308;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pPhysicalObject->Flags.NonPaged == 0",
      1308LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
    if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 || (dword_14015E600 & 4) != 0 )
      LOBYTE(v3) = 1;
    return (unsigned int)SmmMapMdlToIommu(a3, LogicalAddress, *(struct _MDL **)(a1 + 56), v3);
  }
  return v3;
}
