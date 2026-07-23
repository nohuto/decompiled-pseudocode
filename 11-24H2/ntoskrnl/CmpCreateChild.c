/*
 * XREFs of CmpCreateChild @ 0x14090B2FC
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047B08C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14047F6A0 (CmpTransEnlistUowInKcb.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpRecordParseFailure @ 0x140841F00 (CmpRecordParseFailure.c)
 *     CmpReportNotifyForKcbStack @ 0x14086CA6C (CmpReportNotifyForKcbStack.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086D420 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086E968 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpSnapshotTxOwnerArray @ 0x140870400 (CmpSnapshotTxOwnerArray.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpAddSubKeyEx @ 0x140883094 (CmpAddSubKeyEx.c)
 *     CmpMarkKeyDirty @ 0x1408839E4 (CmpMarkKeyDirty.c)
 *     CmLockHiveSecurityExclusive @ 0x14088427C (CmLockHiveSecurityExclusive.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpNameSize @ 0x140885A7C (CmpNameSize.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     CmpCopyName @ 0x1408870F8 (CmpCopyName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 *     SeAssignSecurity @ 0x14090C530 (SeAssignSecurity.c)
 *     CmpLogUnsupportedOperation @ 0x140963320 (CmpLogUnsupportedOperation.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmListGetPrevElement @ 0x1409C52A0 (CmListGetPrevElement.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     SeDeassignSecurity @ 0x140A1B040 (SeDeassignSecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLockIXLockIntent @ 0x140A22FF4 (CmpLockIXLockIntent.c)
 *     CmpAllocateUnitOfWork @ 0x140A230A0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A230F8 (CmpLockIXLockExclusive.c)
 *     CmpFreeSecurityDescriptor @ 0x140A34100 (CmpFreeSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmLockHiveSecurityShared @ 0x140BBB96C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 */

__int64 CmpCreateChild(__int64 a1, ...)
{
  __int64 v1; // rsi
  char *v2; // r13
  unsigned int v3; // edx
  unsigned int v4; // edx
  __int64 v5; // r9
  ULONG_PTR KcbAtLayerHeight; // rbx
  __int64 v7; // r8
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // r14
  __int64 v10; // r9
  char v11; // r10
  int v12; // eax
  __int16 v13; // cx
  __int16 v14; // dx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r13d
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  _BYTE *v24; // rbx
  ULONG_PTR v25; // rcx
  int v26; // edx
  unsigned __int16 *v27; // rbx
  unsigned __int16 v28; // ax
  int SecurityDescriptorNode; // eax
  ULONG_PTR v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  ULONG_PTR v33; // rdx
  ULONG_PTR v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r13
  unsigned int v37; // edx
  unsigned int v38; // eax
  int v39; // edx
  char v40; // al
  PVOID v41; // r15
  PVOID v42; // r15
  PSECURITY_DESCRIPTOR v43; // r15
  __int64 v44; // rcx
  int v46; // r8d
  int v47; // edx
  void *v48; // rbx
  __int64 SecurityCacheEntryForKcbStack; // rax
  NTSTATUS v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rsi
  void *v53; // rcx
  _DWORD *v54; // rcx
  _DWORD *v55; // rax
  _QWORD *UnitOfWork; // rax
  int v57; // r8d
  int v58; // edx
  int v59; // edx
  ULONG_PTR v60; // rdx
  char *CellFlat; // rax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  unsigned __int16 *v65; // rbx
  __int64 v66; // rbx
  ULONG_PTR v67; // rdx
  __int64 CellPaged; // rax
  __int64 v69; // rcx
  ULONG_PTR v70; // rax
  unsigned int v71; // eax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rcx
  __int64 PrevElement; // rax
  _QWORD *v76; // rax
  int v77; // eax
  PVOID v78; // rbx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  char v83; // [rsp+40h] [rbp-D8h]
  char v84; // [rsp+41h] [rbp-D7h]
  char v85; // [rsp+42h] [rbp-D6h]
  char v86; // [rsp+44h] [rbp-D4h]
  char v87; // [rsp+45h] [rbp-D3h]
  __int16 v88; // [rsp+4Ah] [rbp-CEh]
  unsigned int BugCheckParameter4; // [rsp+4Ch] [rbp-CCh] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+50h] [rbp-C8h] BYREF
  ULONG_PTR v91; // [rsp+58h] [rbp-C0h]
  void *v92; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v93; // [rsp+68h] [rbp-B0h]
  unsigned int Size[3]; // [rsp+6Ch] [rbp-ACh] BYREF
  PVOID P; // [rsp+78h] [rbp-A0h]
  PVOID v96; // [rsp+80h] [rbp-98h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+88h] [rbp-90h] BYREF
  __int64 v98; // [rsp+90h] [rbp-88h]
  __int64 v99; // [rsp+98h] [rbp-80h] BYREF
  void *v100; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v101; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v102; // [rsp+B0h] [rbp-68h]
  _QWORD *v103; // [rsp+B8h] [rbp-60h]
  _QWORD *v104; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v105; // [rsp+C8h] [rbp-50h]
  ULONG_PTR v106; // [rsp+D0h] [rbp-48h]
  __int64 v107[8]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v109; // [rsp+128h] [rbp+10h] BYREF
  va_list va; // [rsp+128h] [rbp+10h]
  __int64 v111; // [rsp+130h] [rbp+18h]
  unsigned __int16 *v112; // [rsp+138h] [rbp+20h]
  __int64 v113; // [rsp+140h] [rbp+28h]
  __int64 v114; // [rsp+148h] [rbp+30h]
  __int64 v115; // [rsp+150h] [rbp+38h]
  __int64 v116; // [rsp+158h] [rbp+40h]
  __int64 v117; // [rsp+160h] [rbp+48h]
  va_list va1; // [rsp+168h] [rbp+50h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v109 = va_arg(va1, _QWORD);
  v111 = va_arg(va1, _QWORD);
  v112 = va_arg(va1, unsigned __int16 *);
  v113 = va_arg(va1, _QWORD);
  v114 = va_arg(va1, _QWORD);
  v115 = va_arg(va1, _QWORD);
  v116 = va_arg(va1, _QWORD);
  v117 = va_arg(va1, _QWORD);
  v1 = v113;
  v101 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v99 = 0LL;
  v87 = 0;
  v84 = 0;
  v86 = 0;
  v2 = 0LL;
  v92 = 0LL;
  BugCheckParameter4 = -1;
  HvpGetCellContextInitialize(&v101);
  v100 = 0LL;
  BugCheckParameter4_4 = v3;
  HvpGetCellContextInitialize(&Size[1]);
  v98 = 0LL;
  HvpGetCellContextInitialize(&v99);
  v83 = 0;
  NewDescriptor = 0LL;
  Size[0] = v4;
  v96 = 0LL;
  v103 = 0LL;
  P = 0LL;
  v104 = 0LL;
  v85 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v5);
  v91 = KcbAtLayerHeight;
  v8 = CmpGetKcbAtLayerHeight(v7);
  v105 = v8;
  v9 = *(_QWORD *)(v8 + 32);
  v106 = v9;
  v10 = v117;
  if ( v117 && (*(_DWORD *)(v9 + 160) & 2) != 0 )
  {
    v57 = -1072103423;
    v22 = -1072103423;
    v58 = 262400;
LABEL_161:
    CmpRecordParseFailure(v1, v58, v57);
    goto LABEL_97;
  }
  if ( (v115 & 0xFFFFFFFC) != 0 )
  {
    v22 = -1073741811;
    v57 = -1073741811;
    v58 = 262528;
    goto LABEL_161;
  }
  if ( (v115 & 1) != 0 || (*(_DWORD *)(v9 + 4112) & 0x20) != 0 )
  {
    v11 = 1;
    v86 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v46 = -1073741790;
    v47 = 262656;
    goto LABEL_95;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 160LL) & 0x100000) != 0 )
  {
    v46 = -1073741790;
    v47 = 262912;
    goto LABEL_95;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v46 = -1073741790;
    v47 = 263168;
    goto LABEL_95;
  }
  if ( !CmpVEEnabled || (v12 = 1, (*(_DWORD *)(KcbAtLayerHeight + 184) & 0x1000000) == 0) )
    v12 = 0;
  v13 = v114 | 0x100;
  if ( !v12 )
    v13 = v114;
  v14 = v13 | 0x200;
  if ( (*(_DWORD *)(KcbAtLayerHeight + 184) & 0x2000000) == 0 )
    v14 = v13;
  v88 = v14;
  if ( !v11 || !*(_QWORD *)(v111 + 64) )
  {
    v15 = *(_DWORD *)(v1 + 24) & 1;
    v93 = v15;
    if ( v117 && *(_QWORD *)(KcbAtLayerHeight + 240) )
    {
      v107[0] = 0LL;
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(KcbAtLayerHeight + 208, v107);
        if ( !PrevElement )
          break;
        if ( !*(_DWORD *)(PrevElement + 68) )
        {
          v16 = *(_DWORD *)(PrevElement + 72);
          v15 = v93;
          goto LABEL_18;
        }
      }
      v15 = v93;
    }
    v16 = *(_DWORD *)(KcbAtLayerHeight + 40) >> 31;
LABEL_18:
    if ( v16 == 1 && !v15 )
    {
      v22 = -1073741439;
      v46 = -1073741439;
      v47 = 263680;
      goto LABEL_96;
    }
    if ( (*(_DWORD *)(v1 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess((PRKAPC_STATE)(v1 + 168));
      *(_DWORD *)(v1 + 160) |= 1u;
      v10 = v117;
      v11 = v86;
    }
    if ( (v88 & 2) == 0 )
    {
      if ( v11 )
      {
        NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, v10, 0LL) + 32);
      }
      else
      {
        if ( (*(_DWORD *)(v8 + 184) & 0x2000000) == 0
          || (v2 = (char *)v92, CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, 0LL, (int *)(v1 + 16))) )
        {
          v48 = *(void **)(v111 + 64);
        }
        else
        {
          v48 = 0LL;
        }
        SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, v117, 0LL);
        v50 = SeAssignSecurity(
                (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
                v48,
                &NewDescriptor,
                1u,
                (PSECURITY_SUBJECT_CONTEXT)(v111 + 32),
                (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                *((POOL_TYPE *)CmKeyObjectType + 25));
        v22 = v50;
        if ( v50 < 0 )
        {
          v46 = v50;
          v47 = 264192;
          goto LABEL_96;
        }
        KcbAtLayerHeight = v91;
      }
    }
    v17 = v117;
    if ( v117 )
    {
      if ( !(unsigned __int8)CmpIsKeyStackDeleted(v109, 0LL) )
      {
        v22 = CmpUndoDeleteKeyForTrans(v8);
        if ( v22 >= 0 )
          goto LABEL_97;
        v22 = -1073741772;
        v46 = -1073741772;
        v47 = 263936;
        goto LABEL_96;
      }
      v17 = v117;
    }
    v18 = v93;
    if ( v17 )
      v18 = 1LL;
    LODWORD(v109) = v18;
    v19 = *(_DWORD *)(v8 + 40);
    if ( v19 != -1 )
    {
      if ( (_DWORD)v18 != v19 >> 31 )
        CmpLogUnsupportedOperation(2LL);
      LODWORD(v117) = *(_DWORD *)(v8 + 40) >> 31;
      if ( !(_BYTE)v116 )
      {
        HvLockHiveFlusherShared(v9);
        v84 = 1;
      }
      v60 = *(unsigned int *)(v8 + 40);
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        CellFlat = (char *)HvpGetCellFlat(v9, v60, &v101);
      else
        CellFlat = (char *)HvpGetCellPaged(v9, v60, &v101);
      v2 = CellFlat;
      v92 = CellFlat;
      if ( (unsigned __int16)CmpNameSize(v112) != *((_WORD *)CellFlat + 36) )
      {
        CmpLogUnsupportedOperation(1LL);
        v22 = -1073741822;
        v46 = -1073741822;
        v47 = 264448;
        goto LABEL_96;
      }
      v62 = CmpMarkKeyDirty(v9, *(unsigned int *)(v8 + 40), 0);
      v22 = v62;
      if ( v62 < 0 )
      {
        v46 = v62;
        v47 = 264704;
        goto LABEL_96;
      }
      v63 = HvpMarkCellDirty(v9, *(unsigned int *)(v91 + 40), 0);
      v22 = v63;
      if ( v63 < 0 )
      {
        v46 = v63;
        v47 = 264960;
        goto LABEL_96;
      }
      v64 = *(unsigned __int16 *)(v1 + 4);
      if ( (_WORD)v64 )
      {
        v72 = HvAllocateCell(v9, v64, v117, &BugCheckParameter4_4, &v100, (__int64)&Size[1]);
        v22 = v72;
        if ( v72 < 0 )
        {
          v46 = v72;
          v47 = 265216;
          goto LABEL_96;
        }
        memmove(v100, *(const void **)(v1 + 8), *(unsigned __int16 *)(v1 + 4));
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v9, (__int64)&Size[1]);
        else
          HvpReleaseCellPaged(v9, &Size[1]);
        v100 = 0LL;
      }
      CmLockHiveSecurityExclusive(v9);
      v83 = 1;
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                 v9,
                                 *(unsigned int *)(v8 + 40),
                                 (__int64)v2,
                                 *(_DWORD *)(v8 + 40) >> 31,
                                 NewDescriptor,
                                 1,
                                 Size);
      v22 = SecurityDescriptorNode;
      if ( SecurityDescriptorNode < 0 )
      {
        v39 = 265728;
        goto LABEL_68;
      }
      CmpFreeSecurityDescriptor(v9);
      *((_DWORD *)v2 + 11) = Size[0];
      CmUnlockHiveSecurity(v9);
      *((_DWORD *)v2 + 12) = BugCheckParameter4_4;
      *((_WORD *)v2 + 37) = *(_WORD *)(v1 + 4);
      BugCheckParameter4_4 = -1;
      v65 = v112;
      CmpCopyName(v2 + 76, (const void **)v112);
      v2[13] |= 3u;
      *((_WORD *)v2 + 1) = v88;
      if ( *((_WORD *)v2 + 36) < *v65 )
        *((_WORD *)v2 + 1) = v88 | 0x20;
      v66 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v2 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v8 + 304);
      CmpRebuildKcbCacheFromNode(v8, (__int64)v2, 0LL, 0);
      v67 = *(unsigned int *)(v91 + 40);
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v9, v67, &v99);
      else
        CellPaged = HvpGetCellPaged(v9, v67, &v99);
      v69 = CellPaged;
      v98 = CellPaged;
      *(_QWORD *)(CellPaged + 4) = v66;
      v70 = v91;
      *(_QWORD *)(v91 + 168) = v66;
      ++*(_QWORD *)(v70 + 304);
      v71 = *((unsigned __int16 *)v2 + 37);
      if ( *(_DWORD *)(v69 + 56) < v71 )
        *(_DWORD *)(v69 + 56) = v71;
      if ( v84 )
      {
        HvUnlockHiveFlusherShared(v9);
        v84 = 0;
      }
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      v22 = 0;
      goto LABEL_133;
    }
    if ( !(_BYTE)v116 )
    {
      HvLockHiveFlusherShared(v9);
      v84 = 1;
    }
    if ( !v117 )
    {
      if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
      {
        if ( (v115 & 2) != 0 )
        {
          v46 = -1072103423;
          v47 = 267648;
          goto LABEL_95;
        }
        v79 = CmpSnapshotTxOwnerArray(
                (unsigned int *)(KcbAtLayerHeight + 248),
                (_DWORD *)(v1 + 120),
                (void ***)(v1 + 128));
        v22 = v79;
        if ( v79 < 0 )
        {
          v46 = v79;
          v47 = 267776;
          goto LABEL_96;
        }
        CmpLogTransactionAbortedWithChildName(v91, v112, 6LL);
        v47 = 268032;
      }
      else if ( *(int *)(KcbAtLayerHeight + 248) < 0 )
      {
        if ( (v115 & 2) != 0 )
        {
          v46 = -1072103423;
          v47 = 268160;
          goto LABEL_95;
        }
        v80 = CmpSnapshotTxOwnerArray(
                (unsigned int *)(KcbAtLayerHeight + 248),
                (_DWORD *)(v1 + 120),
                (void ***)(v1 + 128));
        v22 = v80;
        if ( v80 < 0 )
        {
          v46 = v80;
          v47 = 268288;
          goto LABEL_96;
        }
        CmpLogTransactionAbortedWithChildName(v91, v112, 6LL);
        v47 = 268544;
      }
      else if ( *(_DWORD *)(v8 + 248) )
      {
        if ( (v115 & 2) != 0 )
        {
          v46 = -1072103423;
          v47 = 268672;
          goto LABEL_95;
        }
        v82 = CmpSnapshotTxOwnerArray((unsigned int *)(v8 + 248), (_DWORD *)(v1 + 120), (void ***)(v1 + 128));
        v22 = v82;
        if ( v82 < 0 )
        {
          v46 = v82;
          v47 = 268800;
          goto LABEL_96;
        }
        CmpLogTransactionAbortedWithChildName(v91, v112, 6LL);
        v47 = 269056;
      }
      else
      {
        if ( !*(_DWORD *)(v8 + 264) )
        {
LABEL_33:
          Size[0] = (unsigned __int16)CmpNameSize(v112) + 76;
          v20 = v109;
          v21 = HvAllocateCell(v9, Size[0], v109, &BugCheckParameter4, &v92, (__int64)&v101);
          v22 = v21;
          if ( v21 < 0 )
          {
            v59 = 269824;
          }
          else
          {
            v23 = *(unsigned __int16 *)(v1 + 4);
            if ( !(_WORD)v23 )
              goto LABEL_35;
            v21 = HvAllocateCell(v9, v23, v20, &BugCheckParameter4_4, &v100, (__int64)&Size[1]);
            v22 = v21;
            if ( v21 >= 0 )
            {
              memmove(v100, *(const void **)(v1 + 8), *(unsigned __int16 *)(v1 + 4));
              if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v9, (__int64)&Size[1]);
              else
                HvpReleaseCellPaged(v9, &Size[1]);
              v100 = 0LL;
LABEL_35:
              v24 = v92;
              memset_0(v92, 0, Size[0]);
              if ( (v88 & 2) != 0 )
                *(_WORD *)v24 = 27500;
              else
                *(_WORD *)v24 = 27502;
              v24[12] = CmpAccessBitForPhase;
              v25 = v91;
              if ( *(_BYTE *)(v91 + 65) == 3 )
                v24[13] |= 3u;
              else
                v24[13] &= 0xFCu;
              *((_WORD *)v24 + 1) = v88;
              v2 = (char *)v92;
              *(_QWORD *)((char *)v92 + 4) = MEMORY[0xFFFFF78000000014];
              *((_DWORD *)v2 + 4) = *(_DWORD *)(v25 + 40);
              *((_DWORD *)v2 + 7) = -1;
              *((_DWORD *)v2 + 8) = -1;
              *((_DWORD *)v2 + 10) = -1;
              *((_DWORD *)v2 + 11) = -1;
              *((_DWORD *)v2 + 12) = BugCheckParameter4_4;
              *((_WORD *)v2 + 37) = *(_WORD *)(v1 + 4);
              BugCheckParameter4_4 = -1;
              v26 = *(_DWORD *)(v25 + 184);
              if ( (v26 & 0x80u) != 0 )
                *((_DWORD *)v2 + 13) ^= (*((_DWORD *)v2 + 13) ^ (v26 << 16)) & 0xF00000;
              v27 = v112;
              v28 = CmpCopyName(v2 + 76, (const void **)v112);
              *((_WORD *)v2 + 36) = v28;
              if ( v28 < *v27 )
                *((_WORD *)v2 + 1) |= 0x20u;
              if ( (v88 & 2) != 0 )
              {
                *(_QWORD *)(v2 + 36) = *(_QWORD *)(v1 + 48);
                *((_DWORD *)v2 + 7) = *(_DWORD *)(v1 + 40);
              }
              v87 = 1;
              if ( (v88 & 2) == 0 )
              {
                CmLockHiveSecurityExclusive(v9);
                v83 = 1;
                SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                           v9,
                                           BugCheckParameter4,
                                           (__int64)v2,
                                           BugCheckParameter4 >> 31,
                                           NewDescriptor,
                                           0,
                                           (unsigned int *)v2 + 11);
                v22 = SecurityDescriptorNode;
                if ( SecurityDescriptorNode < 0 )
                {
                  v39 = 270592;
                  goto LABEL_68;
                }
                CmUnlockHiveSecurity(v9);
                v83 = 0;
              }
              SecurityDescriptorNode = HvpMarkCellDirty(v9, *(unsigned int *)(v91 + 40), 0);
              v22 = SecurityDescriptorNode;
              if ( SecurityDescriptorNode < 0 )
              {
                v39 = 270848;
              }
              else if ( v117
                     || (SecurityDescriptorNode = CmpAddSubKeyEx(v9, *(unsigned int *)(v91 + 40), BugCheckParameter4),
                         v22 = SecurityDescriptorNode,
                         SecurityDescriptorNode >= 0) )
              {
                v85 = 1;
                *(_DWORD *)(v8 + 40) = BugCheckParameter4;
                BugCheckParameter4 = -1;
                *(_QWORD *)(v8 + 240) = v117;
                if ( (v88 & 0x40) == 0 )
                {
                  *(_DWORD *)(v8 + 96) = *((_DWORD *)v2 + 9);
                  *(_DWORD *)(v8 + 100) = *((_DWORD *)v2 + 10);
                }
                ++*(_QWORD *)(v8 + 304);
                CmpRebuildKcbCacheFromNode(v8, (__int64)v2, 0LL, 0);
                if ( (v88 & 2) == 0 )
                {
                  v30 = *((unsigned int *)v2 + 11);
                  LODWORD(v109) = 0;
                  if ( (_DWORD)v30 == -1 )
                  {
                    *(_QWORD *)(v8 + 88) = 0LL;
                  }
                  else
                  {
                    v102 = *(_QWORD *)(v8 + 32);
                    CmLockHiveSecurityShared(v102);
                    if ( !CmpFindSecurityCellCacheIndex(v102, v30, (__int64 *)va) )
                    {
                      *(_QWORD *)(v8 + 88) = 0LL;
                      KeBugCheckEx(0x51u, 4uLL, 1uLL, v8, v30);
                    }
                    v31 = v102;
                    *(_QWORD *)(v8 + 88) = *(_QWORD *)(*(_QWORD *)(v102 + 1888) + 16LL * (unsigned int)v109 + 8);
                    CmUnlockHiveSecurity(v31);
                  }
                }
                if ( !v117 )
                  goto LABEL_58;
                v54 = P;
                *((_DWORD *)P + 17) = 0;
                v54[18] = v93;
                v55 = v96;
                *((_QWORD *)v54 + 10) = v96;
                v55[17] = 1;
                *((_QWORD *)v55 + 11) = v8;
                SecurityDescriptorNode = CmAddLogForAction(v54, 1LL);
                v22 = SecurityDescriptorNode;
                if ( SecurityDescriptorNode >= 0 )
                {
                  P = 0LL;
                  v96 = 0LL;
LABEL_58:
                  v32 = v91;
                  v33 = *(unsigned int *)(v91 + 40);
                  v34 = *(_QWORD *)(v91 + 32);
                  if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
                    v35 = HvpGetCellFlat(v34, v33, &v99);
                  else
                    v35 = HvpGetCellPaged(v34, v33, &v99);
                  v36 = v35;
                  v98 = v35;
                  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v32 + 32), v35, *(_DWORD *)(v32 + 40));
                  *(_QWORD *)(v36 + 4) = MEMORY[0xFFFFF78000000014];
                  v37 = *v112;
                  if ( (unsigned __int16)*(_DWORD *)(v36 + 52) < v37 )
                    *(_WORD *)(v36 + 52) = v37;
                  v38 = *(unsigned __int16 *)(v1 + 4);
                  if ( *(_DWORD *)(v36 + 56) < v38 )
                    *(_DWORD *)(v36 + 56) = v38;
                  ++*(_QWORD *)(v32 + 304);
                  *(_WORD *)(v32 + 176) = *(_WORD *)(v36 + 52);
                  *(_QWORD *)(v32 + 168) = *(_QWORD *)(v36 + 4);
                  CmpCleanUpSubKeyInfo(v32, 1);
                  if ( v84 )
                  {
                    HvUnlockHiveFlusherShared(v9);
                    v84 = 0;
                  }
                  CmpReportNotifyForKcbStack(a1, v117, 1, 0LL);
                  v22 = 0;
                  v85 = 0;
                  v2 = (char *)v92;
                  goto LABEL_69;
                }
                v39 = 271360;
              }
              else
              {
                v39 = 271104;
              }
LABEL_68:
              CmpRecordParseFailure(v1, v39, SecurityDescriptorNode);
LABEL_69:
              v40 = v83;
              goto LABEL_70;
            }
            v59 = 270080;
          }
          CmpRecordParseFailure(v1, v59, v21);
LABEL_133:
          v2 = (char *)v92;
          goto LABEL_97;
        }
        if ( (v115 & 2) != 0 )
        {
          v46 = -1072103423;
          v47 = 269184;
          goto LABEL_95;
        }
        v81 = CmpSnapshotTxOwnerArray((unsigned int *)(v8 + 264), (_DWORD *)(v1 + 120), (void ***)(v1 + 128));
        v22 = v81;
        if ( v81 < 0 )
        {
          v46 = v81;
          v47 = 269312;
          goto LABEL_96;
        }
        CmpLogTransactionAbortedWithChildName(v91, v112, 6LL);
        v47 = 269568;
      }
      v46 = -1073741267;
      *(_DWORD *)(v1 + 100) |= 4u;
      goto LABEL_95;
    }
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v18);
    v96 = UnitOfWork;
    v103 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v46 = -1073741670;
      v47 = 265984;
      goto LABEL_95;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    v73 = CmpTransEnlistUowInCmTrans(v96, v117);
    v22 = v73;
    if ( v73 < 0 )
    {
      v46 = v73;
      v47 = 266240;
      goto LABEL_96;
    }
    v76 = (_QWORD *)CmpAllocateUnitOfWork(v74);
    P = v76;
    v104 = v76;
    if ( !v76 )
    {
      v46 = -1073741670;
      v47 = 266496;
      goto LABEL_95;
    }
    CmpTransEnlistUowInKcb(v76, v8);
    v77 = CmpTransEnlistUowInCmTrans(P, v117);
    v22 = v77;
    if ( v77 < 0 )
    {
      v46 = v77;
      v47 = 266752;
      goto LABEL_96;
    }
    if ( !(unsigned __int8)CmpLockIXLockIntent(v91 + 248, v96) )
    {
      v46 = -1072103423;
      v47 = 267008;
      goto LABEL_95;
    }
    v78 = P;
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v8 + 248, P, 0LL) )
    {
      v46 = -1072103423;
      v47 = 267264;
      goto LABEL_95;
    }
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v8 + 264, v78, 1LL) )
    {
      v46 = -1072103423;
      v47 = 267520;
      goto LABEL_95;
    }
    goto LABEL_33;
  }
  v46 = -1073741790;
  v47 = 263424;
LABEL_95:
  v22 = v46;
LABEL_96:
  CmpRecordParseFailure(v1, v47, v46);
LABEL_97:
  v40 = 0;
LABEL_70:
  if ( v40 )
    CmUnlockHiveSecurity(v9);
  if ( v85 )
  {
    BugCheckParameter4 = *(_DWORD *)(v8 + 40);
    *(_DWORD *)(v8 + 40) = -1;
    *(_DWORD *)(v8 + 96) = 0;
    *(_DWORD *)(v8 + 100) = -1;
    *(_WORD *)(v8 + 186) = 0;
    *(_DWORD *)(v8 + 112) = 0;
    *(_QWORD *)(v8 + 168) = 0LL;
    *(_QWORD *)(v8 + 176) = 0LL;
    *(_DWORD *)(v8 + 184) &= 0xFFFFFF00;
    *(_BYTE *)(v8 + 185) = 0;
    *(_QWORD *)(v8 + 240) = 0LL;
    *(_QWORD *)(v8 + 88) = 0LL;
  }
  v41 = P;
  if ( P )
  {
    CmpRundownUnitOfWork(P);
    ExFreePoolWithTag(v41, 0x77554D43u);
  }
  v42 = v96;
  if ( v96 )
  {
    CmpRundownUnitOfWork(v96);
    ExFreePoolWithTag(v42, 0x77554D43u);
  }
  v43 = NewDescriptor;
  if ( NewDescriptor && !v86 )
  {
    if ( (*(_DWORD *)v1 & 1) != 0 && (*(_DWORD *)(v1 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v51 = v111;
      v52 = *(_QWORD *)(v111 + 72);
      if ( (*(_DWORD *)(v111 + 12) & 0x4000000) == 0 )
      {
        v53 = *(void **)(v52 + 48);
        if ( v53 )
        {
          ExFreePoolWithTag(v53, 0);
          v51 = v111;
        }
      }
      *(_DWORD *)(v51 + 12) &= ~0x4000000u;
      *(_QWORD *)(v52 + 48) = v43;
    }
  }
  if ( v98 )
  {
    v44 = *(_QWORD *)(v91 + 32);
    if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v44, (__int64)&v99);
    else
      HvpReleaseCellPaged(v44, (unsigned int *)&v99);
  }
  if ( v100 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, (__int64)&Size[1]);
    else
      HvpReleaseCellPaged(v9, &Size[1]);
  }
  if ( BugCheckParameter4_4 != -1 )
    HvFreeCell(v9, BugCheckParameter4_4);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, (__int64)&v101);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v101);
  }
  if ( BugCheckParameter4 != -1 )
  {
    if ( v87 )
      CmpFreeKeyByCell(v9, BugCheckParameter4, 0);
    else
      HvFreeCell(v9, BugCheckParameter4);
  }
  if ( v84 )
    HvUnlockHiveFlusherShared(v9);
  return (unsigned int)v22;
}
