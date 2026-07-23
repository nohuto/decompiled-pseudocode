/*
 * XREFs of LdrQueryNextListEntry @ 0x18007D3A0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x18007C780 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18007CFC0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpProtectedCopyMemory @ 0x18007DB20 (LdrpProtectedCopyMemory.c)
 *     RtlpQueryReadVirtualMemory @ 0x18007DC50 (RtlpQueryReadVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryNextListEntry(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(int, int, int, int, PSIZE_T); // rax
  __int64 v4; // r10
  __int64 result; // rax
  ULONG_PTR v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
  v4 = *a1;
  v6 = 0LL;
  if ( v3 == RtlpQueryReadVirtualMemory )
  {
    result = RtlpQueryReadVirtualMemory(v4, a2, a3, 8, &v6);
  }
  else if ( (char *)v3 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(v4, a2, a3, 8LL, &v6);
  }
  else
  {
    result = v3(v4, a2, a3, 8, &v6);
  }
  if ( (int)result >= 0 )
    return v6 != 8 ? 0x8000000D : 0;
  return result;
}
