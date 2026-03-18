/*
 * XREFs of ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x140068E20
 * Callers:
 *     ?Dx@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x140068DC0 (-Dx@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?CompletingD0@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x140068E00 (-CompletingD0@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 *     ?DxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1400AA440 (-DxNotArmedForWake@FxWakeInterruptMachine@@CA-AW4FxWakeInterruptStates@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x14001D588 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::AckPendingWakeInterruptOperation(
        FxPkgPnp *this,
        unsigned __int8 ProcessPowerEventOnDifferentThread)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_WakeInterruptPendingAckCount, 0xFFFFFFFF) == 1 )
    FxPkgPnp::PowerProcessEvent(this, 0x2000u, ProcessPowerEventOnDifferentThread);
}
