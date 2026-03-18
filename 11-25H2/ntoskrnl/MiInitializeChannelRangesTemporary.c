/*
 * XREFs of MiInitializeChannelRangesTemporary @ 0x140C4654C
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **MiInitializeChannelRangesTemporary()
{
  _UNKNOWN **result; // rax
  __int128 v1; // [rsp+50h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h] BYREF

  result = &retaddr;
  v1 = 0LL;
  if ( dword_140FC41F8 && !byte_140E372D5 )
  {
    if ( dword_140FC420C )
      return (_UNKNOWN **)guard_dispatch_icall_no_overrides(31LL);
  }
  return result;
}
