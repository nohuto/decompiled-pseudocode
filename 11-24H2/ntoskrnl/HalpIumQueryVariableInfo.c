/*
 * XREFs of HalpIumQueryVariableInfo @ 0x14055F460
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIumQueryVariableInfo(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+48h] [rbp-30h]

  if ( !qword_140FC11F0 )
    return 0x8000000000000003uLL;
  result = guard_dispatch_icall_no_overrides(8LL, 0LL);
  *a2 = v8;
  *a3 = v9;
  *a4 = v10;
  return result;
}
