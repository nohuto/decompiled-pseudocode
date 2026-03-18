/*
 * XREFs of PopPowerAggregatorEngageModernStandby @ 0x140759514
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140759B90 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14046C80C (PopDirectedDripsClearDisengageReason.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404B1130 (PopGetMonitorReasonFromPowerEventId.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14075939C (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B5444 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140AAEAF0 (PopPowerRequestRevokeRequestsForSleep.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD v16[3]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+10h] BYREF

  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
  v3 = *(_BYTE *)(v2 + 43);
  v4 = *(_BYTE *)(v2 + 42);
  v5 = MonitorReasonFromPowerEventId & 0xFFFFFF;
  v6 = *(_DWORD *)(v2 + 76);
  v7 = *(_BYTE *)(v2 + 40) && !v3;
  v17 = v7;
  memset(v16, 0, 32);
  LODWORD(v16[0]) = 1;
  PopPowerAggregatorSetCurrentState(v2, v16);
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(2LL, v5);
  ZwUpdateWnfStateData((__int64)&WNF_PO_STANDBY_AUDIO_POLICY, (__int64)&v17);
  PopPowerRequestRevokeRequestsForSleep(v9, v8, v10);
  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  dword_140F071B4 = 0;
  dword_140F071B8 = PopDripsWatchdogDebounceTickInterval;
  byte_140F071D0 = v4;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
  v18 = v4;
  PopDirectedDripsNotify(6LL, &v18);
  LOBYTE(v11) = v3;
  PopPowerAggregatorEngageAggressiveStandbyActions(v11);
  guard_dispatch_icall_no_overrides(v6, v12, v13, v14);
  return PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
}
