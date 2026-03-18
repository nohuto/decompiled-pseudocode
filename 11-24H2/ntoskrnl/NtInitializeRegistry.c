/*
 * XREFs of NtInitializeRegistry @ 0x1407CFCB0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     ZwInitializeRegistry @ 0x1406A8530 (ZwInitializeRegistry.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 *     CmpAcceptBoot @ 0x1407CF594 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407CF660 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x1407DC7D8 (CmpSyncNextBackupHive.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 */

__int64 NtInitializeRegistry()
{
  __int64 v0; // r8
  unsigned __int16 v1; // r10
  struct _KTHREAD *CurrentThread; // r9
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v3) = CurrentThread->PreviousMode;
  if ( (_BYTE)v3 )
  {
    if ( v1 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v3) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v1, v3);
    }
  }
  else if ( (unsigned __int16)(v1 - 4096) > 0x3E7u )
  {
    if ( v1 == 2 )
    {
      CmpHandlePageFileOpenNotification(999LL, v3, v0, (__int64)CurrentThread);
    }
    else if ( v1 < 2u )
    {
      CmCompleteRegistryInitialization(v1);
    }
  }
  else
  {
    CmpAcceptBoot(v1);
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
