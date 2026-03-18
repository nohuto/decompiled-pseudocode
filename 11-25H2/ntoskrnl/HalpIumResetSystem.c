/*
 * XREFs of HalpIumResetSystem @ 0x14055EFC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIumResetSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !qword_140FC07F0 || a3 || a4 )
    return 0x8000000000000003uLL;
  else
    return guard_dispatch_icall_no_overrides(2LL);
}
