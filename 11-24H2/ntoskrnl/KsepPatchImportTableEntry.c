/*
 * XREFs of KsepPatchImportTableEntry @ 0x14073D750
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14073D5B4 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14066D618 (MmReplaceImportEntry.c)
 */

__int64 __fastcall KsepPatchImportTableEntry(ULONG_PTR a1, _QWORD *a2, unsigned int a3, __int64 a4, ULONG_PTR a5)
{
  int v5; // eax
  unsigned int v7; // r8d
  unsigned int i; // ecx

  v5 = 0;
  if ( !a2 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  v7 = a3 >> 3;
  for ( i = 0; i < v7; ++i )
  {
    if ( *a2 == a4 )
    {
      MmReplaceImportEntry(a1, (ULONG_PTR)a2, a5);
      v5 = 1;
      return v5 == 0 ? 0xC0000225 : 0;
    }
    ++a2;
  }
  return v5 == 0 ? 0xC0000225 : 0;
}
