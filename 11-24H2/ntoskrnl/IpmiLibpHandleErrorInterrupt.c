/*
 * XREFs of IpmiLibpHandleErrorInterrupt @ 0x1406A1908
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x1406A11DC (IpmiLibpKcsHandleError.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IpmiLibpHandleErrorInterrupt()
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( (dword_140EF9F20 & 1) == 0 )
    return 3221225474LL;
  if ( !qword_140EF9F30 )
    return 3221225485LL;
  v1 = guard_dispatch_icall_no_overrides(qword_140EF9F38, &WheaIpmiContext);
  v2 = -1073741811;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
