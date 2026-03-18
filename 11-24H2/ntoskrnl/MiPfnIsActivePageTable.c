/*
 * XREFs of MiPfnIsActivePageTable @ 0x140224A0C
 * Callers:
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 * Callees:
 *     MiPfnIsPageTable @ 0x140684930 (MiPfnIsPageTable.c)
 */

__int64 __fastcall MiPfnIsActivePageTable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  if ( (unsigned int)MiPfnIsPageTable(a1, a2, a3, a1) )
    return (*(_DWORD *)(v3 + 36) >> 26) & 1;
  else
    return 0LL;
}
