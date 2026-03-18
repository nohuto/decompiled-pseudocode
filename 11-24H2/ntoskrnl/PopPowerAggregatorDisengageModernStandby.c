/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x1409025F8
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1407598D0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1409025B0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorDisengageAggressiveStandbyActions @ 0x1406F5AAC (PopPowerAggregatorDisengageAggressiveStandbyActions.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1406F668C (PopPowerAggregatorDisengageDirectedDrips.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140902758 (PopPowerAggregatorEnterScreenOff.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorDisengageModernStandby(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]
  int v15; // [rsp+58h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 76);
  PopPowerAggregatorEnterScreenOff();
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  PopPowerAggregatorDisengageDirectedDrips();
  PopPowerAggregatorDisengageAggressiveStandbyActions(v3, v2);
  v12 = 0LL;
  v15 = -1;
  v13 = 3;
  v14 = 1;
  if ( qword_140E67518 )
    guard_dispatch_icall_no_overrides(&v12, v4, v5, v6);
  v14 = 2;
  if ( qword_140E67518 )
    guard_dispatch_icall_no_overrides(&v12, v4, v5, v6);
  v11 = 1;
  ZwUpdateWnfStateData((__int64)&WNF_PO_STANDBY_AUDIO_POLICY, (__int64)&v11);
  guard_dispatch_icall_no_overrides(v1, v7, v8, v9);
  return PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
}
