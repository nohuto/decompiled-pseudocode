/*
 * XREFs of Amd64InitializeUncoreStatusOriginal @ 0x140569324
 * Callers:
 *     Amd64InitializeCacheStatusOriginal @ 0x140568B50 (Amd64InitializeCacheStatusOriginal.c)
 *     Amd64InitializeDataFabricStatusOriginal @ 0x140568EDC (Amd64InitializeDataFabricStatusOriginal.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     Amd64FindUncoreById @ 0x140568618 (Amd64FindUncoreById.c)
 */

__int64 __fastcall Amd64InitializeUncoreStatusOriginal(int a1, __int64 **a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 *v8; // rcx

  result = (__int64)Amd64FindUncoreById(a2, a3);
  if ( !result )
  {
    result = HalpMmAllocCtxAlloc(v7, 24LL);
    if ( result )
    {
      *(_QWORD *)result = 0LL;
      *(_QWORD *)(result + 8) = 0LL;
      *(_DWORD *)(result + 20) = a3;
      *(_DWORD *)(result + 16) = a1;
      v8 = a2[1];
      if ( (__int64 **)*v8 != a2 )
        __fastfail(3u);
      *(_QWORD *)result = a2;
      *(_QWORD *)(result + 8) = v8;
      *v8 = result;
      a2[1] = (__int64 *)result;
    }
  }
  return result;
}
