/*
 * XREFs of CmRenameKey @ 0x1407D95B8
 * Callers:
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceSecurityNode @ 0x140496BD8 (CmpDereferenceSecurityNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCheckKcbStackAccess @ 0x1406F6094 (CmpCheckKcbStackAccess.c)
 *     CmpInsertKeyHash @ 0x1407DB4D8 (CmpInsertKeyHash.c)
 *     CmpInvalidateSubtree @ 0x1407DB530 (CmpInvalidateSubtree.c)
 *     CmpReferenceSecurityNode @ 0x1407DDD00 (CmpReferenceSecurityNode.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407E1740 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407E192C (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1407E1ABC (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpMarkAllChildrenDirty @ 0x1407E3300 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x1407E3798 (CmpUpdateParentForEachSon.c)
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpReportNotify @ 0x14086D768 (CmpReportNotify.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140875130 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x140875450 (CmpGetNameControlBlock.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpAddSubKeyToList @ 0x140882878 (CmpAddSubKeyToList.c)
 *     CmpMarkKeyDirty @ 0x1408839E4 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpNameSize @ 0x140885A7C (CmpNameSize.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     CmpCopyName @ 0x1408870F8 (CmpCopyName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x1409077A0 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140908010 (CmpGetEffectiveKcbSemantics.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140909A04 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpResetKeyNodeStack @ 0x140909A80 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackReset @ 0x14090A0F8 (CmpKeyEnumStackReset.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14090A1FC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14090A984 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByName @ 0x140940C90 (CmpFindKcbInHashEntryByName.c)
 *     CmpLogUnsupportedOperation @ 0x140963320 (CmpLogUnsupportedOperation.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14096360C (CmpTryAcquireKcbIXLocks.c)
 *     CmpCleanupRollbackPacket @ 0x140964460 (CmpCleanupRollbackPacket.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1409644C4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 *     CmpRemoveKeyHash @ 0x1409652FC (CmpRemoveKeyHash.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140987400 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpCreateLayerLink @ 0x1409FD390 (CmpCreateLayerLink.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1409FD420 (CmpAllocateLayerInfoForKcb.c)
 *     CmpRemoveSubKeyFromList @ 0x140A13FA8 (CmpRemoveSubKeyFromList.c)
 *     CmpDuplicateIndex @ 0x140A36F54 (CmpDuplicateIndex.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140A5BD28 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpMarkEntireIndexDirty @ 0x140A86614 (CmpMarkEntireIndexDirty.c)
 *     CmpFreeIndexByCell @ 0x140A8BF64 (CmpFreeIndexByCell.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 *     CmpSearchForOpenSubKeys @ 0x140AB65E8 (CmpSearchForOpenSubKeys.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140AB6FB0 (CmpSubtreeEnumeratorInitialize.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsShutdownRundownActive @ 0x140BBBA84 (CmpIsShutdownRundownActive.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmRenameKey(_QWORD *a1, unsigned __int16 *a2, char a3)
{
  char v3; // bl
  _QWORD *v4; // r12
  __int64 v5; // r15
  __int64 v6; // r13
  ULONG_PTR v7; // rdi
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  __int64 v10; // rsi
  __int64 v11; // rcx
  int started; // r14d
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // edx
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // r8
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  __int64 v25; // rcx
  unsigned int v26; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v28; // r11
  ULONG_PTR v29; // r14
  __int64 v30; // r8
  ULONG_PTR v31; // r10
  __int16 i; // r9
  __int64 v33; // rax
  __int16 v34; // r9
  char v35; // r12
  __int64 v36; // r12
  __int64 v37; // rbx
  __int16 v38; // r12
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  char v44; // bl
  __int64 v45; // rcx
  __int64 v46; // rcx
  char v47; // si
  __int16 j; // ax
  ULONG_PTR v49; // rax
  ULONG_PTR v50; // r14
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 KeyNodeForKcb; // rax
  ULONG_PTR v54; // rdx
  ULONG_PTR v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 EntryAtLayerHeight; // rax
  __int64 v61; // rcx
  __int64 v62; // rbx
  unsigned __int16 *v63; // r14
  unsigned __int16 v64; // ax
  __int64 v65; // rbx
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // r14
  __int64 v70; // rdx
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // edx
  __int64 v74; // rax
  char v75; // cl
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rax
  void *v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // rdi
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  char v91; // [rsp+50h] [rbp-B0h]
  char v92; // [rsp+52h] [rbp-AEh]
  bool v93; // [rsp+54h] [rbp-ACh]
  __int64 NameControlBlock; // [rsp+58h] [rbp-A8h]
  __int16 v96; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h]
  unsigned int v98; // [rsp+70h] [rbp-90h]
  unsigned int v99; // [rsp+74h] [rbp-8Ch]
  ULONG_PTR v100; // [rsp+78h] [rbp-88h]
  __int64 KcbAtLayerHeight; // [rsp+78h] [rbp-88h]
  __int64 v102; // [rsp+78h] [rbp-88h]
  unsigned int BugCheckParameter4; // [rsp+80h] [rbp-80h]
  unsigned int BugCheckParameter4_4; // [rsp+84h] [rbp-7Ch]
  ULONG_PTR v106; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  __int64 v108; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v109; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v110; // [rsp+C0h] [rbp-40h]
  unsigned int v111; // [rsp+C4h] [rbp-3Ch]
  __int64 v112; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v113; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v114; // [rsp+D8h] [rbp-28h]
  __int64 v115; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v116; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v117; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v118; // [rsp+100h] [rbp+0h] BYREF
  __int64 v119; // [rsp+108h] [rbp+8h] BYREF
  __int64 v120; // [rsp+110h] [rbp+10h] BYREF
  int v121; // [rsp+118h] [rbp+18h] BYREF
  __int64 v122; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v123[2]; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v124[2]; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v125[2]; // [rsp+168h] [rbp+68h] BYREF
  __int16 v126; // [rsp+190h] [rbp+90h] BYREF
  __int64 v127; // [rsp+198h] [rbp+98h]
  char v128[80]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v129; // [rsp+1F0h] [rbp+F0h]

  v3 = a3;
  v116 = a1;
  v4 = a1;
  v122 = 0LL;
  v115 = 0LL;
  v112 = 0LL;
  v119 = 0LL;
  v117 = 0LL;
  v113 = 0LL;
  v110 = 0;
  v118 = 0LL;
  memset_0(&v126, 0, 0x68uLL);
  v120 = 0LL;
  BugCheckParameter2 = 0LL;
  v106 = 0LL;
  memset(v123, 0, sizeof(v123));
  WORD1(v123[0]) = -1;
  memset(v124, 0, sizeof(v124));
  WORD1(v124[0]) = -1;
  v5 = 0LL;
  memset(v125, 0, sizeof(v125));
  WORD1(v125[0]) = -1;
  v6 = 0LL;
  v109 = 0LL;
  v7 = 0LL;
  BugCheckParameter3 = 0LL;
  HvpGetCellContextInitialize(&v115);
  HvpGetCellContextInitialize(&v112);
  v108 = 0LL;
  HvpGetCellContextInitialize(&v119);
  HvpGetCellContextInitialize(&v113);
  v111 = v8;
  v114 = 0LL;
  HvpGetCellContextInitialize(&v118);
  NameControlBlock = 0LL;
  v98 = v9;
  v99 = v9;
  v92 = 0;
  CmpSubtreeEnumeratorInitialize(&v126);
  CmpInitializeDelayDerefContext(&v117);
  while ( 1 )
  {
    v10 = MEMORY[0xFFFFF78000000014];
    v100 = v7;
    if ( (unsigned __int8)CmpIsShutdownRundownActive(0xFFFFF78000000014uLL) )
    {
      started = -1073741431;
      v47 = 0;
      v36 = 0LL;
      v37 = 0LL;
      goto LABEL_122;
    }
    CmpLockRegistryExclusive(v11);
    v5 = v4[1];
    v91 = 1;
    v6 = *(_QWORD *)(v5 + 72);
    started = CmpStartKcbStackForTopLayerKcb(v123, v5);
    if ( started < 0 )
      goto LABEL_73;
    started = CmpStartKcbStackForTopLayerKcb(v124, v6);
    if ( started < 0 )
      goto LABEL_187;
    if ( (*(_DWORD *)(v5 + 8) & 0x180) != 0
      || (v13 = *(_QWORD *)(v5 + 32), (*(_DWORD *)(v13 + 160) & 0x100000) != 0)
      || v13 == CmpMasterHive
      || (*(_DWORD *)(v5 + 184) & 0x40000) != 0 )
    {
      started = -1073741790;
LABEL_187:
      v36 = 0LL;
LABEL_43:
      v37 = 0LL;
      goto LABEL_121;
    }
    started = CmpPerformKeyBodyDeletionCheck(v4, 0LL);
    if ( started < 0 )
      goto LABEL_73;
    if ( v4[7] || v4[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v4, &v122);
      if ( started < 0 )
        goto LABEL_73;
      v14 = v122;
      started = CmpPerformKeyBodyDeletionCheck(v4, v122);
      if ( started < 0 )
        goto LABEL_73;
      if ( v14 )
      {
        CmpLogUnsupportedOperation(24LL);
        started = -1073741822;
        goto LABEL_73;
      }
      v3 = a3;
    }
    else
    {
      v122 = 0LL;
    }
    started = CmpCheckKcbStackAccess((__int64)v124, 0LL);
    if ( started < 0 )
      goto LABEL_73;
    LOBYTE(v16) = v3;
    started = CmpDoAccessCheckOnLayeredSubtree(
                (unsigned int)v123,
                v15,
                0,
                v16,
                *(_WORD *)(v5 + 66) != 0 ? 196633 : 0x10000,
                1);
    if ( started < 0 )
      goto LABEL_73;
    CmpFlushNotifiesOnKeyBodyList(v5, 0LL, &v117);
    CmpReportNotify(v5, v17, 1LL, 0LL);
    LOBYTE(v18) = 1;
    v20 = CmpTryAcquireKcbIXLocks(v5, v18, v19, &v109);
    started = v20;
    if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741267 )
      goto LABEL_71;
    started = CmpTryAcquireKcbIXLocks(v6, 1LL, v21, &v109);
    if ( started != -1073741267 )
    {
      v93 = v20 == -1073741267;
      if ( started < 0 )
      {
        v36 = 0LL;
        v37 = 0LL;
        goto LABEL_120;
      }
      if ( v20 != -1073741267 )
        break;
    }
    CmpLogTransactionAbortedWithChildName(v5, 0LL, 4LL);
    CmpDrainDelayDerefContext((_QWORD **)&v117);
    CmpUnlockRegistry(v46);
    v47 = 0;
    started = CmpAbortRollbackPacket(&v109, 0LL);
    if ( started < 0 )
    {
      v37 = 0LL;
      v36 = 0LL;
      v7 = BugCheckParameter3;
      goto LABEL_122;
    }
    CmpCleanupRollbackPacket(&v109);
    v109 = 0LL;
    CmpCleanupKcbStack(v123);
    CmpCleanupKcbStack(v124);
LABEL_70:
    v7 = BugCheckParameter3;
    v3 = a3;
  }
  v22 = CmpHashUnicodeComponent(a2);
  v23 = 37 * *(_DWORD *)(v6 + 16);
  v24 = v22;
  v25 = *(_QWORD *)(v6 + 32);
  v121 = v22;
  v26 = v22 + v23;
  KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v25, v26, v6, a2);
  v28 = 0LL;
  BugCheckParameter2 = KcbInHashEntryByName;
  v29 = KcbInHashEntryByName;
  if ( !KcbInHashEntryByName )
  {
    BugCheckParameter4_4 = -1;
    v38 = *(_WORD *)(v6 + 66);
    BugCheckParameter3 = 0LL;
    while ( 1 )
    {
      if ( v38 < 0 )
        goto LABEL_56;
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v124);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v39) == 1 )
        goto LABEL_56;
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      {
        LOBYTE(v40) = 1;
        CmpGetKeyNodeForKcb(KcbAtLayerHeight, &v112, v40);
        started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(KcbAtLayerHeight + 32));
        v41 = *(_QWORD *)(KcbAtLayerHeight + 32);
        if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v41, &v112);
        else
          HvpReleaseCellPaged(v41, &v112);
        v28 = 0LL;
        if ( started >= 0 )
        {
          BugCheckParameter3 = *(_QWORD *)(KcbAtLayerHeight + 32);
LABEL_56:
          BugCheckParameter4 = -1;
          v92 = v28;
          v36 = v28;
          goto LABEL_57;
        }
        if ( started != -1073741772 )
        {
          v36 = 0LL;
          v7 = 0LL;
          v37 = 0LL;
          goto LABEL_121;
        }
        if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v116) )
          goto LABEL_56;
      }
      --v38;
    }
  }
  CmpReferenceKeyControlBlock(KcbInHashEntryByName);
  BugCheckParameter4 = *(_DWORD *)(v29 + 40);
  BugCheckParameter4_4 = BugCheckParameter4;
  started = CmpStartKcbStackForTopLayerKcb(v125, v29);
  if ( started < 0 )
  {
LABEL_71:
    v36 = 0LL;
    v37 = 0LL;
    goto LABEL_120;
  }
  if ( !(unsigned __int8)CmpIsKeyStackDeleted(v125, 0LL) )
  {
    started = -1073741535;
    v36 = 0LL;
    v37 = 0LL;
    goto LABEL_120;
  }
  v31 = BugCheckParameter2;
  for ( i = *(_WORD *)(BugCheckParameter2 + 66); i >= 0; i = v34 - 1 )
  {
    v33 = CmpGetKcbAtLayerHeight(v125);
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(v33, v4) == 1 )
    {
      v35 = 1;
      goto LABEL_33;
    }
  }
  v35 = v92;
LABEL_33:
  v92 = v35;
  started = CmpTryAcquireKcbIXLocks(v31, 1LL, v30, &v109);
  if ( started == -1073741267 )
  {
    v93 = 1;
  }
  else if ( started < 0 )
  {
    goto LABEL_72;
  }
  started = CmpPrepareToInvalidateAllHigherLayerKcbs(BugCheckParameter2, 2LL, &v109);
  if ( started == -1073741267 )
  {
    v93 = 1;
  }
  else if ( started < 0 )
  {
LABEL_72:
    v7 = v100;
LABEL_73:
    v36 = 0LL;
    v37 = 0LL;
    goto LABEL_121;
  }
  started = CmpPrepareForSubtreeInvalidation(BugCheckParameter2, 0LL, &v109);
  if ( started == -1073741267 )
  {
    v36 = 0LL;
    v93 = 1;
    BugCheckParameter3 = v100;
  }
  else
  {
    v92 = v35;
    v36 = 0LL;
    BugCheckParameter3 = v100;
    if ( started < 0 )
    {
      v7 = v100;
      goto LABEL_43;
    }
  }
LABEL_57:
  v42 = CmpPrepareToInvalidateAllHigherLayerKcbs(v5, 2LL, &v109);
  started = v42;
  if ( v42 == -1073741267 )
  {
    v93 = 1;
  }
  else if ( v42 < 0 )
  {
    goto LABEL_119;
  }
  if ( *(_WORD *)(v5 + 66) )
  {
    v43 = CmpPrepareForSubtreeInvalidation(v5, 0LL, &v109);
    started = v43;
    if ( v43 == -1073741267 )
    {
LABEL_64:
      CmpLogTransactionAbortedWithChildName(v5, 0LL, 4LL);
      v44 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
        CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
        v44 = 0;
        BugCheckParameter2 = 0LL;
      }
      CmpDrainDelayDerefContext((_QWORD **)&v117);
      CmpUnlockRegistry(v45);
      v91 = v44;
      started = CmpAbortRollbackPacket(&v109, 0LL);
      if ( started < 0 )
        goto LABEL_119;
      CmpCleanupRollbackPacket(&v109);
      v109 = 0LL;
      CmpCleanupKcbStack(v123);
      CmpCleanupKcbStack(v124);
      v4 = v116;
      goto LABEL_70;
    }
    if ( v43 < 0 )
      goto LABEL_119;
  }
  if ( v93 )
    goto LABEL_64;
  if ( BugCheckParameter2 )
  {
    CmpInvalidateAllHigherLayerKcbs(BugCheckParameter2, 8LL, 2LL, &v117);
    CmpInvalidateSubtree(BugCheckParameter2, 8, 0, (unsigned int)&v117, 0LL);
    CmpFlushNotifiesOnKeyBodyList(BugCheckParameter2, 8LL, &v117);
    CmpMarkKeyUnbacked(BugCheckParameter2, &v117);
    CmpDiscardKcb(BugCheckParameter2);
  }
  CmpInvalidateAllHigherLayerKcbs(v5, 8LL, 2LL, &v117);
  if ( *(_WORD *)(v5 + 66) )
    CmpInvalidateSubtree(v5, 8, 0, (unsigned int)&v117, 0LL);
  for ( j = 0; ; j = v96 + 1 )
  {
    v96 = j;
    if ( j >= *(__int16 *)(v5 + 66) )
      break;
    v102 = CmpGetKcbAtLayerHeight(v124);
    v49 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v6 + 32), v26, v6, a2);
    v116 = (_QWORD *)v49;
    v50 = v49;
    if ( v49 )
    {
      CmpReferenceKeyControlBlock(v49);
      CmpDereferenceKeyControlBlockUnsafe(v106);
      v106 = v50;
    }
    else
    {
      if ( *(_DWORD *)(v102 + 40) == -1 )
        goto LABEL_91;
      CmpGetKeyNodeForKcb(v102, &v112, 1LL);
      started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v102 + 32));
      v51 = *(_QWORD *)(v102 + 32);
      if ( (*(_BYTE *)(v51 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v51, &v112);
      else
        HvpReleaseCellPaged(v51, &v112);
      if ( started == -1073741772 )
      {
LABEL_91:
        v52 = 0xFFFFFFFFLL;
        v110 = -1;
      }
      else
      {
        if ( started < 0 )
          goto LABEL_119;
        v52 = v110;
      }
      started = CmpCreateKeyControlBlock(*(_QWORD *)(v102 + 32), v52, v102, v106, 0, a2, v24, v26, &v116);
      if ( started < 0 )
        goto LABEL_119;
      if ( v106 )
        CmpDereferenceKeyControlBlockUnsafe(v106);
      v106 = (ULONG_PTR)v116;
    }
  }
  v37 = 0LL;
  if ( !v106 || (started = CmpAllocateLayerInfoForKcb(v106), started >= 0) )
  {
    if ( !*(_WORD *)(v5 + 66)
      || (started = CmpPromoteKey(v123, 1LL, 0LL), started >= 0)
      && (started = CmpPromoteSubtree(v123, 0LL), started >= 0) )
    {
      started = HvpMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
      if ( started >= 0 )
      {
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v6, &v118, 1LL);
        v114 = KeyNodeForKcb;
        v54 = *(unsigned int *)(KeyNodeForKcb + 28);
        if ( (_DWORD)v54 != -1 )
        {
          started = CmpMarkEntireIndexDirty(*(_QWORD *)(v6 + 32), v54);
          if ( started < 0 )
            goto LABEL_120;
          KeyNodeForKcb = v114;
        }
        v55 = *(unsigned int *)(KeyNodeForKcb + 32);
        if ( (_DWORD)v55 == -1 || (started = CmpMarkEntireIndexDirty(*(_QWORD *)(v6 + 32), v55), started >= 0) )
        {
          started = HvpMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40));
          if ( started >= 0 )
          {
            if ( BugCheckParameter4 == -1
              || (started = CmpMarkKeyDirty(*(_QWORD *)(v6 + 32), BugCheckParameter4), started >= 0) )
            {
              if ( v92 )
              {
                started = CmpSubtreeEnumeratorStartForKcbStack(&v126, v123);
                if ( started < 0 )
                  goto LABEL_120;
                while ( (unsigned int)CmpSubtreeEnumeratorAdvance(&v126) != -2147483622 )
                {
                  CmpSubtreeEnumeratorGetCurrentKeyStacks(&v126, 0LL, &v120);
                  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v120, *(unsigned __int16 *)(v5 + 66));
                  started = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8));
                  if ( started < 0 )
                    goto LABEL_119;
                }
              }
              else
              {
                started = CmpMarkAllChildrenDirty(*(_QWORD *)(v5 + 32));
                if ( started < 0 )
                  goto LABEL_120;
              }
              CmpNameSize(a2);
              started = HvAllocateCell(*(_QWORD *)(v5 + 32), (__int64)&v108, (__int64)&v119);
              if ( started < 0 )
                goto LABEL_120;
              LOBYTE(v56) = 1;
              v57 = CmpGetKeyNodeForKcb(v5, &v113, v56);
              v58 = v108;
              *(_OWORD *)v108 = *(_OWORD *)v57;
              *(_OWORD *)(v58 + 16) = *(_OWORD *)(v57 + 16);
              *(_OWORD *)(v58 + 32) = *(_OWORD *)(v57 + 32);
              *(_OWORD *)(v58 + 48) = *(_OWORD *)(v57 + 48);
              *(_QWORD *)(v58 + 64) = *(_QWORD *)(v57 + 64);
              *(_DWORD *)(v58 + 72) = *(_DWORD *)(v57 + 72);
              v59 = *(_QWORD *)(v5 + 32);
              if ( (*(_BYTE *)(v59 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v59, &v113);
              else
                HvpReleaseCellPaged(v59, &v113);
              v62 = v108;
              v63 = a2;
              v64 = CmpCopyName(v108 + 76, a2);
              *(_WORD *)(v62 + 72) = v64;
              if ( v64 >= *a2 )
                *(_WORD *)(v108 + 2) &= ~0x20u;
              else
                *(_WORD *)(v62 + 2) |= 0x20u;
              v65 = v108;
              *(_QWORD *)(v108 + 4) = v10;
              if ( v92 )
                *(_BYTE *)(v65 + 13) |= 3u;
              if ( *(_WORD *)(v5 + 66) )
              {
                v66 = v108;
                started = CmpReferenceSecurityNode(*(_QWORD *)(v5 + 32));
                if ( started >= 0 )
                {
                  v63 = a2;
                  v111 = *(_DWORD *)(v66 + 44);
                  goto LABEL_134;
                }
                goto LABEL_119;
              }
LABEL_134:
              v67 = *(_QWORD *)(v5 + 32);
              if ( (*(_BYTE *)(v67 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v67, &v119);
              else
                HvpReleaseCellPaged(v67, &v119);
              v108 = 0LL;
              NameControlBlock = CmpGetNameControlBlock(v63, &v121);
              v37 = NameControlBlock;
              if ( NameControlBlock )
              {
                v68 = v114;
                if ( *(_DWORD *)(v114 + 28) != -1 )
                {
                  started = CmpDuplicateIndex(*(_QWORD *)(v6 + 32));
                  if ( started < 0 )
                    goto LABEL_119;
                }
                if ( *(_DWORD *)(v68 + 32) != -1 )
                {
                  started = CmpDuplicateIndex(*(_QWORD *)(v6 + 32));
                  if ( started < 0 )
                    goto LABEL_119;
                }
                if ( BugCheckParameter4 == -1 || (unsigned __int8)CmpRemoveSubKeyFromList(*(_QWORD *)(v6 + 32)) )
                {
                  started = CmpAddSubKeyToList(*(_QWORD *)(v6 + 32));
                  if ( started < 0 )
                    goto LABEL_119;
                  if ( *(_WORD *)(v5 + 66) || (unsigned __int8)CmpRemoveSubKeyFromList(*(_QWORD *)(v6 + 32)) )
                  {
                    v69 = v114;
                    v70 = 0xFFFFFFFFLL;
                    v71 = *(_DWORD *)(v114 + 28);
                    *(_DWORD *)(v114 + 28) = v98;
                    v98 = v71;
                    v72 = *(_DWORD *)(v69 + 32);
                    *(_DWORD *)(v69 + 32) = v99;
                    v99 = v72;
                    if ( BugCheckParameter4 != -1 )
                      --*(_DWORD *)(v69 + 4 * ((unsigned __int64)BugCheckParameter4 >> 31) + 20);
                    ++*(_DWORD *)(v69 + 24);
                    if ( !*(_WORD *)(v5 + 66) )
                      --*(_DWORD *)(v69 + 4 * ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 31) + 20);
                    LOBYTE(v70) = 1;
                    CmpCleanUpSubKeyInfo(v6, v70);
                    v73 = *a2;
                    if ( (unsigned __int16)*(_DWORD *)(v69 + 52) < v73 )
                    {
                      *(_WORD *)(v69 + 52) = v73;
                      *(_WORD *)(v6 + 176) = v73;
                    }
                    if ( *(_WORD *)(v5 + 66) )
                    {
                      v74 = CmpGetKeyNodeForKcb(v5, &v113, 1LL);
                      v75 = *(_BYTE *)(v74 + 13);
                      *(_WORD *)(v74 + 2) &= 0x20u;
                      *(_WORD *)(v74 + 52) = 0;
                      *(_DWORD *)(v74 + 52) &= 0xFF00FFFF;
                      *(_BYTE *)(v74 + 13) = v75 & 0x7C | 1;
                      *(_DWORD *)(v74 + 28) = -1;
                      *(_DWORD *)(v74 + 32) = -1;
                      *(_DWORD *)(v74 + 40) = -1;
                      *(_DWORD *)(v74 + 48) = -1;
                      *(_QWORD *)(v74 + 20) = 0LL;
                      *(_DWORD *)(v74 + 36) = 0;
                      *(_BYTE *)(v74 + 55) = 0;
                      *(_QWORD *)(v74 + 56) = 0LL;
                      *(_DWORD *)(v74 + 64) = 0;
                      *(_WORD *)(v74 + 74) = 0;
                      v76 = *(_QWORD *)(v5 + 32);
                      if ( (*(_BYTE *)(v76 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v76, &v113);
                      else
                        HvpReleaseCellPaged(v76, &v113);
                    }
                    else
                    {
                      HvFreeCell(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40));
                    }
                    *(_DWORD *)(v5 + 40) = -1;
                    v111 = -1;
                    if ( *(_WORD *)(v5 + 66) )
                    {
                      v77 = *(_QWORD **)(v5 + 192);
                      v78 = *v77;
                      if ( *(_QWORD **)(*v77 + 8LL) != v77 || (v79 = (_QWORD *)v77[1], (_QWORD *)*v79 != v77) )
                        __fastfail(3u);
                      *v79 = v78;
                      *(_QWORD *)(v78 + 8) = v79;
                      CmpDereferenceKeyControlBlockWithLock(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL) + 16LL));
                      *(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL) = 0LL;
                      CmpCreateLayerLink(v106);
                    }
                    CmpRemoveKeyHash(*(_QWORD *)(v5 + 32), v5 + 16);
                    v80 = *(_QWORD *)(v5 + 32);
                    *(_DWORD *)(v5 + 16) = v26;
                    CmpInsertKeyHash(v80, v5 + 16);
                    v81 = *(_QWORD *)(v5 + 80);
                    *(_QWORD *)(v5 + 80) = NameControlBlock;
                    NameControlBlock = v81;
                    if ( *(_QWORD *)(v5 + 296) )
                      _InterlockedOr64((volatile signed __int64 *)(v5 + 296), 1uLL);
                    v82 = *(void **)(v5 + 200);
                    if ( (unsigned __int64)v82 >= 2 )
                      ExFreePoolWithTag(v82, 0x624E4D43u);
                    *(_QWORD *)(v5 + 200) = 0LL;
                    if ( v92 )
                      *(_BYTE *)(v5 + 65) = 3;
                    CmpUpdateParentForEachSon(*(_QWORD *)(v5 + 32));
                    if ( v92 )
                    {
                      v83 = 0LL;
                      v84 = 512LL;
                      do
                      {
                        CmpKeyEnumStackReset(v83 + v129 + 56);
                        v83 += 408LL;
                        --v84;
                      }
                      while ( v84 );
                      v127 = 0LL;
                      v126 = -2;
                      CmpResetKeyNodeStack(v128);
                      CmpSubtreeEnumeratorBeginForKcbStack(&v126, v123);
                      v85 = CmpSubtreeEnumeratorAdvance(&v126);
                      v69 = v114;
                      while ( v85 != -2147483622 )
                      {
                        CmpSubtreeEnumeratorGetCurrentKeyStacks(&v126, 0LL, &v120);
                        v86 = CmpKeyNodeStackGetEntryAtLayerHeight(v120, *(unsigned __int16 *)(v5 + 66));
                        *(_BYTE *)(*(_QWORD *)(v86 + 16) + 13LL) |= 3u;
                        v85 = CmpSubtreeEnumeratorAdvance(&v126);
                      }
                    }
                    *(_QWORD *)(v69 + 4) = v10;
                    v87 = *(_QWORD *)(v6 + 32);
                    *(_QWORD *)(v6 + 168) = v10;
                    if ( (*(_BYTE *)(v87 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v87, &v118);
                    else
                      HvpReleaseCellPaged(v87, &v118);
                    v114 = 0LL;
                    CmpSearchForOpenSubKeys(v5, 1LL, 0LL);
                    ++*(_QWORD *)(v6 + 304);
                    ++*(_QWORD *)(v5 + 304);
                    if ( BugCheckParameter4_4 != -1 )
                      CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), BugCheckParameter4_4);
                    started = 0;
                    goto LABEL_119;
                  }
                }
                started = -1073741443;
LABEL_119:
                v37 = NameControlBlock;
                goto LABEL_120;
              }
              started = -1073741670;
            }
          }
        }
      }
    }
  }
LABEL_120:
  v7 = BugCheckParameter3;
LABEL_121:
  v47 = v91;
LABEL_122:
  CmpSubtreeEnumeratorCleanup(&v126);
  if ( v114 )
  {
    v61 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v61, &v118);
    else
      HvpReleaseCellPaged(v61, &v118);
  }
  if ( v36 )
  {
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v7, &v115);
    else
      HvpReleaseCellPaged(v7, &v115);
  }
  if ( v111 != -1 )
    CmpDereferenceSecurityNode(*(_QWORD *)(v5 + 32), v111);
  if ( v108 )
  {
    v88 = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)(v88 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v88, &v119);
    else
      HvpReleaseCellPaged(v88, &v119);
  }
  if ( v98 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), v98);
  if ( v99 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), v99);
  if ( v37 )
    CmpDereferenceNameControlBlockWithLock(v37);
  if ( v106 )
    CmpDereferenceKeyControlBlockWithLock(v106);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
  CmpDrainDelayDerefContext((_QWORD **)&v117);
  if ( v47 )
    CmpUnlockRegistry(v89);
  CmpCleanupKcbStack(v123);
  CmpCleanupKcbStack(v124);
  CmpCleanupKcbStack(v125);
  CmpCleanupRollbackPacket(&v109);
  return (unsigned int)started;
}
