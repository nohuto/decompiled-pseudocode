/*
 * XREFs of xxxProcessMouseEvent @ 0x1402138E0
 * Callers:
 *     HandleMITWakeSignal @ 0x1400EFF98 (HandleMITWakeSignal.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall xxxProcessMouseEvent(__int64 a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1);
  if ( MouseProcessor )
    CMouseProcessor::xxxProcessMouseEvent(MouseProcessor);
}
