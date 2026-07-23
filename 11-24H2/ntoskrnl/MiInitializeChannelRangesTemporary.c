/*
 * XREFs of MiInitializeChannelRangesTemporary @ 0x140C599BC
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **MiInitializeChannelRangesTemporary()
{
  _UNKNOWN **result; // rax
  __int128 v1; // [rsp+50h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h] BYREF

  result = &retaddr;
  v1 = 0LL;
  if ( dword_140FC5208 && !byte_140E37655 )
  {
    if ( dword_140FC521C )
      return (_UNKNOWN **)guard_dispatch_icall_no_overrides(31LL, 8LL);
  }
  return result;
}
