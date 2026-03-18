/*
 * XREFs of IoGetStackLimits @ 0x140281D40
 * Callers:
 *     EtwpTraceContextRegisters @ 0x14064D0A8 (EtwpTraceContextRegisters.c)
 *     _RegRtlCopyTreeInternal @ 0x140820BA0 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B4E8F8 (HalpCheckLowMemoryPreSleep.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14027FEF0 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !RtlpGetStackLimits((char **)LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
