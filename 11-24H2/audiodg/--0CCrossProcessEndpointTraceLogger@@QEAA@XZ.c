/*
 * XREFs of ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14003C210
 * Callers:
 *     ??0?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA@XZ @ 0x140053960 (--0-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@.c)
 *     ??0?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA@XZ @ 0x140080AAC (--0-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@.c)
 * Callees:
 *     ??0?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@_K11@Z @ 0x14003C288 (--0-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClus.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessEndpointTraceLogger *__fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger(
        CCrossProcessEndpointTraceLogger *this)
{
  *(_QWORD *)this = &CCrossProcessEndpointTraceLogger::`vftable';
  *(GUID *)((char *)this + 8) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 8) = (char *)this + 8;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *((_QWORD *)this + 3) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((char *)this + 104);
  return this;
}
