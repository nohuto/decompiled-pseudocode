/*
 * XREFs of PopEtEnergyContextProcessStateUpdate @ 0x14099CF68
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x14099B564 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x14099BAF0 (PopEtEnergyContextSetState.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 *     PopEtEnumEnergyTrackers @ 0x14099BCAC (PopEtEnumEnergyTrackers.c)
 */

__int64 __fastcall PopEtEnergyContextProcessStateUpdate(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-1F8h] BYREF
  int v6; // [rsp+24h] [rbp-1F4h]
  _QWORD *v7; // [rsp+28h] [rbp-1F0h]
  __int64 v8; // [rsp+30h] [rbp-1E8h]
  _OWORD *v9; // [rsp+38h] [rbp-1E0h]
  _OWORD v10[28]; // [rsp+40h] [rbp-1D8h] BYREF

  v1 = a1[205];
  v6 = 0;
  v8 = 0LL;
  memset_0(v10, 0, 0x1B8uLL);
  ++*(_DWORD *)(v1 + 476);
  PsQueryProcessEnergyValues(a1, v10);
  v6 = 0;
  v8 = 0LL;
  v9 = v10;
  v5 = 3;
  v7 = a1;
  return PopEtEnumEnergyTrackers(v3, (__int64)&v5);
}
