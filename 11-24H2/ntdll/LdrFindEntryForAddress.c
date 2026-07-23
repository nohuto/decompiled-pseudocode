/*
 * XREFs of LdrFindEntryForAddress @ 0x18007AA10
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpIsReparsePoint @ 0x18007A600 (LdrpIsReparsePoint.c)
 *     LdrInitShimEngineDynamic @ 0x1800ACB80 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x18003CEF0 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
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
