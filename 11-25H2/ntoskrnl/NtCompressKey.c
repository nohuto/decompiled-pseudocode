/*
 * XREFs of NtCompressKey @ 0x1407C02F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpIsWriteQueueActive @ 0x14048091C (CmpIsWriteQueueActive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x140914000 (CmCheckNoTxContext.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140A837E0 (CmpWaitOnHiveWriteQueue.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

NTSTATUS __cdecl NtCompressKey(HANDLE KeyHandle)
{
  int v1; // edi
  NTSTATUS v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  int v4; // r8d
  int v5; // r9d
  int v6; // ebp
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
  __int64 v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v1 = (int)KeyHandle;
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
      v6 = v1 & 3;
      v7 = CmObReferenceObjectByHandle(v1, 131078, v4, v5, (__int64)&Object, 0LL);
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
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v23);
  return v2;
}
