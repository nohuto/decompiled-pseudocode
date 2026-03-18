/*
 * XREFs of IoClearActivityIdThread @ 0x140463690
 * Callers:
 *     PopAdaptiveStandbyActionWorker @ 0x1407602D0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x140761570 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x140761B4C (PopAdaptiveStandbyInitializeActivator.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761CA4 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x140761DE0 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x140761F00 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762DD0 (PopAdaptiveStandbyWnfCallback.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x1409F9A10 (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
