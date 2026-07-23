/*
 * XREFs of HvpAllocateMap @ 0x14096C064
 * Callers:
 *     HvpExpandMap @ 0x1409695F8 (HvpExpandMap.c)
 *     HvpInitMap @ 0x14096A47C (HvpInitMap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall HvpAllocateMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  void *v7; // rax
  void *v8; // rsi
  __int64 v9; // rax

  if ( a4 >= 0x400 )
    return 0;
  while ( a3 <= a4 )
  {
    v7 = (void *)guard_dispatch_icall_no_overrides(12288LL, 0LL);
    v8 = v7;
    if ( !v7 )
      return 0;
    memset_0(v7, 0, 0x3000uLL);
    v9 = a3++;
    *(_QWORD *)(a2 + 8 * v9) = v8;
  }
  return 1;
}
