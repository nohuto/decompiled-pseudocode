/*
 * XREFs of LdrpReadMemory @ 0x1800B0B90
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800AF850 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x1800AF970 (LdrQueryNextListEntry32.c)
 *     LdrQueryInLoadOrderModuleList @ 0x1800B12F0 (LdrQueryInLoadOrderModuleList.c)
 * Callees:
 *     LdrpProtectedCopyMemory @ 0x1800B1280 (LdrpProtectedCopyMemory.c)
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpReadMemory(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(int, int, int, int, __int64); // rax
  __int64 v5; // r10
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 (__fastcall *)(int, int, int, int, __int64))a1[1];
  v5 = *a1;
  v9 = 0LL;
  v7 = -2147483635;
  if ( v4 == RtlpQueryReadVirtualMemory )
  {
    result = ZwReadVirtualMemory(v5, a2, a3, a4, &v9);
    if ( (int)result < 0 )
      return result;
    result = 0LL;
    if ( v9 != a4 )
      result = 2147483661LL;
  }
  else if ( (char *)v4 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(v5, a2, a3, a4, &v9);
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64))v4)(v5);
  }
  if ( (int)result >= 0 )
  {
    if ( v9 == a4 )
      return 0;
    return v7;
  }
  return result;
}
