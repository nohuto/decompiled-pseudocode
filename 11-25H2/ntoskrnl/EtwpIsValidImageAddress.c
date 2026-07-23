/*
 * XREFs of EtwpIsValidImageAddress @ 0x140898620
 * Callers:
 *     EtwpFindDebugId @ 0x140898408 (EtwpFindDebugId.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1404102B0 (RtlSectionTableFromVirtualAddress.c)
 */

bool __fastcall EtwpIsValidImageAddress(_IMAGE_NT_HEADERS64 *a1, void *a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  bool result; // al
  PIMAGE_SECTION_HEADER v7; // rax

  v5 = a4 - (_QWORD)a2;
  result = 0;
  if ( a4 >= (unsigned __int64)a2 && a4 + a5 >= a4 && a4 + a5 <= (unsigned __int64)a2 + a3 )
  {
    if ( (unsigned __int64)a2 < 0xFFFF800000000000uLL )
      return 1;
    v7 = RtlSectionTableFromVirtualAddress(a1, a2, v5);
    if ( v7 )
    {
      if ( v5 + a5 <= v7->VirtualAddress + v7->SizeOfRawData && (v7->Characteristics & 0x2000000) == 0 )
        return 1;
    }
  }
  return result;
}
