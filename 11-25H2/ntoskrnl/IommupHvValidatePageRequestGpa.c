/*
 * XREFs of IommupHvValidatePageRequestGpa @ 0x140563A54
 * Callers:
 *     IommuProcessPageRequestQueue @ 0x140561CE0 (IommuProcessPageRequestQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IommupHvValidatePageRequestGpa()
{
  if ( IommupHvGpaAlwaysValid )
    return 0LL;
  else
    return guard_dispatch_icall_no_overrides(1LL);
}
