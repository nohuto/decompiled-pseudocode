/*
 * XREFs of RtlImageRvaToVa @ 0x1800E16D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageRvaToSection @ 0x1800E1760 (RtlImageRvaToSection.c)
 */

PVOID __cdecl RtlImageRvaToVa(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG Rva,
        PIMAGE_SECTION_HEADER *LastRvaSection)
{
  PVOID result; // rax
  _IMAGE_SECTION_HEADER *v8; // r10
  ULONG VirtualAddress; // r8d

  if ( LastRvaSection )
  {
    v8 = *LastRvaSection;
    if ( *LastRvaSection )
    {
      VirtualAddress = v8->VirtualAddress;
      if ( Rva >= VirtualAddress && Rva < VirtualAddress + v8->SizeOfRawData )
        goto LABEL_9;
    }
  }
  result = RtlImageRvaToSection(NtHeaders, BaseOfImage, Rva);
  v8 = (_IMAGE_SECTION_HEADER *)result;
  if ( result )
  {
    if ( !LastRvaSection )
      return (char *)BaseOfImage + Rva - v8->VirtualAddress + v8->PointerToRawData;
LABEL_9:
    *LastRvaSection = v8;
    return (char *)BaseOfImage + Rva - v8->VirtualAddress + v8->PointerToRawData;
  }
  return result;
}
