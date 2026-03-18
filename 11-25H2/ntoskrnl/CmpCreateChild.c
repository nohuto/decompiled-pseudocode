/*
 * XREFs of CmpCreateChild @ 0x1408884FC
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140429CE0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047F774 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404838EC (CmpTransEnlistUowInKcb.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     CmpRecordParseFailure @ 0x140849FA0 (CmpRecordParseFailure.c)
 *     CmpLogUnsupportedOperation @ 0x140863D74 (CmpLogUnsupportedOperation.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140863F7C (CmpLogTransactionAbortedWithChildName.c)
 *     CmAddLogForAction @ 0x140868A1C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14086901C (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140869074 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140869120 (CmpLockIXLockExclusive.c)
 *     CmpSnapshotTxOwnerArray @ 0x14086AED4 (CmpSnapshotTxOwnerArray.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086CCD4 (CmpUpdateKeyNodeAccessBits.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x14086F944 (CmpReportNotifyForKcbStack.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086FF30 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpNameSize @ 0x14087FC84 (CmpNameSize.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     CmpCopyName @ 0x140881358 (CmpCopyName.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140885FAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408860F8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     CmLockHiveSecurityExclusive @ 0x14088709C (CmLockHiveSecurityExclusive.c)
 *     CmpMarkKeyDirty @ 0x1408870F0 (CmpMarkKeyDirty.c)
 *     CmpFreeSecurityDescriptor @ 0x14088820C (CmpFreeSecurityDescriptor.c)
 *     CmpGetKcbAtLayerHeight @ 0x140889590 (CmpGetKcbAtLayerHeight.c)
 *     CmpAddSubKeyEx @ 0x1408897A8 (CmpAddSubKeyEx.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     SeAssignSecurity @ 0x1409262C0 (SeAssignSecurity.c)
 *     CmpIsKeyStackDeleted @ 0x140973050 (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140977BB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmListGetPrevElement @ 0x1409D23D0 (CmListGetPrevElement.c)
 *     SeDeassignSecurity @ 0x140A1B270 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmLockHiveSecurityShared @ 0x140BA9A5C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BA9AB8 (CmUnlockHiveSecurity.c)
 */

__int64 CmpCreateChild(__int64 a1, ...)
{
  __int64 v1; // rsi
  char *v2; // r13
  unsigned int v3; // edx
  int v4; // edx
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
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // r13d
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  _BYTE *v24; // rbx
  __int64 v25; // rcx
  int v26; // edx
  UNICODE_STRING *v27; // rbx
  unsigned __int16 v28; // ax
  int SecurityDescriptorNode; // eax
  ULONG_PTR v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  ULONG_PTR v33; // rdx
  ULONG_PTR v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r13
  unsigned int Length; // edx
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
  int v56; // r8d
  int v57; // edx
  int v58; // edx
  ULONG_PTR v59; // rdx
  char *CellFlat; // rax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  UNICODE_STRING *v64; // rbx
  __int64 v65; // rbx
  ULONG_PTR v66; // rdx
  __int64 CellPaged; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // eax
  _QWORD *UnitOfWork; // rax
  int v72; // eax
  int v73; // eax
  __int64 PrevElement; // rax
  _QWORD *v75; // rax
  int v76; // eax
  PVOID v77; // rbx
  int v78; // eax
  __int64 v79; // r9
  int v80; // eax
  __int64 v81; // r9
  int v82; // eax
  __int64 v83; // r9
  int v84; // eax
  __int64 v85; // r9
  char v86; // [rsp+40h] [rbp-D8h]
  char v87; // [rsp+41h] [rbp-D7h]
  char v88; // [rsp+42h] [rbp-D6h]
  char v89; // [rsp+44h] [rbp-D4h]
  char v90; // [rsp+45h] [rbp-D3h]
  __int16 v91; // [rsp+4Ah] [rbp-CEh]
  unsigned int BugCheckParameter4; // [rsp+4Ch] [rbp-CCh] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+50h] [rbp-C8h] BYREF
  ULONG_PTR v94; // [rsp+58h] [rbp-C0h]
  void *v95; // [rsp+60h] [rbp-B8h] BYREF
  int v96; // [rsp+68h] [rbp-B0h]
  int Size[3]; // [rsp+6Ch] [rbp-ACh] BYREF
  PVOID P; // [rsp+78h] [rbp-A0h]
  PVOID v99; // [rsp+80h] [rbp-98h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+88h] [rbp-90h] BYREF
  __int64 v101; // [rsp+90h] [rbp-88h]
  __int64 v102; // [rsp+98h] [rbp-80h] BYREF
  void *v103; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v105; // [rsp+B0h] [rbp-68h]
  _QWORD *v106; // [rsp+B8h] [rbp-60h]
  _QWORD *v107; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v108; // [rsp+C8h] [rbp-50h]
  ULONG_PTR v109; // [rsp+D0h] [rbp-48h]
  _QWORD v110[8]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v112; // [rsp+128h] [rbp+10h] BYREF
  va_list va; // [rsp+128h] [rbp+10h]
  __int64 v114; // [rsp+130h] [rbp+18h]
  UNICODE_STRING *v115; // [rsp+138h] [rbp+20h]
  __int64 v116; // [rsp+140h] [rbp+28h]
  __int64 v117; // [rsp+148h] [rbp+30h]
  __int64 v118; // [rsp+150h] [rbp+38h]
  __int64 v119; // [rsp+158h] [rbp+40h]
  __int64 v120; // [rsp+160h] [rbp+48h]
  va_list va1; // [rsp+168h] [rbp+50h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v112 = va_arg(va1, _QWORD);
  v114 = va_arg(va1, _QWORD);
  v115 = va_arg(va1, UNICODE_STRING *);
  v116 = va_arg(va1, _QWORD);
  v117 = va_arg(va1, _QWORD);
  v118 = va_arg(va1, _QWORD);
  v119 = va_arg(va1, _QWORD);
  v120 = va_arg(va1, _QWORD);
  v1 = v116;
  v104 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v102 = 0LL;
  v90 = 0;
  v87 = 0;
  v89 = 0;
  v2 = 0LL;
  v95 = 0LL;
  BugCheckParameter4 = -1;
  HvpGetCellContextInitialize(&v104);
  v103 = 0LL;
  BugCheckParameter4_4 = v3;
  HvpGetCellContextInitialize(&Size[1]);
  v101 = 0LL;
  HvpGetCellContextInitialize(&v102);
  v86 = 0;
  NewDescriptor = 0LL;
  Size[0] = v4;
  v99 = 0LL;
  v106 = 0LL;
  P = 0LL;
  v107 = 0LL;
  v88 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v5);
  v94 = KcbAtLayerHeight;
  v8 = CmpGetKcbAtLayerHeight(v7);
  v108 = v8;
  v9 = *(_QWORD *)(v8 + 32);
  v109 = v9;
  v10 = v120;
  if ( v120 && (*(_DWORD *)(v9 + 160) & 2) != 0 )
  {
    v56 = -1072103423;
    v22 = -1072103423;
    v57 = 262400;
LABEL_159:
    CmpRecordParseFailure(v1, v57, v56);
    goto LABEL_97;
  }
  if ( (v118 & 0xFFFFFFFC) != 0 )
  {
    v22 = -1073741811;
    v56 = -1073741811;
    v57 = 262528;
    goto LABEL_159;
  }
  if ( (v118 & 1) != 0 || (*(_DWORD *)(v9 + 4112) & 0x20) != 0 )
  {
    v11 = 1;
    v89 = 1;
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
  v13 = v117 | 0x100;
  if ( !v12 )
    v13 = v117;
  v14 = v13 | 0x200;
  if ( (*(_DWORD *)(KcbAtLayerHeight + 184) & 0x2000000) == 0 )
    v14 = v13;
  v91 = v14;
  if ( !v11 || !*(_QWORD *)(v114 + 64) )
  {
    v15 = *(_DWORD *)(v1 + 24) & 1;
    v96 = v15;
    if ( v120 && *(_QWORD *)(KcbAtLayerHeight + 240) )
    {
      v110[0] = 0LL;
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(KcbAtLayerHeight + 208, v110);
        if ( !PrevElement )
          break;
        if ( !*(_DWORD *)(PrevElement + 68) )
        {
          v16 = *(_DWORD *)(PrevElement + 72);
          v15 = v96;
          goto LABEL_18;
        }
      }
      v15 = v96;
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
      v10 = v120;
      v11 = v89;
    }
    if ( (v91 & 2) == 0 )
    {
      if ( v11 )
      {
        NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, v10, 0LL) + 32);
      }
      else
      {
        if ( (*(_DWORD *)(v8 + 184) & 0x2000000) == 0
          || (v2 = (char *)v95, CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, 0LL, (int *)(v1 + 16))) )
        {
          v48 = *(void **)(v114 + 64);
        }
        else
        {
          v48 = 0LL;
        }
        SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, v120, 0LL);
        v50 = SeAssignSecurity(
                (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
                v48,
                &NewDescriptor,
                1u,
                (PSECURITY_SUBJECT_CONTEXT)(v114 + 32),
                (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                *((POOL_TYPE *)CmKeyObjectType + 25));
        v22 = v50;
        if ( v50 < 0 )
        {
          v46 = v50;
          v47 = 264192;
          goto LABEL_96;
        }
        KcbAtLayerHeight = v94;
      }
    }
    v17 = v120;
    if ( v120 )
    {
      if ( !(unsigned __int8)CmpIsKeyStackDeleted(v112, 0LL) )
      {
        v22 = CmpUndoDeleteKeyForTrans(v8);
        if ( v22 >= 0 )
          goto LABEL_97;
        v22 = -1073741772;
        v46 = -1073741772;
        v47 = 263936;
        goto LABEL_96;
      }
      v17 = v120;
    }
    v18 = v96;
    if ( v17 )
      v18 = 1;
    LODWORD(v112) = v18;
    v19 = *(_DWORD *)(v8 + 40);
    if ( v19 != -1 )
    {
      if ( v18 != v19 >> 31 )
        CmpLogUnsupportedOperation(2);
      LODWORD(v120) = *(_DWORD *)(v8 + 40) >> 31;
      if ( !(_BYTE)v119 )
      {
        HvLockHiveFlusherShared(v9);
        v87 = 1;
      }
      v59 = *(unsigned int *)(v8 + 40);
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        CellFlat = (char *)HvpGetCellFlat(v9, v59, &v104);
      else
        CellFlat = (char *)HvpGetCellPaged(v9, v59, &v104);
      v2 = CellFlat;
      v95 = CellFlat;
      if ( (unsigned __int16)CmpNameSize(&v115->Length) != *((_WORD *)CellFlat + 36) )
      {
        CmpLogUnsupportedOperation(1);
        v22 = -1073741822;
        v46 = -1073741822;
        v47 = 264448;
        goto LABEL_96;
      }
      v61 = CmpMarkKeyDirty(v9, *(unsigned int *)(v8 + 40), 0);
      v22 = v61;
      if ( v61 < 0 )
      {
        v46 = v61;
        v47 = 264704;
        goto LABEL_96;
      }
      v62 = HvpMarkCellDirty(v9, *(unsigned int *)(v94 + 40), 0);
      v22 = v62;
      if ( v62 < 0 )
      {
        v46 = v62;
        v47 = 264960;
        goto LABEL_96;
      }
      v63 = *(unsigned __int16 *)(v1 + 4);
      if ( (_WORD)v63 )
      {
        v72 = HvAllocateCell(v9, v63, v120, &BugCheckParameter4_4, &v103, (__int64)&Size[1]);
        v22 = v72;
        if ( v72 < 0 )
        {
          v46 = v72;
          v47 = 265216;
          goto LABEL_96;
        }
        memmove(v103, *(const void **)(v1 + 8), *(unsigned __int16 *)(v1 + 4));
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v9, &Size[1]);
        else
          HvpReleaseCellPaged(v9, (unsigned int *)&Size[1]);
        v103 = 0LL;
      }
      CmLockHiveSecurityExclusive(v9);
      v86 = 1;
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                 v9,
                                 *(unsigned int *)(v8 + 40),
                                 NewDescriptor,
                                 1,
                                 (__int64)Size);
      v22 = SecurityDescriptorNode;
      if ( SecurityDescriptorNode < 0 )
      {
        v39 = 265728;
        goto LABEL_68;
      }
      CmpFreeSecurityDescriptor(v9, *(unsigned int *)(v8 + 40));
      *((_DWORD *)v2 + 11) = Size[0];
      CmUnlockHiveSecurity(v9);
      *((_DWORD *)v2 + 12) = BugCheckParameter4_4;
      *((_WORD *)v2 + 37) = *(_WORD *)(v1 + 4);
      BugCheckParameter4_4 = -1;
      v64 = v115;
      CmpCopyName(v2 + 76, (const void **)v115);
      v2[13] |= 3u;
      *((_WORD *)v2 + 1) = v91;
      if ( *((_WORD *)v2 + 36) < v64->Length )
        *((_WORD *)v2 + 1) = v91 | 0x20;
      v65 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v2 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v8 + 304);
      CmpRebuildKcbCacheFromNode(v8, (__int64)v2, 0LL, 0);
      v66 = *(unsigned int *)(v94 + 40);
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v9, v66, &v102);
      else
        CellPaged = HvpGetCellPaged(v9, v66, &v102);
      v68 = CellPaged;
      v101 = CellPaged;
      *(_QWORD *)(CellPaged + 4) = v65;
      v69 = v94;
      *(_QWORD *)(v94 + 168) = v65;
      ++*(_QWORD *)(v69 + 304);
      v70 = *((unsigned __int16 *)v2 + 37);
      if ( *(_DWORD *)(v68 + 56) < v70 )
        *(_DWORD *)(v68 + 56) = v70;
      if ( v87 )
      {
        HvUnlockHiveFlusherShared(v9);
        v87 = 0;
      }
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      v22 = 0;
      goto LABEL_130;
    }
    if ( !(_BYTE)v119 )
    {
      HvLockHiveFlusherShared(v9);
      v87 = 1;
    }
    if ( !v120 )
    {
      if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
      {
        if ( (v118 & 2) != 0 )
        {
          v46 = -1072103423;
          v47 = 267648;
          goto LABEL_95;
        }
        v78 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, (unsigned int *)(v1 + 120), (void ***)(v1 + 128));
        v22 = v78;
        if ( v78 < 0 )
        {
          v46 = v78;
          v47 = 267776;
          goto LABEL_96;
        }
        CmpLogTransactionAbortedWithChildName(v94, v115, 6, v79, *(_DWORD *)(v1 + 120));
        v47 = 268032;
      }
      else if ( *(int *)(KcbAtLayerHeight + 248) < 0 )
      {
        if ( (v118 & 2) != 0 )
        {
          v46 = -1072103423;
          v47 = 268160;
          goto LABEL_95;
        }
        v80 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, (unsigned int *)(v1 + 120), (void ***)(v1 + 128));
        v22 = v80;
        if ( v80 < 0 )
        {
          v46 = v80;
          v47 = 268288;
          goto LABEL_96;
        }
        CmpLogTransactionAbortedWithChildName(v94, v115, 6, v81, *(_DWORD *)(v1 + 120));
        v47 = 268544;
      }
      else if ( *(_DWORD *)(v8 + 248) )
      {
        if ( (v118 & 2) != 0 )
        {
          v46 = -1072103423;
          v47 = 268672;
          goto LABEL_95;
        }
        v84 = CmpSnapshotTxOwnerArray(v8 + 248, (unsigned int *)(v1 + 120), (void ***)(v1 + 128));
        v22 = v84;
        if ( v84 < 0 )
        {
          v46 = v84;
          v47 = 268800;
          goto LABEL_96;
        }
        CmpLogTransactionAbortedWithChildName(v94, v115, 6, v85, *(_DWORD *)(v1 + 120));
        v47 = 269056;
      }
      else
      {
        if ( !*(_DWORD *)(v8 + 264) )
        {
LABEL_33:
          Size[0] = (unsigned __int16)CmpNameSize(&v115->Length) + 76;
          v20 = v112;
          v21 = HvAllocateCell(v9, Size[0], v112, &BugCheckParameter4, &v95, (__int64)&v104);
          v22 = v21;
          if ( v21 < 0 )
          {
            v58 = 269824;
          }
          else
          {
            v23 = *(unsigned __int16 *)(v1 + 4);
            if ( !(_WORD)v23 )
              goto LABEL_35;
            v21 = HvAllocateCell(v9, v23, v20, &BugCheckParameter4_4, &v103, (__int64)&Size[1]);
            v22 = v21;
            if ( v21 >= 0 )
            {
              memmove(v103, *(const void **)(v1 + 8), *(unsigned __int16 *)(v1 + 4));
              if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v9, &Size[1]);
              else
                HvpReleaseCellPaged(v9, (unsigned int *)&Size[1]);
              v103 = 0LL;
LABEL_35:
              v24 = v95;
              memset_0(v95, 0, (unsigned int)Size[0]);
              if ( (v91 & 2) != 0 )
                *(_WORD *)v24 = 27500;
              else
                *(_WORD *)v24 = 27502;
              v24[12] = CmpAccessBitForPhase;
              v25 = v94;
              if ( *(_BYTE *)(v94 + 65) == 3 )
                v24[13] |= 3u;
              else
                v24[13] &= 0xFCu;
              *((_WORD *)v24 + 1) = v91;
              v2 = (char *)v95;
              *(_QWORD *)((char *)v95 + 4) = MEMORY[0xFFFFF78000000014];
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
              v27 = v115;
              v28 = CmpCopyName(v2 + 76, (const void **)v115);
              *((_WORD *)v2 + 36) = v28;
              if ( v28 < v27->Length )
                *((_WORD *)v2 + 1) |= 0x20u;
              if ( (v91 & 2) != 0 )
              {
                *(_QWORD *)(v2 + 36) = *(_QWORD *)(v1 + 48);
                *((_DWORD *)v2 + 7) = *(_DWORD *)(v1 + 40);
              }
              v90 = 1;
              if ( (v91 & 2) == 0 )
              {
                CmLockHiveSecurityExclusive(v9);
                v86 = 1;
                SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                           v9,
                                           BugCheckParameter4,
                                           NewDescriptor,
                                           0,
                                           (__int64)(v2 + 44));
                v22 = SecurityDescriptorNode;
                if ( SecurityDescriptorNode < 0 )
                {
                  v39 = 270592;
                  goto LABEL_68;
                }
                CmUnlockHiveSecurity(v9);
                v86 = 0;
              }
              SecurityDescriptorNode = HvpMarkCellDirty(v9, *(unsigned int *)(v94 + 40), 0);
              v22 = SecurityDescriptorNode;
              if ( SecurityDescriptorNode < 0 )
              {
                v39 = 270848;
              }
              else if ( v120
                     || (SecurityDescriptorNode = CmpAddSubKeyEx(v9),
                         v22 = SecurityDescriptorNode,
                         SecurityDescriptorNode >= 0) )
              {
                v88 = 1;
                *(_DWORD *)(v8 + 40) = BugCheckParameter4;
                BugCheckParameter4 = -1;
                *(_QWORD *)(v8 + 240) = v120;
                if ( (v91 & 0x40) == 0 )
                {
                  *(_DWORD *)(v8 + 96) = *((_DWORD *)v2 + 9);
                  *(_DWORD *)(v8 + 100) = *((_DWORD *)v2 + 10);
                }
                ++*(_QWORD *)(v8 + 304);
                CmpRebuildKcbCacheFromNode(v8, (__int64)v2, 0LL, 0);
                if ( (v91 & 2) == 0 )
                {
                  v30 = *((unsigned int *)v2 + 11);
                  LODWORD(v112) = 0;
                  if ( (_DWORD)v30 == -1 )
                  {
                    *(_QWORD *)(v8 + 88) = 0LL;
                  }
                  else
                  {
                    v105 = *(_QWORD *)(v8 + 32);
                    CmLockHiveSecurityShared(v105);
                    if ( !CmpFindSecurityCellCacheIndex(v105, v30, (__int64 *)va) )
                    {
                      *(_QWORD *)(v8 + 88) = 0LL;
                      KeBugCheckEx(0x51u, 4uLL, 1uLL, v8, v30);
                    }
                    v31 = v105;
                    *(_QWORD *)(v8 + 88) = *(_QWORD *)(*(_QWORD *)(v105 + 1888) + 16LL * (unsigned int)v112 + 8);
                    CmUnlockHiveSecurity(v31);
                  }
                }
                if ( !v120 )
                  goto LABEL_58;
                v54 = P;
                *((_DWORD *)P + 17) = 0;
                v54[18] = v96;
                v55 = v99;
                *((_QWORD *)v54 + 10) = v99;
                v55[17] = 1;
                *((_QWORD *)v55 + 11) = v8;
                SecurityDescriptorNode = CmAddLogForAction((__int64)v54, 1u);
                v22 = SecurityDescriptorNode;
                if ( SecurityDescriptorNode >= 0 )
                {
                  P = 0LL;
                  v99 = 0LL;
LABEL_58:
                  v32 = v94;
                  v33 = *(unsigned int *)(v94 + 40);
                  v34 = *(_QWORD *)(v94 + 32);
                  if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
                    v35 = HvpGetCellFlat(v34, v33, &v102);
                  else
                    v35 = HvpGetCellPaged(v34, v33, &v102);
                  v36 = v35;
                  v101 = v35;
                  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v32 + 32), v35, *(_DWORD *)(v32 + 40));
                  *(_QWORD *)(v36 + 4) = MEMORY[0xFFFFF78000000014];
                  Length = v115->Length;
                  if ( (unsigned __int16)*(_DWORD *)(v36 + 52) < Length )
                    *(_WORD *)(v36 + 52) = Length;
                  v38 = *(unsigned __int16 *)(v1 + 4);
                  if ( *(_DWORD *)(v36 + 56) < v38 )
                    *(_DWORD *)(v36 + 56) = v38;
                  ++*(_QWORD *)(v32 + 304);
                  *(_WORD *)(v32 + 176) = *(_WORD *)(v36 + 52);
                  *(_QWORD *)(v32 + 168) = *(_QWORD *)(v36 + 4);
                  CmpCleanUpSubKeyInfo(v32, 1);
                  if ( v87 )
                  {
                    HvUnlockHiveFlusherShared(v9);
                    v87 = 0;
                  }
                  CmpReportNotifyForKcbStack(a1, v120, 1, 0LL);
                  v22 = 0;
                  v88 = 0;
                  v2 = (char *)v95;
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
              v40 = v86;
              goto LABEL_70;
            }
            v58 = 270080;
          }
          CmpRecordParseFailure(v1, v58, v21);
LABEL_130:
          v2 = (char *)v95;
          goto LABEL_97;
        }
        if ( (v118 & 2) != 0 )
        {
          v46 = -1072103423;
          v47 = 269184;
          goto LABEL_95;
        }
        v82 = CmpSnapshotTxOwnerArray(v8 + 264, (unsigned int *)(v1 + 120), (void ***)(v1 + 128));
        v22 = v82;
        if ( v82 < 0 )
        {
          v46 = v82;
          v47 = 269312;
          goto LABEL_96;
        }
        CmpLogTransactionAbortedWithChildName(v94, v115, 6, v83, *(_DWORD *)(v1 + 120));
        v47 = 269568;
      }
      v46 = -1073741267;
      *(_DWORD *)(v1 + 100) |= 4u;
      goto LABEL_95;
    }
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
    v99 = UnitOfWork;
    v106 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v46 = -1073741670;
      v47 = 265984;
      goto LABEL_95;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    v73 = CmpTransEnlistUowInCmTrans(v99, v120);
    v22 = v73;
    if ( v73 < 0 )
    {
      v46 = v73;
      v47 = 266240;
      goto LABEL_96;
    }
    v75 = (_QWORD *)CmpAllocateUnitOfWork();
    P = v75;
    v107 = v75;
    if ( !v75 )
    {
      v46 = -1073741670;
      v47 = 266496;
      goto LABEL_95;
    }
    CmpTransEnlistUowInKcb(v75, v8);
    v76 = CmpTransEnlistUowInCmTrans(P, v120);
    v22 = v76;
    if ( v76 < 0 )
    {
      v46 = v76;
      v47 = 266752;
      goto LABEL_96;
    }
    if ( !CmpLockIXLockIntent((unsigned int *)(v94 + 248), (__int64)v99) )
    {
      v46 = -1072103423;
      v47 = 267008;
      goto LABEL_95;
    }
    v77 = P;
    if ( !CmpLockIXLockExclusive(v8 + 248, (__int64)P, 0) )
    {
      v46 = -1072103423;
      v47 = 267264;
      goto LABEL_95;
    }
    if ( !CmpLockIXLockExclusive(v8 + 264, (__int64)v77, 1) )
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
  if ( v88 )
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
  v42 = v99;
  if ( v99 )
  {
    CmpRundownUnitOfWork(v99);
    ExFreePoolWithTag(v42, 0x77554D43u);
  }
  v43 = NewDescriptor;
  if ( NewDescriptor && !v89 )
  {
    if ( (*(_DWORD *)v1 & 1) != 0 && (*(_DWORD *)(v1 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v51 = v114;
      v52 = *(_QWORD *)(v114 + 72);
      if ( (*(_DWORD *)(v114 + 12) & 0x4000000) == 0 )
      {
        v53 = *(void **)(v52 + 48);
        if ( v53 )
        {
          ExFreePoolWithTag(v53, 0);
          v51 = v114;
        }
      }
      *(_DWORD *)(v51 + 12) &= ~0x4000000u;
      *(_QWORD *)(v52 + 48) = v43;
    }
  }
  if ( v101 )
  {
    v44 = *(_QWORD *)(v94 + 32);
    if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v44, &v102);
    else
      HvpReleaseCellPaged(v44, (unsigned int *)&v102);
  }
  if ( v103 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &Size[1]);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&Size[1]);
  }
  if ( BugCheckParameter4_4 != -1 )
    HvFreeCell(v9, BugCheckParameter4_4);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v104);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v104);
  }
  if ( BugCheckParameter4 != -1 )
  {
    if ( v90 )
      CmpFreeKeyByCell(v9, BugCheckParameter4, 0);
    else
      HvFreeCell(v9, BugCheckParameter4);
  }
  if ( v87 )
    HvUnlockHiveFlusherShared(v9);
  return (unsigned int)v22;
}
