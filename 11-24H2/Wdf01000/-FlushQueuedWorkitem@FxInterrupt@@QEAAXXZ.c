/*
 * XREFs of ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x140067A54
 * Callers:
 *     ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x140067400 (-Dx@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140067610 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

void __fastcall FxInterrupt::FlushQueuedWorkitem(FxInterrupt *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx

  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
    FxCREvent::EnterCRAndWaitAndLeave(&m_SystemWorkItem->m_WorkItemCompleted);
}
