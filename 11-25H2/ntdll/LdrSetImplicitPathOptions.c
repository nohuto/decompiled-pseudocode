/*
 * XREFs of LdrSetImplicitPathOptions @ 0x18015FE20
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(unsigned __int64 a1, int a2)
{
  int LoadedDllByHandle; // edi
  __int64 v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a2) != 0 || !a2 )
    return 3221225485LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v7, &v6);
  if ( LoadedDllByHandle >= 0 )
  {
    v4 = v7;
    *(_DWORD *)(v7 + 272) = a2;
    LdrpDereferenceModule(v4);
  }
  return (unsigned int)LoadedDllByHandle;
}
