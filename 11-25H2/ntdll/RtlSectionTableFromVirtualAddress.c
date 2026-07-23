/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1800DC7D0
 * Callers:
 *     LdrpLocateMrdata @ 0x180020B90 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  _IMAGE_SECTION_HEADER *v3; // r9
  unsigned int i; // r10d
  ULONG v5; // eax

  v3 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  for ( i = 0; i < NtHeaders->FileHeader.NumberOfSections; ++i )
  {
    v5 = v3->VirtualAddress;
    if ( VirtualAddress >= v5 && VirtualAddress < v5 + v3->SizeOfRawData )
      return v3;
    ++v3;
  }
  return 0LL;
}
