/*
 * XREFs of MiPfnIsActivePageTable @ 0x1402C7F24
 * Callers:
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 * Callees:
 *     MiPfnIsPageTable @ 0x1406790A4 (MiPfnIsPageTable.c)
 */

__int64 __fastcall MiPfnIsActivePageTable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx

  v3 = a1;
  if ( MmOriginalPteRaceFixEnabled )
  {
    if ( !(unsigned int)MiPfnIsPageTable(a1, a2, a3, a1) )
      return 0LL;
  }
  else
  {
    if ( (HIWORD(*(_DWORD *)(a1 + 32)) & 7) != 6 )
      return 0LL;
    if ( *(__int64 *)(a1 + 40) < 0 )
      return 0LL;
    v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( v5 < 0xFFFFF68000000000uLL )
      return 0LL;
    if ( v5 > 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
    v6 = (__int64)(v5 << 25) >> 16;
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
  }
  return (*(_DWORD *)(v3 + 36) >> 26) & 1;
}
