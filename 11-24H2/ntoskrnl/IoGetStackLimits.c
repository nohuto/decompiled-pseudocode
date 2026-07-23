/*
 * XREFs of IoGetStackLimits @ 0x1402372D0
 * Callers:
 *     EtwpTraceContextRegisters @ 0x14064B6B8 (EtwpTraceContextRegisters.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B50948 (HalpCheckLowMemoryPreSleep.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)LowLimit, (__int64)HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
