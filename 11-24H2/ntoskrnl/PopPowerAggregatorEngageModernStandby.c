/*
 * XREFs of PopPowerAggregatorEngageModernStandby @ 0x140757974
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140757FE0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1404673AC (PopDirectedDripsClearDisengageReason.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404AB9C0 (PopGetMonitorReasonFromPowerEventId.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1407577FC (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDirectedDripsNotify @ 0x140A627B0 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A6E4B0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140AA99CC (PopPowerRequestRevokeRequestsForSleep.c)
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
  __int64 v9; // rdx
  _OWORD v11[3]; // [rsp+40h] [rbp-38h] BYREF
  BOOL Buffer; // [rsp+80h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
  v3 = *(_BYTE *)(v2 + 43);
  v4 = *(_BYTE *)(v2 + 42);
  v5 = MonitorReasonFromPowerEventId & 0xFFFFFF;
  v6 = *(_DWORD *)(v2 + 76);
  v7 = *(_BYTE *)(v2 + 40) && !v3;
  Buffer = v7;
  memset(v11, 0, 32);
  LODWORD(v11[0]) = 1;
  PopPowerAggregatorSetCurrentState(v2, v11);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(2LL, v5);
  ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
  PopPowerRequestRevokeRequestsForSleep();
  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  dword_140F074B4 = 0;
  dword_140F074B8 = PopDripsWatchdogDebounceTickInterval;
  byte_140F074D0 = v4;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
  v13 = v4;
  PopDirectedDripsNotify(6LL, &v13);
  LOBYTE(v8) = v3;
  PopPowerAggregatorEngageAggressiveStandbyActions(v8);
  guard_dispatch_icall_no_overrides(v6, v9);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
}
