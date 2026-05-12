/*
 * XREFs of RaCallMiniportUnitControl @ 0x14001DEE0
 * Callers:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaUnitUnlockQueueSrb @ 0x140001EC8 (RaUnitUnlockQueueSrb.c)
 *     RaUnitLockQueueSrb @ 0x140002170 (RaUnitLockQueueSrb.c)
 *     RaidUnitSendPowerToMiniport @ 0x140008218 (RaidUnitSendPowerToMiniport.c)
 *     RaidUnitSubmitIrpRequest @ 0x14000AA60 (RaidUnitSubmitIrpRequest.c)
 *     RaidResumeAdapterQueue @ 0x14000FA30 (RaidResumeAdapterQueue.c)
 *     RaidStallDeviceQueue @ 0x1400131FC (RaidStallDeviceQueue.c)
 *     RaidInsertDeviceQueue @ 0x140013CA0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x140014570 (RiGetEnqueueReason.c)
 *     RaidPauseUnitQueue @ 0x140014D40 (RaidPauseUnitQueue.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140017A7C (RaidBusEnumeratorVisitUnit.c)
 *     StorPortUnitIdleCondition @ 0x14001C930 (StorPortUnitIdleCondition.c)
 *     StorPortUnitIdleState @ 0x14001CBA0 (StorPortUnitIdleState.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     StorPortAdapterActiveCondition @ 0x140024390 (StorPortAdapterActiveCondition.c)
 *     RaidCreateUnit @ 0x140026194 (RaidCreateUnit.c)
 *     StorResumeIoGateway @ 0x140028340 (StorResumeIoGateway.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1400285A0 (StorPortUnitActiveConditionStep1.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x14002E9DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x14002FCD8 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitLockForwardIo @ 0x1400301C0 (RaUnitLockForwardIo.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x140054AEC (RaUnitCheckForwardIoOutstanding.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007705C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x140078FBC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaUnitAdapterRemove @ 0x140091490 (RaUnitAdapterRemove.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x140092624 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitDeleteDeviceIrp @ 0x1400927F4 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitSetQOSIoctl @ 0x1400976F0 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x140098540 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x14009B3D8 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaidUnitCancelPendingRequests @ 0x14009E028 (RaidUnitCancelPendingRequests.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1401891D4 (RaUnitStorageGetInternalDataIoctl.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018B11C (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1401B9B4C (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaCallMiniportUnitControl(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  int v3; // ebx
  int v4; // ebx

  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( !v1 )
    return 3221225659LL;
  v3 = v1(*(_QWORD *)(a1 + 240) + 16LL);
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    return v3 != 0 ? 0xC0000001 : 0;
  if ( !v3 )
    return 0LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3221225473LL;
  if ( v4 == 1 )
    return 3221225659LL;
  return 3221225701LL;
}
