/*
 * XREFs of HalpIumSetTime @ 0x14055F560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpIumSetTime()
{
  if ( qword_140FC11F0 )
    return guard_dispatch_icall_no_overrides(1LL, 0LL);
  else
    return 0x8000000000000003uLL;
}
