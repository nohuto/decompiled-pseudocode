/*
 * XREFs of TtmpAcquireSessionLock @ 0x1406F53C8
 * Callers:
 *     TtmpStopCallout @ 0x140769BE4 (TtmpStopCallout.c)
 *     TtmpInitiateModernStandbyTransition @ 0x14076A9D8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x14076AE8C (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x14076AF20 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x14076B210 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B504 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpCloseTerminalHandle @ 0x140770350 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140770520 (TtmpScheduledEvaluationWorker.c)
 *     TtmpDeleteQueue @ 0x140770F80 (TtmpDeleteQueue.c)
 *     TtmInitCurrentSession @ 0x14099D6C8 (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x14099E1A4 (TtmpAcquireSessionById.c)
 *     TtmCleanupCurrentSession @ 0x140AA850C (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN TtmpAcquireSessionLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
