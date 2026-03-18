/*
 * XREFs of CmShutdownSystem2 @ 0x140667BF4
 * Callers:
 *     CmShutdownSystem @ 0x1407D5194 (CmShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     CmpUnJoinClassOfTrust @ 0x140497B6C (CmpUnJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpFreeAllMemory @ 0x1407D51F0 (CmpFreeAllMemory.c)
 *     CmFcShutdownSystem @ 0x1407D5BE4 (CmFcShutdownSystem.c)
 *     CmpFlushTraceLoggingProvider @ 0x1407D61E4 (CmpFlushTraceLoggingProvider.c)
 *     CmpTraceShutdownRundownComplete @ 0x1407D69DC (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStop @ 0x1407D6AB4 (CmpTraceShutdownStop.c)
 *     CmpWaitForShutdownRundownRelease @ 0x1407E0FF0 (CmpWaitForShutdownRundownRelease.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 *     UNLOCK_HIVE_LOAD @ 0x140909020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140909098 (LOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x14090B0EC (CmpGetNextActiveHive.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14097C7A0 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x14097CFB0 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14097EC8C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDoFileSetSizeEx @ 0x140980EB4 (CmpDoFileSetSizeEx.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 CmShutdownSystem2()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rcx
  unsigned int v5; // edi
  struct _PRIVILEGE_SET *v6; // rcx
  __int64 NextActiveHive; // rax
  __int64 v8; // rbx
  int v9; // ebx
  __int64 **v10; // rax
  struct _PRIVILEGE_SET *v11; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState.ApcListHead[1], 0, 32);
  CmFcShutdownSystem(2LL);
  CmpWaitForShutdownRundownRelease(v1, v0, v2, v3, 0LL, 0LL);
  CmpTraceShutdownRundownComplete();
  if ( CmpRegistryRootObject )
    ObfDereferenceObjectWithTag(CmpRegistryRootObject, 0x746C6644u);
  CmpFlushTraceLoggingProvider();
  LOCK_HIVE_LOAD();
  CmpLockRegistryExclusive();
  for ( i = 0LL; ; i = v8 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v8 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    CmpUnJoinClassOfTrust(NextActiveHive);
    CmpVERemoveHiveFromSIDMappingTable(v8);
    v5 = *(_DWORD *)(v8 + 280) + 4096;
    CmpAttachToRegistryProcess(&ApcState);
    HvHiveCleanup(v8);
    CmpDetachFromRegistryProcess(&ApcState);
    if ( *(_BYTE *)(v8 + 4784)
      && (*(_DWORD *)(v8 + 160) & 0x8000) == 0
      && (__int64)(*(_QWORD *)(v8 + 1800) - v5) > 0x100000 )
    {
      CmpDoFileSetSizeEx(v8, 0LL, v5, 0LL);
    }
    CmpCmdHiveClose(v8);
    v6 = *(struct _PRIVILEGE_SET **)(v8 + 4792);
    if ( v6 )
      CmpVolumeContextDecrementRefCount(v6);
  }
  HvShutdownComplete = 1;
  if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
    CmpFreeAllMemory();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  v9 = 0;
  v10 = &CmpWellKnownVolumeList;
  if ( CmpWellKnownVolumeList )
  {
    do
    {
      v11 = (struct _PRIVILEGE_SET *)v10[1];
      if ( v11 )
        CmpVolumeContextDecrementRefCount(v11);
      v10 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v9];
    }
    while ( *v10 );
  }
  return CmpTraceShutdownStop();
}
