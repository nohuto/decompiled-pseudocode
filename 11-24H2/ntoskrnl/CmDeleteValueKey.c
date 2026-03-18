/*
 * XREFs of CmDeleteValueKey @ 0x14086D078
 * Callers:
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14048052C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x140484100 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140790124 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpGetValueForAudit @ 0x1407E3450 (CmpGetValueForAudit.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140869130 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     HvUnlockHiveFlusherShared @ 0x14086A604 (HvUnlockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086A638 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpSignalDeferredPosts @ 0x14086A690 (CmpSignalDeferredPosts.c)
 *     CmpSnapshotTxOwnerArray @ 0x14086C0D0 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x14086C1E8 (CmpRollbackTransactionArray.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086C494 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x14086C510 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086DD20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14086E6E0 (CmpUnlockKcbStack.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140879368 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14087B024 (CmpRundownUnitOfWork.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087E570 (CmpDelayDerefKeyControlBlock.c)
 *     CmpMarkValueDataDirty @ 0x140880248 (CmpMarkValueDataDirty.c)
 *     CmpFreeValue @ 0x14088092C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1408809D4 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpIsValueTombstone @ 0x140914310 (CmpIsValueTombstone.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1409145A0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpCleanupKcbStack @ 0x1409172A0 (CmpCleanupKcbStack.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14097ACC8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1409880D8 (CmpPromoteKey.c)
 *     CmpRemoveValueFromList @ 0x1409FF414 (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x140A05328 (CmAddLogForAction.c)
 *     CmpLockIXLockIntent @ 0x140A2E5B4 (CmpLockIXLockIntent.c)
 *     CmpAllocateUnitOfWork @ 0x140A2E660 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A2E6B8 (CmpLockIXLockExclusive.c)
 *     CmpCloneKCBValueListForTrans @ 0x140A4187C (CmpCloneKCBValueListForTrans.c)
 *     CmpSetValueKeyTombstone @ 0x140AADCF4 (CmpSetValueKeyTombstone.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BB9A84 (CmpIsShutdownRundownActive.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  char v4; // r15
  __int64 v5; // r12
  _QWORD *v6; // r13
  ULONG_PTR v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int started; // edi
  char v12; // r14
  __int64 v13; // r14
  __int64 v14; // rcx
  __int16 v15; // r12
  __int64 v16; // r9
  PPRIVILEGE_SET v17; // r14
  ULONG_PTR PrivilegeCount; // rdx
  ULONG_PTR v19; // rcx
  __int64 CellFlat; // rax
  int v21; // eax
  __int64 v22; // rcx
  bool v23; // zf
  PPRIVILEGE_SET v24; // rdi
  unsigned int v25; // r12d
  ULONG_PTR v26; // rcx
  __int64 CellPaged; // rax
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r14
  ULONG_PTR v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // r8d
  ULONG_PTR v35; // rcx
  ULONG_PTR v36; // rcx
  ULONG_PTR v37; // rdx
  PPRIVILEGE_SET v38; // rdi
  ULONG_PTR v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r14
  int v43; // ecx
  bool v44; // cc
  PPRIVILEGE_SET v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rcx
  void *v48; // rbx
  __int64 v50; // r8
  int v51; // eax
  _QWORD *UnitOfWork; // rax
  int NameInListWithStatus; // eax
  __int64 v54; // rcx
  _QWORD *v55; // rcx
  unsigned int v56; // ebx
  PPRIVILEGE_SET v57; // rcx
  __int64 v58; // r8
  int v59; // eax
  unsigned __int16 *v60; // r12
  unsigned int v61; // eax
  ULONG_PTR v62; // rdx
  ULONG_PTR v63; // rcx
  __int64 v64; // rax
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *Pool; // rax
  __int64 v67; // r14
  __int64 v68; // rcx
  char v69; // [rsp+40h] [rbp-C0h]
  char v70; // [rsp+41h] [rbp-BFh] BYREF
  char v71; // [rsp+42h] [rbp-BEh]
  __int64 v72; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+50h] [rbp-B0h]
  PPRIVILEGE_SET v74; // [rsp+58h] [rbp-A8h]
  _QWORD *v75; // [rsp+60h] [rbp-A0h]
  unsigned int v76; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v77[3]; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v78; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-80h] BYREF
  __int64 v80; // [rsp+88h] [rbp-78h] BYREF
  __int128 v81; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+A0h] [rbp-60h]
  int v83; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-48h] BYREF
  void *v85; // [rsp+C0h] [rbp-40h]
  void **v86; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v87; // [rsp+D0h] [rbp-30h]
  _QWORD *v88[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v89; // [rsp+E8h] [rbp-18h]
  __int128 v90; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v91[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0;
  v73 = a1;
  v71 = a4;
  v89 = a3;
  v88[1] = v88;
  v5 = a1;
  v87 = a2;
  v88[0] = v88;
  v76 = 0;
  v81 = 0LL;
  WORD1(v81) = -1;
  v6 = 0LL;
  v86 = 0LL;
  v7 = 0LL;
  v80 = 0LL;
  v84 = 0LL;
  v72 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v75 = 0LL;
  v70 = 0;
  v83 = 0;
  v90 = 0LL;
  *(_QWORD *)&v77[1] = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v78 = 0LL;
  HvpGetCellContextInitialize(&v80);
  HvpGetCellContextInitialize(&v84);
  v74 = 0LL;
  HvpGetCellContextInitialize(&v72);
  LODWORD(BugCheckParameter4) = -1;
  v77[0] = -1;
  CmpInitializeDelayDerefContext(&v90);
  v85 = 0LL;
  memset(v91, 0, sizeof(v91));
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v8) )
    {
      started = -1073741431;
      v69 = 0;
LABEL_130:
      v12 = 0;
      goto LABEL_68;
    }
    v10 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v9);
    v7 = *(_QWORD *)(v5 + 8);
    v69 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_130;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v81, v7);
    if ( started < 0 )
      goto LABEL_130;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v81);
    v12 = 1;
    if ( *(_QWORD *)(v5 + 56) || *(_QWORD *)(v5 + 64) )
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v5, 0LL) )
      {
        started = CmpTransSearchAddTransFromKeyBody(v5, &v77[1]);
        if ( started >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) == 0 )
            goto LABEL_7;
          started = -1072103423;
        }
        goto LABEL_68;
      }
LABEL_141:
      started = (*(_BYTE *)(v5 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_68;
    }
LABEL_7:
    v13 = *(_QWORD *)&v77[1];
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v5, *(_QWORD *)&v77[1]) )
    {
      v12 = 1;
      goto LABEL_141;
    }
    if ( v13 )
      break;
    if ( *(int *)(v7 + 248) < 0 )
    {
      started = CmpSnapshotTxOwnerArray(v7 + 248, &v76, &v86);
      if ( started < 0 )
        goto LABEL_159;
      v56 = v76;
      CmpLogTransactionAbortedWithChildName(v7, 0LL, 1LL);
      CmpUnlockKcbStack(&v81);
      v57 = Privileges[1];
      v12 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
    }
    else
    {
      if ( !*(_DWORD *)(v7 + 264) )
        goto LABEL_11;
      started = CmpSnapshotTxOwnerArray(v7 + 264, &v76, &v86);
      if ( started < 0 )
      {
LABEL_159:
        v12 = 1;
        goto LABEL_68;
      }
      v56 = v76;
      CmpLogTransactionAbortedWithChildName(v7, 0LL, 1LL);
      CmpUnlockKcbStack(&v81);
      v12 = 0;
      CmpCleanupKcbStack(&v81);
    }
    v81 = 0LL;
    WORD1(v81) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v57);
    v69 = 0;
    started = CmpRollbackTransactionArray(v56, v86, v58, (__int64)&v83);
    if ( started < 0 )
      goto LABEL_68;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v14);
  v75 = UnitOfWork;
  v6 = UnitOfWork;
  if ( !UnitOfWork )
  {
    started = -1073741670;
    v12 = 1;
    goto LABEL_69;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v7);
  started = CmpTransEnlistUowInCmTrans(v6, v13);
  if ( started < 0 )
    goto LABEL_121;
  if ( !(unsigned __int8)CmpLockIXLockIntent(v7 + 248, v6)
    || !(unsigned __int8)CmpLockIXLockExclusive(v7 + 264, v6, 1LL) )
  {
    started = -1072103423;
LABEL_121:
    v12 = 1;
    goto LABEL_122;
  }
  HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
  v4 = 1;
  started = CmpCloneKCBValueListForTrans(v7, v13, &v70);
  if ( started < 0 )
  {
    v12 = 1;
    goto LABEL_122;
  }
  HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
  v4 = 0;
LABEL_11:
  v15 = *(_WORD *)(v7 + 66);
  while ( 2 )
  {
    v16 = v73;
    while ( 1 )
    {
      if ( v15 < 0 )
        goto LABEL_27;
      v17 = v15 >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + v15 - 2) : Privileges[v15 - 1];
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v17, v16) == 1 )
        goto LABEL_27;
      PrivilegeCount = v17[2].PrivilegeCount;
      if ( (_DWORD)PrivilegeCount != -1 )
        break;
      --v15;
    }
    if ( *(_QWORD *)&v77[1] && *(_QWORD *)&v17[14].Privilege[0].Luid == *(_QWORD *)&v77[1] )
    {
      NameInListWithStatus = CmpFindNameInListWithStatus(
                               *(_QWORD *)&v17[1].Privilege[0].Luid.HighPart,
                               &v17[14].PrivilegeCount,
                               v87,
                               0,
                               v77,
                               &BugCheckParameter4);
      started = NameInListWithStatus;
      if ( NameInListWithStatus >= 0 )
        break;
      v23 = NameInListWithStatus == -1073741772;
      goto LABEL_25;
    }
    v19 = *(_QWORD *)&v17[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v19, PrivilegeCount);
    else
      CellFlat = HvpGetCellPaged(v19);
    v21 = CmpFindNameInListWithStatus(
            *(_QWORD *)&v17[1].Privilege[0].Luid.HighPart,
            (unsigned int *)(CellFlat + 36),
            v87,
            0,
            v77,
            &BugCheckParameter4);
    v22 = *(_QWORD *)&v17[1].Privilege[0].Luid.HighPart;
    started = v21;
    if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v22, &v84);
    else
      HvpReleaseCellPaged(v22, &v84);
    if ( started < 0 )
    {
      v23 = started == -1073741772;
LABEL_25:
      if ( !v23 )
        goto LABEL_30;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v17, v73) )
      {
LABEL_27:
        v24 = v74;
        goto LABEL_28;
      }
      --v15;
      continue;
    }
    break;
  }
  v24 = v17;
  v74 = v17;
LABEL_28:
  v25 = BugCheckParameter4;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    started = -1073741772;
LABEL_30:
    v12 = 1;
LABEL_67:
    v5 = v73;
    goto LABEL_68;
  }
  v26 = *(_QWORD *)&v24[1].Privilege[0].Luid.HighPart;
  if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v26, (unsigned int)BugCheckParameter4);
  else
    CellPaged = HvpGetCellPaged(v26);
  v28 = CellPaged;
  if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)&v24[1].Privilege[0].Luid.HighPart, CellPaged) )
  {
    started = -1073741772;
    goto LABEL_61;
  }
  if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v29, &v72);
  else
    HvpReleaseCellPaged(v29, &v72);
  v28 = 0LL;
  if ( *(_DWORD *)(v7 + 40) != -1 )
  {
    v30 = *(_QWORD *)(v7 + 32);
    ++*(_QWORD *)(v7 + 304);
    HvLockHiveFlusherShared(v30);
    v31 = *(_QWORD *)&v77[1];
    v4 = 1;
    if ( *(_QWORD *)&v77[1] )
      goto LABEL_40;
    started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
    v12 = 1;
    if ( started >= 0 )
    {
      v31 = *(_QWORD *)&v77[1];
LABEL_40:
      v32 = *(_QWORD *)(v7 + 32);
      if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
        v33 = HvpGetCellFlat(v32, *(unsigned int *)(v7 + 40));
      else
        v33 = HvpGetCellPaged(v32);
      v34 = *(_DWORD *)(v7 + 40);
      v35 = *(_QWORD *)(v7 + 32);
      v78 = v33;
      CmpUpdateKeyNodeAccessBits(v35, v33, v34);
      if ( v71 )
      {
        SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack((__int64)&v81, v31, 0LL);
        Pool = (void *)CmpAllocatePool(0x100uLL);
        v67 = (__int64)Pool;
        if ( Pool )
        {
          memmove(
            Pool,
            (const void *)(SecurityCacheEntryForKcbStack + 32),
            *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
          v85 = (void *)v67;
          started = CmpGetValueForAudit(*(_QWORD *)&v74[1].Privilege[0].Luid.HighPart, v25, (__int64)v91);
          v12 = 1;
          if ( started >= 0 )
            goto LABEL_43;
        }
        else
        {
          started = -1073741670;
          v12 = 1;
        }
        goto LABEL_63;
      }
LABEL_43:
      v36 = *(_QWORD *)(v7 + 32);
      if ( *(_QWORD *)&v77[1] )
      {
        if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v36, &v80);
        else
          HvpReleaseCellPaged(v36, &v80);
        v54 = *(_QWORD *)(v7 + 32);
        v78 = 0LL;
        HvUnlockHiveFlusherShared(v54);
        v55 = v75;
        v4 = 0;
        *((_DWORD *)v75 + 17) = 6;
        *((_DWORD *)v55 + 22) = v25;
        started = CmAddLogForAction(v55, 1LL);
        v12 = 1;
        if ( started >= 0 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
          CmpRemoveValueFromList(*(_QWORD *)(v7 + 32));
          goto LABEL_57;
        }
      }
      else
      {
        v37 = *(unsigned int *)(v7 + 40);
        if ( !*(_WORD *)(v7 + 66) )
        {
          started = HvpMarkCellDirty(v36, v37);
          v12 = 1;
          if ( started >= 0 )
          {
            started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 100));
            if ( started >= 0 )
            {
              started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), v25);
              if ( started >= 0 )
              {
                v38 = v74;
                v39 = *(_QWORD *)&v74[1].Privilege[0].Luid.HighPart;
                if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
                  v40 = HvpGetCellFlat(v39, v25);
                else
                  v40 = HvpGetCellPaged(v39);
                v28 = v40;
                started = CmpMarkValueDataDirty(*(_QWORD *)&v38[1].Privilege[0].Luid.HighPart);
                if ( started >= 0 )
                {
                  v41 = *(_QWORD *)&v74[1].Privilege[0].Luid.HighPart;
                  if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v41, &v72);
                  else
                    HvpReleaseCellPaged(v41, &v72);
                  v42 = v78;
                  v28 = 0LL;
                  CmpRemoveValueFromList(*(_QWORD *)(v7 + 32));
                  CmpFreeValue(*(_QWORD *)(v7 + 32), v25);
                  *(_QWORD *)(v42 + 4) = v10;
                  *(_QWORD *)(v7 + 168) = v10;
                  if ( !*(_DWORD *)(v42 + 36) )
                  {
                    *(_DWORD *)(v42 + 60) = 0;
                    *(_WORD *)(v7 + 178) = 0;
                    *(_DWORD *)(v42 + 64) = 0;
                    *(_DWORD *)(v7 + 180) = 0;
                  }
                  goto LABEL_55;
                }
LABEL_62:
                if ( v28 )
                {
                  v68 = *(_QWORD *)&v74[1].Privilege[0].Luid.HighPart;
                  if ( (*(_BYTE *)(v68 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v68, &v72);
                  else
                    HvpReleaseCellPaged(v68, &v72);
                }
              }
            }
          }
          goto LABEL_63;
        }
        v59 = HvpMarkCellDirty(v36, v37);
        started = v59;
        v12 = 1;
        if ( (PPRIVILEGE_SET)v7 != v74 )
        {
          if ( v59 < 0 )
            goto LABEL_63;
          v60 = v87;
          started = CmpSetValueKeyTombstone(
                      *(_QWORD *)(v7 + 32),
                      v78,
                      (_DWORD)v87,
                      *(_DWORD *)(v78 + 36),
                      *(_DWORD *)(v7 + 40) >> 31);
          if ( started < 0 )
            goto LABEL_63;
          v42 = v78;
          *(_QWORD *)(v78 + 4) = v10;
          *(_QWORD *)(v7 + 168) = v10;
          v61 = *v60;
          if ( *(_DWORD *)(v42 + 60) < v61 )
          {
            *(_DWORD *)(v42 + 60) = v61;
            *(_WORD *)(v7 + 178) = *v60;
          }
LABEL_55:
          if ( (*(_DWORD *)(v7 + 184) & 0x400000) == 0 && (*(_DWORD *)(v7 + 8) & 8) != 0 )
          {
            CmpDelayDerefKeyControlBlock(*(_QWORD *)(v7 + 104));
            *(_QWORD *)(v7 + 104) = 0LL;
            *(_WORD *)(v7 + 8) &= ~8u;
          }
          v43 = *(_DWORD *)(v42 + 40);
          *(_DWORD *)(v7 + 96) = *(_DWORD *)(v42 + 36);
          *(_DWORD *)(v7 + 100) = v43;
LABEL_57:
          HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
          started = 0;
          v4 = 0;
          v75 = 0LL;
          v70 = 0;
          v44 = SWORD1(v81) < 2;
          _mm_lfence();
          if ( v44 )
            v45 = Privileges[SWORD1(v81) - 1];
          else
            v45 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v81) - 2);
          CmpReportNotifyHelper(
            (__int64)&v81,
            *(_QWORD *)&v45[1].Privilege[0].Luid.HighPart,
            *(__int64 *)&v77[1],
            4,
            (__int64)v88);
          if ( *(_QWORD *)&v45[1].Privilege[0].Luid.HighPart != CmpMasterHive )
            CmpReportNotifyHelper((__int64)&v81, CmpMasterHive, *(__int64 *)&v77[1], 4, (__int64)v88);
LABEL_61:
          v12 = 1;
          goto LABEL_62;
        }
        if ( v59 >= 0 )
        {
          started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), v25);
          if ( started >= 0 )
          {
            v63 = *(_QWORD *)(v7 + 32);
            if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
              v64 = HvpGetCellFlat(v63, v25);
            else
              v64 = HvpGetCellPaged(v63);
            v28 = v64;
            started = CmpMarkValueDataDirty(*(_QWORD *)(v7 + 32));
            if ( started >= 0 )
            {
              CmpFreeValueData(*(_QWORD *)(v7 + 32));
              *(_DWORD *)(v28 + 8) = -1;
              v42 = v78;
              *(_DWORD *)(v28 + 12) = 0;
              *(_DWORD *)(v28 + 4) = 0;
              *(_WORD *)(v28 + 16) |= 2u;
              *(_QWORD *)(v42 + 4) = v10;
              *(_QWORD *)(v7 + 168) = v10;
              goto LABEL_55;
            }
            goto LABEL_62;
          }
        }
LABEL_63:
        if ( v78 )
        {
          v46 = *(_QWORD *)(v7 + 32);
          if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v46, &v80);
          else
            HvpReleaseCellPaged(v46, &v80);
        }
      }
    }
    v6 = v75;
    goto LABEL_67;
  }
  CmpUnlockKcbStack(&v81);
  LOBYTE(v50) = 1;
  v12 = 0;
  v51 = CmpPromoteKey(&v81, 0LL, v50);
  v6 = v75;
  started = v51;
  v5 = v73;
  if ( v51 >= 0 )
  {
    v4 = 0;
    goto LABEL_7;
  }
LABEL_68:
  if ( v6 )
  {
LABEL_122:
    CmpRundownUnitOfWork((ULONG_PTR)v6);
    ExFreePoolWithTag(v6, 0x77554D43u);
  }
LABEL_69:
  if ( v70 )
  {
    v62 = *(unsigned int *)(v7 + 284);
    if ( (_DWORD)v62 != -1 )
      HvFreeCell(*(_QWORD *)(v7 + 32), v62);
    *(_DWORD *)(v7 + 284) = -1;
    *(_DWORD *)(v7 + 280) = 0;
    *(_QWORD *)(v7 + 288) = 0LL;
  }
  if ( v4 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
  if ( v12 )
    CmpUnlockKcbStack(&v81);
  CmpDrainDelayDerefContext((_QWORD **)&v90);
  if ( v69 )
    CmpUnlockRegistry(v47);
  if ( v88[0] != v88 )
    CmpSignalDeferredPosts(v88);
  CmpDetachFromRegistryProcess(&ApcState);
  v48 = v85;
  if ( started >= 0 && v71 && v85 )
    SeAdtRegistryValueChangedAuditAlarm(0LL, (__int64)v85, 0LL, v87, v5, v89, (unsigned int *)v91, 2);
  if ( *((_QWORD *)&v91[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v91[0] + 1), 0x34414D43u);
  if ( v48 )
    CmpFreeTransientPoolWithTag(v48, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
