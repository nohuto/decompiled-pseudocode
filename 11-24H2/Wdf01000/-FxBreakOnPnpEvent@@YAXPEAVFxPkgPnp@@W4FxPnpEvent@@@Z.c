/*
 * XREFs of ?FxBreakOnPnpEvent@@YAXPEAVFxPkgPnp@@W4FxPnpEvent@@@Z @ 0x140006488
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x140005FE4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140006220 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxBreakOnPnpEvent(FxPkgPnp *fx, FxPnpEvent event)
{
  FxStateMachineBreak *m_StateMachineBreak; // rax

  m_StateMachineBreak = fx->m_StateMachineBreak;
  if ( m_StateMachineBreak && m_StateMachineBreak->BreakEnabled && (event & m_StateMachineBreak->PnpEvents) != 0 )
    DbgBreakPoint();
}
