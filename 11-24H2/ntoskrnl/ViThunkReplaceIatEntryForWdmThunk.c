/*
 * XREFs of ViThunkReplaceIatEntryForWdmThunk @ 0x140B99CE8
 * Callers:
 *     ViThunkReplaceAllThunkedImports @ 0x140B99B48 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14066D618 (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceIatEntryForWdmThunk(ULONG_PTR a1, _QWORD *a2, __int64 a3)
{
  int v3; // eax
  ULONG_PTR v4; // r8

  if ( *a2 )
  {
    while ( *(_QWORD *)a3 )
    {
      if ( *a2 == *(_QWORD *)(a3 + 16) )
      {
        v3 = *(_DWORD *)(a3 + 32);
        if ( (v3 & 1) != 0 )
        {
          v4 = (v3 & 4) != 0 ? *(_QWORD *)(a3 + 8) : **(_QWORD **)(a3 + 40);
          if ( v4 )
          {
            MmReplaceImportEntry(a1, (ULONG_PTR)a2, v4);
            return 1LL;
          }
        }
        return 0LL;
      }
      a3 += 56LL;
    }
  }
  return 0LL;
}
