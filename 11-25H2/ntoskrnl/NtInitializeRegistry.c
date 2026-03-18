/*
 * XREFs of NtInitializeRegistry @ 0x1407C05B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     ZwInitializeRegistry @ 0x14069D260 (ZwInitializeRegistry.c)
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 *     CmpAcceptBoot @ 0x1407BFEA8 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407BFF74 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x1407CD018 (CmpSyncNextBackupHive.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 */

__int64 NtInitializeRegistry()
{
  __int64 v0; // r9
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v2) = CurrentThread->PreviousMode;
  if ( (_BYTE)v2 )
  {
    if ( (_WORD)v0 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v2) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry((unsigned __int16)v0, v2);
    }
  }
  else if ( (unsigned __int16)(v0 - 4096) > 0x3E7u )
  {
    if ( (_WORD)v0 == 2 )
    {
      CmpHandlePageFileOpenNotification(999LL, v2, (__int64)CurrentThread, v0);
    }
    else if ( (unsigned __int16)v0 < 2u )
    {
      CmCompleteRegistryInitialization(v0);
    }
  }
  else
  {
    CmpAcceptBoot(v0);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
