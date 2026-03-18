/*
 * XREFs of ?InvokingEvtIsrInD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1400AA570
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x140079AF0 (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 */

__int64 __fastcall FxWakeInterruptMachine::InvokingEvtIsrInD0(FxWakeInterruptMachine *This)
{
  FxInterrupt::InvokeWakeInterruptEvtIsr(This->m_Interrupt);
  KeSetEvent(&This->m_IsrEvent.m_Event, 0, 0);
  return 2LL;
}
