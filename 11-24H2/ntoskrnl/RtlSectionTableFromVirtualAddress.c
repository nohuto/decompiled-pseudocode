/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1402EEF90
 * Callers:
 *     KeQueryKvaShadowRegion @ 0x1402EE6B8 (KeQueryKvaShadowRegion.c)
 *     RtlAddressInSectionTable @ 0x1402EEF2C (RtlAddressInSectionTable.c)
 *     KiLockExtendedServiceTable @ 0x140505B38 (KiLockExtendedServiceTable.c)
 *     KiShadowKernelSectionByAddress @ 0x1405C1070 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405C10E4 (KiUnshadowKernelSectionByAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x14073BF18 (KiTpIsSupportedKernelTracepointLocation.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409BA5C0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     EtwpIsValidImageAddress @ 0x1409F974C (EtwpIsValidImageAddress.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140BE0C74 (CcInitializeBcbProfiler.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  char *v4; // r9
  unsigned int v5; // r8d
  unsigned int NumberOfSections; // r11d
  _IMAGE_SECTION_HEADER *v7; // rdx
  ULONG v8; // ecx
  unsigned __int64 v10; // r9

  v4 = (char *)NtHeaders + NtHeaders->FileHeader.SizeOfOptionalHeader;
  v5 = 0;
  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  v7 = (_IMAGE_SECTION_HEADER *)(v4 + 24);
  if ( (unsigned __int64)NtHeaders > 0x7FFFFFFEFFFFLL )
    goto LABEL_2;
  v10 = (unsigned __int64)&v4[40 * NtHeaders->FileHeader.NumberOfSections + 23];
  if ( !NtHeaders->FileHeader.NumberOfSections )
    v10 = (unsigned __int64)v7;
  if ( v10 >= (unsigned __int64)v7 && v10 <= 0x7FFFFFFEFFFFLL )
  {
LABEL_2:
    while ( v5 < NumberOfSections )
    {
      v8 = v7->VirtualAddress;
      if ( VirtualAddress >= v8 && VirtualAddress < v7->SizeOfRawData + v8 )
        return v7;
      ++v7;
      ++v5;
    }
  }
  return 0LL;
}
