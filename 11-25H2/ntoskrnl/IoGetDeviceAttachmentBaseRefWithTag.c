/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058
 * Callers:
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035B210 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140425554 (PopTraceThermalRequestPassiveHistogram.c)
 *     PoStoreRequester @ 0x140425FC4 (PoStoreRequester.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140427548 (PopTraceThermalRequestActiveActivity.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140488C34 (PopDiagTraceDeviceIdleCheck.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 *     PoSetSystemWakeDevice @ 0x1404A11A0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1404A4D68 (PopDiagTraceThermalZoneRundown.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404BE63C (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D4110 (PopTraceThermalZonePassiveHistogram.c)
 *     HalpIommuGetDeviceId @ 0x14054F980 (HalpIommuGetDeviceId.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D0DC8 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D0EF0 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D1290 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D13C4 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTracePowerLimitHistogram @ 0x1405D18AC (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D1D7C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D1F50 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D2078 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14060169C (SmKmEtwAppendObjectName.c)
 *     PiPagePathSetState @ 0x140716860 (PiPagePathSetState.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1407406EC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopFxRegisterDevice @ 0x140742880 (PopFxRegisterDevice.c)
 *     PopDiagTracePassiveCooling @ 0x14074A928 (PopDiagTracePassiveCooling.c)
 *     PopDiagTracePowerLimitExtension @ 0x14074AFB8 (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x14074B34C (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14074C2E8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14074C3DC (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x140755D98 (PopSqmThermalCriticalEvent.c)
 *     PoThermalCounterSetCallback @ 0x1409FB460 (PoThermalCounterSetCallback.c)
 *     PopDiagTraceCoolingExtension @ 0x140A3331C (PopDiagTraceCoolingExtension.c)
 *     PopCheckThermalPolicy @ 0x140A3C7C8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140A3CA6C (PopDiagTraceThermalCoolingMode.c)
 *     PiControlGetDeviceStack @ 0x140A55090 (PiControlGetDeviceStack.c)
 *     PopDiagTraceThermalRequest @ 0x140A70EF4 (PopDiagTraceThermalRequest.c)
 *     IopQueryInterfaceRecurseUp @ 0x140A95844 (IopQueryInterfaceRecurseUp.c)
 *     PopDiagTraceActiveCooling @ 0x140AB9958 (PopDiagTraceActiveCooling.c)
 *     PopNotifyDevice @ 0x140B5A320 (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140C0BBA0 (IopMarkBootPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x14035B0D8 (IopGetDeviceAttachmentBase.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  unsigned __int64 v4; // rsi
  void *DeviceAttachmentBase; // rbx
  __int64 v6; // rdx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = v4;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(v4);
  return DeviceAttachmentBase;
}
