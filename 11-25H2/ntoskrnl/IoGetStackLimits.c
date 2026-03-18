/*
 * XREFs of IoGetStackLimits @ 0x14042A9E0
 * Callers:
 *     EtwpTraceContextRegisters @ 0x140641088 (EtwpTraceContextRegisters.c)
 *     _RegRtlCopyTreeInternal @ 0x140810CA0 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B3E8F8 (HalpCheckLowMemoryPreSleep.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !RtlpGetStackLimits((char **)LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
