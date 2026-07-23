/*
 * XREFs of CmpPerformUnloadKey @ 0x140963D3C
 * Callers:
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     TmRollbackEnlistment @ 0x1404F9F70 (TmRollbackEnlistment.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     CmpUnfreezeHive @ 0x1407DADE8 (CmpUnfreezeHive.c)
 *     CmpInvalidateSubtree @ 0x1407DB530 (CmpInvalidateSubtree.c)
 *     CmObliterateRMTxArray @ 0x1407DE59C (CmObliterateRMTxArray.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpTransDereferenceTransaction @ 0x14087D58C (CmpTransDereferenceTransaction.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     CmpLogUnsupportedOperation @ 0x140963320 (CmpLogUnsupportedOperation.c)
 *     CmSnapshotRMTxArray @ 0x140963404 (CmSnapshotRMTxArray.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14096360C (CmpTryAcquireKcbIXLocks.c)
 *     CmpCleanupRollbackPacket @ 0x140964460 (CmpCleanupRollbackPacket.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1409644C4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140964588 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmShutdownCmRM @ 0x140A00C24 (CmShutdownCmRM.c)
 *     CmpRollbackLightWeightTransaction @ 0x140A026E8 (CmpRollbackLightWeightTransaction.c)
 *     CmpFreezeHive @ 0x140AA0194 (CmpFreezeHive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  char v5; // bl
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r13
  int v12; // edi
  bool v13; // cc
  PPRIVILEGE_SET v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // rbx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rax
  void *v36; // rdi
  __int64 v37; // rax
  void *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rbx
  NTSTATUS v44; // r14d
  __int64 v45; // rbx
  NTSTATUS v46; // r14d
  __int64 v47; // rbx
  NTSTATUS v48; // r14d
  signed __int32 v49[8]; // [rsp+0h] [rbp-B9h] BYREF
  char v50; // [rsp+40h] [rbp-79h]
  int v51; // [rsp+44h] [rbp-75h] BYREF
  char v52; // [rsp+48h] [rbp-71h]
  __int128 v53; // [rsp+50h] [rbp-69h] BYREF
  __int128 v54; // [rsp+60h] [rbp-59h] BYREF
  __int128 v55; // [rsp+70h] [rbp-49h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+80h] [rbp-39h]
  __int128 v57; // [rsp+90h] [rbp-29h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-11h] BYREF

  v58 = a4;
  *((_QWORD *)&v54 + 1) = &v54;
  v5 = 0;
  *(_QWORD *)&v54 = &v54;
  v50 = 0;
  v55 = 0LL;
  WORD1(v55) = -1;
  memset(&ApcState, 0, sizeof(ApcState));
  v57 = 0LL;
  v53 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeDelayDerefContext(&v57);
  LOCK_HIVE_LOAD();
  LOBYTE(v8) = 1;
  CmpLockRegistryFreezeAware(v8);
  v10 = *(_QWORD *)(a1 + 8);
  v51 = 6;
  v11 = *(_QWORD *)(v10 + 32);
  if ( (*(_DWORD *)(v10 + 8) & 0x80u) != 0 )
  {
    v12 = -1073741790;
    goto LABEL_41;
  }
  v12 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v12 < 0 )
    goto LABEL_41;
  if ( (*(_DWORD *)(v10 + 8) & 0x40000) != 0 )
  {
    v12 = -1073740763;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(v11 + 2944) && ((a2 & 1) == 0 || (*(_DWORD *)(v11 + 4112) & 0x20) == 0) )
  {
    v12 = -1073741431;
    goto LABEL_41;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)&v55, v10) < 0 )
  {
    v12 = -1073741670;
    goto LABEL_41;
  }
  v13 = SWORD1(v55) < 2;
  _mm_lfence();
  if ( v13 )
    v14 = Privileges[SWORD1(v55) - 1];
  else
    v14 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v55) - 2);
  CmpReportNotifyHelper((__int64)&v55, *(_QWORD *)&v14[1].Privilege[0].Luid.HighPart, 0LL, 4, (__int64)&v54);
  v16 = CmpMasterHive;
  if ( *(_QWORD *)&v14[1].Privilege[0].Luid.HighPart != CmpMasterHive )
    CmpReportNotifyHelper((__int64)&v55, CmpMasterHive, 0LL, 4, (__int64)&v54);
  v17 = *(_QWORD *)(a1 + 16);
  if ( v17 )
  {
    if ( *(_QWORD *)(v17 + 16) != v17 + 16 )
      CmpPostNotify(v17, v16, v15, 0x10Bu, 0, 0LL, &v54);
    v18 = *(char **)(a1 + 16);
    if ( v18 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v18 + 56));
      **((_QWORD **)v18 + 1) = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
        *(_QWORD *)(*(_QWORD *)v18 + 8LL) = *((_QWORD *)v18 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      ExFreePoolWithTag(v18, 0);
    }
  }
  v9 = *(_QWORD *)(v10 + 32);
  if ( v9 == CmpMasterHive || (*(_DWORD *)(v10 + 184) & 0x40000) == 0 )
  {
    v12 = -1073741811;
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(v9 + 4112) & 4) != 0 )
  {
    v12 = -1073741790;
    goto LABEL_40;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !(unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v10) && *(_QWORD *)v10 == 2LL )
    {
LABEL_23:
      *(_DWORD *)(v10 + 8) |= 0x40000u;
      v19 = *(_BYTE *)(v11 + 2944) == 1;
      v50 = 1;
      if ( v19 )
      {
        CmpUnfreezeHive(v11);
        ++CmpActiveAppHiveUnloadCount;
      }
      CmpDrainDelayDerefContext((_QWORD **)&v57);
      CmpUnlockRegistry(v20);
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v11 + 1640));
      _InterlockedExchange64((volatile __int64 *)(v11 + 1640), 1LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v21) = 1;
      CmpLockRegistryFreezeAware(v21);
      v22 = *(_QWORD *)(v11 + 4152);
      v51 = 6;
      if ( !v22 )
        goto LABEL_26;
      v12 = CmSnapshotRMTxArray(v22, (unsigned int *)&v53);
      if ( v12 < 0 )
      {
LABEL_40:
        v5 = v50;
        goto LABEL_41;
      }
      CmpLogTransactionAbortedWithChildName(v10, 0LL, 9, v32, v53);
      CmpUnlockRegistry(v33);
      UNLOCK_HIVE_LOAD();
      v51 = 0;
      v12 = 0;
      v34 = 0LL;
      v52 = 0;
      if ( !(_DWORD)v53 )
      {
LABEL_53:
        if ( v12 >= 0 )
        {
          CmpCleanupRollbackPacket(&v53);
          v53 = 0LL;
          if ( v52 )
            CmObliterateRMTxArray(*(_QWORD *)(v11 + 4152));
          LOCK_HIVE_LOAD();
          v35 = *(_QWORD *)(v11 + 4152);
          v36 = 0LL;
          if ( v35 && *(_DWORD *)(v35 + 64) == 1 )
          {
            v36 = *(void **)(v35 + 48);
            *(_QWORD *)(v35 + 48) = 0LL;
          }
          v37 = *(_QWORD *)(v11 + 4152);
          v38 = 0LL;
          if ( v37 && *(_DWORD *)(v37 + 64) == 1 )
          {
            v38 = *(void **)(v37 + 32);
            *(_QWORD *)(v37 + 32) = 0LL;
          }
          UNLOCK_HIVE_LOAD();
          if ( v36 )
            ZwClose(v36);
          if ( v38 )
            ZwClose(v38);
          LOCK_HIVE_LOAD();
          LOBYTE(v39) = 1;
          CmShutdownCmRM(*(_QWORD *)(v11 + 4152), v39);
          LOBYTE(v40) = 1;
          CmpLockRegistryFreezeAware(v40);
          v51 = 6;
LABEL_26:
          CmpAttachToRegistryProcess(&ApcState);
          CmpCompleteUnloadKey(v10, v23, &v51);
          CmpDetachFromRegistryProcess(&ApcState);
          v12 = 0;
LABEL_27:
          if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v49, 0);
            if ( CmpActiveHiveRundownEvent )
              ExfUnblockPushLock((__int64)&CmpActiveHiveRundownEvent, 0LL);
          }
          goto LABEL_30;
        }
        goto LABEL_40;
      }
      while ( 1 )
      {
        v47 = *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v34);
        if ( v47 )
          break;
LABEL_129:
        v34 = (unsigned int)(v34 + 1);
        if ( (unsigned int)v34 >= (unsigned int)v53 )
          goto LABEL_53;
      }
      if ( (v47 & 1) != 0 )
      {
        v48 = CmpRollbackLightWeightTransaction(v47 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( v48 >= 0 )
        {
          CmpTransDereferenceTransaction(v47);
          v9 = *((_QWORD *)&v53 + 1);
          *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v34) = 0LL;
LABEL_126:
          if ( v12 >= 0 && v48 < 0 )
            v12 = v48;
          goto LABEL_129;
        }
      }
      else
      {
        v48 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v53 + 1) + 8 * v34), 0LL);
        if ( v48 >= 0 )
        {
          ObfDereferenceObject((PVOID)v47);
          *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v34) = 0LL;
          goto LABEL_126;
        }
      }
      if ( v48 == -1072103403 || v48 == -1072103405 || v48 == -1072103402 )
      {
        v48 = 0;
        v52 = 1;
      }
      goto LABEL_126;
    }
    if ( a3 )
    {
      v12 = CmpFreezeHive(v10, v58);
      if ( v12 >= 0 )
      {
        v12 = 259;
        goto LABEL_30;
      }
      goto LABEL_40;
    }
LABEL_64:
    v12 = -1073741535;
    goto LABEL_40;
  }
  v25 = *(_QWORD *)(v10 + 192);
  if ( v25 && *(_QWORD *)(v25 + 32) != v25 + 32 )
  {
    CmpLogUnsupportedOperation(3);
    goto LABEL_64;
  }
  v26 = CmpTryAcquireKcbIXLocks(v10, 1, v15, (unsigned int *)&v53);
  v12 = v26;
  if ( v26 != -1073741267 )
  {
    if ( v26 < 0 )
      goto LABEL_40;
    v28 = CmpPrepareForSubtreeInvalidation(v10, 0LL, &v53);
    v12 = v28;
    if ( v28 != -1073741267 )
    {
      if ( v28 < 0 )
        goto LABEL_40;
      CmpInvalidateSubtree(v10, 1LL, 1, (__int64)&v57, 0LL);
      CmpFlushNotifiesOnKeyBodyList(v10, 1, (__int64)&v57, 1);
      goto LABEL_23;
    }
    CmpLogTransactionAbortedWithChildName(v10, 0LL, 10, v29, v53);
    CmpUnlockRegistry(v30);
    UNLOCK_HIVE_LOAD();
    v51 = 0;
    v12 = 0;
    v31 = 0LL;
    if ( !(_DWORD)v53 )
    {
LABEL_49:
      if ( v12 >= 0 )
        v12 = -1073741267;
      goto LABEL_40;
    }
    while ( 1 )
    {
      v45 = *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v31);
      if ( v45 )
        break;
LABEL_118:
      v31 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v31 >= (unsigned int)v53 )
        goto LABEL_49;
    }
    if ( (v45 & 1) != 0 )
    {
      v46 = CmpRollbackLightWeightTransaction(v45 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v46 >= 0 )
      {
        CmpTransDereferenceTransaction(v45);
        v9 = *((_QWORD *)&v53 + 1);
        *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v31) = 0LL;
LABEL_115:
        if ( v12 >= 0 && v46 < 0 )
          v12 = v46;
        goto LABEL_118;
      }
    }
    else
    {
      v46 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v53 + 1) + 8 * v31), 0LL);
      if ( v46 >= 0 )
      {
        ObfDereferenceObject((PVOID)v45);
        *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v31) = 0LL;
        goto LABEL_115;
      }
    }
    if ( v46 == -1072103403 || v46 == -1072103405 || v46 == -1072103402 )
      v46 = 0;
    goto LABEL_115;
  }
  CmpLogTransactionAbortedWithChildName(v10, 0LL, 10, v27, v53);
  CmpUnlockRegistry(v41);
  UNLOCK_HIVE_LOAD();
  v51 = 0;
  v12 = 0;
  v42 = 0LL;
  if ( (_DWORD)v53 )
  {
    while ( 1 )
    {
      v43 = *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v42);
      if ( v43 )
        break;
LABEL_107:
      v42 = (unsigned int)(v42 + 1);
      if ( (unsigned int)v42 >= (unsigned int)v53 )
        goto LABEL_66;
    }
    if ( (v43 & 1) != 0 )
    {
      v44 = CmpRollbackLightWeightTransaction(v43 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v44 >= 0 )
      {
        CmpTransDereferenceTransaction(v43);
        v9 = *((_QWORD *)&v53 + 1);
        *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v42) = 0LL;
LABEL_104:
        if ( v12 >= 0 && v44 < 0 )
          v12 = v44;
        goto LABEL_107;
      }
    }
    else
    {
      v44 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v53 + 1) + 8 * v42), 0LL);
      if ( v44 >= 0 )
      {
        ObfDereferenceObject((PVOID)v43);
        *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v42) = 0LL;
        goto LABEL_104;
      }
    }
    if ( v44 == -1072103403 || v44 == -1072103405 || v44 == -1072103402 )
      v44 = 0;
    goto LABEL_104;
  }
LABEL_66:
  v5 = v50;
  if ( v12 >= 0 )
    v12 = -1073741267;
LABEL_41:
  if ( (v51 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v51 |= 4u;
  }
  if ( (v51 & 2) == 0 )
  {
    LOBYTE(v9) = 1;
    CmpLockRegistryFreezeAware(v9);
    v51 |= 2u;
  }
  if ( v5 )
  {
    _InterlockedExchange64((volatile __int64 *)(v11 + 1640), 0LL);
    *(_DWORD *)(v10 + 8) &= ~0x40000u;
    goto LABEL_27;
  }
LABEL_30:
  if ( (v51 & 2) != 0 )
    CmpUnlockRegistry(v9);
  if ( (v51 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (__int128 *)v54 != &v54 )
    CmpSignalDeferredPosts((_QWORD **)&v54);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v53);
  return (unsigned int)v12;
}
