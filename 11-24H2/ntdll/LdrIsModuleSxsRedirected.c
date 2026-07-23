/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x18015CC30
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003C2E0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
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
