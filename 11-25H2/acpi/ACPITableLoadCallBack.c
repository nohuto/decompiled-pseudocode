/*
 * XREFs of ACPITableLoadCallBack @ 0x140051AD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x140019370 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIPowerScheduleDpc @ 0x14001D5EC (ACPIPowerScheduleDpc.c)
 *     ACPIInternalMoveList @ 0x14003DA40 (ACPIInternalMoveList.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x14003DFD8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051C08 (ACPIGpeBuildWakeMasks.c)
 *     Simulator_RefreshTree @ 0x14006B4BC (Simulator_RefreshTree.c)
 */

void __fastcall ACPITableLoadCallBack(_QWORD *a1, char a2)
{
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    ACPIGpeBuildWakeMasks(RootDeviceExtension);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
  {
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, (__int64)&AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(
                a1,
                (void (__fastcall *)(__int64, __int64, __int64))ACPITableLoadNotifyPnp,
                0LL) < 0 )
      ACPIInternalError(0x1100A6uLL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
