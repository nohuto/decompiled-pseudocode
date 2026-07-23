/*
 * XREFs of LdrSetImplicitPathOptions @ 0x18015CD20
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003C2E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  int v1; // edx
  int v2; // ebx
  NTSTATUS LoadedDllByHandle; // edi
  char *v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = v1;
  BaseAddress = 0LL;
  if ( (~((LdrpPolicyBits & 4 | 0x7B) << 8) & v1) != 0 || !v1 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(*(PVOID *)&ImplicitPathOptions, (__int64 *)&BaseAddress, &v6);
  if ( LoadedDllByHandle >= 0 )
  {
    v4 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 68) = v2;
    LdrpDereferenceModule(v4);
  }
  return LoadedDllByHandle;
}
