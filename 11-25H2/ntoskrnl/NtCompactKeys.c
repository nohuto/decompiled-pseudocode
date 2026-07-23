/*
 * XREFs of NtCompactKeys @ 0x1407C0060
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmpLogUnsupportedOperation @ 0x140863D74 (CmpLogUnsupportedOperation.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x140914000 (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // r14
  ULONG v5; // r15d
  char v6; // r13
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  char v9; // al
  ULONG v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG i; // esi
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  PVOID *v18; // rdi
  __int64 v19; // rsi
  __int64 v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int128 v25; // [rsp+48h] [rbp-40h] BYREF
  char v26; // [rsp+A8h] [rbp+20h]

  v25 = 0LL;
  TransientPoolWithQuota = 0LL;
  v5 = 0;
  v6 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v25);
  v8 = CmCheckNoTxContext();
  if ( v8 < 0 )
    goto LABEL_4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    v8 = -1073741727;
LABEL_4:
    v9 = 0;
    goto LABEL_38;
  }
  if ( !Count )
  {
    v8 = 0;
    goto LABEL_4;
  }
  if ( Count >= 0x1FFFFFFF )
  {
    v8 = -1073741811;
    goto LABEL_4;
  }
  v10 = 8 * Count;
  TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
  if ( TransientPoolWithQuota )
  {
    if ( PreviousMode == 1 && v10 && ((unsigned __int8)KeyArray & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(TransientPoolWithQuota, KeyArray, v10);
    while ( v5 < Count )
    {
      LOBYTE(v13) = PreviousMode;
      v8 = CmObReferenceObjectByHandle(
             *((_QWORD *)&TransientPoolWithQuota->PrivilegeCount + v5),
             131078,
             v12,
             v13,
             (__int64)TransientPoolWithQuota + 8 * v5,
             0LL);
      if ( v8 < 0 )
      {
        v9 = 0;
        v6 = 0;
        goto LABEL_38;
      }
      ++v5;
    }
    v6 = CmpAcquireShutdownRundown(v7, v11, v12, v13, v21, v22);
    v26 = v6;
    if ( v6 )
    {
      CmpLockRegistryExclusive();
      v24 = 0LL;
      for ( i = 0; i < Count; ++i )
      {
        v15 = *((_QWORD *)&TransientPoolWithQuota->PrivilegeCount + i);
        v8 = CmpPerformKeyBodyDeletionCheck(v15, 0LL);
        if ( v8 < 0 )
          goto LABEL_34;
        if ( i )
        {
          v16 = v24;
        }
        else
        {
          v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 32LL);
          v24 = v16;
        }
        v17 = *(_QWORD *)(v15 + 8);
        if ( v16 != *(_QWORD *)(v17 + 32) || (v7 = *(unsigned __int16 *)(v17 + 186), (v7 & 4) != 0) || (v7 & 0x10) != 0 )
        {
          v8 = -1073741811;
          goto LABEL_34;
        }
        if ( *(_WORD *)(v17 + 66) )
        {
          v8 = -1073741822;
LABEL_34:
          v9 = 1;
          goto LABEL_35;
        }
      }
      v8 = 0;
      CmpUnlockRegistry(v7);
      CmpLogUnsupportedOperation(7LL);
      v9 = 0;
LABEL_35:
      v6 = v26;
    }
    else
    {
      v8 = -1073741431;
      v9 = 0;
    }
  }
  else
  {
    v8 = -1073741670;
    v9 = 0;
    v6 = 0;
  }
LABEL_38:
  if ( v9 )
    CmpUnlockRegistry(v7);
  if ( v6 )
    CmpReleaseShutdownRundown();
  if ( TransientPoolWithQuota )
  {
    if ( v5 )
    {
      v18 = (PVOID *)TransientPoolWithQuota;
      v19 = v5;
      do
      {
        ObfDereferenceObject(*v18++);
        --v19;
      }
      while ( v19 );
    }
    CmSiFreeMemory(TransientPoolWithQuota);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v25);
  return v8;
}
