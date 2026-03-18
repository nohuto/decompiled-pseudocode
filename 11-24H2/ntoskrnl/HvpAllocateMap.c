/*
 * XREFs of HvpAllocateMap @ 0x140983854
 * Callers:
 *     HvpExpandMap @ 0x140980DE8 (HvpExpandMap.c)
 *     HvpInitMap @ 0x140981C6C (HvpInitMap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall HvpAllocateMap(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  void *v7; // rax
  void *v8; // rsi
  __int64 v9; // rax

  v4 = a4;
  if ( (unsigned int)a4 >= 0x400 )
    return 0;
  while ( a3 <= v4 )
  {
    v7 = (void *)guard_dispatch_icall_no_overrides(12288LL, 0LL, 959597891LL, a4);
    v8 = v7;
    if ( !v7 )
      return 0;
    memset_0(v7, 0, 0x3000uLL);
    v9 = a3++;
    *(_QWORD *)(a2 + 8 * v9) = v8;
  }
  return 1;
}
