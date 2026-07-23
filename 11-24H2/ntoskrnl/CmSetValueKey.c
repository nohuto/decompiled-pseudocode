/*
 * XREFs of CmSetValueKey @ 0x14086F460
 * Callers:
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047B08C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14047F6A0 (CmpTransEnlistUowInKcb.c)
 *     CmpSwapValueInList @ 0x140492558 (CmpSwapValueInList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1407900F4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpLogTransactionAbortedByName @ 0x1407E06A0 (CmpLogTransactionAbortedByName.c)
 *     CmpGetValueForAudit @ 0x1407E39A0 (CmpGetValueForAudit.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086D420 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086E968 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     CmpSnapshotTxOwnerArray @ 0x140870400 (CmpSnapshotTxOwnerArray.c)
 *     CmpRollbackTransactionArray @ 0x140870518 (CmpRollbackTransactionArray.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408705E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14088067C (CmpConstructNameFromKcbNameBlocks.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 *     CmpSetValueKeyExisting @ 0x140883D24 (CmpSetValueKeyExisting.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     CmpSetValueKeyNew @ 0x140884CD8 (CmpSetValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x14088522C (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x140885910 (CmpAddValueKeyNew.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     CmpIsValueTombstone @ 0x140907D80 (CmpIsValueTombstone.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     CmpRemoveValueFromList @ 0x1409F835C (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     CmpLockIXLockIntent @ 0x140A22FF4 (CmpLockIXLockIntent.c)
 *     CmpAllocateUnitOfWork @ 0x140A230A0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A230F8 (CmpLockIXLockExclusive.c)
 *     CmpCloneKCBValueListForTrans @ 0x140A3715C (CmpCloneKCBValueListForTrans.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpIsShutdownRundownActive @ 0x140BBBA84 (CmpIsShutdownRundownActive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        size_t a5,
        __int64 a6,
        char a7)
{
  __int16 v7; // r14
  __int64 v8; // r15
  ULONG_PTR v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // edi
  struct _PRIVILEGE_SET *v14; // r12
  __int64 v15; // r13
  int NameInListWithStatus; // edi
  char *v17; // rdi
  char *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r15d
  wchar_t *Buffer; // rcx
  __int16 v25; // di
  ULONG_PTR *v26; // rbx
  ULONG_PTR *v27; // rcx
  char v28; // r13
  __int64 v29; // r8
  __int64 v30; // rcx
  __int16 i; // ax
  PPRIVILEGE_SET v32; // rcx
  unsigned int v33; // edi
  int v34; // eax
  __int16 v35; // r14
  signed __int64 v36; // r15
  ULONG_PTR *v37; // rdi
  ULONG_PTR *v38; // rcx
  __int16 v39; // di
  PPRIVILEGE_SET v40; // rcx
  __int16 v41; // di
  __int16 v42; // r14
  ULONG_PTR *v43; // rdi
  ULONG_PTR *v44; // rcx
  __int16 v45; // di
  PPRIVILEGE_SET v46; // rcx
  ULONG_PTR v47; // rcx
  __int64 CellFlat; // rax
  __int64 v49; // r13
  unsigned int v50; // r15d
  ULONG_PTR v51; // rcx
  int v52; // r12d
  ULONG_PTR v53; // rcx
  unsigned int v54; // ebx
  int v55; // eax
  void *v56; // r12
  __int16 v57; // ax
  struct _PRIVILEGE_SET *v58; // r15
  PPRIVILEGE_SET v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rcx
  void *v62; // rbx
  ULONG_PTR v64; // rdx
  _QWORD *UnitOfWork; // rax
  _QWORD *v66; // r14
  unsigned int v67; // r15d
  PCUNICODE_STRING v68; // rcx
  unsigned int Length; // eax
  bool v70; // zf
  int v71; // eax
  __int64 v72; // rcx
  __int16 v73; // r15
  signed __int64 v74; // r12
  ULONG_PTR *v75; // rdi
  ULONG_PTR *v76; // rcx
  int v77; // eax
  __int64 v78; // rcx
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *v80; // rax
  __int64 v81; // r12
  __int64 v82; // rax
  struct _PRIVILEGE_SET *v83; // rcx
  PPRIVILEGE_SET v84; // rcx
  PPRIVILEGE_SET v85; // rcx
  unsigned int v86; // ebx
  __int64 v87; // rcx
  ULONG_PTR v88; // rcx
  __int64 CellPaged; // rax
  __int64 v90; // rcx
  char v91; // al
  int v92; // eax
  __int64 v93; // r8
  unsigned __int16 *v94; // rbx
  __int64 v95; // rcx
  char IsValueTombstone; // di
  ULONG_PTR v97; // rcx
  unsigned int Src; // [rsp+20h] [rbp-E0h]
  void *Srca; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  char v101; // [rsp+40h] [rbp-C0h]
  char v102; // [rsp+41h] [rbp-BFh]
  char v103; // [rsp+42h] [rbp-BEh]
  _DWORD *v104; // [rsp+48h] [rbp-B8h]
  PPRIVILEGE_SET Pool; // [rsp+50h] [rbp-B0h]
  char v106[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v107; // [rsp+5Ah] [rbp-A6h]
  char PreviousMode; // [rsp+5Ch] [rbp-A4h]
  __int128 v109; // [rsp+60h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-90h]
  unsigned int v111; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v112; // [rsp+84h] [rbp-7Ch]
  __int64 v113; // [rsp+88h] [rbp-78h] BYREF
  BOOL v114; // [rsp+90h] [rbp-70h]
  unsigned int v115; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v116; // [rsp+98h] [rbp-68h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-60h] BYREF
  PCUNICODE_STRING String2; // [rsp+A8h] [rbp-58h]
  _DWORD BugCheckParameter4[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  void *v120; // [rsp+C0h] [rbp-40h]
  void *v121; // [rsp+C8h] [rbp-38h]
  __int64 v122; // [rsp+D0h] [rbp-30h]
  int v123; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v124; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v125[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v126; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v127; // [rsp+100h] [rbp+0h]
  __int128 v128; // [rsp+108h] [rbp+8h] BYREF
  __int128 v129; // [rsp+118h] [rbp+18h] BYREF
  __int128 v130; // [rsp+128h] [rbp+28h]
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp+38h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+148h] [rbp+48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+168h] [rbp+68h] BYREF

  v7 = 0;
  v127 = a6;
  v122 = a1;
  v125[1] = v125;
  v8 = a1;
  v121 = a4;
  v125[0] = v125;
  v112 = a3;
  v109 = 0LL;
  WORD1(v109) = -1;
  v9 = 0LL;
  String2 = a2;
  v115 = 0;
  v124 = 0LL;
  *(_QWORD *)&BugCheckParameter4[1] = 0LL;
  LODWORD(v116) = 0;
  v117 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v104 = 0LL;
  v106[0] = 0;
  v123 = 0;
  v128 = 0LL;
  v113 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextInitialize(&BugCheckParameter4[1]);
  HvpGetCellContextInitialize(&v117);
  CmpInitializeDelayDerefContext(&v128);
  v120 = 0LL;
  BugCheckParameter4[0] = -1;
  v111 = -1;
  v129 = 0LL;
  v114 = 0;
  v130 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive(v10) )
    {
      NameInListWithStatus = -1073741431;
      v103 = 0;
      goto LABEL_182;
    }
    v12 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v11);
    v9 = *(_QWORD *)(v8 + 8);
    v103 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
      break;
    v13 = *(__int16 *)(v9 + 66);
    v14 = 0LL;
    Pool = 0LL;
    if ( v13 >= 2 )
    {
      Pool = (PPRIVILEGE_SET)CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v13 - 1), 0x35364D43u);
      v14 = Pool;
      if ( !Pool )
      {
        NameInListWithStatus = -1073741670;
        goto LABEL_182;
      }
    }
    v15 = *(__int16 *)(v9 + 66);
    LOWORD(v109) = v13;
    Privileges[1] = v14;
    v107 = v15;
    WORD1(v109) = v15;
    if ( (_WORD)v15 )
    {
      v82 = *(_QWORD *)(v9 + 192);
      if ( !v82 )
        goto LABEL_8;
      do
      {
        v83 = *(struct _PRIVILEGE_SET **)(v82 + 16);
        if ( (__int16)v15 >= 2 )
        {
          *((_QWORD *)v14 + (__int16)v15 - 2) = v83;
        }
        else
        {
          Privileges[(__int16)v15 - 1] = v83;
          v14 = Privileges[1];
        }
        v82 = *(_QWORD *)(v82 + 24);
        LOWORD(v15) = v15 - 1;
      }
      while ( v82 );
    }
    else
    {
      Privileges[v15 - 1] = (PPRIVILEGE_SET)v9;
      v14 = Privileges[1];
    }
    LOWORD(v15) = WORD1(v109);
    v107 = WORD1(v109);
    Pool = v14;
LABEL_8:
    if ( *(_QWORD *)(v8 + 56) || *(_QWORD *)(v8 + 64) )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v109);
      v102 = 1;
    }
    else
    {
      if ( (v15 & 0x8000u) == 0LL )
      {
        v17 = (char *)&v109 + 8;
        do
        {
          if ( v7 >= 2 )
            v18 = &v17[(char *)v14 - ((char *)&v109 + 8) - 16];
          else
            v18 = v17;
          CmpLockKcbShared(*(_QWORD *)v18);
          v17 += 8;
          ++v7;
        }
        while ( v7 <= (__int16)v15 );
        v8 = v122;
      }
      v7 = 0;
      v102 = 0;
    }
    v101 = 1;
    if ( *(_QWORD *)(v8 + 56) || *(_QWORD *)(v8 + 64) )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v8, 0LL) )
      {
        v91 = *(_BYTE *)(v8 + 48);
        goto LABEL_230;
      }
      NameInListWithStatus = CmpTransSearchAddTransFromKeyBody(v8, &v113);
      if ( NameInListWithStatus < 0 )
        goto LABEL_139;
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
      {
        NameInListWithStatus = -1072103423;
        goto LABEL_139;
      }
    }
    v19 = v113;
    while ( 2 )
    {
      v20 = v122;
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v122, v19) )
      {
        v91 = *(_BYTE *)(v20 + 48);
LABEL_230:
        NameInListWithStatus = (v91 & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_139;
      }
      if ( *(_BYTE *)(v9 + 65) == 1 )
        goto LABEL_202;
      if ( v19 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v21);
        v104 = UnitOfWork;
        v66 = UnitOfWork;
        if ( !UnitOfWork )
        {
          v58 = Pool;
          NameInListWithStatus = -1073741670;
          LOBYTE(v7) = 0;
          v56 = 0LL;
          goto LABEL_104;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        NameInListWithStatus = CmpTransEnlistUowInCmTrans(v66, v19);
        if ( NameInListWithStatus >= 0 )
        {
          if ( (unsigned __int8)CmpLockIXLockIntent(v9 + 248, v66)
            && (unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v66, 1LL) )
          {
            HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
            LOBYTE(v7) = 1;
            NameInListWithStatus = CmpCloneKCBValueListForTrans(v9, v19, v106);
            if ( NameInListWithStatus >= 0 )
            {
              HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
              LOBYTE(v7) = 0;
LABEL_45:
              for ( i = v15; ; --i )
              {
                if ( i < 0 )
                {
                  v33 = a5;
                  goto LABEL_52;
                }
                v32 = i >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v14 + i - 2) : Privileges[i - 1];
                if ( v32[2].PrivilegeCount != -1 )
                  break;
              }
              if ( (v32[9].Control & 0x100000) == 0 )
              {
                v33 = a5;
                goto LABEL_52;
              }
              if ( v112 == 6
                && (v33 = a5, (a5 & 1) == 0)
                && (unsigned int)a5 <= 0xFFFF
                && String2
                && RtlEqualUnicodeString(&CmSymbolicLinkValueName, String2, 1u)
                && !(unsigned __int8)RtlIsSandboxedToken(&SubjectContext) )
              {
LABEL_52:
                if ( *(_DWORD *)(v9 + 40) == -1 )
                {
                  v73 = 0;
                  if ( (v15 & 0x8000u) == 0LL )
                  {
                    v74 = (char *)v14 - ((char *)&v109 + 8);
                    v75 = (ULONG_PTR *)&v109 + 1;
                    do
                    {
                      if ( v73 >= 2 )
                        v76 = (ULONG_PTR *)((char *)v75 + v74 - 16);
                      else
                        v76 = v75;
                      CmpUnlockKcb(*v76);
                      ++v75;
                      ++v73;
                    }
                    while ( v73 <= (__int16)v15 );
                    v14 = Pool;
                  }
                  v101 = 0;
                  LOBYTE(v22) = 1;
                  NameInListWithStatus = CmpPromoteKey(&v109, 0LL, v22);
                  if ( NameInListWithStatus >= 0 )
                  {
                    v101 = 1;
                    v102 = 1;
                    goto LABEL_69;
                  }
                }
                else
                {
                  if ( v102 )
                    goto LABEL_83;
                  Src = v33;
                  v34 = CmpCompareNewValueDataAgainstKCBCache(v9, String2, v112, v121);
                  if ( v34 == 1 )
                  {
                    v42 = 0;
                    if ( (v15 & 0x8000u) == 0LL )
                    {
                      v43 = (ULONG_PTR *)&v109 + 1;
                      do
                      {
                        if ( v42 >= 2 )
                          v44 = (ULONG_PTR *)((char *)v43 + (char *)v14 - ((char *)&v109 + 8) - 16);
                        else
                          v44 = v43;
                        CmpUnlockKcb(*v44);
                        ++v43;
                        ++v42;
                      }
                      while ( v42 <= (__int16)v15 );
                      v19 = v113;
                    }
                    v45 = 0;
                    if ( (__int16)v15 - 1 >= 0 )
                    {
                      do
                      {
                        if ( v45 >= 2 )
                          v85 = (PPRIVILEGE_SET)*((_QWORD *)v14 + v45 - 2);
                        else
                          v85 = Privileges[v45 - 1];
                        CmpLockKcbShared(v85);
                        ++v45;
                      }
                      while ( v45 <= (__int16)v15 - 1 );
                      v19 = v113;
                    }
                    if ( (__int16)v15 >= 2 )
                      v46 = (PPRIVILEGE_SET)*((_QWORD *)v14 + (__int16)v15 - 2);
                    else
                      v46 = Privileges[(__int16)v15 - 1];
                    CmpLockKcbExclusive(v46);
                    goto LABEL_70;
                  }
                  if ( v34 )
                  {
                    v102 = 1;
                    if ( *(struct _KTHREAD **)(v9 + 56) == KeGetCurrentThread() )
                    {
                      Pool = Privileges[1];
                      v107 = WORD1(v109);
                      goto LABEL_58;
                    }
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 48), 1LL, 17LL) != 17 )
                    {
                      LODWORD(v15) = SWORD1(v109);
                      v35 = 0;
                      v14 = Privileges[1];
                      Pool = Privileges[1];
                      v107 = WORD1(v109);
                      if ( (SWORD1(v109) & 0x8000u) == 0 )
                      {
                        v36 = (char *)Privileges[1] - ((char *)&v109 + 8);
                        v37 = (ULONG_PTR *)&v109 + 1;
                        do
                        {
                          if ( v35 >= 2 )
                            v38 = (ULONG_PTR *)((char *)v37 + v36 - 16);
                          else
                            v38 = v37;
                          CmpUnlockKcb(*v38);
                          ++v37;
                          ++v35;
                        }
                        while ( v35 <= (__int16)v15 );
                      }
                      v39 = 0;
                      if ( (int)v15 - 1 >= 0 )
                      {
                        do
                        {
                          if ( v39 >= 2 )
                            v84 = (PPRIVILEGE_SET)*((_QWORD *)v14 + v39 - 2);
                          else
                            v84 = Privileges[v39 - 1];
                          CmpLockKcbShared(v84);
                          ++v39;
                        }
                        while ( v39 <= (int)v15 - 1 );
                        LOWORD(v15) = v107;
                      }
                      if ( (__int16)v15 >= 2 )
                        v40 = (PPRIVILEGE_SET)*((_QWORD *)v14 + (__int16)v15 - 2);
                      else
                        v40 = Privileges[(__int16)v15 - 1];
                      CmpLockKcbExclusive(v40);
LABEL_69:
                      v19 = v113;
LABEL_70:
                      v7 = 0;
                      continue;
                    }
                    v41 = WORD1(v109);
                    *(_QWORD *)(v9 + 56) = KeGetCurrentThread();
                    Pool = Privileges[1];
                    v107 = v41;
LABEL_58:
                    v19 = v113;
LABEL_83:
                    ++*(_QWORD *)(v9 + 304);
                    HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                    LOBYTE(v7) = 1;
                    if ( v19
                      || (NameInListWithStatus = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40)),
                          NameInListWithStatus >= 0) )
                    {
                      v47 = *(_QWORD *)(v9 + 32);
                      if ( (*(_BYTE *)(v47 + 140) & 1) != 0 )
                        CellFlat = HvpGetCellFlat(v47, *(unsigned int *)(v9 + 40));
                      else
                        CellFlat = HvpGetCellPaged(v47);
                      v49 = CellFlat;
                      CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), CellFlat, *(_DWORD *)(v9 + 40));
                      NameInListWithStatus = CmpFindNameInListWithStatus(
                                               *(_QWORD *)(v9 + 32),
                                               (__int64)&v116,
                                               (__int64)BugCheckParameter4);
                      if ( (int)(NameInListWithStatus + 0x80000000) >= 0 && NameInListWithStatus != -1073741772 )
                      {
LABEL_170:
                        v58 = Pool;
                        goto LABEL_171;
                      }
                      v50 = BugCheckParameter4[0];
                      if ( a7 )
                      {
                        SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack((__int64)&v109, v113, 0LL);
                        v80 = (void *)CmpAllocatePool(
                                        0x100uLL,
                                        *(unsigned int *)(SecurityCacheEntryForKcbStack + 24),
                                        0x33414D43u);
                        v81 = (__int64)v80;
                        if ( !v80 )
                        {
                          NameInListWithStatus = -1073741670;
                          goto LABEL_170;
                        }
                        memmove(
                          v80,
                          (const void *)(SecurityCacheEntryForKcbStack + 32),
                          *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
                        v120 = (void *)v81;
                        if ( v50 == -1 )
                        {
                          v114 = 0;
                        }
                        else
                        {
                          v88 = *(_QWORD *)(v9 + 32);
                          if ( (*(_BYTE *)(v88 + 140) & 1) != 0 )
                            CellPaged = HvpGetCellFlat(v88, v50);
                          else
                            CellPaged = HvpGetCellPaged(v88);
                          IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), CellPaged);
                          v114 = IsValueTombstone == 0;
                          if ( (*(_BYTE *)(v95 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(v95, &v117);
                          else
                            HvpReleaseCellPaged(v95, &v117);
                          if ( !IsValueTombstone )
                          {
                            NameInListWithStatus = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), v50, (__int64)&v129);
                            if ( NameInListWithStatus < 0 )
                              goto LABEL_170;
                          }
                        }
                        v120 = (void *)v81;
                      }
                      v51 = *(_QWORD *)(v9 + 32);
                      v52 = *(_DWORD *)(v9 + 40) >> 31;
                      if ( v113 )
                      {
                        LODWORD(Srca) = a5;
                        NameInListWithStatus = CmpAddValueKeyNew(v51, (size_t)Srca, 1, (__int64)&v111);
                        if ( NameInListWithStatus < 0 )
                        {
                          v58 = Pool;
                          v56 = v104;
                        }
                        else
                        {
                          v53 = *(_QWORD *)(v9 + 32);
                          if ( v50 == -1 )
                          {
                            v54 = *(_DWORD *)(v9 + 280);
                            NameInListWithStatus = CmpAddValueToListEx(v53, v9 + 280, 1);
                            if ( NameInListWithStatus < 0 )
                              goto LABEL_170;
                          }
                          else
                          {
                            v54 = v116;
                            CmpSwapValueInList(v53, v111, v116, v9 + 280);
                          }
                          HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                          LOBYTE(v7) = 0;
                          if ( v50 == -1 )
                          {
                            v55 = 4;
                          }
                          else
                          {
                            v104[22] = v50;
                            v55 = 5;
                          }
                          v104[17] = v55;
                          v104[23] = v111;
                          v104[18] = v52;
                          v56 = 0LL;
                          NameInListWithStatus = CmAddLogForAction(v104, 1LL);
                          if ( NameInListWithStatus >= 0 )
                          {
                            v57 = WORD1(v109);
                            goto LABEL_97;
                          }
                          if ( v49 )
                          {
                            v90 = *(_QWORD *)(v9 + 32);
                            if ( (*(_BYTE *)(v90 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(v90, &BugCheckParameter4[1]);
                            else
                              HvpReleaseCellPaged(v90, &BugCheckParameter4[1]);
                            v49 = 0LL;
                          }
                          HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                          v97 = *(_QWORD *)(v9 + 32);
                          if ( v50 == -1 )
                            CmpRemoveValueFromList(v97);
                          else
                            CmpSwapValueInList(v97, v50, v54, v9 + 280);
                          HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                          v58 = Privileges[1];
LABEL_171:
                          v56 = v104;
                        }
                      }
                      else
                      {
                        if ( v50 == -1 )
                        {
                          v67 = a5;
                          v56 = 0LL;
                          NameInListWithStatus = CmpSetValueKeyNew(
                                                   v51,
                                                   v49,
                                                   (_DWORD)String2,
                                                   v116,
                                                   v112,
                                                   (__int64)v121,
                                                   a5,
                                                   *(_DWORD *)(v9 + 40) >> 31);
                          if ( NameInListWithStatus < 0 )
                            goto LABEL_170;
                        }
                        else
                        {
                          if ( (*(_BYTE *)(v51 + 140) & 1) != 0 )
                            HvpGetCellFlat(v51, v50);
                          else
                            HvpGetCellPaged(v51);
                          LODWORD(Size) = a5;
                          v77 = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), v121, Size, v52);
                          v78 = *(_QWORD *)(v9 + 32);
                          NameInListWithStatus = v77;
                          if ( (*(_BYTE *)(v78 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(v78, &v117);
                          else
                            HvpReleaseCellPaged(v78, &v117);
                          v56 = 0LL;
                          if ( NameInListWithStatus < 0 )
                            goto LABEL_170;
                          v67 = a5;
                        }
                        v68 = String2;
                        Length = String2->Length;
                        if ( *(_DWORD *)(v49 + 60) < Length )
                        {
                          *(_DWORD *)(v49 + 60) = Length;
                          *(_WORD *)(v9 + 178) = v68->Length;
                        }
                        if ( *(_DWORD *)(v49 + 64) < v67 )
                        {
                          *(_DWORD *)(v49 + 64) = v67;
                          *(_DWORD *)(v9 + 180) = v67;
                        }
                        *(_QWORD *)(v49 + 4) = v12;
                        v70 = (*(_DWORD *)(v9 + 184) & 0x400000) == 0;
                        *(_QWORD *)(v9 + 168) = v12;
                        if ( v70 && (*(_DWORD *)(v9 + 8) & 8) != 0 )
                        {
                          CmpDelayDerefKeyControlBlock(*(_QWORD *)(v9 + 104));
                          *(_QWORD *)(v9 + 104) = 0LL;
                          *(_WORD *)(v9 + 8) &= ~8u;
                        }
                        v71 = *(_DWORD *)(v49 + 36);
                        *(_DWORD *)(v9 + 100) = *(_DWORD *)(v49 + 40);
                        v72 = *(_QWORD *)(v9 + 32);
                        *(_DWORD *)(v9 + 96) = v71;
                        HvUnlockHiveFlusherShared(v72);
                        v57 = v107;
                        LOBYTE(v7) = 0;
LABEL_97:
                        v111 = -1;
                        NameInListWithStatus = 0;
                        v106[0] = 0;
                        _mm_lfence();
                        v58 = Privileges[1];
                        if ( v57 >= 2 )
                          v59 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v109) - 2);
                        else
                          v59 = Privileges[SWORD1(v109) - 1];
                        CmpReportNotifyHelper(
                          (__int64)&v109,
                          *(_QWORD *)&v59[1].Privilege[0].Luid.HighPart,
                          v113,
                          4,
                          (__int64)v125);
                        if ( *(_QWORD *)&v59[1].Privilege[0].Luid.HighPart != CmpMasterHive )
                          CmpReportNotifyHelper((__int64)&v109, CmpMasterHive, v113, 4, (__int64)v125);
                      }
                      if ( v49 )
                      {
                        v60 = *(_QWORD *)(v9 + 32);
                        if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(v60, &BugCheckParameter4[1]);
                        else
                          HvpReleaseCellPaged(v60, &BugCheckParameter4[1]);
                      }
LABEL_104:
                      v28 = v101;
                      goto LABEL_105;
                    }
                  }
                  else
                  {
                    NameInListWithStatus = 0;
                  }
                }
              }
              else
              {
LABEL_202:
                NameInListWithStatus = -1073741790;
              }
            }
LABEL_139:
            v58 = Pool;
            v56 = v104;
            goto LABEL_104;
          }
          NameInListWithStatus = -1072103423;
        }
        LOBYTE(v7) = 0;
        goto LABEL_139;
      }
      break;
    }
    if ( *(int *)(v9 + 248) >= 0 )
    {
      if ( !*(_DWORD *)(v9 + 264) )
        goto LABEL_45;
      NameInListWithStatus = CmpSnapshotTxOwnerArray(v9 + 264, &v115, &v124);
      if ( NameInListWithStatus < 0 )
        goto LABEL_139;
      v86 = v115;
      Src = v115;
      CmpLogTransactionAbortedWithChildName(v9, 0LL, 1LL);
      CmpUnlockKcbStack(&v109);
      v28 = 0;
      CmpCleanupKcbStack(&v109);
      v109 = 0LL;
      WORD1(v109) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v87);
      v30 = v86;
    }
    else
    {
      NameInListWithStatus = CmpSnapshotTxOwnerArray(v9 + 248, &v115, &v124);
      if ( NameInListWithStatus < 0 )
        goto LABEL_139;
      v126 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v23 = v115;
      if ( v115 && (unsigned int)dword_140E09F58 > 4 && tlgKeywordOn((__int64)&dword_140E09F58, 1LL) )
      {
        v92 = CmpConstructNameFromKcbNameBlocks(v9, &v126);
        v94 = v126;
        if ( v92 >= 0 )
          CmpLogTransactionAbortedByName(v126, 1, v93, v23);
        if ( v94 )
          CmpFreeTransientPoolWithTag(v94, 0x624E4D43u);
      }
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Buffer )
        CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
      v25 = 0;
      if ( (v15 & 0x8000u) == 0LL )
      {
        v26 = (ULONG_PTR *)&v109 + 1;
        do
        {
          if ( v25 >= 2 )
            v27 = (ULONG_PTR *)((char *)v26 + (char *)v14 - ((char *)&v109 + 8) - 16);
          else
            v27 = v26;
          CmpUnlockKcb(*v27);
          ++v25;
          ++v26;
        }
        while ( v25 <= (__int16)v15 );
        v7 = 0;
      }
      v28 = 0;
      if ( v14 )
        CmSiFreeMemory(v14);
      v109 = 0LL;
      WORD1(v109) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(Buffer);
      v30 = v23;
    }
    v103 = 0;
    NameInListWithStatus = CmpRollbackTransactionArray(v30, v124, v29, &v123, Src);
    if ( NameInListWithStatus < 0 )
      goto LABEL_183;
    v8 = v122;
  }
  NameInListWithStatus = -1073741790;
LABEL_182:
  v28 = 0;
LABEL_183:
  v58 = Privileges[1];
  v56 = v104;
LABEL_105:
  if ( v111 != -1 )
    CmpFreeValue(*(_QWORD *)(v9 + 32), v111);
  if ( v56 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v56);
    ExFreePoolWithTag(v56, 0x77554D43u);
  }
  if ( v106[0] )
  {
    v64 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v64 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v64);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( (_BYTE)v7 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v28 )
    CmpUnlockKcbStack(&v109);
  CmpDrainDelayDerefContext((_QWORD **)&v128);
  if ( v103 )
    CmpUnlockRegistry(v61);
  if ( v125[0] != v125 )
    CmpSignalDeferredPosts(v125);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  v62 = v120;
  if ( NameInListWithStatus >= 0 && a7 && v120 )
  {
    *(_QWORD *)&v130 = __PAIR64__(a5, v112);
    *((_QWORD *)&v130 + 1) = v121;
    SeAdtRegistryValueChangedAuditAlarm(
      0LL,
      (__int64)v120,
      0LL,
      &String2->Length,
      v122,
      v127,
      (unsigned int *)&v129,
      v114);
  }
  if ( *((_QWORD *)&v129 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v129 + 1), 0x34414D43u);
  if ( v62 )
    CmpFreeTransientPoolWithTag(v62, 0x33414D43u);
  if ( v58 )
    CmSiFreeMemory(v58);
  return (unsigned int)NameInListWithStatus;
}
