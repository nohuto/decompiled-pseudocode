/*
 * XREFs of RtlImageRvaToSection @ 0x1800E1760
 * Callers:
 *     RtlImageRvaToVa @ 0x1800E16D0 (RtlImageRvaToVa.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlImageRvaToSection(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG Rva)
{
  _IMAGE_SECTION_HEADER *v3; // r9
  unsigned int i; // eax
  ULONG VirtualAddress; // edx

  v3 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  for ( i = 0; i < NtHeaders->FileHeader.NumberOfSections; ++i )
  {
    VirtualAddress = v3->VirtualAddress;
    if ( Rva >= VirtualAddress && Rva < v3->SizeOfRawData + VirtualAddress )
      return v3;
    ++v3;
  }
  return 0LL;
}
