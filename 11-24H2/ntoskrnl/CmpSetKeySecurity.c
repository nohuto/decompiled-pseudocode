/*
 * XREFs of CmpSetKeySecurity @ 0x140830A20
 * Callers:
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047B08C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14047F6A0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpCheckKcbStackAccess @ 0x1406F6094 (CmpCheckKcbStackAccess.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     CmpSnapshotTxOwnerArray @ 0x140870400 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x140870518 (CmpRollbackTransactionArray.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmLockHiveSecurityExclusive @ 0x14088427C (CmLockHiveSecurityExclusive.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140908010 (CmpGetEffectiveKcbSemantics.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     SeSetSecurityAccessMask @ 0x140A12CE8 (SeSetSecurityAccessMask.c)
 *     CmpAllocateUnitOfWork @ 0x140A230A0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A230F8 (CmpLockIXLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
  __int64 v15; // rcx
  ULONG_PTR v16; // rdi
  int started; // ebx
  __int64 v18; // r12
  ULONG_PTR v19; // rcx
  char v20; // r14
  bool v21; // cc
  PPRIVILEGE_SET v22; // rbx
  char v23; // di
  char v24; // r12
  PPRIVILEGE_SET v25; // rcx
  PPRIVILEGE_SET v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 KeyNodeForKcb; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *UnitOfWork; // rax
  int v38; // [rsp+20h] [rbp-E0h]
  char v39; // [rsp+51h] [rbp-AFh]
  char v40; // [rsp+52h] [rbp-AEh]
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v42; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-98h]
  int v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v49[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF

  v51 = a6;
  v52 = a4;
  v53 = a3;
  v50 = a2;
  v42 = 0LL;
  WORD1(v42) = -1;
  v41 = 0;
  v7 = 0;
  v47 = 0LL;
  v8 = 0;
  v48 = 0LL;
  v9 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v44 = 0;
  v10 = 0LL;
  v46 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v39 = 0;
  v45 = 0;
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextInitialize(&v48);
  v49[0] = v49;
  v49[1] = v49;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    v40 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
    if ( !v40 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v15);
    else
      CmpLockRegistry(v15);
    v16 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_56:
      started = -1073741790;
      goto LABEL_41;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v42, v16);
    if ( started < 0 )
      goto LABEL_41;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v42);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_41;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v46);
      if ( started < 0 )
        goto LABEL_41;
      started = CmpPerformKeyBodyDeletionCheck(a1, v46);
      if ( started < 0 )
        goto LABEL_41;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 4112LL) & 0x20) != 0 )
      goto LABEL_56;
    if ( !*(_WORD *)(v16 + 66) || *(_BYTE *)(v16 + 65) || v7 )
    {
      v18 = v46;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask(*v50, &v44);
        LOBYTE(v38) = 0;
        started = CmpCheckKcbStackAccess((__int64)&v42, v18);
        if ( started < 0 )
          goto LABEL_41;
      }
      if ( *(_WORD *)(v16 + 66) )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) )
        {
          LOBYTE(v29) = 1;
          started = CmpPromoteKey(&v42, v29, 0LL);
          if ( started < 0 )
            goto LABEL_41;
          started = CmpPartialPromoteSubkeys((__int64)&v42);
          if ( started < 0 )
            goto LABEL_41;
        }
      }
      if ( v18 )
      {
        v30 = *(unsigned int *)(*(_QWORD *)(v16 + 32) + 160LL);
        if ( (v30 & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v30);
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v16);
            started = CmpTransEnlistUowInCmTrans(v10, v18);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v16 + 248, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v16 + 264, v10, 1LL) )
              {
LABEL_23:
                if ( !v39 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v16 + 32));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v16 + 32));
                }
                started = CmpSetSecurityDescriptorInfo(
                            v16,
                            (_DWORD)v50,
                            v53,
                            v52,
                            a5,
                            v51,
                            v18,
                            (__int64)v10,
                            (__int64)&SubjectContext);
                v20 = v8;
                if ( started >= 0 )
                {
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
                    v20 = 0;
                  }
                  if ( *(_WORD *)(v16 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) )
                  {
                    LOBYTE(v31) = v8;
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v16, &v48, v31);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    v33 = *(_QWORD *)(v16 + 32);
                    if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v33, &v48);
                    else
                      HvpReleaseCellPaged(v33, &v48);
                    *(_BYTE *)(v16 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v16 + 32));
                    v8 = 0;
                  }
                  v21 = SWORD1(v42) < 2;
                  _mm_lfence();
                  if ( v21 )
                    v22 = Privileges[SWORD1(v42) - 1];
                  else
                    v22 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v42) - 2);
                  CmpReportNotifyHelper(
                    (unsigned int)&v42,
                    *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart,
                    v46,
                    10,
                    (__int64)v49);
                  if ( *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart != CmpMasterHive )
                    CmpReportNotifyHelper((unsigned int)&v42, CmpMasterHive, v46, 10, (__int64)v49);
                  started = 0;
                }
                if ( v20 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
                if ( v8 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v16 + 32));
                if ( !v10 )
                  goto LABEL_41;
              }
              else
              {
                started = -1072103423;
              }
            }
            CmpRundownUnitOfWork((ULONG_PTR)v10);
            ExFreePoolWithTag(v10, 0x77554D43u);
          }
          else
          {
            started = -1073741670;
          }
        }
LABEL_41:
        v23 = 1;
        goto LABEL_42;
      }
      v19 = v16 + 248;
      if ( !*(_DWORD *)(v16 + 248) )
      {
        v19 = v16 + 264;
        if ( !*(_DWORD *)(v16 + 264) )
          goto LABEL_23;
      }
      v24 = 0;
      started = CmpSnapshotTxOwnerArray(v19, &v41, &v47);
      if ( started < 0 )
        goto LABEL_41;
      if ( v9 )
      {
        CmpUnlockKcbStack(&v42);
        v9 = 0;
      }
      CmpCleanupKcbStack(&v42);
      v42 = 0LL;
      WORD1(v42) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v34);
      v23 = 0;
      CmpReleaseShutdownRundown(v35);
      started = CmpRollbackTransactionArray(v41, v47, v36, &v45, v38);
      if ( started < 0 )
        goto LABEL_45;
      v7 = v39;
    }
    else
    {
      v7 = 1;
      v39 = 1;
      CmpUnlockKcbStack(&v42);
      v27 = Privileges[1];
      v9 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v42 = 0LL;
      WORD1(v42) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v27);
      CmpReleaseShutdownRundown(v28);
    }
  }
  started = -1073741431;
  v23 = 0;
LABEL_42:
  if ( v9 )
    CmpUnlockKcbStack(&v42);
  v24 = v40;
LABEL_45:
  v25 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v23 )
    CmpUnlockRegistry(v25);
  if ( (_QWORD *)v49[0] != v49 )
    CmpSignalDeferredPosts(v49);
  if ( v24 )
    CmpReleaseShutdownRundown(v25);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
