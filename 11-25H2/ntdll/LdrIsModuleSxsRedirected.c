/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x18015FD30
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 */

bool __fastcall LdrIsModuleSxsRedirected(unsigned __int64 a1)
{
  char v1; // bl
  int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0LL;
  if ( (int)LdrpFindLoadedDllByHandle(a1, &v4, 0LL) >= 0 )
  {
    v2 = *(_DWORD *)(v4 + 104);
    LdrpDereferenceModule(v4);
    return (v2 & 0x10000000) != 0;
  }
  return v1;
}
