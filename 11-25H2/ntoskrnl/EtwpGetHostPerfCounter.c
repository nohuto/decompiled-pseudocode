/*
 * XREFs of EtwpGetHostPerfCounter @ 0x1403F6D7C
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x14031A990 (EtwGetKernelTraceTimestampSilo.c)
 *     EtwpGetLoggerTimeStamp @ 0x14031B820 (EtwpGetLoggerTimeStamp.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     KiIpiProcessRequests @ 0x1403F6650 (KiIpiProcessRequests.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpGetHostPerfCounter(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  guard_dispatch_icall_no_overrides(&v3, a2);
  return v3;
}
