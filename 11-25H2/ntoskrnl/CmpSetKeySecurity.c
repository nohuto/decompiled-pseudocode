/*
 * XREFs of CmpSetKeySecurity @ 0x140977054
 * Callers:
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047F774 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404838EC (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpCheckKcbStackAccess @ 0x1406EC908 (CmpCheckKcbStackAccess.c)
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     CmpAllocateUnitOfWork @ 0x14086901C (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140869120 (CmpLockIXLockExclusive.c)
 *     CmpSnapshotTxOwnerArray @ 0x14086AED4 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x14086AFEC (CmpRollbackTransactionArray.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14086D4B0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     CmLockHiveSecurityExclusive @ 0x14088709C (CmLockHiveSecurityExclusive.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpCleanupKcbStack @ 0x140975FA0 (CmpCleanupKcbStack.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityAccessMask @ 0x140A14060 (SeSetSecurityAccessMask.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmUnlockHiveSecurity @ 0x140BA9AB8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, unsigned int *a2, size_t a3, ULONG_PTR a4, int a5, __int64 a6)
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
  char v18; // di
  __int64 v19; // r12
  __int64 v20; // rcx
  char v21; // r14
  bool v22; // cc
  PPRIVILEGE_SET v23; // rbx
  char v24; // r12
  PPRIVILEGE_SET v25; // rcx
  PPRIVILEGE_SET v27; // rcx
  __int64 v28; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *UnitOfWork; // rax
  char v35; // [rsp+51h] [rbp-AFh]
  char v36; // [rsp+52h] [rbp-AEh]
  unsigned int v37; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v38; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  void **v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v45[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v48; // [rsp+B8h] [rbp-48h]
  size_t v49; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF

  v47 = a6;
  v48 = a4;
  v49 = a3;
  v46 = a2;
  v38 = 0LL;
  WORD1(v38) = -1;
  v37 = 0;
  v7 = 0;
  v43 = 0LL;
  v8 = 0;
  v44 = 0LL;
  v9 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v40 = 0;
  v10 = 0LL;
  v42 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v35 = 0;
  v41 = 0;
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextInitialize(&v44);
  v45[0] = v45;
  v45[1] = v45;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    while ( 1 )
    {
      v36 = CmpAcquireShutdownRundown(v12, v11, v13, v14);
      if ( !v36 )
      {
        started = -1073741431;
        v18 = 0;
        goto LABEL_43;
      }
      if ( v7 )
        CmpLockRegistryExclusive();
      else
        CmpLockRegistry(v15);
      v16 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 160LL) & 0x100000) != 0 )
        goto LABEL_56;
      started = CmpStartKcbStackForTopLayerKcb((__int64)&v38, v16);
      if ( started < 0 )
        goto LABEL_42;
      if ( !v7 )
      {
        CmpLockKcbStackTopExclusiveRestShared((__int64)&v38);
        v9 = 1;
      }
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started < 0 )
        goto LABEL_42;
      if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
      {
        started = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v42);
        if ( started < 0 )
          goto LABEL_42;
        started = CmpPerformKeyBodyDeletionCheck(a1, v42);
        if ( started < 0 )
          goto LABEL_42;
      }
      if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 4112LL) & 0x20) != 0 )
      {
LABEL_56:
        started = -1073741790;
        goto LABEL_42;
      }
      if ( !*(_WORD *)(v16 + 66) || *(_BYTE *)(v16 + 65) || v7 )
        break;
      v7 = 1;
      v35 = 1;
      CmpUnlockKcbStack((__int64)&v38);
      v27 = Privileges[1];
      v9 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v38 = 0LL;
      WORD1(v38) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v27);
      CmpReleaseShutdownRundown(v28);
    }
    v19 = v42;
    if ( *(_WORD *)(a1 + 4) )
    {
      SeSetSecurityAccessMask(*v46, &v40);
      started = CmpCheckKcbStackAccess((__int64)&v38, v19);
      if ( started < 0 )
        goto LABEL_42;
    }
    if ( *(_WORD *)(v16 + 66) )
    {
      if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) )
      {
        started = CmpPromoteKey((__int64)&v38, 1, 0);
        if ( started < 0 )
          goto LABEL_42;
        started = CmpPartialPromoteSubkeys((__int64)&v38);
        if ( started < 0 )
          goto LABEL_42;
      }
    }
    if ( v19 )
      break;
    v20 = v16 + 248;
    if ( !*(_DWORD *)(v16 + 248) )
    {
      v20 = v16 + 264;
      if ( !*(_DWORD *)(v16 + 264) )
        goto LABEL_24;
    }
    v24 = 0;
    started = CmpSnapshotTxOwnerArray(v20, &v37, &v43);
    if ( started < 0 )
      goto LABEL_42;
    if ( v9 )
    {
      CmpUnlockKcbStack((__int64)&v38);
      v9 = 0;
    }
    CmpCleanupKcbStack((__int64)&v38);
    v38 = 0LL;
    WORD1(v38) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v31);
    v18 = 0;
    CmpReleaseShutdownRundown(v32);
    started = CmpRollbackTransactionArray(v37, v43, v33, (__int64)&v41);
    if ( started < 0 )
      goto LABEL_46;
    v7 = v35;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 160LL) & 2) != 0 )
  {
    started = -1072103423;
    goto LABEL_42;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v10 = UnitOfWork;
  if ( UnitOfWork )
  {
    CmpTransEnlistUowInKcb(UnitOfWork, v16);
    started = CmpTransEnlistUowInCmTrans(v10, v19);
    if ( started >= 0 )
    {
      if ( CmpLockIXLockExclusive(v16 + 248, (__int64)v10, 0) && CmpLockIXLockExclusive(v16 + 264, (__int64)v10, 1) )
      {
LABEL_24:
        if ( !v35 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v16 + 32));
          v8 = 1;
          CmLockHiveSecurityExclusive(*(_QWORD *)(v16 + 32));
        }
        started = CmpSetSecurityDescriptorInfo(v16, v46, v49, v48, a5, v47, v19, (__int64)v10, &SubjectContext);
        v21 = v8;
        if ( started >= 0 )
        {
          v10 = 0LL;
          if ( v8 )
          {
            CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
            v21 = 0;
          }
          if ( *(_WORD *)(v16 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v16, (unsigned int *)&v44, v8);
            *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
            v30 = *(_QWORD *)(v16 + 32);
            if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v30, &v44);
            else
              HvpReleaseCellPaged(v30, (unsigned int *)&v44);
            *(_BYTE *)(v16 + 65) = 2;
          }
          if ( v8 )
          {
            HvUnlockHiveFlusherShared(*(_QWORD *)(v16 + 32));
            v8 = 0;
          }
          v22 = SWORD1(v38) < 2;
          _mm_lfence();
          if ( v22 )
            v23 = Privileges[SWORD1(v38) - 1];
          else
            v23 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v38) - 2);
          CmpReportNotifyHelper((__int64)&v38, *(_QWORD *)&v23[1].Privilege[0].Luid.HighPart, v42, 10, (__int64)v45);
          if ( *(_QWORD *)&v23[1].Privilege[0].Luid.HighPart != CmpMasterHive )
            CmpReportNotifyHelper((__int64)&v38, CmpMasterHive, v42, 10, (__int64)v45);
          started = 0;
        }
        if ( v21 )
          CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
        if ( v8 )
          HvUnlockHiveFlusherShared(*(_QWORD *)(v16 + 32));
        if ( !v10 )
          goto LABEL_42;
      }
      else
      {
        started = -1072103423;
      }
    }
    CmpRundownUnitOfWork(v10);
    ExFreePoolWithTag(v10, 0x77554D43u);
    goto LABEL_42;
  }
  started = -1073741670;
LABEL_42:
  v18 = 1;
LABEL_43:
  if ( v9 )
    CmpUnlockKcbStack((__int64)&v38);
  v24 = v36;
LABEL_46:
  v25 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v18 )
    CmpUnlockRegistry(v25);
  if ( v45[0] != v45 )
    CmpSignalDeferredPosts(v45);
  if ( v24 )
    CmpReleaseShutdownRundown(v25);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
