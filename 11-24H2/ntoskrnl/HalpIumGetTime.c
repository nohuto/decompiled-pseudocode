/*
 * XREFs of HalpIumGetTime @ 0x14055F3B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIumGetTime(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]

  if ( !qword_140FC11F0 )
    return 0x8000000000000003uLL;
  result = guard_dispatch_icall_no_overrides(0LL, 0LL);
  *a1 = v5;
  if ( a2 )
  {
    *(_QWORD *)a2 = v6;
    *(_DWORD *)(a2 + 8) = v7;
  }
  return result;
}
