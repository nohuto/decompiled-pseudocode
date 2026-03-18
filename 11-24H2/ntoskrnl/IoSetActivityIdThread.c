/*
 * XREFs of IoSetActivityIdThread @ 0x14045C3B0
 * Callers:
 *     PopAdaptiveStandbyActionWorker @ 0x1407602D0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x140761570 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x140761B4C (PopAdaptiveStandbyInitializeActivator.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761CA4 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x140761DE0 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x140761F00 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762DD0 (PopAdaptiveStandbyWnfCallback.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     PnpDeviceEventWorker @ 0x1409EFB60 (PnpDeviceEventWorker.c)
 *     PiDqIrpQueryCreate @ 0x1409F9A10 (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall IoSetActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
