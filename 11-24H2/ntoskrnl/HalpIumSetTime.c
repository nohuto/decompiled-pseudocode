/*
 * XREFs of HalpIumSetTime @ 0x140561930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIumSetTime(__int128 *a1)
{
  __int128 v2; // [rsp+30h] [rbp-38h] BYREF

  if ( !qword_140FC0F90 )
    return 0x8000000000000003uLL;
  v2 = *a1;
  return guard_dispatch_icall_no_overrides(1LL, 0LL, 0LL, &v2);
}
