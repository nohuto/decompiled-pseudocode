/*
 * XREFs of TtmpAcquireSessionLock @ 0x1406F73C8
 * Callers:
 *     TtmpStopCallout @ 0x1407699C4 (TtmpStopCallout.c)
 *     TtmpInitiateModernStandbyTransition @ 0x14076A7B8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x14076AC6C (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x14076AD00 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x14076AFF0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B2E4 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpCloseTerminalHandle @ 0x140770130 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140770300 (TtmpScheduledEvaluationWorker.c)
 *     TtmpDeleteQueue @ 0x140770D60 (TtmpDeleteQueue.c)
 *     TtmInitCurrentSession @ 0x140903118 (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 *     TtmCleanupCurrentSession @ 0x140AAD48C (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN TtmpAcquireSessionLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
