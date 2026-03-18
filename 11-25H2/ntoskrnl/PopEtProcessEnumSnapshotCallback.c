/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x1408DFB00
 * Callers:
 *     PsEnumProcesses @ 0x1408DECE4 (PsEnumProcesses.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408DFB00 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x1404F1730 (Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D3F10 (Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1406E9008 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140751758 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 *     PsQueryProcessEnergyValues @ 0x1408DE290 (PsQueryProcessEnergyValues.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408DFB00 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x14096173C (PopEtProcessSnapshotUpdate.c)
 *     PopEtIsrDpcQuery @ 0x140A2E1CC (PopEtIsrDpcQuery.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(signed __int64 *a1, __int64 a2)
{
  char v4; // bl
  __int64 v6; // [rsp+20h] [rbp-1F8h] BYREF
  _OWORD v7[28]; // [rsp+30h] [rbp-1E8h] BYREF

  memset_0(v7, 0, 0x1B8uLL);
  v6 = 0LL;
  if ( !*(_DWORD *)(a2 + 4) && a1 != PsIdleProcess )
    PopEtProcessEnumSnapshotCallback(PsIdleProcess, a2);
  if ( a1[205] )
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)(a2 + 24) = v7;
    if ( !(unsigned int)Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
      PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440));
    if ( a1 == PsIdleProcess )
    {
      if ( (unsigned int)Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
        PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440));
      PopEtIsrDpcQuery(a1, v7);
    }
    else
    {
      if ( (unsigned int)Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
      {
        v4 = PopEtEnergyTrackerQueryDxgProcessEnergyValues(*(_QWORD *)(a2 + 16), (__int64)a1, &v6);
        PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440));
        if ( v4 && v6 )
          *(_QWORD *)(a1[205] + 432) = v6;
      }
      else if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline() )
      {
        PopEtEnergyTrackerQueryProcessEnergyValues(*(_QWORD *)(a2 + 16), (__int64)a1);
      }
      PsQueryProcessEnergyValues(a1, v7);
    }
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock((signed __int64 *)(a1[205] + 440));
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}
