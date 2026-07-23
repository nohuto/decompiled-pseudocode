/*
 * XREFs of PopPowerAggregatorEngageModernStandby @ 0x14074D254
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x14074D740 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14046DFD4 (PopDirectedDripsClearDisengageReason.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404B0130 (PopGetMonitorReasonFromPowerEventId.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14074D0DC (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140968EE4 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A2C210 (PopPowerAggregatorSetCurrentState.c)
 *     PopDirectedDripsNotify @ 0x140A667C0 (PopDirectedDripsNotify.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140AA959C (PopPowerRequestRevokeRequestsForSleep.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorEngageModernStandby(__int64 a1)
{
  __int64 MonitorReasonFromPowerEventId; // rax
  __int64 v2; // r10
  char v3; // di
  unsigned __int8 v4; // si
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  BOOL v7; // eax
  __int64 v8; // rcx
  _OWORD v10[3]; // [rsp+40h] [rbp-38h] BYREF
  BOOL Buffer; // [rsp+80h] [rbp+8h] BYREF
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF

  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
  v3 = *(_BYTE *)(v2 + 43);
  v4 = *(_BYTE *)(v2 + 42);
  v5 = MonitorReasonFromPowerEventId & 0xFFFFFF;
  v6 = *(_DWORD *)(v2 + 76);
  v7 = *(_BYTE *)(v2 + 40) && !v3;
  Buffer = v7;
  memset(v10, 0, 32);
  LODWORD(v10[0]) = 1;
  PopPowerAggregatorSetCurrentState(v2, v10);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(2LL, v5);
  ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
  PopPowerRequestRevokeRequestsForSleep();
  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  dword_140F06B34 = 0;
  dword_140F06B38 = PopDripsWatchdogDebounceTickInterval;
  byte_140F06B50 = v4;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
  v12 = v4;
  PopDirectedDripsNotify(6LL, &v12);
  LOBYTE(v8) = v3;
  PopPowerAggregatorEngageAggressiveStandbyActions(v8);
  guard_dispatch_icall_no_overrides(v6);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
}
