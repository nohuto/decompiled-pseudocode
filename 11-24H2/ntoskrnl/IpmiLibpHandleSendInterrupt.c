/*
 * XREFs of IpmiLibpHandleSendInterrupt @ 0x1406A1A50
 * Callers:
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406A1550 (IpmiLibpKcsSendRequestToBMC.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IpmiLibpHandleSendInterrupt()
{
  __int64 result; // rax

  if ( !qword_140EF9F30 )
    return 3221225485LL;
  result = guard_dispatch_icall_no_overrides(qword_140EF9F38, &WheaIpmiContext);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
