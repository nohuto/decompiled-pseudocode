/*
 * XREFs of CmDeleteKey @ 0x140869BFC
 * Callers:
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 * Callees:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14048052C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x140484100 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpCleanupDiscardReplacePost @ 0x1407E1110 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E12A0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpUnlockHashEntryByKcb @ 0x140844460 (CmpUnlockHashEntryByKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14086877C (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140869324 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086A520 (CmpLockHashEntryExclusiveByKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086A604 (HvUnlockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x14086A690 (CmpSignalDeferredPosts.c)
 *     CmpSnapshotTxOwnerArray @ 0x14086C0D0 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x14086C1E8 (CmpRollbackTransactionArray.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086C494 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086DD20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14086E6E0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140875C90 (CmpGetKeyNodeForKcb.c)
 *     CmEqualTrans @ 0x140879280 (CmEqualTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140879368 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14087B024 (CmpRundownUnitOfWork.c)
 *     CmpMarkKeyUnbacked @ 0x14087B8F8 (CmpMarkKeyUnbacked.c)
 *     CmGetVisibleSubkeyCount @ 0x14087B9C0 (CmGetVisibleSubkeyCount.c)
 *     CmpCleanUpSubKeyInfo @ 0x14087C170 (CmpCleanUpSubKeyInfo.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpFreeKeyByCell @ 0x140880420 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpCleanupKcbStack @ 0x1409172A0 (CmpCleanupKcbStack.c)
 *     CmpDiscardKcb @ 0x14097C848 (CmpDiscardKcb.c)
 *     CmAddLogForAction @ 0x140A05328 (CmAddLogForAction.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A1F3A0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1FC64 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FE28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLockIXLockIntent @ 0x140A2E5B4 (CmpLockIXLockIntent.c)
 *     CmpAllocateUnitOfWork @ 0x140A2E660 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A2E6B8 (CmpLockIXLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BB9A84 (CmpIsShutdownRundownActive.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  _QWORD *v1; // r14
  char v2; // r15
  char v3; // r12
  ULONG_PTR v4; // r13
  __int64 v5; // rbx
  ULONG_PTR v6; // rsi
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // rcx
  int started; // edi
  __int16 v11; // r12
  __int16 v12; // r14
  signed __int64 v13; // r15
  char *v14; // rdi
  char *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rax
  int *v19; // rcx
  ULONG_PTR v20; // rcx
  _QWORD *UnitOfWork; // r14
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // cc
  PPRIVILEGE_SET v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  char v31; // r15
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  PPRIVILEGE_SET v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int16 v47; // [rsp+49h] [rbp-BFh]
  char v48; // [rsp+4Bh] [rbp-BDh]
  unsigned int v49; // [rsp+4Ch] [rbp-BCh] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v54; // [rsp+78h] [rbp-90h] BYREF
  PPRIVILEGE_SET v55[2]; // [rsp+88h] [rbp-80h]
  __int64 v56; // [rsp+98h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v58[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-48h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+D0h] [rbp-38h]
  ULONG_PTR v62; // [rsp+E0h] [rbp-28h] BYREF
  int v63; // [rsp+E8h] [rbp-20h]
  int v64; // [rsp+ECh] [rbp-1Ch]
  _QWORD v65[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 KeyNodeForKcb; // [rsp+100h] [rbp-8h]
  ULONG_PTR v67; // [rsp+108h] [rbp+0h]
  _QWORD *v68; // [rsp+110h] [rbp+8h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp+10h] BYREF

  v68 = a1;
  v57 = 0LL;
  v52 = 0LL;
  v58[1] = v58;
  v1 = a1;
  v56 = 0LL;
  v58[0] = v58;
  v49 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  v3 = 0;
  v47 = 0;
  v4 = 0LL;
  v53 = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v54 = 0LL;
  WORD1(v54) = -1;
  v60 = 0LL;
  WORD1(v60) = -1;
  v48 = 0;
  *(_OWORD *)v55 = 0LL;
  v59 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  LODWORD(v51) = 0;
  P = 0LL;
  v67 = 0LL;
  KeyNodeForKcb = 0LL;
  HvpGetCellContextInitialize(&v57);
  HvpGetCellContextInitialize(&v52);
  v62 = 0LL;
  v65[1] = v65;
  v64 = 0;
  v65[0] = v65;
  v63 = -1073741823;
  CmpInitializeDelayDerefContext(&v53);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v7) )
    {
      started = -1073741431;
      v31 = 0;
      goto LABEL_83;
    }
    if ( v2 )
      CmpLockRegistryExclusive(v9);
    else
      CmpLockRegistry();
    v6 = v1[1];
    v8 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_85;
    }
    if ( !*(_QWORD *)(v6 + 72) )
    {
      started = -1073741535;
LABEL_85:
      v31 = 1;
      goto LABEL_83;
    }
    if ( *(_WORD *)(v6 + 66) )
      break;
    started = CmpStartKcbStackForTopLayerKcb(&v60, v6);
    if ( started < 0 )
      goto LABEL_81;
    started = CmpStartKcbStackForTopLayerKcb(&v54, *(_QWORD *)(v6 + 72));
    if ( started < 0 )
      goto LABEL_81;
    started = 0;
    if ( !v2 )
    {
      CmpLockHashEntryExclusiveByKcb(v6);
      LOBYTE(v47) = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v54);
      v11 = WORD1(v60);
      v12 = 0;
      if ( (SWORD1(v60) & 0x8000u) == 0 )
      {
        v13 = (char *)Privileges[1] - ((char *)&v60 + 8);
        v14 = (char *)&v60 + 8;
        do
        {
          if ( v12 >= 2 )
            v15 = &v14[v13 - 16];
          else
            v15 = v14;
          CmpLockKcbExclusive(*(_QWORD *)v15);
          v14 += 8;
          ++v12;
        }
        while ( v12 <= v11 );
        v4 = v67;
        started = 0;
      }
      v1 = v68;
      v3 = 1;
    }
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v1, 0LL) )
      goto LABEL_81;
    if ( !v1[7] && !v1[8] )
    {
      v17 = v59;
      goto LABEL_25;
    }
    started = CmpTransSearchAddTransFromKeyBody(v1, &v59);
    if ( started < 0 )
      goto LABEL_81;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
    {
      started = -1072103423;
      goto LABEL_81;
    }
    v17 = v59;
    started = 0;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v1, v59) )
    {
      UnitOfWork = 0LL;
      goto LABEL_49;
    }
    if ( v17 )
    {
LABEL_26:
      if ( *(_QWORD *)(v6 + 240) && !(unsigned __int8)CmEqualTrans(v17) )
      {
        started = -1073741535;
        goto LABEL_81;
      }
      if ( v17 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        if ( !UnitOfWork || (v4 = CmpAllocateUnitOfWork()) == 0 )
        {
          started = -1073741670;
          goto LABEL_49;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, *(_QWORD *)(v6 + 72));
        started = CmpTransEnlistUowInCmTrans(UnitOfWork, v17);
        if ( started < 0 )
          goto LABEL_49;
        CmpTransEnlistUowInKcb((_QWORD *)v4, v6);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, v17);
        if ( started < 0 )
          goto LABEL_49;
        if ( !(unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v6 + 72) + 248LL, UnitOfWork)
          || !(unsigned __int8)CmpLockIXLockExclusive(v6 + 248, v4, 0LL)
          || !(unsigned __int8)CmpLockIXLockExclusive(v6 + 264, v4, 1LL) )
        {
          started = -1072103423;
          goto LABEL_49;
        }
LABEL_32:
        if ( !HIBYTE(v47) )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v6 + 32));
          v48 = 1;
        }
        LOBYTE(v16) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v6, &v57, v16);
        v22 = KeyNodeForKcb;
        if ( (unsigned int)CmGetVisibleSubkeyCount(v6, KeyNodeForKcb, v17) || (*(_BYTE *)(v22 + 2) & 8) != 0 )
        {
          started = -1073741535;
          goto LABEL_49;
        }
        v23 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v23, &v57);
        else
          HvpReleaseCellPaged(v23, &v57);
        KeyNodeForKcb = 0LL;
        if ( v17 )
        {
          *((_DWORD *)UnitOfWork + 17) = 3;
          UnitOfWork[11] = v6;
          *(_DWORD *)(v4 + 68) = 2;
          *(_QWORD *)(v4 + 80) = UnitOfWork;
          HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
          v48 = 0;
          started = CmAddLogForAction(v4, 1LL);
          if ( started < 0 )
            goto LABEL_49;
          v25 = SWORD1(v54) < 2;
          v4 = 0LL;
          UnitOfWork = 0LL;
          _mm_lfence();
          if ( v25 )
            v36 = v55[SWORD1(v54) - 1];
          else
            v36 = (PPRIVILEGE_SET)*((_QWORD *)v55[1] + SWORD1(v54) - 2);
          CmpReportNotifyHelper((__int64)&v54, *(_QWORD *)&v36[1].Privilege[0].Luid.HighPart, v59, 1, (__int64)v58);
          if ( *(_QWORD *)&v36[1].Privilege[0].Luid.HighPart != CmpMasterHive )
            CmpReportNotifyHelper((__int64)&v54, CmpMasterHive, v59, 1, (__int64)v58);
        }
        else
        {
          v24 = *(_QWORD *)(v6 + 192);
          if ( !v24 || *(_QWORD *)(v24 + 32) == v24 + 32 )
          {
            v25 = SWORD1(v54) < 2;
            _mm_lfence();
            if ( v25 )
              v26 = v55[SWORD1(v54) - 1];
            else
              v26 = (PPRIVILEGE_SET)*((_QWORD *)v55[1] + SWORD1(v54) - 2);
            CmpReportNotifyHelper((__int64)&v54, *(_QWORD *)&v26[1].Privilege[0].Luid.HighPart, 0LL, 1, (__int64)v58);
            if ( *(_QWORD *)&v26[1].Privilege[0].Luid.HighPart != CmpMasterHive )
              CmpReportNotifyHelper((__int64)&v54, CmpMasterHive, 0LL, 1, (__int64)v58);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
            if ( started < 0 )
              goto LABEL_49;
            CmpFlushNotifiesOnKeyBodyList(v6, 8, (__int64)&v53, 0);
            LOBYTE(v27) = 1;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v27);
            LOBYTE(v28) = 1;
            v29 = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v52, v28);
            *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v29 + 52);
            ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
            *(_QWORD *)(v29 + 4) = v5;
            *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v5;
            v30 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
            if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v30, &v52);
            else
              HvpReleaseCellPaged(v30, &v52);
            CmpMarkKeyUnbacked(v6, &v53);
            CmpDiscardKcb(v6);
          }
          else
          {
            started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, (__int64)&v62);
            if ( started < 0 )
              goto LABEL_49;
            CmpReportNotifyForKcbStack((__int64)&v54, 0, 1, (__int64)v58);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
            if ( started < 0 )
              goto LABEL_49;
            LOBYTE(v42) = 1;
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v6, v41, &v53, v42);
            CmpFlushNotifiesOnKeyBodyList(v6, 8, (__int64)&v53, 0);
            LOBYTE(v43) = 1;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v43);
            LOBYTE(v44) = 1;
            v45 = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v52, v44);
            *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v45 + 52);
            ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
            *(_QWORD *)(v45 + 4) = v5;
            *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v5;
            v46 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
            if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v46, &v52);
            else
              HvpReleaseCellPaged(v46, &v52);
            CmpMarkKeyUnbacked(v6, &v53);
            CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, &v62, &v53);
          }
        }
        started = 0;
LABEL_49:
        v31 = 1;
        v8 = 1;
        goto LABEL_50;
      }
      v19 = (int *)(*(_QWORD *)(v6 + 72) + 248LL);
      if ( *v19 < 0 )
      {
        v31 = 0;
        started = CmpSnapshotTxOwnerArray(v19, &v49, &v56);
        if ( started < 0 )
          goto LABEL_81;
        if ( v3 )
        {
          CmpUnlockKcbStack(&v60);
          CmpUnlockKcbStack(&v54);
          v3 = 0;
        }
        if ( (_BYTE)v47 )
        {
          CmpUnlockHashEntryByKcb(v6);
          LOBYTE(v47) = 0;
        }
        CmpDrainDelayDerefContext((_QWORD **)&v53);
        CmpUnlockRegistry(v34);
        started = CmpRollbackTransactionArray(v49, v56, v35, &v51);
        if ( started < 0 )
          goto LABEL_82;
      }
      else
      {
        v20 = v6 + 248;
        if ( !*(_DWORD *)(v6 + 248) )
        {
          v20 = v6 + 264;
          if ( !*(_DWORD *)(v6 + 264) )
          {
            UnitOfWork = P;
            goto LABEL_32;
          }
        }
        v31 = 0;
        started = CmpSnapshotTxOwnerArray(v20, &v49, &v56);
        if ( started < 0 )
          goto LABEL_81;
        if ( v3 )
        {
          CmpUnlockKcbStack(&v60);
          CmpUnlockKcbStack(&v54);
          v3 = 0;
        }
        if ( (_BYTE)v47 )
        {
          CmpUnlockHashEntryByKcb(v6);
          LOBYTE(v47) = 0;
        }
        CmpDrainDelayDerefContext((_QWORD **)&v53);
        CmpUnlockRegistry(v37);
        started = CmpRollbackTransactionArray(v49, v56, v38, &v51);
        if ( started < 0 )
          goto LABEL_82;
      }
      v2 = HIBYTE(v47);
    }
    else
    {
LABEL_25:
      v18 = *(_QWORD *)(v6 + 192);
      if ( !v18 || *(_QWORD *)(v18 + 32) == v18 + 32 || HIBYTE(v47) )
        goto LABEL_26;
      v2 = 1;
      CmpUnlockKcbStack(&v60);
      CmpUnlockKcbStack(&v54);
      v3 = 0;
      CmpUnlockHashEntryByKcb(v6);
      v47 = 256;
      CmpCleanupKcbStack(&v60);
      v60 = 0LL;
      WORD1(v60) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpCleanupKcbStack(&v54);
      v54 = 0LL;
      WORD1(v54) = -1;
      *(_OWORD *)v55 = 0LL;
      CmpUnlockRegistry(v40);
      Privileges[1] = (PPRIVILEGE_SET)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
  }
  started = CmDeleteLayeredKey((__int64)v1, (__int64)v58, (__int64)&v53);
LABEL_81:
  v31 = 1;
LABEL_82:
  v8 = 1;
LABEL_83:
  UnitOfWork = P;
LABEL_50:
  if ( v62 )
  {
    if ( (_QWORD *)v65[0] != v65 )
    {
      CmpEnumerateAllHigherLayerKcbs(
        v62,
        (unsigned int)CmpCleanupDiscardReplacePre,
        (unsigned int)CmpCleanupDiscardReplacePost,
        (unsigned int)&v53,
        (__int64)&v62,
        v8,
        0);
      if ( (_QWORD *)v65[0] != v65 )
        CmpCleanupDiscardReplacePost(v62, (__int64)&v53, (__int64)&v62);
    }
  }
  if ( KeyNodeForKcb )
  {
    v39 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v39, &v57);
    else
      HvpReleaseCellPaged(v39, &v57);
  }
  if ( v48 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
  if ( v4 )
  {
    CmpRundownUnitOfWork(v4);
    ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((ULONG_PTR)UnitOfWork);
    ExFreePoolWithTag(UnitOfWork, 0x77554D43u);
  }
  if ( v3 )
  {
    CmpUnlockKcbStack(&v60);
    CmpUnlockKcbStack(&v54);
  }
  if ( (_BYTE)v47 )
    CmpUnlockHashEntryByKcb(v6);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v55[1] )
    CmSiFreeMemory(v55[1]);
  CmpDrainDelayDerefContext((_QWORD **)&v53);
  if ( v31 )
    CmpUnlockRegistry(v32);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( (_QWORD *)v58[0] != v58 )
    CmpSignalDeferredPosts(v58);
  return (unsigned int)started;
}
