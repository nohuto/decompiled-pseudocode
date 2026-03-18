/*
 * XREFs of ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18012D964
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18012C1AC (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18012CF8C (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?SendReportToE3Worker@CEnergyReporter@@AEAAXXZ @ 0x18012D878 (-SendReportToE3Worker@CEnergyReporter@@AEAAXXZ.c)
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18012DD3C (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18018F7D0 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180217E20 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x18025CE9C (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x18025CF30 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180261394 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CReadWriteLock::AcquireExclusive(RTL_SRWLOCK *this)
{
  AcquireSRWLockExclusive(this);
  LODWORD(this[1].Ptr) = GetCurrentThreadId();
}
