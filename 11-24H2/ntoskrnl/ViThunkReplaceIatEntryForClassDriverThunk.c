/*
 * XREFs of ViThunkReplaceIatEntryForClassDriverThunk @ 0x140B99C8C
 * Callers:
 *     ViThunkReplaceAllThunkedImports @ 0x140B99B48 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14066D618 (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceIatEntryForClassDriverThunk(ULONG_PTR a1, __int64 **a2, _QWORD *a3)
{
  __int64 *v3; // r9
  _QWORD *v5; // r8
  unsigned int i; // r10d
  __int64 result; // rax

  v3 = *a2;
LABEL_7:
  result = 0LL;
  if ( v3 != (__int64 *)a2 )
  {
    v5 = v3 + 4;
    for ( i = 0; ; ++i )
    {
      if ( i >= *((_DWORD *)v3 + 6) )
      {
        v3 = (__int64 *)*v3;
        goto LABEL_7;
      }
      if ( *a3 == *v5 )
        break;
      v5 += 2;
    }
    MmReplaceImportEntry(a1, (ULONG_PTR)a3, v5[1]);
    return 1LL;
  }
  return result;
}
