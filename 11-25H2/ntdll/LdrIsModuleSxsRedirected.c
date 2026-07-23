/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x18015FD30
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 */

BOOLEAN __cdecl LdrIsModuleSxsRedirected(PVOID DllHandle)
{
  BOOLEAN v1; // bl
  int v2; // ebx
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  BaseAddress = 0LL;
  if ( (int)LdrpFindLoadedDllByHandle(DllHandle, (__int64 *)&BaseAddress, 0LL) >= 0 )
  {
    v2 = *((_DWORD *)BaseAddress + 26);
    LdrpDereferenceModule((char *)BaseAddress);
    return (v2 & 0x10000000) != 0;
  }
  return v1;
}
