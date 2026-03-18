/*
 * XREFs of RtlAddressInSectionTable @ 0x140410250
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x140410020 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1404101A4 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409AEF90 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1404102B0 (RtlSectionTableFromVirtualAddress.c)
 */

unsigned __int64 __fastcall RtlAddressInSectionTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 result; // rax

  v3 = (unsigned int)a3;
  v5 = RtlSectionTableFromVirtualAddress(a1, a2, a3);
  if ( !v5 )
    return 0LL;
  result = v3 + a2 + *(unsigned int *)(v5 + 20) - (unsigned __int64)*(unsigned int *)(v5 + 12);
  if ( a2 <= 0x7FFFFFFEFFFFLL && result > 0x7FFFFFFEFFFFLL )
    return 0LL;
  return result;
}
