/*
 * XREFs of CmShutdownSystem1 @ 0x140666298
 * Callers:
 *     CmShutdownSystem @ 0x1407D5684 (CmShutdownSystem.c)
 * Callees:
 *     HvpMakeHiveReadOnly @ 0x140666CD8 (HvpMakeHiveReadOnly.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     CmCloseRmHandle @ 0x1406F737C (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1406F73A0 (CmCloseTmHandle.c)
 *     CmpRecordShutdownStopTime @ 0x1407D5A2C (CmpRecordShutdownStopTime.c)
 *     CmpShutdownWorkers @ 0x1407D5FB0 (CmpShutdownWorkers.c)
 *     CmFcShutdownSystem @ 0x1407D60D4 (CmFcShutdownSystem.c)
 *     CmpTraceShutdownFlushStart @ 0x1407D6E78 (CmpTraceShutdownFlushStart.c)
 *     CmpTraceShutdownFlushStop @ 0x1407D6EE4 (CmpTraceShutdownFlushStop.c)
 *     CmpTraceShutdownStart @ 0x1407D6FBC (CmpTraceShutdownStart.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpWaitForHiveLoadUnloadRundownRelease @ 0x1407E1518 (CmpWaitForHiveLoadUnloadRundownRelease.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmShutdownCmRM @ 0x140A00C24 (CmShutdownCmRM.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmShutdownSystem1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v5; // rdx
  void *v6; // rdi
  void *v7; // rsi
  __int64 NextActiveHive; // rbx
  __int64 j; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rbx
  ULONG_PTR v15; // r8
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // ecx
  __int64 k; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 m; // rcx
  __int64 v23; // rbx
  __int64 n; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState.ApcListHead[1], 0, 32);
  CmpTraceShutdownStart(a1, a2, a3, a4, 0LL, 0LL);
  CmpWaitForHiveLoadUnloadRundownRelease();
  CmpAttachToRegistryProcess(&ApcState);
  for ( i = 0LL; ; i = NextActiveHive )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    if ( !NextActiveHive )
      break;
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LOBYTE(v5) = 1;
    v6 = (void *)CmCloseRmHandle(*(_QWORD *)(NextActiveHive + 4152), v5);
    v7 = (void *)CmCloseTmHandle(*(_QWORD *)(NextActiveHive + 4152));
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    if ( v6 )
    {
      ZwClose(v6);
      ZwClose(v7);
    }
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryExclusive();
  for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v14) )
  {
    v14 = j;
    if ( !j )
      break;
    v10 = *(_QWORD *)(j + 4152);
    if ( v10 )
    {
      v11 = *(_QWORD *)(j + 64);
      v12 = *(_DWORD *)(v11 + 144);
      if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
        v13 = v12 & 0xFFFFFFFE;
      else
        v13 = v12 | 1;
      *(_DWORD *)(v11 + 144) = v13;
      HvMarkBaseBlockDirty(v14);
    }
  }
  v15 = qword_140E09AE0;
  if ( CmRmSystem )
  {
    v16 = *(_QWORD *)(qword_140E09AE0 + 64);
    v17 = *(_DWORD *)(v16 + 144);
    if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
      v18 = v17 & 0xFFFFFFFE;
    else
      v18 = v17 | 1;
    *(_DWORD *)(v16 + 144) = v18;
    HvMarkBaseBlockDirty(v15);
  }
  for ( k = 0LL; ; k = v21 )
  {
    v20 = CmpGetNextActiveHive(k);
    v21 = v20;
    if ( !v20 )
      break;
    CmShutdownCmRM(*(_QWORD *)(v20 + 4152), 0LL);
  }
  if ( !(_BYTE)CmFirstTime )
    CmpShutdownWorkers();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  CmFcShutdownSystem(1LL);
  CmpRecordShutdownStopTime();
  for ( m = 0LL; ; m = v23 )
  {
    v23 = CmpGetNextActiveHive(m);
    if ( !v23 )
      break;
    CmpLockRegistry();
    HvpMakeHiveReadOnly(v23);
    CmpUnlockRegistry();
  }
  CmpTraceShutdownFlushStart();
  for ( n = 0LL; ; n = v26 )
  {
    v25 = CmpGetNextActiveHive(n);
    v26 = v25;
    if ( !v25 )
      break;
    CmpBecomeActiveFlusherAndReconciler(v25);
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(v26);
    *(_DWORD *)(v26 + 164) |= 4u;
    HvUnlockHiveFlusherExclusive(v26);
    CmpUnlockRegistry();
    CmpFinishBeingActiveFlusherAndReconciler(v26);
    if ( !BYTE1(NlsMbOemCodePageTag) && (*(_DWORD *)(v26 + 160) & 2) == 0 )
      *(_BYTE *)(v26 + 4784) = (int)CmpFlushHive(v26, 76LL) >= 0;
  }
  CmpTraceShutdownFlushStop();
  return CmpDetachFromRegistryProcess(&ApcState);
}
