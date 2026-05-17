/*
 * XREFs of LdrQueryInLoadOrderModuleList32 @ 0x1800B1410
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800AFEE0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x1800B0720 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpProtectedCopyMemory @ 0x1800B1280 (LdrpProtectedCopyMemory.c)
 *     LdrpQueryInformationCurrentProcess @ 0x1800B1560 (LdrpQueryInformationCurrentProcess.c)
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList32(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64 *); // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  const void *v10; // rdx
  __int64 (__fastcall *v11)(__int64, const void *, unsigned int *, __int64, size_t *); // rax
  __int64 v12; // rcx
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  size_t v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  v13 = 0;
  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v6 = (__int64 (__fastcall *)(__int64, __int64, __int64 *))a1[2];
  v7 = *a1;
  if ( (char *)v6 == (char *)LdrpQueryInformationCurrentProcess )
    result = LdrpQueryInformationCurrentProcess(v7, 26LL, &v15);
  else
    result = v6(v7, 26LL, &v15);
  if ( (int)result >= 0 )
  {
    if ( !v15 )
      return 0LL;
    v9 = *a1;
    v10 = (const void *)(v15 + 12);
    v11 = (__int64 (__fastcall *)(__int64, const void *, unsigned int *, __int64, size_t *))a1[1];
    v14 = 0LL;
    if ( (char *)v11 == (char *)RtlpQueryReadVirtualMemory )
    {
      result = ZwReadVirtualMemory(v9, v10, &v13, 4LL, &v14);
      if ( (int)result < 0 )
        return result;
      result = 0LL;
      if ( v14 != 4 )
        result = 2147483661LL;
    }
    else if ( (char *)v11 == (char *)LdrpProtectedCopyMemory )
    {
      result = LdrpProtectedCopyMemory(v9, v10, &v13, 4uLL, &v14);
    }
    else
    {
      result = v11(v9, v10, &v13, 4LL, &v14);
    }
    if ( (int)result >= 0 )
    {
      if ( v14 != 4 )
        return 2147483661LL;
      v12 = v13;
      if ( v13 )
      {
        *a2 = v13 + 12LL;
        if ( a3 )
          *a3 = v12 + 28;
      }
      return 0LL;
    }
  }
  return result;
}
