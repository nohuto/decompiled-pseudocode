/*
 * XREFs of HvpFreeMap @ 0x140A4E184
 * Callers:
 *     HvpShrinkMap @ 0x1407D4128 (HvpShrinkMap.c)
 *     HvHiveCleanup @ 0x14087E098 (HvHiveCleanup.c)
 *     HvpExpandMap @ 0x1409F81BC (HvpExpandMap.c)
 *     HvpInitMap @ 0x1409F957C (HvpInitMap.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **__fastcall HvpFreeMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // edi
  __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    v5 = 1023;
    if ( a4 < 0x400 )
      v5 = a4;
    while ( a3 <= v5 )
    {
      v8 = *(_QWORD *)(a2 + 8LL * a3);
      if ( v8 )
      {
        result = (_UNKNOWN **)guard_dispatch_icall_no_overrides(v8);
        *(_QWORD *)(a2 + 8LL * a3) = 0LL;
      }
      ++a3;
    }
  }
  return result;
}
