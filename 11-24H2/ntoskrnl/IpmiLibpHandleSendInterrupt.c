/*
 * XREFs of IpmiLibpHandleSendInterrupt @ 0x1406A0948
 * Callers:
 *     IpmiLibpKcsSendRequestToBMC @ 0x1406A0448 (IpmiLibpKcsSendRequestToBMC.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IpmiLibpHandleSendInterrupt(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  LOBYTE(v3) = 0;
  if ( !qword_140EF9C30 )
    return 3221225485LL;
  result = guard_dispatch_icall_no_overrides(qword_140EF9C38, &WheaIpmiContext, a2, &v3);
  if ( (int)result >= 0 )
  {
    result = 3221225534LL;
    if ( (_BYTE)v3 != 0xFF )
      return 0LL;
  }
  return result;
}
