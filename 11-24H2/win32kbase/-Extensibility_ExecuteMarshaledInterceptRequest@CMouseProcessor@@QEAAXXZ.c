/*
 * XREFs of ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x14021CA24
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x140212620 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x14021D894 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(CMouseProcessor *this)
{
  if ( *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1990);
  CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor *)((char *)this + 3912));
}
