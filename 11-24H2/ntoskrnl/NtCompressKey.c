/*
 * XREFs of NtCompressKey @ 0x1407CF9F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsWriteQueueActive @ 0x140481A50 (CmpIsWriteQueueActive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x14092D620 (CmCheckNoTxContext.c)
 *     HvMarkBaseBlockDirty @ 0x140931488 (HvMarkBaseBlockDirty.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A882DC (CmpWaitOnHiveWriteQueue.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall NtCompressKey(int a1)
{
  int v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  int v4; // r8d
  int v5; // r9d
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v20; // [rsp+20h] [rbp-29h]
  __int64 v21; // [rsp+28h] [rbp-21h]
  PVOID Object; // [rsp+30h] [rbp-19h] BYREF
  __int128 v23; // [rsp+38h] [rbp-11h] BYREF
  __int64 v24; // [rsp+48h] [rbp-1h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp+7h] BYREF

  Object = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v23);
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      LOBYTE(v5) = PreviousMode;
      v6 = a1 & 3;
      v7 = CmObReferenceObjectByHandle(a1, 131078, v4, v5, (__int64)&Object, 0LL);
      v12 = Object;
      v2 = v7;
      if ( v7 >= 0 )
      {
        if ( (unsigned __int8)CmpAcquireShutdownRundown(v9, v8, v10, v11, v20, v21) )
        {
          while ( 1 )
          {
            CmpLockRegistryExclusive();
            v2 = CmpPerformKeyBodyDeletionCheck(v12, 0LL);
            if ( v2 < 0 )
              break;
            v14 = v12[1];
            v15 = *(_QWORD **)(v14 + 32);
            if ( *(_DWORD *)(v14 + 40) != *(_DWORD *)(v15[8] + 36LL) )
            {
              v2 = -1073741811;
              break;
            }
            v16 = v15 + 526;
            if ( !CmpIsWriteQueueActive(v15 + 526) )
            {
              v16 = v15 + 524;
              if ( !CmpIsWriteQueueActive(v15 + 524) )
              {
                CmpAttachToRegistryProcess(&ApcState);
                v17 = *(_QWORD *)(v12[1] + 32LL);
                if ( v17 == CmpMasterHive || !*(_QWORD *)(v17 + 1544) || (*(_DWORD *)(v17 + 160) & 0x8003) != 0 )
                {
                  v2 = -1073741811;
                }
                else
                {
                  v18 = 0;
                  if ( v6 != 3 )
                    v18 = v6;
                  *(_QWORD *)(*(_QWORD *)(v17 + 64) + 168LL) = v18;
                  HvMarkBaseBlockDirty(v17);
                  v2 = 0;
                }
                CmpDetachFromRegistryProcess(&ApcState);
                break;
              }
            }
            HvLockHiveFlusherExclusive(v15);
            CmpWaitOnHiveWriteQueue(v15, v16);
          }
          CmpUnlockRegistry(v13);
          CmpReleaseShutdownRundown();
        }
        else
        {
          v2 = -1073741431;
        }
      }
      if ( v12 )
        ObfDereferenceObject(v12);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v23);
  return (unsigned int)v2;
}
