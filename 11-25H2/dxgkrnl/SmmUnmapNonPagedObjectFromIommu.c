/*
 * XREFs of SmmUnmapNonPagedObjectFromIommu @ 0x140039CC4
 * Callers:
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140039B20 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003A634 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003A71C (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005AA6C (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 */

void __fastcall SmmUnmapNonPagedObjectFromIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  bool v3; // bl
  unsigned __int64 LogicalAddress; // rax
  unsigned __int64 v8; // rsi
  int v9; // edx
  PHYSICAL_ADDRESS v10; // r8

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1410;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pPhysicalObject->Flags.NonPaged == 1",
      1410LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
  v8 = LogicalAddress;
  if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 || (dword_14015E600 & 4) != 0 )
    v3 = 1;
  v9 = *(_DWORD *)(a1 + 44) & 0x1E;
  switch ( v9 )
  {
    case 4:
      SmmUnmapMdlFromIommu(a3, LogicalAddress, *(struct _MDL **)(a1 + 8), v3);
      return;
    case 10:
      v10.QuadPart = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a1 + 8)).QuadPart >> 12;
      break;
    case 6:
      v10.QuadPart = *(_QWORD *)(a1 + 8) >> 12;
      break;
    default:
      return;
  }
  SmmUnmapContiguousRangeFromIommu(a3, v8, v10.QuadPart, *(_QWORD *)a1, v3);
}
