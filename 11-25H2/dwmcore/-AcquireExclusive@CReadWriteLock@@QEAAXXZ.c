/*
 * XREFs of ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x180181244
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017FA8C (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18018086C (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?SendReportToE3Worker@CEnergyReporter@@AEAAXXZ @ 0x180181158 (-SendReportToE3Worker@CEnergyReporter@@AEAAXXZ.c)
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18018161C (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x1801B1B90 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x180266E0C (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x180266EA0 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x18026D3E4 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CReadWriteLock::AcquireExclusive(RTL_SRWLOCK *this)
{
  AcquireSRWLockExclusive(this);
  LODWORD(this[1].Ptr) = GetCurrentThreadId();
}
