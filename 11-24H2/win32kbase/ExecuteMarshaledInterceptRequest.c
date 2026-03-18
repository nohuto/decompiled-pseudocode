/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x140212620
 * Callers:
 *     HandleMITWakeSignal @ 0x1400EFF98 (HandleMITWakeSignal.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x14021CA24 (-Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall ExecuteMarshaledInterceptRequest(__int64 a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1);
  if ( MouseProcessor )
    CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(MouseProcessor);
}
