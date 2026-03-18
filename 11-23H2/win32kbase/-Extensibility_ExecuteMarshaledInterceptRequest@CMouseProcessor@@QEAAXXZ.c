/*
 * XREFs of ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x1C01F6AD4
 * Callers:
 *     ExecuteMarshaledInterceptRequest @ 0x1C01E7EA0 (ExecuteMarshaledInterceptRequest.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01F8784 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(CMouseProcessor *this)
{
  if ( *((_DWORD *)this + 12) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1925);
  CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor *)((char *)this + 3704));
}
