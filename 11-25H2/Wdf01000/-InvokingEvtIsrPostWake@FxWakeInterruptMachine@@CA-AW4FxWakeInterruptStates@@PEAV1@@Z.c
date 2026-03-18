/*
 * XREFs of ?InvokingEvtIsrPostWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x14003F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x14003EACC (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 */

__int64 __fastcall FxWakeInterruptMachine::InvokingEvtIsrPostWake(FxWakeInterruptMachine *This)
{
  FxInterrupt::InvokeWakeInterruptEvtIsr(This->m_Interrupt);
  KeSetEvent(&This->m_IsrEvent.m_Event, 0, 0);
  return 6LL;
}
