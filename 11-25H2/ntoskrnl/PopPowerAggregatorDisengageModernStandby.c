/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x140A2BC28
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x14074D5F0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A2BBE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorDisengageAggressiveStandbyActions @ 0x1406EA150 (PopPowerAggregatorDisengageAggressiveStandbyActions.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1406EAE28 (PopPowerAggregatorDisengageDirectedDrips.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorDisengageModernStandby(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int Buffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h] BYREF
  int v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]
  int v9; // [rsp+58h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 76);
  PopPowerAggregatorEnterScreenOff();
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopPowerAggregatorDisengageDirectedDrips();
  PopPowerAggregatorDisengageAggressiveStandbyActions(v3, v2);
  v6 = 0LL;
  v9 = -1;
  v7 = 3;
  v8 = 1;
  if ( qword_140E67238 )
    guard_dispatch_icall_no_overrides(&v6);
  v8 = 2;
  if ( qword_140E67238 )
    guard_dispatch_icall_no_overrides(&v6);
  Buffer = 1;
  ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
  guard_dispatch_icall_no_overrides(v1);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
}
