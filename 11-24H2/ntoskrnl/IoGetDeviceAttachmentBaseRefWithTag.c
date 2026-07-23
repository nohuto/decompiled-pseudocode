/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14025A8C4 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14025B37C (FsRtlAcquireFileForModWriteEx.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402B93A8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PoStoreRequester @ 0x1402BAE34 (PoStoreRequester.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x140499AC0 (PopCheckAndHandleThermalConditions.c)
 *     PoSetSystemWakeDevice @ 0x14049B110 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x14049C678 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1404A0018 (PopDiagTraceThermalZoneRundown.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404A5290 (PopTraceThermalRequestActiveActivity.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404B8750 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404CD1F8 (PopTraceThermalZonePassiveHistogram.c)
 *     HalpIommuGetDeviceId @ 0x14054FBC0 (HalpIommuGetDeviceId.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D2D3C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D2E64 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D3204 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D3338 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTracePowerLimitHistogram @ 0x1405D3820 (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D3CF0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D3EC4 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D3FEC (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14060BC88 (SmKmEtwAppendObjectName.c)
 *     PiPagePathSetState @ 0x1407204F0 (PiPagePathSetState.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x14074AAEC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 *     PopDiagTracePassiveCooling @ 0x140754E5C (PopDiagTracePassiveCooling.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407554EC (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x140755880 (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14075681C (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140756910 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x140765228 (PopSqmThermalCriticalEvent.c)
 *     IopQueryInterfaceRecurseUp @ 0x14098215C (IopQueryInterfaceRecurseUp.c)
 *     PoThermalCounterSetCallback @ 0x1409F7180 (PoThermalCounterSetCallback.c)
 *     PopDiagTraceCoolingExtension @ 0x140A2DCBC (PopDiagTraceCoolingExtension.c)
 *     PopCheckThermalPolicy @ 0x140A367D8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140A36A7C (PopDiagTraceThermalCoolingMode.c)
 *     PiControlGetDeviceStack @ 0x140A5027C (PiControlGetDeviceStack.c)
 *     PopDiagTraceThermalRequest @ 0x140A6CC64 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceActiveCooling @ 0x140AB8AC8 (PopDiagTraceActiveCooling.c)
 *     PopNotifyDevice @ 0x140B717B8 (PopNotifyDevice.c)
 *     IopMarkBootPartition @ 0x140C1EDB0 (IopMarkBootPartition.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x140355DB8 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  unsigned __int64 v4; // rsi
  void *DeviceAttachmentBase; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 20, v6);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = v4;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(v4);
  return DeviceAttachmentBase;
}
