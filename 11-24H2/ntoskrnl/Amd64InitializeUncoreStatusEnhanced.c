/*
 * XREFs of Amd64InitializeUncoreStatusEnhanced @ 0x140569288
 * Callers:
 *     Amd64InitializeCacheStatusEnhanced @ 0x140568914 (Amd64InitializeCacheStatusEnhanced.c)
 *     Amd64InitializeDataFabricStatusEnhanced @ 0x140568D4C (Amd64InitializeDataFabricStatusEnhanced.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Amd64FindUncoreById @ 0x140568618 (Amd64FindUncoreById.c)
 */

__int64 __fastcall Amd64InitializeUncoreStatusEnhanced(int a1, __int64 **a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 *v8; // rcx

  result = (__int64)Amd64FindUncoreById(a2, a3);
  if ( !result )
  {
    result = HalpMmAllocCtxAlloc(v7, 24LL);
    if ( !result )
      KeBugCheckEx(0x5Cu, 0x9003uLL, 0x18uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x663uLL);
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
  return result;
}
