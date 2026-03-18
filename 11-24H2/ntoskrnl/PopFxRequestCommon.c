/*
 * XREFs of PopFxRequestCommon @ 0x1405D1EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PpmIdleAllocateVetoReasons @ 0x140749EB8 (PpmIdleAllocateVetoReasons.c)
 */

__int64 __fastcall PopFxRequestCommon(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ecx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v4 = a1 - 1;
  if ( v4 )
  {
    if ( v4 == 0x10000000 )
      return PpmIdleAllocateVetoReasons(a2);
    else
      return 3221225659LL;
  }
  else
  {
    v9 = 1LL;
    v7 = 0LL;
    v8 = 0;
    v6 = 1;
    v10 = a2;
    return guard_dispatch_icall_no_overrides(&v6, a2, a3, a4);
  }
}
