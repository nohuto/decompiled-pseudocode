/*
 * XREFs of CmDeleteKey @ 0x14086DF2C
 * Callers:
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 * Callees:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047B08C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14047F6A0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpCleanupDiscardReplacePost @ 0x1407E1660 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E17F0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpUnlockHashEntryByKcb @ 0x140840720 (CmpUnlockHashEntryByKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14086CA6C (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086E850 (CmpLockHashEntryExclusiveByKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     CmpSnapshotTxOwnerArray @ 0x140870400 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x140870518 (CmpRollbackTransactionArray.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmGetVisibleSubkeyCount @ 0x14087F870 (CmGetVisibleSubkeyCount.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A144A0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A14D64 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A14F28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLockIXLockIntent @ 0x140A22FF4 (CmpLockIXLockIntent.c)
 *     CmpAllocateUnitOfWork @ 0x140A230A0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A230F8 (CmpLockIXLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BBBA84 (CmpIsShutdownRundownActive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rax
  int *v20; // rcx
  ULONG_PTR v21; // rcx
  _QWORD *UnitOfWork; // r14
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // cc
  PPRIVILEGE_SET v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32; // r15
  __int64 v33; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  PPRIVILEGE_SET v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // [rsp+28h] [rbp-E0h]
  __int16 v50; // [rsp+49h] [rbp-BFh]
  char v51; // [rsp+4Bh] [rbp-BDh]
  unsigned int v52; // [rsp+4Ch] [rbp-BCh] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h]
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v56; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+78h] [rbp-90h] BYREF
  PPRIVILEGE_SET v58[2]; // [rsp+88h] [rbp-80h]
  __int64 v59; // [rsp+98h] [rbp-70h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v61[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-48h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+D0h] [rbp-38h]
  ULONG_PTR v65; // [rsp+E0h] [rbp-28h] BYREF
  int v66; // [rsp+E8h] [rbp-20h]
  int v67; // [rsp+ECh] [rbp-1Ch]
  _QWORD v68[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 KeyNodeForKcb; // [rsp+100h] [rbp-8h]
  ULONG_PTR v70; // [rsp+108h] [rbp+0h]
  _QWORD *v71; // [rsp+110h] [rbp+8h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp+10h] BYREF

  v71 = a1;
  v60 = 0LL;
  v55 = 0LL;
  v61[1] = v61;
  v1 = a1;
  v59 = 0LL;
  v61[0] = v61;
  v52 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v2 = 0;
  v3 = 0;
  v50 = 0;
  v4 = 0LL;
  v56 = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v57 = 0LL;
  WORD1(v57) = -1;
  v63 = 0LL;
  WORD1(v63) = -1;
  v51 = 0;
  *(_OWORD *)v58 = 0LL;
  v62 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  LODWORD(v54) = 0;
  P = 0LL;
  v70 = 0LL;
  KeyNodeForKcb = 0LL;
  HvpGetCellContextInitialize(&v60);
  HvpGetCellContextInitialize(&v55);
  v65 = 0LL;
  v68[1] = v68;
  v67 = 0;
  v68[0] = v68;
  v66 = -1073741823;
  CmpInitializeDelayDerefContext(&v56);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v7) )
    {
      started = -1073741431;
      v32 = 0;
      goto LABEL_83;
    }
    if ( v2 )
      CmpLockRegistryExclusive(v9);
    else
      CmpLockRegistry(v9);
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
      v32 = 1;
      goto LABEL_83;
    }
    if ( *(_WORD *)(v6 + 66) )
      break;
    started = CmpStartKcbStackForTopLayerKcb(&v63, v6);
    if ( started < 0 )
      goto LABEL_81;
    started = CmpStartKcbStackForTopLayerKcb(&v57, *(_QWORD *)(v6 + 72));
    if ( started < 0 )
      goto LABEL_81;
    started = 0;
    if ( !v2 )
    {
      CmpLockHashEntryExclusiveByKcb(v6);
      LOBYTE(v50) = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v57);
      v11 = WORD1(v63);
      v12 = 0;
      if ( (SWORD1(v63) & 0x8000u) == 0 )
      {
        v13 = (char *)Privileges[1] - ((char *)&v63 + 8);
        v14 = (char *)&v63 + 8;
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
        v4 = v70;
        started = 0;
      }
      v1 = v71;
      v3 = 1;
    }
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v1, 0LL) )
      goto LABEL_81;
    if ( !v1[7] && !v1[8] )
    {
      v18 = v62;
      goto LABEL_25;
    }
    started = CmpTransSearchAddTransFromKeyBody(v1, &v62);
    if ( started < 0 )
      goto LABEL_81;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
    {
      started = -1072103423;
      goto LABEL_81;
    }
    v18 = v62;
    started = 0;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v1, v62) )
    {
      UnitOfWork = 0LL;
      goto LABEL_49;
    }
    if ( v18 )
    {
LABEL_26:
      if ( *(_QWORD *)(v6 + 240) && !(unsigned __int8)CmEqualTrans(v18) )
      {
        started = -1073741535;
        goto LABEL_81;
      }
      if ( v18 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v16);
        if ( !UnitOfWork || (v4 = CmpAllocateUnitOfWork(v37)) == 0 )
        {
          started = -1073741670;
          goto LABEL_49;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, *(_QWORD *)(v6 + 72));
        started = CmpTransEnlistUowInCmTrans(UnitOfWork, v18);
        if ( started < 0 )
          goto LABEL_49;
        CmpTransEnlistUowInKcb((_QWORD *)v4, v6);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, v18);
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
        if ( !HIBYTE(v50) )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v6 + 32));
          v51 = 1;
        }
        LOBYTE(v17) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v6, &v60, v17);
        v23 = KeyNodeForKcb;
        if ( (unsigned int)CmGetVisibleSubkeyCount(v6, KeyNodeForKcb, v18) || (*(_BYTE *)(v23 + 2) & 8) != 0 )
        {
          started = -1073741535;
          goto LABEL_49;
        }
        v24 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v24, &v60);
        else
          HvpReleaseCellPaged(v24, &v60);
        KeyNodeForKcb = 0LL;
        if ( v18 )
        {
          *((_DWORD *)UnitOfWork + 17) = 3;
          UnitOfWork[11] = v6;
          *(_DWORD *)(v4 + 68) = 2;
          *(_QWORD *)(v4 + 80) = UnitOfWork;
          HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
          LODWORD(v18) = 0;
          v51 = 0;
          started = CmAddLogForAction(v4, 1LL);
          if ( started < 0 )
            goto LABEL_49;
          v26 = SWORD1(v57) < 2;
          v4 = 0LL;
          UnitOfWork = 0LL;
          _mm_lfence();
          if ( v26 )
            v38 = v58[SWORD1(v57) - 1];
          else
            v38 = (PPRIVILEGE_SET)*((_QWORD *)v58[1] + SWORD1(v57) - 2);
          CmpReportNotifyHelper((__int64)&v57, *(_QWORD *)&v38[1].Privilege[0].Luid.HighPart, v62, 1, (__int64)v61);
          if ( *(_QWORD *)&v38[1].Privilege[0].Luid.HighPart != CmpMasterHive )
            CmpReportNotifyHelper((__int64)&v57, CmpMasterHive, v62, 1, (__int64)v61);
        }
        else
        {
          v25 = *(_QWORD *)(v6 + 192);
          if ( !v25 || *(_QWORD *)(v25 + 32) == v25 + 32 )
          {
            v26 = SWORD1(v57) < 2;
            _mm_lfence();
            if ( v26 )
              v27 = v58[SWORD1(v57) - 1];
            else
              v27 = (PPRIVILEGE_SET)*((_QWORD *)v58[1] + SWORD1(v57) - 2);
            CmpReportNotifyHelper((__int64)&v57, *(_QWORD *)&v27[1].Privilege[0].Luid.HighPart, 0LL, 1, (__int64)v61);
            if ( *(_QWORD *)&v27[1].Privilege[0].Luid.HighPart != CmpMasterHive )
              CmpReportNotifyHelper((__int64)&v57, CmpMasterHive, 0LL, 1, (__int64)v61);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
            if ( started < 0 )
              goto LABEL_49;
            CmpFlushNotifiesOnKeyBodyList(v6, 8, (__int64)&v56, 0);
            LOBYTE(v28) = 1;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v28);
            LOBYTE(v29) = 1;
            v30 = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v55, v29);
            *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v30 + 52);
            ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
            *(_QWORD *)(v30 + 4) = v5;
            *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v5;
            v31 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
            if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v31, &v55);
            else
              HvpReleaseCellPaged(v31, &v55);
            CmpMarkKeyUnbacked(v6, &v56);
            CmpDiscardKcb(v6);
          }
          else
          {
            started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, (__int64)&v65);
            if ( started < 0 )
              goto LABEL_49;
            CmpReportNotifyForKcbStack((__int64)&v57, 0, 1, (__int64)v61);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
            if ( started < 0 )
              goto LABEL_49;
            LOBYTE(v44) = 1;
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v6, v43, &v56, v44);
            CmpFlushNotifiesOnKeyBodyList(v6, 8, (__int64)&v56, 0);
            LOBYTE(v45) = 1;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v45);
            LOBYTE(v46) = 1;
            v47 = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v55, v46);
            *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v47 + 52);
            ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
            *(_QWORD *)(v47 + 4) = v5;
            *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v5;
            v48 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
            if ( (*(_BYTE *)(v48 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v48, &v55);
            else
              HvpReleaseCellPaged(v48, &v55);
            CmpMarkKeyUnbacked(v6, &v56);
            CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, &v65, &v56);
          }
        }
        started = v18;
LABEL_49:
        v32 = 1;
        v8 = 1;
        goto LABEL_50;
      }
      v20 = (int *)(*(_QWORD *)(v6 + 72) + 248LL);
      if ( *v20 < 0 )
      {
        v32 = 0;
        started = CmpSnapshotTxOwnerArray(v20, &v52, &v59);
        if ( started < 0 )
          goto LABEL_81;
        if ( v3 )
        {
          CmpUnlockKcbStack(&v63);
          CmpUnlockKcbStack(&v57);
          v3 = 0;
        }
        if ( (_BYTE)v50 )
        {
          CmpUnlockHashEntryByKcb(v6);
          LOBYTE(v50) = 0;
        }
        CmpDrainDelayDerefContext((_QWORD **)&v56);
        CmpUnlockRegistry(v35);
        started = CmpRollbackTransactionArray(v52, v59, v36, &v54, v49);
        if ( started < 0 )
          goto LABEL_82;
      }
      else
      {
        v21 = v6 + 248;
        if ( !*(_DWORD *)(v6 + 248) )
        {
          v21 = v6 + 264;
          if ( !*(_DWORD *)(v6 + 264) )
          {
            UnitOfWork = P;
            goto LABEL_32;
          }
        }
        v32 = 0;
        started = CmpSnapshotTxOwnerArray(v21, &v52, &v59);
        if ( started < 0 )
          goto LABEL_81;
        if ( v3 )
        {
          CmpUnlockKcbStack(&v63);
          CmpUnlockKcbStack(&v57);
          v3 = 0;
        }
        if ( (_BYTE)v50 )
        {
          CmpUnlockHashEntryByKcb(v6);
          LOBYTE(v50) = 0;
        }
        CmpDrainDelayDerefContext((_QWORD **)&v56);
        CmpUnlockRegistry(v39);
        started = CmpRollbackTransactionArray(v52, v59, v40, &v54, v49);
        if ( started < 0 )
          goto LABEL_82;
      }
      v2 = HIBYTE(v50);
    }
    else
    {
LABEL_25:
      v19 = *(_QWORD *)(v6 + 192);
      if ( !v19 || *(_QWORD *)(v19 + 32) == v19 + 32 || HIBYTE(v50) )
        goto LABEL_26;
      v2 = 1;
      CmpUnlockKcbStack(&v63);
      CmpUnlockKcbStack(&v57);
      v3 = 0;
      CmpUnlockHashEntryByKcb(v6);
      v50 = 256;
      CmpCleanupKcbStack(&v63);
      v63 = 0LL;
      WORD1(v63) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpCleanupKcbStack(&v57);
      v57 = 0LL;
      WORD1(v57) = -1;
      *(_OWORD *)v58 = 0LL;
      CmpUnlockRegistry(v42);
      Privileges[1] = (PPRIVILEGE_SET)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
  }
  started = CmDeleteLayeredKey((__int64)v1, (__int64)v61, (__int64)&v56);
LABEL_81:
  v32 = 1;
LABEL_82:
  v8 = 1;
LABEL_83:
  UnitOfWork = P;
LABEL_50:
  if ( v65 )
  {
    if ( (_QWORD *)v68[0] != v68 )
    {
      CmpEnumerateAllHigherLayerKcbs(
        v65,
        (unsigned int)CmpCleanupDiscardReplacePre,
        (unsigned int)CmpCleanupDiscardReplacePost,
        (unsigned int)&v56,
        (__int64)&v65,
        v8,
        0);
      if ( (_QWORD *)v68[0] != v68 )
        CmpCleanupDiscardReplacePost(v65, (__int64)&v56, (__int64)&v65);
    }
  }
  if ( KeyNodeForKcb )
  {
    v41 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v41, &v60);
    else
      HvpReleaseCellPaged(v41, &v60);
  }
  if ( v51 )
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
    CmpUnlockKcbStack(&v63);
    CmpUnlockKcbStack(&v57);
  }
  if ( (_BYTE)v50 )
    CmpUnlockHashEntryByKcb(v6);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v58[1] )
    CmSiFreeMemory(v58[1]);
  CmpDrainDelayDerefContext((_QWORD **)&v56);
  if ( v32 )
    CmpUnlockRegistry(v33);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( (_QWORD *)v61[0] != v61 )
    CmpSignalDeferredPosts(v61);
  return (unsigned int)started;
}
