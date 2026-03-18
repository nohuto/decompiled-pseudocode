/*
 * XREFs of CmDeleteValueKey @ 0x14086BE88
 * Callers:
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047F774 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404838EC (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140780E64 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpGetValueForAudit @ 0x1407D3B70 (CmpGetValueForAudit.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140863F7C (CmpLogTransactionAbortedWithChildName.c)
 *     CmAddLogForAction @ 0x140868A1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14086901C (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140869074 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140869120 (CmpLockIXLockExclusive.c)
 *     CmpCloneKCBValueListForTrans @ 0x14086919C (CmpCloneKCBValueListForTrans.c)
 *     CmpSnapshotTxOwnerArray @ 0x14086AED4 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x14086AFEC (CmpRollbackTransactionArray.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x14086B314 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086CCD4 (CmpUpdateKeyNodeAccessBits.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14086D4B0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087C4C0 (CmpDelayDerefKeyControlBlock.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     CmpFreeValue @ 0x140886E8C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x140886F34 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x1408877FC (CmpMarkValueDataDirty.c)
 *     CmpRemoveValueFromList @ 0x140888294 (CmpRemoveValueFromList.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpCleanupKcbStack @ 0x140975FA0 (CmpCleanupKcbStack.c)
 *     CmpIsValueTombstone @ 0x1409EE590 (CmpIsValueTombstone.c)
 *     CmpSetValueKeyTombstone @ 0x140AA8940 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140AB7F68 (CmpSnapshotKcbStackSecurity.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BA9B0C (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  char v4; // r15
  __int128 v5; // xmm0
  __int64 v6; // r12
  _QWORD *v7; // r13
  ULONG_PTR v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int started; // edi
  char v13; // r14
  __int64 v14; // r14
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
  __int64 v34; // r8
  __int64 v35; // rcx
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
  __int64 v55; // rcx
  __int64 v56; // r9
  unsigned int v57; // ebx
  PPRIVILEGE_SET v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  unsigned __int16 *v61; // r12
  unsigned int v62; // eax
  ULONG_PTR v63; // rdx
  ULONG_PTR v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r9
  char v68; // [rsp+40h] [rbp-C0h]
  char v69; // [rsp+41h] [rbp-BFh] BYREF
  char v70; // [rsp+42h] [rbp-BEh]
  __int64 v71; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B0h]
  PPRIVILEGE_SET v73; // [rsp+58h] [rbp-A8h]
  _QWORD *v74; // [rsp+60h] [rbp-A0h]
  unsigned int v75; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v76[3]; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v77; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-80h] BYREF
  __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  __int128 v80; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+A0h] [rbp-60h]
  int v82; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-48h] BYREF
  void **v84; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v85; // [rsp+C8h] [rbp-38h]
  _QWORD v86[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *v87; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-18h]
  __int128 v89; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v90[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0;
  v72 = a1;
  v5 = 0LL;
  v70 = a4;
  v88 = a3;
  v86[1] = v86;
  v6 = a1;
  v85 = a2;
  v86[0] = v86;
  v75 = 0;
  v80 = 0LL;
  WORD1(v80) = -1;
  v7 = 0LL;
  v84 = 0LL;
  v8 = 0LL;
  v79 = 0LL;
  v83 = 0LL;
  v71 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v74 = 0LL;
  v69 = 0;
  v82 = 0;
  v89 = 0LL;
  *(_QWORD *)&v76[1] = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v77 = 0LL;
  HvpGetCellContextInitialize(&v79);
  HvpGetCellContextInitialize(&v83);
  v73 = 0LL;
  *(double *)&v5 = HvpGetCellContextInitialize(&v71);
  LODWORD(BugCheckParameter4) = -1;
  v76[0] = -1;
  CmpInitializeDelayDerefContext(&v89);
  v87 = 0LL;
  v90[0] = v5;
  v90[1] = v5;
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v9) )
    {
      started = -1073741431;
      v68 = 0;
LABEL_129:
      v13 = 0;
      goto LABEL_68;
    }
    v11 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v10);
    v8 = *(_QWORD *)(v6 + 8);
    v68 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_129;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v80, v8);
    if ( started < 0 )
      goto LABEL_129;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v80);
    v13 = 1;
    if ( *(_QWORD *)(v6 + 56) || *(_QWORD *)(v6 + 64) )
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, 0LL) )
      {
        started = CmpTransSearchAddTransFromKeyBody(v6, &v76[1]);
        if ( started >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v8 + 32) + 160LL) & 2) == 0 )
            goto LABEL_7;
          started = -1072103423;
        }
        goto LABEL_68;
      }
LABEL_162:
      started = (*(_BYTE *)(v6 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_68;
    }
LABEL_7:
    v14 = *(_QWORD *)&v76[1];
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, *(_QWORD *)&v76[1]) )
    {
      v13 = 1;
      goto LABEL_162;
    }
    if ( v14 )
      break;
    if ( *(int *)(v8 + 248) < 0 )
    {
      started = CmpSnapshotTxOwnerArray(v8 + 248, &v75, &v84);
      if ( started < 0 )
        goto LABEL_154;
      v57 = v75;
      CmpLogTransactionAbortedWithChildName(v8, 0LL, 1, v56, v75);
      CmpUnlockKcbStack(&v80);
      v58 = Privileges[1];
      v13 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
    }
    else
    {
      if ( !*(_DWORD *)(v8 + 264) )
        goto LABEL_11;
      started = CmpSnapshotTxOwnerArray(v8 + 264, &v75, &v84);
      if ( started < 0 )
      {
LABEL_154:
        v13 = 1;
        goto LABEL_68;
      }
      v57 = v75;
      CmpLogTransactionAbortedWithChildName(v8, 0LL, 1, v67, v75);
      CmpUnlockKcbStack(&v80);
      v13 = 0;
      CmpCleanupKcbStack(&v80);
    }
    v80 = 0LL;
    WORD1(v80) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v58);
    v68 = 0;
    started = CmpRollbackTransactionArray(v57, v84, v59, (__int64)&v82);
    if ( started < 0 )
      goto LABEL_68;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v74 = UnitOfWork;
  v7 = UnitOfWork;
  if ( !UnitOfWork )
  {
    started = -1073741670;
    v13 = 1;
    goto LABEL_69;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v8);
  started = CmpTransEnlistUowInCmTrans(v7, v14);
  if ( started < 0 )
    goto LABEL_133;
  if ( !CmpLockIXLockIntent((unsigned int *)(v8 + 248), (__int64)v7)
    || !CmpLockIXLockExclusive(v8 + 264, (__int64)v7, 1) )
  {
    started = -1072103423;
LABEL_133:
    v13 = 1;
    goto LABEL_134;
  }
  HvLockHiveFlusherShared(*(_QWORD *)(v8 + 32));
  v4 = 1;
  started = CmpCloneKCBValueListForTrans(v8, v14, &v69);
  if ( started < 0 )
  {
    v13 = 1;
    goto LABEL_134;
  }
  HvUnlockHiveFlusherShared(*(_QWORD *)(v8 + 32));
  v4 = 0;
LABEL_11:
  v15 = *(_WORD *)(v8 + 66);
  while ( 2 )
  {
    v16 = v72;
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
    if ( *(_QWORD *)&v76[1] && *(_QWORD *)&v17[14].Privilege[0].Luid == *(_QWORD *)&v76[1] )
    {
      NameInListWithStatus = CmpFindNameInListWithStatus(
                               *(_QWORD *)&v17[1].Privilege[0].Luid.HighPart,
                               &v17[14].PrivilegeCount,
                               v85,
                               0,
                               v76,
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
            v85,
            0,
            v76,
            &BugCheckParameter4);
    v22 = *(_QWORD *)&v17[1].Privilege[0].Luid.HighPart;
    started = v21;
    if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v22, &v83);
    else
      HvpReleaseCellPaged(v22, &v83);
    if ( started < 0 )
    {
      v23 = started == -1073741772;
LABEL_25:
      if ( !v23 )
        goto LABEL_30;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v17, v72) )
      {
LABEL_27:
        v24 = v73;
        goto LABEL_28;
      }
      --v15;
      continue;
    }
    break;
  }
  v24 = v17;
  v73 = v17;
LABEL_28:
  v25 = BugCheckParameter4;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    started = -1073741772;
LABEL_30:
    v13 = 1;
LABEL_67:
    v6 = v72;
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
    HvpReleaseCellFlat(v29, &v71);
  else
    HvpReleaseCellPaged(v29, &v71);
  v28 = 0LL;
  if ( *(_DWORD *)(v8 + 40) != -1 )
  {
    v30 = *(_QWORD *)(v8 + 32);
    ++*(_QWORD *)(v8 + 304);
    HvLockHiveFlusherShared(v30);
    v31 = *(_QWORD *)&v76[1];
    v4 = 1;
    if ( *(_QWORD *)&v76[1] )
      goto LABEL_40;
    started = HvpMarkCellDirty(*(_QWORD *)(v8 + 32), *(unsigned int *)(v8 + 40));
    v13 = 1;
    if ( started >= 0 )
    {
      v31 = *(_QWORD *)&v76[1];
LABEL_40:
      v32 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
        v33 = HvpGetCellFlat(v32, *(unsigned int *)(v8 + 40));
      else
        v33 = HvpGetCellPaged(v32);
      v34 = *(unsigned int *)(v8 + 40);
      v35 = *(_QWORD *)(v8 + 32);
      v77 = v33;
      CmpUpdateKeyNodeAccessBits(v35, v33, v34);
      if ( v70 )
      {
        started = CmpSnapshotKcbStackSecurity(&v80, v31, 843140419LL, &v87);
        v13 = 1;
        if ( started < 0 )
          goto LABEL_63;
        started = CmpGetValueForAudit(*(_QWORD *)&v73[1].Privilege[0].Luid.HighPart, v25, (__int64)v90);
        if ( started < 0 )
          goto LABEL_63;
      }
      v36 = *(_QWORD *)(v8 + 32);
      if ( *(_QWORD *)&v76[1] )
      {
        if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v36, &v79);
        else
          HvpReleaseCellPaged(v36, &v79);
        v54 = *(_QWORD *)(v8 + 32);
        v77 = 0LL;
        HvUnlockHiveFlusherShared(v54);
        v55 = (__int64)v74;
        v4 = 0;
        *((_DWORD *)v74 + 17) = 6;
        *(_DWORD *)(v55 + 88) = v25;
        started = CmAddLogForAction(v55, 1u);
        v13 = 1;
        if ( started >= 0 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v8 + 32));
          CmpRemoveValueFromList(*(_QWORD *)(v8 + 32));
          goto LABEL_57;
        }
      }
      else
      {
        v37 = *(unsigned int *)(v8 + 40);
        if ( !*(_WORD *)(v8 + 66) )
        {
          started = HvpMarkCellDirty(v36, v37);
          v13 = 1;
          if ( started >= 0 )
          {
            started = HvpMarkCellDirty(*(_QWORD *)(v8 + 32), *(unsigned int *)(v8 + 100));
            if ( started >= 0 )
            {
              started = HvpMarkCellDirty(*(_QWORD *)(v8 + 32), v25);
              if ( started >= 0 )
              {
                v38 = v73;
                v39 = *(_QWORD *)&v73[1].Privilege[0].Luid.HighPart;
                if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
                  v40 = HvpGetCellFlat(v39, v25);
                else
                  v40 = HvpGetCellPaged(v39);
                v28 = v40;
                started = CmpMarkValueDataDirty(*(_QWORD *)&v38[1].Privilege[0].Luid.HighPart);
                if ( started >= 0 )
                {
                  v41 = *(_QWORD *)&v73[1].Privilege[0].Luid.HighPart;
                  if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v41, &v71);
                  else
                    HvpReleaseCellPaged(v41, &v71);
                  v42 = v77;
                  v28 = 0LL;
                  CmpRemoveValueFromList(*(_QWORD *)(v8 + 32));
                  CmpFreeValue(*(_QWORD *)(v8 + 32), v25);
                  *(_QWORD *)(v42 + 4) = v11;
                  *(_QWORD *)(v8 + 168) = v11;
                  if ( !*(_DWORD *)(v42 + 36) )
                  {
                    *(_DWORD *)(v42 + 60) = 0;
                    *(_WORD *)(v8 + 178) = 0;
                    *(_DWORD *)(v42 + 64) = 0;
                    *(_DWORD *)(v8 + 180) = 0;
                  }
                  goto LABEL_55;
                }
LABEL_62:
                if ( v28 )
                {
                  v66 = *(_QWORD *)&v73[1].Privilege[0].Luid.HighPart;
                  if ( (*(_BYTE *)(v66 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v66, &v71);
                  else
                    HvpReleaseCellPaged(v66, &v71);
                }
              }
            }
          }
          goto LABEL_63;
        }
        v60 = HvpMarkCellDirty(v36, v37);
        started = v60;
        v13 = 1;
        if ( (PPRIVILEGE_SET)v8 != v73 )
        {
          if ( v60 < 0 )
            goto LABEL_63;
          v61 = v85;
          started = CmpSetValueKeyTombstone(*(_QWORD *)(v8 + 32), *(_DWORD *)(v8 + 40) >> 31);
          if ( started < 0 )
            goto LABEL_63;
          v42 = v77;
          *(_QWORD *)(v77 + 4) = v11;
          *(_QWORD *)(v8 + 168) = v11;
          v62 = *v61;
          if ( *(_DWORD *)(v42 + 60) < v62 )
          {
            *(_DWORD *)(v42 + 60) = v62;
            *(_WORD *)(v8 + 178) = *v61;
          }
LABEL_55:
          if ( (*(_DWORD *)(v8 + 184) & 0x400000) == 0 && (*(_DWORD *)(v8 + 8) & 8) != 0 )
          {
            CmpDelayDerefKeyControlBlock(*(_QWORD *)(v8 + 104));
            *(_QWORD *)(v8 + 104) = 0LL;
            *(_WORD *)(v8 + 8) &= ~8u;
          }
          v43 = *(_DWORD *)(v42 + 40);
          *(_DWORD *)(v8 + 96) = *(_DWORD *)(v42 + 36);
          *(_DWORD *)(v8 + 100) = v43;
LABEL_57:
          HvUnlockHiveFlusherShared(*(_QWORD *)(v8 + 32));
          started = 0;
          v4 = 0;
          v74 = 0LL;
          v69 = 0;
          v44 = SWORD1(v80) < 2;
          _mm_lfence();
          if ( v44 )
            v45 = Privileges[SWORD1(v80) - 1];
          else
            v45 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v80) - 2);
          CmpReportNotifyHelper(
            (unsigned int)&v80,
            *(_QWORD *)&v45[1].Privilege[0].Luid.HighPart,
            v76[1],
            4,
            (__int64)v86);
          if ( *(_QWORD *)&v45[1].Privilege[0].Luid.HighPart != CmpMasterHive )
            CmpReportNotifyHelper((unsigned int)&v80, CmpMasterHive, v76[1], 4, (__int64)v86);
LABEL_61:
          v13 = 1;
          goto LABEL_62;
        }
        if ( v60 >= 0 )
        {
          started = HvpMarkCellDirty(*(_QWORD *)(v8 + 32), v25);
          if ( started >= 0 )
          {
            v64 = *(_QWORD *)(v8 + 32);
            if ( (*(_BYTE *)(v64 + 140) & 1) != 0 )
              v65 = HvpGetCellFlat(v64, v25);
            else
              v65 = HvpGetCellPaged(v64);
            v28 = v65;
            started = CmpMarkValueDataDirty(*(_QWORD *)(v8 + 32));
            if ( started >= 0 )
            {
              CmpFreeValueData(*(_QWORD *)(v8 + 32), *(unsigned int *)(v28 + 8));
              *(_DWORD *)(v28 + 8) = -1;
              v42 = v77;
              *(_DWORD *)(v28 + 12) = 0;
              *(_DWORD *)(v28 + 4) = 0;
              *(_WORD *)(v28 + 16) |= 2u;
              *(_QWORD *)(v42 + 4) = v11;
              *(_QWORD *)(v8 + 168) = v11;
              goto LABEL_55;
            }
            goto LABEL_62;
          }
        }
LABEL_63:
        if ( v77 )
        {
          v46 = *(_QWORD *)(v8 + 32);
          if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v46, &v79);
          else
            HvpReleaseCellPaged(v46, &v79);
        }
      }
    }
    v7 = v74;
    goto LABEL_67;
  }
  CmpUnlockKcbStack(&v80);
  LOBYTE(v50) = 1;
  v13 = 0;
  v51 = CmpPromoteKey(&v80, 0LL, v50);
  v7 = v74;
  started = v51;
  v6 = v72;
  if ( v51 >= 0 )
  {
    v4 = 0;
    goto LABEL_7;
  }
LABEL_68:
  if ( v7 )
  {
LABEL_134:
    CmpRundownUnitOfWork((ULONG_PTR)v7);
    ExFreePoolWithTag(v7, 0x77554D43u);
  }
LABEL_69:
  if ( v69 )
  {
    v63 = *(unsigned int *)(v8 + 284);
    if ( (_DWORD)v63 != -1 )
      HvFreeCell(*(_QWORD *)(v8 + 32), v63);
    *(_DWORD *)(v8 + 284) = -1;
    *(_DWORD *)(v8 + 280) = 0;
    *(_QWORD *)(v8 + 288) = 0LL;
  }
  if ( v4 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v8 + 32));
  if ( v13 )
    CmpUnlockKcbStack(&v80);
  CmpDrainDelayDerefContext((_QWORD **)&v89);
  if ( v68 )
    CmpUnlockRegistry(v47);
  if ( (_QWORD *)v86[0] != v86 )
    CmpSignalDeferredPosts(v86);
  CmpDetachFromRegistryProcess(&ApcState);
  v48 = v87;
  if ( started >= 0 && v70 && v87 )
    SeAdtRegistryValueChangedAuditAlarm(0LL, (__int64)v87, 0LL, v85, v6, v88, (unsigned int *)v90, 2);
  if ( *((_QWORD *)&v90[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v90[0] + 1), 0x34414D43u);
  if ( v48 )
    CmpFreeTransientPoolWithTag(v48, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
