/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x140860740
 * Callers:
 *     PsEnumProcesses @ 0x14085F924 (PsEnumProcesses.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140860740 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x14075D0F0 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140860740 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x14099BF8C (PopEtProcessSnapshotUpdate.c)
 *     PopEtIsrDpcQuery @ 0x140A24780 (PopEtIsrDpcQuery.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, __int64 a2)
{
  bool v4; // zf
  char v5; // bl
  __int64 v7; // [rsp+20h] [rbp-1F8h] BYREF
  _OWORD v8[28]; // [rsp+30h] [rbp-1E8h] BYREF

  memset_0(v8, 0, 0x1B8uLL);
  v7 = 0LL;
  if ( !*(_DWORD *)(a2 + 4) && a1 != PsIdleProcess )
    PopEtProcessEnumSnapshotCallback(PsIdleProcess, a2);
  if ( a1[205] )
  {
    v4 = a1 == PsIdleProcess;
    *(_QWORD *)(a2 + 24) = v8;
    *(_QWORD *)(a2 + 8) = a1;
    if ( v4 )
    {
      PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440LL));
      PopEtIsrDpcQuery(a1, v8);
    }
    else
    {
      v5 = PopEtEnergyTrackerQueryDxgProcessEnergyValues(*(_QWORD *)(a2 + 16), (__int64)a1, &v7);
      PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440LL));
      if ( v5 && v7 )
        *(_QWORD *)(a1[205] + 432LL) = v7;
      PsQueryProcessEnergyValues(a1, v8);
    }
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock((signed __int64 *)(a1[205] + 440LL));
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}
