/*
 * XREFs of ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x14002B6F0
 * Callers:
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x14002B584 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x14003F498 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIoQueue::IsPowerStateNotifyingDriver(FxIoQueue *this)
{
  FxIoQueuePowerState m_PowerState; // eax

  m_PowerState = this->m_PowerState;
  return m_PowerState == FxIoQueuePowerPurgeNotifyingDriver
      || m_PowerState == FxIoQueuePowerStoppingNotifyingDriver
      || m_PowerState == FxIoQueuePowerRestartingNotifyingDriver;
}
