/*
 * XREFs of MiUpdateBootDriverHotPatchImports @ 0x140C589F0
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiAddEntryToImportList @ 0x1407E78FC (MiAddEntryToImportList.c)
 *     MiFreeLoadedImportList @ 0x140A9A0D8 (MiFreeLoadedImportList.c)
 */

__int64 MiUpdateBootDriverHotPatchImports()
{
  PVOID *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rdx
  PVOID v3; // rsi
  __int64 v4; // rax

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  while ( v0 != &PsLoadedModuleList )
  {
    if ( (*((_DWORD *)v0 + 46) & 0x80u) == 0 )
    {
      v2 = (__int64)v0[31];
      if ( v2 )
      {
        v3 = v0[17];
        if ( v3 != (PVOID)1 )
        {
          v4 = MiAddEntryToImportList((__int64 *)v0[17], v2);
          if ( !v4 )
            return (unsigned int)-1073741670;
          v0[17] = (PVOID)v4;
          MiFreeLoadedImportList(v3);
        }
      }
    }
    v0 = (PVOID *)*v0;
  }
  return v1;
}
