/*
 * XREFs of SmmUnmapPagedObjectFromIommu @ 0x1400623E0
 * Callers:
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140039B20 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003A634 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003A71C (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

void __fastcall SmmUnmapPagedObjectFromIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  char v3; // bl
  __int64 LogicalAddress; // rax

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 44) & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1489;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pPhysicalObject->Flags.NonPaged == 0",
      1489LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
    if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 || (dword_14015E600 & 4) != 0 )
      v3 = 1;
    SmmUnmapMdlFromIommu(a3, LogicalAddress, *(struct _MDL **)(a1 + 56), v3);
  }
}
