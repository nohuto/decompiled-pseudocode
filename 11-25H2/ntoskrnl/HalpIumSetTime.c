/*
 * XREFs of HalpIumSetTime @ 0x14055F030
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpIumSetTime()
{
  if ( qword_140FC07F0 )
    return guard_dispatch_icall_no_overrides(1LL);
  else
    return 0x8000000000000003uLL;
}
