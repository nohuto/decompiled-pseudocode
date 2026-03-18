/*
 * XREFs of CmpSetKeySecurity @ 0x14099FAEC
 * Callers:
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14048052C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x140484100 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpCheckKcbStackAccess @ 0x1406F8094 (CmpCheckKcbStackAccess.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E3D00 (CmpPartialPromoteSubkeys.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     HvUnlockHiveFlusherShared @ 0x14086A604 (HvUnlockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x14086A690 (CmpSignalDeferredPosts.c)
 *     CmpSnapshotTxOwnerArray @ 0x14086C0D0 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x14086C1E8 (CmpRollbackTransactionArray.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086C494 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086DD20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14086E6E0 (CmpUnlockKcbStack.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140875C90 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140879368 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14087B024 (CmpRundownUnitOfWork.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmLockHiveSecurityExclusive @ 0x1408803CC (CmLockHiveSecurityExclusive.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1409145A0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpCleanupKcbStack @ 0x1409172A0 (CmpCleanupKcbStack.c)
 *     CmpPromoteKey @ 0x1409880D8 (CmpPromoteKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityAccessMask @ 0x140A19B78 (SeSetSecurityAccessMask.c)
 *     CmpAllocateUnitOfWork @ 0x140A2E660 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A2E6B8 (CmpLockIXLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmUnlockHiveSecurity @ 0x140BB99C8 (CmUnlockHiveSecurity.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r12
  char v8; // r15
  char v9; // r13
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG_PTR v18; // rdi
  int started; // ebx
  __int64 v20; // r12
  __int64 v21; // rcx
  char v22; // r14
  bool v23; // cc
  PPRIVILEGE_SET v24; // rbx
  char v25; // di
  char v26; // r12
  PPRIVILEGE_SET v27; // rcx
  PPRIVILEGE_SET v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *UnitOfWork; // rax
  char v38; // [rsp+51h] [rbp-AFh]
  char v39; // [rsp+52h] [rbp-AEh]
  unsigned int v40; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v41; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  void **v46; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v48[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF

  v50 = a6;
  v51 = a4;
  v52 = a3;
  v49 = a2;
  v41 = 0LL;
  WORD1(v41) = -1;
  v40 = 0;
  v7 = 0;
  v46 = 0LL;
  v8 = 0;
  v47 = 0LL;
  v9 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v43 = 0;
  v10 = 0LL;
  v45 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v38 = 0;
  v44 = 0;
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextInitialize(&v47);
  v48[0] = v48;
  v48[1] = v48;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    v39 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
    if ( !v39 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v16, v15, v17);
    else
      CmpLockRegistry(v16);
    v18 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_56:
      started = -1073741790;
      goto LABEL_41;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v41, v18);
    if ( started < 0 )
      goto LABEL_41;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v41);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_41;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v45);
      if ( started < 0 )
        goto LABEL_41;
      started = CmpPerformKeyBodyDeletionCheck(a1, v45);
      if ( started < 0 )
        goto LABEL_41;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v18 + 32) + 4112LL) & 0x20) != 0 )
      goto LABEL_56;
    if ( !*(_WORD *)(v18 + 66) || *(_BYTE *)(v18 + 65) || v7 )
    {
      v20 = v45;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask(*v49, &v43);
        started = CmpCheckKcbStackAccess((__int64)&v41, v20);
        if ( started < 0 )
          goto LABEL_41;
      }
      if ( *(_WORD *)(v18 + 66) )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v18, 0LL) )
        {
          started = CmpPromoteKey((__int64)&v41, 1, 0);
          if ( started < 0 )
            goto LABEL_41;
          started = CmpPartialPromoteSubkeys((__int64)&v41);
          if ( started < 0 )
            goto LABEL_41;
        }
      }
      if ( v20 )
      {
        v31 = *(unsigned int *)(*(_QWORD *)(v18 + 32) + 160LL);
        if ( (v31 & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v31);
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v18);
            started = CmpTransEnlistUowInCmTrans(v10, v20);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v18 + 248, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v18 + 264, v10, 1LL) )
              {
LABEL_23:
                if ( !v38 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v18 + 32));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v18 + 32));
                }
                started = CmpSetSecurityDescriptorInfo(
                            v18,
                            (_DWORD)v49,
                            v52,
                            v51,
                            a5,
                            v50,
                            v20,
                            (__int64)v10,
                            (__int64)&SubjectContext);
                v22 = v8;
                if ( started >= 0 )
                {
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v18 + 32));
                    v22 = 0;
                  }
                  if ( *(_WORD *)(v18 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v18, 0LL) )
                  {
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v18, (unsigned int *)&v47, v8);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    v33 = *(_QWORD *)(v18 + 32);
                    if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v33, (__int64)&v47);
                    else
                      HvpReleaseCellPaged(v33, (unsigned int *)&v47);
                    *(_BYTE *)(v18 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v18 + 32));
                    v8 = 0;
                  }
                  v23 = SWORD1(v41) < 2;
                  _mm_lfence();
                  if ( v23 )
                    v24 = Privileges[SWORD1(v41) - 1];
                  else
                    v24 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v41) - 2);
                  CmpReportNotifyHelper(
                    (__int64)&v41,
                    *(_QWORD *)&v24[1].Privilege[0].Luid.HighPart,
                    v45,
                    10,
                    (__int64)v48);
                  if ( *(_QWORD *)&v24[1].Privilege[0].Luid.HighPart != CmpMasterHive )
                    CmpReportNotifyHelper((__int64)&v41, CmpMasterHive, v45, 10, (__int64)v48);
                  started = 0;
                }
                if ( v22 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v18 + 32));
                if ( v8 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v18 + 32));
                if ( !v10 )
                  goto LABEL_41;
              }
              else
              {
                started = -1072103423;
              }
            }
            CmpRundownUnitOfWork(v10);
            ExFreePoolWithTag(v10, 0x77554D43u);
          }
          else
          {
            started = -1073741670;
          }
        }
LABEL_41:
        v25 = 1;
        goto LABEL_42;
      }
      v21 = v18 + 248;
      if ( !*(_DWORD *)(v18 + 248) )
      {
        v21 = v18 + 264;
        if ( !*(_DWORD *)(v18 + 264) )
          goto LABEL_23;
      }
      v26 = 0;
      started = CmpSnapshotTxOwnerArray(v21, &v40, &v46);
      if ( started < 0 )
        goto LABEL_41;
      if ( v9 )
      {
        CmpUnlockKcbStack((__int64)&v41);
        v9 = 0;
      }
      CmpCleanupKcbStack((__int64)&v41);
      v41 = 0LL;
      WORD1(v41) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v34);
      v25 = 0;
      CmpReleaseShutdownRundown(v35);
      started = CmpRollbackTransactionArray(v40, v46, v36, (__int64)&v44);
      if ( started < 0 )
        goto LABEL_45;
      v7 = v38;
    }
    else
    {
      v7 = 1;
      v38 = 1;
      CmpUnlockKcbStack((__int64)&v41);
      v29 = Privileges[1];
      v9 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v41 = 0LL;
      WORD1(v41) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v29);
      CmpReleaseShutdownRundown(v30);
    }
  }
  started = -1073741431;
  v25 = 0;
LABEL_42:
  if ( v9 )
    CmpUnlockKcbStack((__int64)&v41);
  v26 = v39;
LABEL_45:
  v27 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v25 )
    CmpUnlockRegistry(v27);
  if ( v48[0] != v48 )
    CmpSignalDeferredPosts(v48);
  if ( v26 )
    CmpReleaseShutdownRundown(v27);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
