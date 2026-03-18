/*
 * XREFs of HvpFreeMap @ 0x140A51610
 * Callers:
 *     HvpShrinkMap @ 0x1407E3A08 (HvpShrinkMap.c)
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 *     HvpExpandMap @ 0x140980DE8 (HvpExpandMap.c)
 *     HvpInitMap @ 0x140981C6C (HvpInitMap.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **__fastcall HvpFreeMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    v5 = 1023;
    v6 = a3;
    if ( (unsigned int)a4 < 0x400 )
      v5 = a4;
    while ( v6 <= v5 )
    {
      v8 = *(_QWORD *)(a2 + 8LL * v6);
      if ( v8 )
      {
        result = (_UNKNOWN **)guard_dispatch_icall_no_overrides(v8, 12288LL, a3, a4);
        *(_QWORD *)(a2 + 8LL * v6) = 0LL;
      }
      ++v6;
    }
  }
  return result;
}
