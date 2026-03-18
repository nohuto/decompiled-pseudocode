/*
 * XREFs of CmDeleteKey @ 0x14086D4EC
 * Callers:
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 * Callees:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047F774 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404838EC (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpCleanupDiscardReplacePost @ 0x1407D1830 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407D19C0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpUnlockHashEntryByKcb @ 0x140848730 (CmpUnlockHashEntryByKcb.c)
 *     CmAddLogForAction @ 0x140868A1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14086901C (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140869074 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140869120 (CmpLockIXLockExclusive.c)
 *     CmpSnapshotTxOwnerArray @ 0x14086AED4 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x14086AFEC (CmpRollbackTransactionArray.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086DE10 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpReportNotifyForKcbStack @ 0x14086F944 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpMarkKeyUnbacked @ 0x140885038 (CmpMarkKeyUnbacked.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408860F8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCleanupKcbStack @ 0x140975FA0 (CmpCleanupKcbStack.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1409DA27C (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpDiscardKcb @ 0x1409DAB50 (CmpDiscardKcb.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1409DAED8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1409DB09C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmGetVisibleSubkeyCount @ 0x140A2A7C4 (CmGetVisibleSubkeyCount.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140BA9B0C (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  _QWORD *v1; // r14
  char v2; // r15
  char v3; // r12
  __int64 v4; // r13
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
  __int64 v20; // rcx
  ULONG_PTR UnitOfWork; // r14
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
  void **v56; // [rsp+98h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v58[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-48h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+D0h] [rbp-38h]
  ULONG_PTR v62; // [rsp+E0h] [rbp-28h] BYREF
  int v63; // [rsp+E8h] [rbp-20h]
  int v64; // [rsp+ECh] [rbp-1Ch]
  _QWORD v65[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 KeyNodeForKcb; // [rsp+100h] [rbp-8h]
  __int64 v67; // [rsp+108h] [rbp+0h]
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
      v31 = 1;
      goto LABEL_83;
    }
    if ( *(_WORD *)(v6 + 66) )
      break;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v60, v6);
    if ( started < 0 )
      goto LABEL_81;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v54, *(_QWORD *)(v6 + 72));
    if ( started < 0 )
      goto LABEL_81;
    started = 0;
    if ( !v2 )
    {
      CmpLockHashEntryExclusiveByKcb(v6);
      LOBYTE(v47) = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v54);
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
        UnitOfWork = CmpAllocateUnitOfWork();
        if ( !UnitOfWork || (v4 = CmpAllocateUnitOfWork()) == 0 )
        {
          started = -1073741670;
          goto LABEL_49;
        }
        CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v6 + 72));
        started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v17);
        if ( started < 0 )
          goto LABEL_49;
        CmpTransEnlistUowInKcb((_QWORD *)v4, v6);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, v17);
        if ( started < 0 )
          goto LABEL_49;
        if ( !CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v6 + 72) + 248LL), UnitOfWork)
          || !CmpLockIXLockExclusive(v6 + 248, v4, 0)
          || !CmpLockIXLockExclusive(v6 + 264, v4, 1) )
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
          *(_DWORD *)(UnitOfWork + 68) = 3;
          *(_QWORD *)(UnitOfWork + 88) = v6;
          *(_DWORD *)(v4 + 68) = 2;
          *(_QWORD *)(v4 + 80) = UnitOfWork;
          HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
          LODWORD(v17) = 0;
          v48 = 0;
          started = CmAddLogForAction(v4, 1u);
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
          CmpReportNotifyHelper((unsigned int)&v54, *(_QWORD *)&v36[1].Privilege[0].Luid.HighPart, v59, 1, (__int64)v58);
          if ( *(_QWORD *)&v36[1].Privilege[0].Luid.HighPart != CmpMasterHive )
            CmpReportNotifyHelper((unsigned int)&v54, CmpMasterHive, v59, 1, (__int64)v58);
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
            CmpReportNotifyHelper((unsigned int)&v54, *(_QWORD *)&v26[1].Privilege[0].Luid.HighPart, 0, 1, (__int64)v58);
            if ( *(_QWORD *)&v26[1].Privilege[0].Luid.HighPart != CmpMasterHive )
              CmpReportNotifyHelper((unsigned int)&v54, CmpMasterHive, 0, 1, (__int64)v58);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
            if ( started < 0 )
              goto LABEL_49;
            CmpFlushNotifiesOnKeyBodyList(v6, 8LL, &v53);
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
            CmpReportNotifyForKcbStack(&v54, 0LL, 1LL, v58);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
            if ( started < 0 )
              goto LABEL_49;
            LOBYTE(v42) = 1;
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v6, v41, &v53, v42);
            CmpFlushNotifiesOnKeyBodyList(v6, 8LL, &v53);
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
            CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v6);
          }
        }
        started = v17;
LABEL_49:
        v31 = 1;
        v8 = 1;
        goto LABEL_50;
      }
      v19 = (int *)(*(_QWORD *)(v6 + 72) + 248LL);
      if ( *v19 < 0 )
      {
        v31 = 0;
        started = CmpSnapshotTxOwnerArray((__int64)v19, &v49, &v56);
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
        started = CmpRollbackTransactionArray(v49, v56, v35, (__int64)&v51);
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
            UnitOfWork = (ULONG_PTR)P;
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
        started = CmpRollbackTransactionArray(v49, v56, v38, (__int64)&v51);
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
  UnitOfWork = (ULONG_PTR)P;
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
    CmpRundownUnitOfWork(UnitOfWork);
    ExFreePoolWithTag((PVOID)UnitOfWork, 0x77554D43u);
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
  if ( v58[0] != v58 )
    CmpSignalDeferredPosts(v58);
  return (unsigned int)started;
}
