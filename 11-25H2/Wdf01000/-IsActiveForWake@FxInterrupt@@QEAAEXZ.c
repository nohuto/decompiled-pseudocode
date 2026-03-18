/*
 * XREFs of ?IsActiveForWake@FxInterrupt@@QEAAEXZ @ 0x140069440
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140068FD0 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1400691CC (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxInterrupt::IsActiveForWake(FxInterrupt *this)
{
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax

  m_WakeInterruptMachine = this->m_WakeInterruptMachine;
  if ( m_WakeInterruptMachine )
    LOBYTE(m_WakeInterruptMachine) = m_WakeInterruptMachine->m_ActiveForWake != 0;
  return (unsigned __int8)m_WakeInterruptMachine;
}
