/*
 * XREFs of IpmiLibpHandleErrorInterrupt @ 0x140695460
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x140694D38 (IpmiLibpKcsHandleError.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IpmiLibpHandleErrorInterrupt()
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( (dword_140EF98A0 & 1) == 0 )
    return 3221225474LL;
  if ( !qword_140EF98B0 )
    return 3221225485LL;
  v1 = guard_dispatch_icall_no_overrides(qword_140EF98B8);
  v2 = -1073741811;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
