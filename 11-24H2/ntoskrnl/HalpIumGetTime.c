/*
 * XREFs of HalpIumGetTime @ 0x140561780
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIumGetTime(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]

  if ( !qword_140FC0F90 )
    return 0x8000000000000003uLL;
  result = guard_dispatch_icall_no_overrides(0LL, 0LL, 0LL, &v6);
  *a1 = v6;
  if ( a2 )
  {
    v5 = v8;
    *(_QWORD *)a2 = v7;
    *(_DWORD *)(a2 + 8) = v5;
  }
  return result;
}
