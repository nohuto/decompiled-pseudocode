/*
 * XREFs of wWinMainCRTStartup @ 0x140058DB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x140059598 (__security_init_cookie.c)
 */

__int64 wWinMainCRTStartup()
{
  _security_init_cookie();
  return _scrt_common_main_seh();
}
