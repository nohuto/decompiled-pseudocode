/*
 * XREFs of IpmiLibpHandleSendInterrupt @ 0x1406955A8
 * Callers:
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406950A8 (IpmiLibpKcsSendRequestToBMC.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IpmiLibpHandleSendInterrupt()
{
  __int64 result; // rax

  if ( !qword_140EF98B0 )
    return 3221225485LL;
  result = guard_dispatch_icall_no_overrides(qword_140EF98B8);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
