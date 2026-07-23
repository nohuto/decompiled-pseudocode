/*
 * XREFs of NtInitializeRegistry @ 0x1407D01A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     ZwInitializeRegistry @ 0x1406A94D0 (ZwInitializeRegistry.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     CmpAcceptBoot @ 0x1407CFA84 (CmpAcceptBoot.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407CFB50 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x1407DCD28 (CmpSyncNextBackupHive.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtInitializeRegistry(USHORT BootCondition)
{
  __int64 v1; // r8
  unsigned __int16 v2; // r10
  struct _KTHREAD *CurrentThread; // r9
  __int64 v4; // rdx
  NTSTATUS v5; // r8d
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v7);
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v4) = CurrentThread->PreviousMode;
  if ( (_BYTE)v4 )
  {
    if ( v2 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v4) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v2);
    }
  }
  else if ( (unsigned __int16)(v2 - 4096) > 0x3E7u )
  {
    if ( v2 == 2 )
    {
      CmpHandlePageFileOpenNotification(999LL, v4, v1, (__int64)CurrentThread);
    }
    else if ( v2 < 2u )
    {
      CmCompleteRegistryInitialization(v2);
    }
  }
  else
  {
    CmpAcceptBoot(v2);
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v7);
  return v5;
}
