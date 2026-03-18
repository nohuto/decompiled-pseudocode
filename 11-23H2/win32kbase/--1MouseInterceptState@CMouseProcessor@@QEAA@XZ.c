/*
 * XREFs of ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1C0083910
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C0080B30 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0083944 (-FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInterceptState::~MouseInterceptState(CMouseProcessor::MouseInterceptState *this)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor::MouseInterceptState *)((char *)this + 112));
  CMouseProcessor::MouseInterceptState::MarshalSync::FreeMarshalingEvent((CMouseProcessor::MouseInterceptState *)((char *)this + 112));
}
