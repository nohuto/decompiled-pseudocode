/*
 * XREFs of CmReplaceKey @ 0x1407DA838
 * Callers:
 *     NtReplaceKey @ 0x1407D0E80 (NtReplaceKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x1406A7D10 (ZwFlushBuffersFile.c)
 *     CmpCmdRenameHive @ 0x1407D5E20 (CmpCmdRenameHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     CmpCmdHiveOpen @ 0x140930A5C (CmpCmdHiveOpen.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmReplaceKey(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, const void **a4)
{
  char v7; // r14
  char v8; // r12
  struct _PRIVILEGE_SET *Pool; // r15
  NTSTATUS v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-90h] BYREF
  const void *ObjectInformation[64]; // [rsp+A0h] [rbp-60h] BYREF

  IoStatusBlock = 0LL;
  v7 = 0;
  v8 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 0x1B0uLL, 0x33394D43u);
  if ( !Pool )
  {
    v10 = -1073741670;
    goto LABEL_20;
  }
  v10 = CmpCmdHiveOpen(a3, 18415617, 0, 0LL, 0LL, (__int64)Pool);
  if ( v10 >= 0 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v7 = 1;
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(BugCheckParameter3);
    if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 4) != 0 )
    {
LABEL_5:
      v10 = -1073741611;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) == 0 )
    {
      if ( BugCheckParameter3 == qword_140E09AE0 )
      {
        v10 = CmpPreserveSystemHiveData(BugCheckParameter3, 0LL);
        if ( v10 < 0 )
        {
LABEL_18:
          HvUnlockHiveFlusherExclusive(BugCheckParameter3);
          CmpUnlockRegistry(v12);
          if ( v8 )
            CmpFinishBeingActiveFlusherAndReconciler(BugCheckParameter3);
          goto LABEL_20;
        }
      }
      HvUnlockHiveFlusherExclusive(BugCheckParameter3);
      CmpUnlockRegistry(v11);
      v10 = CmpFlushHive(0LL, 12LL);
      if ( v10 < 0 )
        goto LABEL_20;
      CmpDetachFromRegistryProcess(&ApcState);
      v7 = 0;
      CmpBecomeActiveFlusherAndReconciler(BugCheckParameter3);
      v8 = 1;
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(BugCheckParameter3);
      if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 4) != 0 )
        goto LABEL_5;
      if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) == 0 )
      {
        v10 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter3 + 1544), ObjectInformation, a4, 0x200u, 0);
        if ( v10 >= 0 )
        {
          *(_DWORD *)(BugCheckParameter3 + 160) |= 4u;
          v10 = CmpCmdRenameHive(MEMORY[0x608], 0LL, ObjectInformation, 0, 0);
          if ( v10 < 0 || (v10 = ZwFlushBuffersFile(MEMORY[0x608], &IoStatusBlock), v10 < 0) )
          {
            if ( CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter3 + 1544), 0LL, ObjectInformation, 0, 0) < 0 )
              v10 = -1073741492;
          }
        }
        goto LABEL_18;
      }
    }
    v10 = -1073741811;
    goto LABEL_18;
  }
LABEL_20:
  if ( v7 )
    CmpDetachFromRegistryProcess(&ApcState);
  if ( Pool )
    CmSiFreeMemory(Pool);
  return (unsigned int)v10;
}
