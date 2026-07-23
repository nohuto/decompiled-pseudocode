/*
 * XREFs of CmRestoreKey @ 0x1407CD414
 * Callers:
 *     NtRestoreKey @ 0x1407D11D0 (NtRestoreKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpTraceHiveRestoreStart @ 0x1407D6C44 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x1407D6D58 (CmpTraceHiveRestoreStop.c)
 *     CmpInvalidateSubtree @ 0x1407DB530 (CmpInvalidateSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407E1740 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407E192C (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x1407E2380 (CmpCopySyncTree.c)
 *     CmpDeleteTree @ 0x1407E4024 (CmpDeleteTree.c)
 *     CmpReportNotify @ 0x14086D768 (CmpReportNotify.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408807B0 (CmpCleanUpKcbCachedSymlink.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCheckKeyAccess @ 0x14090C3A4 (CmpCheckKeyAccess.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpLogUnsupportedOperation @ 0x140963320 (CmpLogUnsupportedOperation.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14096360C (CmpTryAcquireKcbIXLocks.c)
 *     CmpCleanupRollbackPacket @ 0x140964460 (CmpCleanupRollbackPacket.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1409644C4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140964588 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpAssignSecurityToKcb @ 0x1409C5710 (CmpAssignSecurityToKcb.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A14F28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140AB45A0 (CmpRetryBackOff.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpIsShutdownRundownActive @ 0x140BBBA84 (CmpIsShutdownRundownActive.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140BBBB34 (CmpDoAccessCheckOnSubtree.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, ULONG_PTR a2, unsigned int a3, char a4)
{
  __int64 v7; // r13
  char v8; // si
  ULONG_PTR v9; // r14
  ULONG_PTR v10; // rdi
  int Hive; // ebx
  int HiveVolatile; // eax
  unsigned int v13; // ebx
  __int64 CellFlat; // rax
  int v15; // eax
  __int64 v16; // rbx
  unsigned int v17; // r15d
  size_t v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // esi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // r12d
  __int64 CellPaged; // rax
  unsigned int v33; // r15d
  __int64 v34; // rax
  unsigned int v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rax
  bool v38; // zf
  unsigned int v39; // esi
  _WORD *v40; // rax
  _WORD *v41; // rcx
  unsigned int v42; // eax
  unsigned int *v43; // r13
  __int64 v44; // rax
  _WORD *v45; // rsi
  unsigned int v46; // eax
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  unsigned int v51; // eax
  ULONG_PTR v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rsi
  int v55; // eax
  __int64 v56; // rdx
  int v57; // ecx
  int v58; // eax
  __int64 v59; // rcx
  unsigned int v60; // esi
  ULONG_PTR v61; // rdx
  __int64 v62; // rdx
  char v63; // r15
  __int64 v64; // rcx
  ULONG_PTR v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+70h] [rbp-90h] BYREF
  char v68; // [rsp+74h] [rbp-8Ch]
  char v69; // [rsp+75h] [rbp-8Bh]
  int v70; // [rsp+78h] [rbp-88h] BYREF
  int v71; // [rsp+7Ch] [rbp-84h]
  _DWORD v72[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-78h]
  _DWORD v74[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v75; // [rsp+98h] [rbp-68h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v77; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v79[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-40h]
  __int64 v81; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v82; // [rsp+D0h] [rbp-30h] BYREF
  int v83; // [rsp+E0h] [rbp-20h] BYREF
  int v84; // [rsp+E4h] [rbp-1Ch]
  unsigned int v85; // [rsp+E8h] [rbp-18h]
  _WORD *v86; // [rsp+F0h] [rbp-10h]
  __int128 v87; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v88; // [rsp+108h] [rbp+8h] BYREF
  __int128 v89; // [rsp+118h] [rbp+18h] BYREF
  ULONG_PTR v90[5]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v91[432]; // [rsp+150h] [rbp+50h] BYREF

  v85 = a3;
  v68 = a4;
  v86 = 0LL;
  v79[0] = -1;
  v80 = 0LL;
  v81 = 0LL;
  v79[1] = 0;
  v76 = 0xFFFFFFFFLL;
  v72[0] = -1;
  v7 = 0LL;
  v72[1] = 0;
  v74[0] = -1;
  v74[1] = 0;
  BugCheckParameter3 = 0LL;
  v70 = -1;
  v71 = 0;
  memset(v90, 0, 32);
  v88 = 0LL;
  memset_0(v91, 0, sizeof(v91));
  v75 = 0;
  v87 = 0LL;
  v82 = 0LL;
  CmpInitializeDelayDerefContext(&v87);
  v83 = -1;
  v8 = 0;
  v67 = -1;
  v9 = a1[1];
  v10 = *(_QWORD *)(v9 + 32);
  if ( (*(_DWORD *)(v10 + 160) & 0x100000) != 0 )
  {
    Hive = -1073741790;
    goto LABEL_177;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 || a1[7] || a1[8] )
  {
    Hive = -1073741811;
    goto LABEL_177;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_8:
    Hive = HiveVolatile;
    goto LABEL_177;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_8;
  }
  v90[0] = a2;
  *((_QWORD *)&v88 + 1) = &v88;
  *(_QWORD *)&v88 = &v88;
  memset(&v90[1], 0, 24);
  Hive = CmpCreateHive(
           (unsigned int)&BugCheckParameter3,
           2,
           0x8000,
           0,
           0LL,
           (__int64)v90,
           0LL,
           18415617,
           0LL,
           0LL,
           0LL,
           0LL,
           (__int64)v91);
  if ( Hive < 0 )
    goto LABEL_177;
  CmpLockRegistryFreezeAware(0LL);
  v8 = 1;
  CmpLockKcbShared(v9);
  v13 = *(_DWORD *)(v9 + 40);
  LODWORD(BugCheckParameter4) = v13;
  if ( *(_WORD *)(v9 + 66) )
  {
    CmpLogUnsupportedOperation(17LL);
    Hive = -1073741822;
LABEL_175:
    CmpUnlockKcb(v9);
    goto LABEL_177;
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    Hive = -1073741535;
    goto LABEL_175;
  }
  if ( *(_BYTE *)(v9 + 65) == 1 || v10 == CmpMasterHive )
  {
    Hive = -1073741790;
    goto LABEL_175;
  }
  if ( *(_BYTE *)(v10 + 2944) == 1 )
  {
    Hive = -1073741431;
    goto LABEL_175;
  }
  HvLockHiveFlusherShared(v10);
  v69 = 1;
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v10, v13);
  else
    CellFlat = HvpGetCellPaged(v10);
  v7 = CellFlat;
  if ( !CellFlat )
  {
    Hive = -1073741670;
    goto LABEL_174;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 4) != 0 )
    v15 = -1;
  else
    v15 = *(_DWORD *)(CellFlat + 16);
  v77 = v13 >> 31;
  v84 = v15;
  Hive = CmpCopyKeyPartial(BugCheckParameter3, 6, v66, v13 >> 31, (__int64)&v67);
  if ( Hive < 0 )
  {
LABEL_174:
    HvUnlockHiveFlusherShared(v10);
    goto LABEL_175;
  }
  Hive = HvReallocateCell(v10, (__int64)&v83, (__int64)&v81, (__int64)&v76);
  if ( Hive < 0 )
  {
    v80 = v81;
    goto LABEL_170;
  }
  v16 = v81;
  v17 = v83;
  v18 = *(unsigned __int16 *)(v7 + 72);
  v67 = v83;
  v80 = v81;
  memmove((void *)(v81 + 76), (const void *)(v7 + 76), v18);
  *(_WORD *)(v16 + 72) = *(_WORD *)(v7 + 72);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
    *(_WORD *)(v16 + 2) |= 0x20u;
  else
    *(_WORD *)(v16 + 2) &= ~0x20u;
  Hive = CmpCopySyncTree(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), v10, v17, 2, 0);
  if ( Hive < 0 )
  {
LABEL_170:
    v35 = v67;
    goto LABEL_171;
  }
  HvUnlockHiveFlusherShared(v10);
  v69 = 0;
  CmpUnlockKcb(v9);
  ((void (*)(void))CmpUnlockRegistry)();
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v10, v72);
  else
    HvpReleaseCellPaged(v10, v72);
  v7 = 0LL;
  v81 = 0LL;
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v10, &v76);
  else
    HvpReleaseCellPaged(v10, &v76);
  v80 = 0LL;
  LOBYTE(v19) = 1;
  while ( 2 )
  {
    CmpLockRegistryFreezeAware(v19);
    v21 = BugCheckParameter4;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsShutdownRundownActive(v20) )
      {
LABEL_166:
        Hive = -1073741431;
        goto LABEL_65;
      }
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
        goto LABEL_69;
      if ( v21 != *(_DWORD *)(v9 + 40) )
      {
        Hive = -1073741444;
        goto LABEL_65;
      }
      if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
      {
        Hive = -1073740763;
        goto LABEL_65;
      }
      if ( *(_BYTE *)(v10 + 2944) == 1 )
        goto LABEL_166;
      if ( v84 != -1 )
      {
        Hive = CmpCheckKeyAccess(v10, 1);
        if ( Hive < 0 )
          goto LABEL_65;
      }
      Hive = CmpCheckKeyAccess(v10, 1);
      if ( Hive < 0 )
        goto LABEL_65;
      LOBYTE(v22) = 1;
      Hive = CmpTryAcquireKcbIXLocks(v9, v22, v23, &v82);
      if ( Hive != -1073741267 )
        break;
      CmpLogTransactionAbortedWithChildName(v9, 0LL, 7LL);
      CmpUnlockRegistry(v24);
      Hive = CmpAbortRollbackPacket(&v82, 0LL);
      if ( Hive < 0 )
      {
        LOBYTE(v25) = 1;
        CmpLockRegistryFreezeAware(v25);
        goto LABEL_65;
      }
      CmpCleanupRollbackPacket(&v82);
      v82 = 0LL;
      CmpRetryBackOff(&v75);
      LOBYTE(v26) = 1;
      CmpLockRegistryFreezeAware(v26);
    }
    if ( Hive < 0 )
      goto LABEL_65;
    Hive = CmpDoAccessCheckOnSubtree(v10, 2);
    if ( Hive < 0 )
      goto LABEL_65;
    if ( (v85 & 8) == 0 )
    {
      v89 = 0LL;
      CmpInitializeDelayDerefContext(&v89);
      v31 = 0;
      CmpEnumerateAllHigherLayerKcbs(
        v9,
        (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
        (unsigned int)CmpCleanUpHigherLayerKcbCachesPostCallback,
        (unsigned int)&v89,
        0LL,
        1,
        1);
      CmpDrainDelayDerefContext((_QWORD **)&v89);
      if ( !(unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v9) && *(_QWORD *)v9 == 1LL )
        goto LABEL_71;
LABEL_69:
      Hive = -1073741535;
      goto LABEL_65;
    }
    v27 = CmpPrepareToInvalidateAllHigherLayerKcbs(v9, 0LL, &v82);
    Hive = v27;
    if ( (int)(v27 + 0x80000000) >= 0 && v27 != -1073741267 )
      goto LABEL_65;
    v28 = CmpPrepareForSubtreeInvalidation(v9, 0LL, &v82);
    Hive = v28;
    if ( v28 == -1073741267 )
      goto LABEL_62;
    if ( v28 < 0 )
      goto LABEL_65;
    if ( v27 == -1073741267 )
    {
LABEL_62:
      CmpLogTransactionAbortedWithChildName(v9, 0LL, 7LL);
      CmpUnlockRegistry(v29);
      v8 = 0;
      Hive = CmpAbortRollbackPacket(&v82, 0LL);
      if ( Hive >= 0 )
      {
        CmpCleanupRollbackPacket(&v82);
        v82 = 0LL;
        CmpRetryBackOff(&v75);
        LOBYTE(v19) = 1;
        continue;
      }
      LOBYTE(v30) = 1;
      CmpLockRegistryFreezeAware(v30);
      goto LABEL_170;
    }
    break;
  }
  CmpInvalidateAllHigherLayerKcbs(v9, 1LL, 0LL, &v87);
  v31 = 0;
  CmpInvalidateSubtree(v9, 1, 0, (unsigned int)&v87, 0LL);
  CmpDrainDelayDerefContext((_QWORD **)&v87);
LABEL_71:
  Hive = HvpMarkCellDirty(v10, v17);
  v8 = 1;
  if ( Hive < 0 )
    goto LABEL_170;
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v10, (unsigned int)BugCheckParameter4);
  else
    CellPaged = HvpGetCellPaged(v10);
  v80 = CellPaged;
  if ( !CellPaged )
  {
LABEL_76:
    Hive = -1073741670;
    goto LABEL_170;
  }
  v33 = *(_DWORD *)(CellPaged + 16);
  if ( (*(_BYTE *)(CellPaged + 2) & 4) == 0 )
  {
    Hive = HvpMarkCellDirty(v10, v33);
    if ( Hive < 0 )
      goto LABEL_170;
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      v37 = HvpGetCellFlat(v10, v33);
    else
      v37 = HvpGetCellPaged(v10);
    if ( !v37 )
      goto LABEL_76;
    v38 = (*(_BYTE *)(v10 + 140) & 1) == 0;
    v39 = *(_DWORD *)(v37 + 4LL * v77 + 28);
    v77 = v39;
    if ( v38 )
      HvpReleaseCellPaged(v10, v74);
    else
      HvpReleaseCellFlat(v10, v74);
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      v40 = (_WORD *)HvpGetCellFlat(v10, v39);
    else
      v40 = (_WORD *)HvpGetCellPaged(v10);
    v86 = v40;
    v41 = v40;
    if ( v40 )
    {
      if ( *v40 == 26994 )
      {
        v42 = (unsigned __int16)v40[1];
        v43 = (unsigned int *)(v41 + 2);
      }
      else
      {
        v42 = 1;
        v43 = &v77;
      }
      v75 = v42;
      while ( v31 < v42 )
      {
        if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
          v44 = HvpGetCellFlat(v10, v43[v31]);
        else
          v44 = HvpGetCellPaged(v10);
        v45 = (_WORD *)v44;
        if ( !v44 )
        {
          Hive = -1073741670;
          v8 = 1;
          v7 = 0LL;
          goto LABEL_170;
        }
        Hive = HvpMarkCellDirty(v10, v43[v31]);
        if ( Hive < 0 )
        {
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, &v70);
          else
            HvpReleaseCellPaged(v10, &v70);
          v7 = v81;
          v8 = 1;
          goto LABEL_170;
        }
        v46 = 0;
        v47 = (unsigned __int16)v45[1];
        if ( ((*v45 - 26220) & 0xFDFF) != 0 )
        {
          while ( v46 < v47 )
          {
            if ( *(_DWORD *)&v45[2 * v46 + 2] == (_DWORD)BugCheckParameter4 )
            {
              v35 = v67;
              *(_DWORD *)&v45[2 * v46 + 2] = v67;
              goto LABEL_131;
            }
            ++v46;
          }
        }
        else
        {
          while ( v46 < v47 )
          {
            if ( *(_DWORD *)&v45[4 * v46 + 2] == (_DWORD)BugCheckParameter4 )
            {
              v35 = v67;
              *(_DWORD *)&v45[4 * v46 + 2] = v67;
LABEL_131:
              if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v10, &v70);
              else
                HvpReleaseCellPaged(v10, &v70);
              goto LABEL_139;
            }
            ++v46;
          }
        }
        if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v10, &v70);
        else
          HvpReleaseCellPaged(v10, &v70);
        v42 = v75;
        ++v31;
      }
      v35 = v67;
LABEL_139:
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        v48 = HvpGetCellFlat(v10, v33);
      else
        v48 = HvpGetCellPaged(v10);
      v49 = v48;
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        v50 = HvpGetCellFlat(v10, v35);
      else
        v50 = HvpGetCellPaged(v10);
      v51 = *(unsigned __int16 *)(v50 + 74);
      if ( *(_DWORD *)(v49 + 56) < v51 )
        *(_DWORD *)(v49 + 56) = v51;
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v10, v72);
      else
        HvpReleaseCellPaged(v10, v72);
      v7 = 0LL;
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v10, v74);
      else
        HvpReleaseCellPaged(v10, v74);
LABEL_153:
      *(_DWORD *)(v9 + 40) = v35;
      CmpCleanUpKcbCachedSymlink(v9, &v87);
      v52 = *(_QWORD *)(v9 + 32);
      v70 = -1;
      v71 = 0;
      if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
        v53 = HvpGetCellFlat(v52, *(unsigned int *)(v9 + 40));
      else
        v53 = HvpGetCellPaged(v52);
      v54 = v53;
      if ( !v53 )
      {
        Hive = -1073741670;
        v8 = 1;
        goto LABEL_171;
      }
      v55 = *(_DWORD *)(v53 + 36);
      *(_DWORD *)(v9 + 100) = *(_DWORD *)(v54 + 40);
      *(_DWORD *)(v9 + 96) = v55;
      *(_WORD *)(v9 + 186) = *(_WORD *)(v54 + 2);
      CmpAssignSecurityToKcb(v9, *(unsigned int *)(v54 + 44), 0);
      LOBYTE(v56) = 1;
      CmpCleanUpSubKeyInfo(v9, v56);
      ++*(_QWORD *)(v9 + 304);
      *(_QWORD *)(v9 + 168) = *(_QWORD *)(v54 + 4);
      *(_WORD *)(v9 + 176) = *(_WORD *)(v54 + 52);
      *(_WORD *)(v9 + 178) = *(_WORD *)(v54 + 60);
      *(_DWORD *)(v9 + 180) = *(_DWORD *)(v54 + 64);
      v57 = *(_DWORD *)(v9 + 184) ^ ((unsigned __int8)*(_DWORD *)(v9 + 184) ^ (unsigned __int8)*(_WORD *)(v54 + 54)) & 0xF;
      *(_DWORD *)(v9 + 184) = v57;
      v58 = v57 ^ ((unsigned __int8)v57 ^ (unsigned __int8)*(_WORD *)(v54 + 54)) & 0xF0;
      v59 = *(_QWORD *)(v9 + 32);
      *(_DWORD *)(v9 + 184) = v58;
      *(_BYTE *)(v9 + 185) = *(_BYTE *)(v54 + 55);
      if ( (*(_BYTE *)(v59 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v59, &v70);
      else
        HvpReleaseCellPaged(v59, &v70);
      v60 = BugCheckParameter4;
      v61 = (unsigned int)BugCheckParameter4;
      *(_WORD *)(v9 + 8) = 64;
      if ( (unsigned __int8)CmpDeleteTree(v10, v61) )
        CmpFreeKeyByCell(v10, v60);
      CmpReportNotify(v9, v62, 1LL, &v88);
      if ( !CmpProfileLoaded )
      {
        CmpGlobalQuotaAllowed = CmpGlobalQuota;
        CmpProfileLoaded = 1;
      }
      CmpDrainDelayDerefContext((_QWORD **)&v87);
      ((void (*)(void))CmpUnlockRegistry)();
      v8 = 0;
      CmpDestroyHive(BugCheckParameter3);
      BugCheckParameter3 = 0LL;
      CmpSignalDeferredPosts(&v88);
      goto LABEL_177;
    }
    Hive = -1073741670;
LABEL_65:
    v8 = 1;
    goto LABEL_170;
  }
  if ( (*(_BYTE *)(CmpMasterHive + 140) & 1) != 0 )
    v34 = HvpGetCellFlat(CmpMasterHive, v33);
  else
    v34 = HvpGetCellPaged(CmpMasterHive);
  v35 = v67;
  if ( v34 )
  {
    *(_DWORD *)(v34 + 28) = v67;
    if ( (*(_BYTE *)(CmpMasterHive + 140) & 1) != 0 )
      HvpReleaseCellFlat(CmpMasterHive, v74);
    else
      HvpReleaseCellPaged(CmpMasterHive, v74);
    v36 = (*(_BYTE *)(v10 + 140) & 1) != 0 ? HvpGetCellFlat(v10, v35) : HvpGetCellPaged(v10);
    v7 = v36;
    if ( v36 )
    {
      *(_DWORD *)(v36 + 16) = v33;
      *(_DWORD *)(*(_QWORD *)(v10 + 64) + 36LL) = v35;
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v10, v72);
      else
        HvpReleaseCellPaged(v10, v72);
      v7 = 0LL;
      goto LABEL_153;
    }
  }
  Hive = -1073741670;
LABEL_171:
  v63 = v69;
  if ( (unsigned __int8)CmpDeleteTree(v10, v35) )
    CmpFreeKeyByCell(v10, v35);
  if ( v63 )
    goto LABEL_174;
LABEL_177:
  CmpDrainDelayDerefContext((_QWORD **)&v87);
  if ( v8 )
    CmpUnlockRegistry(v64);
  if ( BugCheckParameter3 )
  {
    CmpDestroyHive(BugCheckParameter3);
    BugCheckParameter3 = 0LL;
  }
  if ( v86 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, v79);
    else
      HvpReleaseCellPaged(v10, v79);
  }
  if ( v7 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, v72);
    else
      HvpReleaseCellPaged(v10, v72);
  }
  if ( v80 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v76);
    else
      HvpReleaseCellPaged(v10, &v76);
  }
  CmpCleanupRollbackPacket(&v82);
  CmpTraceHiveRestoreStop((unsigned int)Hive);
  return (unsigned int)Hive;
}
