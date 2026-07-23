/*
 * XREFs of CmpLoadKeyCommon @ 0x14045ABA8
 * Callers:
 *     CmLoadKey @ 0x14092D8C8 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpJoinClassOfTrust @ 0x14045B070 (CmpJoinClassOfTrust.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     TmEnableCallbacks @ 0x1404F9CD0 (TmEnableCallbacks.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1407D28B0 (CmpSetGlobalQuotaAllowed.c)
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140987400 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpTrimHive @ 0x140A37AF4 (CmpTrimHive.c)
 *     CmpLockHiveListExclusive @ 0x140A52D38 (CmpLockHiveListExclusive.c)
 *     CmpAddToHiveFileList @ 0x140A63874 (CmpAddToHiveFileList.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x140A86400 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmRmFinalizeRecovery @ 0x140AA3958 (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        __int64 a1,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        char a7,
        ULONG_PTR *a8,
        char a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r13
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // edi
  ULONG_PTR v21; // rdi
  ULONG_PTR *v22; // r12
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // r9d
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR *v36; // [rsp+70h] [rbp-49h]
  PRKEVENT Event; // [rsp+78h] [rbp-41h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-39h] BYREF

  *(_DWORD *)(a1 + 160) |= 0x20u;
  v11 = 0LL;
  BugCheckParameter2 = 0LL;
  Event = a6;
  v36 = a8;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_QWORD *)(a1 + 4168) = KeGetCurrentThread();
  v15 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    v25 = *(_DWORD *)(a1 + 4112) | 0x20;
    *(_DWORD *)(a1 + 4112) = v25;
    if ( (a3 & 0x20) != 0 )
      *(_DWORD *)(a1 + 4112) = v25 | 0x40;
  }
  *(_DWORD *)(a1 + 4112) |= 1u;
  LOCK_HIVE_LOAD();
  LOBYTE(v16) = 1;
  CmpLockRegistryFreezeAware(v16);
  if ( a4 && !v15 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v20 = -1073741444;
      v33 = 16;
      goto LABEL_16;
    }
    LOBYTE(v29) = a7;
    v26 = CmpJoinClassOfTrust(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), v29);
    v20 = v26;
    if ( v26 < 0 )
    {
      v33 = 32;
      goto LABEL_18;
    }
    v26 = CmpVEAddHiveToSIDMappingTable(a1, a2);
    v20 = v26;
    if ( v26 < 0 )
    {
      v33 = 48;
      goto LABEL_18;
    }
  }
  if ( a5 )
  {
    v26 = CmpPerformKeyBodyDeletionCheck(a5, 0LL);
    v20 = v26;
    if ( v26 < 0 )
    {
      v33 = 64;
LABEL_18:
      v27 = v26;
      goto LABEL_19;
    }
    v11 = *(_QWORD *)(a5 + 8);
    if ( (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
    {
      v20 = -1073741811;
      v33 = 80;
LABEL_16:
      v27 = v20;
LABEL_19:
      SetFailureLocation(a11, 0, 29, v27, v33);
      goto LABEL_20;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v17) = a9;
  v18 = CmpLinkHiveToMaster(
          a2[2],
          a2[1],
          a1,
          v17,
          512,
          v15 != 0,
          Event,
          a2[4],
          v11,
          (__int64)&BugCheckParameter2,
          0,
          a11);
  v20 = v18;
  if ( v18 < 0 )
  {
    SetFailureLocation(a11, 0, 29, v18, 96);
    LOBYTE(v30) = 1;
    CmpLockRegistryFreezeAware(v30);
LABEL_20:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    if ( a1 )
    {
      CmpAttachToRegistryProcess(&ApcState);
      CmpDestroyHive(a1);
      CmpDetachFromRegistryProcess(&ApcState);
    }
    goto LABEL_22;
  }
  v21 = BugCheckParameter2;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2);
    v22 = v36;
    *v36 = v21;
  }
  else
  {
    v22 = v36;
  }
  LOBYTE(v19) = 1;
  CmpLockRegistryFreezeAware(v19);
  if ( v15 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(a1 + 2936));
    *v22 = *(_QWORD *)(a1 + 2936);
  }
  CmpLockHiveListExclusive();
  v23 = (_QWORD *)qword_140FD9D18;
  v24 = (_QWORD *)(a1 + 1608);
  if ( *(__int64 **)qword_140FD9D18 != &CmpHiveListHead )
    __fastfail(3u);
  *v24 = &CmpHiveListHead;
  *(_QWORD *)(a1 + 1616) = v23;
  *v23 = v24;
  qword_140FD9D18 = a1 + 1608;
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(&ApcState);
  CmpRecheckHiveVolumePolicy(a1);
  CmpDetachFromRegistryProcess(&ApcState);
  CmpDereferenceKeyControlBlockUnsafe(v21);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v31) = a10;
    CmpInitCmRM(a1, v31);
    *(_DWORD *)(a1 + 4112) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpFlushHive(a1, 4LL);
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( !v15 )
    CmpAddToHiveFileList(a1);
  v32 = *(_QWORD *)(a1 + 4152);
  if ( v32 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v32 + 56), CmKtmNotification, *(PVOID *)(a1 + 4152));
    CmRmFinalizeRecovery(*(_QWORD *)(a1 + 4152));
  }
  CmpTrimHive(a1);
  LOCK_HIVE_LOAD();
  *(_DWORD *)(a1 + 160) &= ~0x20u;
  *(_QWORD *)(a1 + 4168) = 0LL;
  UNLOCK_HIVE_LOAD();
  v20 = 0;
LABEL_22:
  if ( !CmpProfileLoaded && !CmpWasSetupBoot )
  {
    CmpProfileLoaded = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return v20;
}
