/*
 * XREFs of IpmiLibpHandleErrorInterrupt @ 0x1406A0800
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x1406A00D8 (IpmiLibpKcsHandleError.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IpmiLibpHandleErrorInterrupt(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ecx

  if ( (dword_140EF9C20 & 1) == 0 )
    return 3221225474LL;
  if ( !qword_140EF9C30 )
    return 3221225485LL;
  v4 = guard_dispatch_icall_no_overrides(qword_140EF9C38, &WheaIpmiContext, a2, a3);
  v5 = -1073741811;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v5;
}
