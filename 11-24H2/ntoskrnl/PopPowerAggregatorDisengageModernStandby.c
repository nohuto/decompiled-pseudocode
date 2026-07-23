/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x140A6DED8
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140757D70 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A6DE90 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorDisengageAggressiveStandbyActions @ 0x1406F3AAC (PopPowerAggregatorDisengageAggressiveStandbyActions.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1406F468C (PopPowerAggregatorDisengageDirectedDrips.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorDisengageModernStandby(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  int Buffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-24h]
  int v11; // [rsp+58h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 76);
  PopPowerAggregatorEnterScreenOff();
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopPowerAggregatorDisengageDirectedDrips();
  PopPowerAggregatorDisengageAggressiveStandbyActions(v3, v2);
  v8 = 0LL;
  v11 = -1;
  v9 = 3;
  v10 = 1;
  if ( qword_140E67688 )
    guard_dispatch_icall_no_overrides(&v8, v4);
  v10 = 2;
  if ( qword_140E67688 )
    guard_dispatch_icall_no_overrides(&v8, v4);
  Buffer = 1;
  ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
  guard_dispatch_icall_no_overrides(v1, v5);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
}
