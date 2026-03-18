/*
 * XREFs of EtwpGetHostPerfCounter @ 0x1403FF27C
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x1403358E0 (KiProcessExpiredTimerList.c)
 *     EtwpGetLoggerTimeStamp @ 0x14034F8C0 (EtwpGetLoggerTimeStamp.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x140350000 (EtwGetKernelTraceTimestampSilo.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403B0AC4 (HvlpFastFlushAddressSpaceTb.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     KiIpiProcessRequests @ 0x1403FEB60 (KiIpiProcessRequests.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpGetHostPerfCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  guard_dispatch_icall_no_overrides(&v5, a2, a3, a4);
  return v5;
}
