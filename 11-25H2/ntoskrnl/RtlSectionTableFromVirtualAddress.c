/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1404102B0
 * Callers:
 *     KeQueryKvaShadowRegion @ 0x14040F9DC (KeQueryKvaShadowRegion.c)
 *     RtlAddressInSectionTable @ 0x140410250 (RtlAddressInSectionTable.c)
 *     KiLockExtendedServiceTable @ 0x140505AF8 (KiLockExtendedServiceTable.c)
 *     KiShadowKernelSectionByAddress @ 0x1405BF9C0 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405BFA34 (KiUnshadowKernelSectionByAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x140731FC8 (KiTpIsSupportedKernelTracepointLocation.c)
 *     EtwpIsValidImageAddress @ 0x140898620 (EtwpIsValidImageAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409AEF90 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140BCDC74 (CcInitializeBcbProfiler.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
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
