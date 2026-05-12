/*
 * XREFs of RaidIsUnitControlSupported @ 0x14001DD30
 * Callers:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaUnitUnlockQueueSrb @ 0x140001EC8 (RaUnitUnlockQueueSrb.c)
 *     RaUnitLockQueueSrb @ 0x140002170 (RaUnitLockQueueSrb.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x140007B60 (RaidUnitProcessSetDevicePowerIrp.c)
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
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     StorPortAdapterActiveCondition @ 0x140024390 (StorPortAdapterActiveCondition.c)
 *     RaidCreateUnit @ 0x140026194 (RaidCreateUnit.c)
 *     StorResumeIoGateway @ 0x140028340 (StorResumeIoGateway.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1400285A0 (StorPortUnitActiveConditionStep1.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x14002E520 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x14002E610 (StorPortUnitPowerRequiredStep1.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x14002E9DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x14002FCD8 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitLockForwardIo @ 0x1400301C0 (RaUnitLockForwardIo.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x140054AEC (RaUnitCheckForwardIoOutstanding.c)
 *     RaUnitWaitForForwardIoQuiescence @ 0x140056320 (RaUnitWaitForForwardIoQuiescence.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007705C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x140078FBC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     StorPortUnitDirectedPowerDown @ 0x14007A070 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x14007A540 (StorPortUnitDirectedPowerUp.c)
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
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rsi
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  int v10; // ecx

  v2 = *(_DWORD **)(a1 + 24);
  v3 = a2;
  if ( *v2 == 1094997074 )
  {
    v4 = v2 + 94;
    v5 = (__int64)(v2 + 158);
    v6 = (__int64)(v2 + 160);
    v7 = (__int64)(v2 + 162);
    v8 = (__int64)(v2 + 164);
  }
  else if ( *v2 == 1314275652 )
  {
    v4 = v2 + 42;
    v5 = (__int64)(v2 + 106);
    v6 = (__int64)(v2 + 108);
    v7 = (__int64)(v2 + 110);
    v8 = (__int64)(v2 + 112);
  }
  else
  {
    v5 = 256LL;
    v4 = 0LL;
    v8 = 280LL;
    v6 = 264LL;
    v7 = 272LL;
  }
  if ( **((_DWORD **)v4 + 29) == 208 )
  {
    if ( (v4[62] & 0x10) != 0 )
      return *((_BYTE *)v4 + v3 + 256);
    v9 = v4 + 63;
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)v8 = 0LL;
    v10 = v4[94];
    v4[63] = 12;
    if ( v10 )
    {
      if ( v10 > 0 && *((_BYTE *)v4 + 380) )
        *v9 = 13;
      if ( v10 > 1 && *((_BYTE *)v4 + 381) )
        *v9 = 14;
      if ( v10 > 4 && *((_BYTE *)v4 + 384) )
        *v9 = 15;
      if ( v10 > 11 && *((_BYTE *)v4 + 391) )
        v4[72] = 16;
    }
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
      && (*(_DWORD *)(*((_QWORD *)v4 + 29) + 184LL) & 0x20000) != 0 )
    {
      *v9 = 17;
    }
    if ( (int)v4[94] > 14 )
    {
      if ( *((_BYTE *)v4 + 394) )
        *v9 = 32;
    }
    if ( (int)RaCallMiniportUnitControl(v4, 0LL, v4 + 63) >= 0 )
    {
      *((_BYTE *)v4 + 248) |= 0x10u;
      return *((_BYTE *)v4 + v3 + 256);
    }
  }
  return 0;
}
