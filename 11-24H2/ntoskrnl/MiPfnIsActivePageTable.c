/*
 * XREFs of MiPfnIsActivePageTable @ 0x140251DBC
 * Callers:
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     MiPfnIsPageTable @ 0x140685A5C (MiPfnIsPageTable.c)
 */

__int64 __fastcall MiPfnIsActivePageTable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  if ( (unsigned int)MiPfnIsPageTable(a1, a2, a3, a1) )
    return (*(_DWORD *)(v3 + 36) >> 26) & 1;
  else
    return 0LL;
}
