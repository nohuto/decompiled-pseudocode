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

NTSTATUS __cdecl NtInitializeRegistry(USHORT BootCondition)
{
  __int64 v1; // r9
  struct _KTHREAD *CurrentThread; // r8
  __int64 v3; // rdx
  NTSTATUS v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v3) = CurrentThread->PreviousMode;
  if ( (_BYTE)v3 )
  {
    if ( (_WORD)v1 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v3) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v1);
    }
  }
  else if ( (unsigned __int16)(v1 - 4096) > 0x3E7u )
  {
    if ( (_WORD)v1 == 2 )
    {
      CmpHandlePageFileOpenNotification(999LL, v3, (__int64)CurrentThread, v1);
    }
    else if ( (unsigned __int16)v1 < 2u )
    {
      CmCompleteRegistryInitialization(v1);
    }
  }
  else
  {
    CmpAcceptBoot(v1);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
