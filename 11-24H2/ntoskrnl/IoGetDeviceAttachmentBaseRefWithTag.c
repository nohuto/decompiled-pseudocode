/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68
 * Callers:
 *     PopTraceThermalRequestPassiveHistogram @ 0x140330D68 (PopTraceThermalRequestPassiveHistogram.c)
 *     PoStoreRequester @ 0x140331734 (PoStoreRequester.c)
 *     FsRtlReleaseFileForModWrite @ 0x140372004 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140372ABC (FsRtlAcquireFileForModWriteEx.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049EC88 (PopCheckAndHandleThermalConditions.c)
 *     PoSetSystemWakeDevice @ 0x1404A0A90 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1404A16EC (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1404A5288 (PopDiagTraceThermalZoneRundown.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404AB004 (PopTraceThermalRequestActiveActivity.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404BD5E0 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D3FE8 (PopTraceThermalZonePassiveHistogram.c)
 *     HalpIommuGetDeviceId @ 0x140552280 (HalpIommuGetDeviceId.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D5728 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D5850 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D5BF0 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D5D24 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTracePowerLimitHistogram @ 0x1405D620C (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D66DC (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D68B0 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D69D8 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14060D6C8 (SmKmEtwAppendObjectName.c)
 *     PiPagePathSetState @ 0x140722960 (PiPagePathSetState.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x14074C7BC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 *     PopDiagTracePassiveCooling @ 0x1407569DC (PopDiagTracePassiveCooling.c)
 *     PopDiagTracePowerLimitExtension @ 0x14075706C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x140757400 (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14075839C (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140758490 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x140765858 (PopSqmThermalCriticalEvent.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409C43A8 (IopQueryInterfaceRecurseUp.c)
 *     PoThermalCounterSetCallback @ 0x1409FDF10 (PoThermalCounterSetCallback.c)
 *     PopDiagTraceCoolingExtension @ 0x140A38BFC (PopDiagTraceCoolingExtension.c)
 *     PopCheckThermalPolicy @ 0x140A40EF8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140A4119C (PopDiagTraceThermalCoolingMode.c)
 *     PiControlGetDeviceStack @ 0x140A58ACC (PiControlGetDeviceStack.c)
 *     PopDiagTraceThermalRequest @ 0x140A73644 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceActiveCooling @ 0x140ABDA58 (PopDiagTraceActiveCooling.c)
 *     PopNotifyDevice @ 0x140B6F748 (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140C1CD70 (IopMarkBootPartition.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x1402D4B38 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  unsigned __int64 v4; // rsi
  void *DeviceAttachmentBase; // rbx
  __int64 v6; // rdx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = v4;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(v4);
  return DeviceAttachmentBase;
}
