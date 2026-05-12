/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x140004540
 * Callers:
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 *     RaUnitPowerIrp @ 0x14000606C (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x14000675C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1400079E8 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitGetInstances @ 0x1400097E8 (RaUnitGetInstances.c)
 *     RaUnitIncrementOutstandingIrpRequests @ 0x14000A98C (RaUnitIncrementOutstandingIrpRequests.c)
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     StorpLogPerUnitStatistics @ 0x14003C190 (StorpLogPerUnitStatistics.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaAdapterUpdateAssociatedUnitsIdentity @ 0x140058D34 (RaAdapterUpdateAssociatedUnitsIdentity.c)
 *     RaidAdapterCheckWaitTimeout @ 0x140058F80 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x14009DC10 (RaidUnitAbortSrb.c)
 *     RaidUnitUpdateDynamicRegistrySettings @ 0x1400A1580 (RaidUnitUpdateDynamicRegistrySettings.c)
 *     StorEtwResetCounters @ 0x1400AA828 (StorEtwResetCounters.c)
 *     RaUnitStorageDumpControl @ 0x140188700 (RaUnitStorageDumpControl.c)
 *     RaWmiDispatchIrp @ 0x1401B9E0C (RaWmiDispatchIrp.c)
 * Callees:
 *     RaUnitCheckRemoveStateForDisabled @ 0x140069070 (RaUnitCheckRemoveStateForDisabled.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r11
  unsigned __int64 v4; // r9
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v12; // eax
  __int64 v13; // rax

  v3 = a1;
  v4 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v5 = *(_DWORD *)(v4 + *(_QWORD *)(a1 + 40));
  while ( (v5 & 1) == 0 )
  {
    a1 = *(_QWORD *)(v3 + 40);
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + a1), v5 + 2, v5);
    if ( v6 == v5 )
      goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 1032));
LABEL_4:
  v7 = *(_DWORD *)(v3 + 56);
  if ( !a3 )
  {
    v12 = v7 - 5;
    if ( v12 && (unsigned int)(v12 - 1) >= 2 )
    {
      v10 = 0;
      goto LABEL_9;
    }
    goto LABEL_15;
  }
  v8 = v7 - 5;
  if ( !v8 )
  {
    if ( a2 )
    {
      v13 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v13 == 27 )
      {
        v10 = 0;
        goto LABEL_9;
      }
      if ( *(_BYTE *)v13 == 14 && *(_DWORD *)(v13 + 24) == 266276 )
      {
        v10 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_15:
    v10 = -1073741738;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    v10 = RaUnitCheckRemoveStateForDisabled(a1, a2);
  else
    v10 = 0;
LABEL_9:
  if ( v10 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
  return (unsigned int)v10;
}
