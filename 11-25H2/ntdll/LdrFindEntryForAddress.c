/*
 * XREFs of LdrFindEntryForAddress @ 0x1800D0470
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrInitShimEngineDynamic @ 0x1800D01B0 (LdrInitShimEngineDynamic.c)
 *     LdrpIsReparsePoint @ 0x1800D02AC (LdrpIsReparsePoint.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x18004F390 (LdrpFindLoadedDllByAddress.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS LoadedDllByAddress; // ebx
  char *v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  if ( !DllHandle )
    return -1073741515;
  LoadedDllByAddress = LdrpFindLoadedDllByAddress((unsigned __int64)DllHandle, (unsigned __int64 *)&BaseAddress, &v6);
  if ( LoadedDllByAddress >= 0 )
  {
    v4 = (char *)BaseAddress;
    *Entry = (PLDR_DATA_TABLE_ENTRY)BaseAddress;
    LdrpDereferenceModule(v4);
  }
  return LoadedDllByAddress;
}
