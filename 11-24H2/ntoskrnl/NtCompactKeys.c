/*
 * XREFs of NtCompactKeys @ 0x1407CF750
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404590C0 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     CmCheckNoTxContext @ 0x14092D620 (CmCheckNoTxContext.c)
 *     CmpLogUnsupportedOperation @ 0x14097AB10 (CmpLogUnsupportedOperation.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall NtCompactKeys(unsigned int a1, const void *a2)
{
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // r14
  unsigned int v5; // r15d
  char v6; // r13
  __int64 v7; // rcx
  int v8; // ebx
  char v9; // al
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int i; // esi
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
  __int64 v26; // [rsp+58h] [rbp-30h]
  char v27; // [rsp+A8h] [rbp+20h]

  v25 = 0LL;
  v26 = 0LL;
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
  if ( !a1 )
  {
    v8 = 0;
    goto LABEL_4;
  }
  if ( a1 >= 0x1FFFFFFF )
  {
    v8 = -1073741811;
    goto LABEL_4;
  }
  v10 = 8 * a1;
  TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
  if ( TransientPoolWithQuota )
  {
    if ( PreviousMode == 1 && v10 && ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(TransientPoolWithQuota, a2, v10);
    while ( v5 < a1 )
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
    v27 = v6;
    if ( v6 )
    {
      CmpLockRegistryExclusive();
      v24 = 0LL;
      for ( i = 0; i < a1; ++i )
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
      v6 = v27;
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
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v25);
  return (unsigned int)v8;
}
