/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x1408EEF10
 * Callers:
 *     PsEnumProcesses @ 0x1408EE0F4 (PsEnumProcesses.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408EEF10 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x1404F48EC (Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x14075E150 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 *     PsQueryProcessEnergyValues @ 0x1408ED600 (PsQueryProcessEnergyValues.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408EEF10 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x140905308 (PopEtProcessSnapshotUpdate.c)
 *     PopEtIsrDpcQuery @ 0x140A2FD40 (PopEtIsrDpcQuery.c)
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x140ACA438 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, __int64 a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v5; // rcx
  char v6; // bl
  __int64 v8; // [rsp+20h] [rbp-1F8h] BYREF
  _OWORD v9[28]; // [rsp+30h] [rbp-1E8h] BYREF

  memset_0(v9, 0, 0x1B8uLL);
  v8 = 0LL;
  if ( !*(_DWORD *)(a2 + 4) && a1 != PsIdleProcess )
    PopEtProcessEnumSnapshotCallback(PsIdleProcess, a2);
  if ( a1[205] )
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)(a2 + 24) = v9;
    if ( !(unsigned int)Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
      PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440LL));
    if ( a1 == PsIdleProcess )
    {
      if ( (unsigned int)Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
        PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440LL));
      PopEtIsrDpcQuery(a1, v9);
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline();
      v5 = *(_QWORD *)(a2 + 16);
      if ( IsEnabledDeviceUsageNoInline )
      {
        v6 = PopEtEnergyTrackerQueryDxgProcessEnergyValues(v5, (__int64)a1, &v8);
        PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440LL));
        if ( v6 && v8 )
          *(_QWORD *)(a1[205] + 432LL) = v8;
      }
      else
      {
        PopEtEnergyTrackerQueryProcessEnergyValues(v5, a1);
      }
      PsQueryProcessEnergyValues(a1, v9);
    }
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock((signed __int64 *)(a1[205] + 440LL));
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}
