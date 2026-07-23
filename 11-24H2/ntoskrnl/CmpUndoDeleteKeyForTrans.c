/*
 * XREFs of CmpUndoDeleteKeyForTrans @ 0x140A22AB4
 * Callers:
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047B08C (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x14047F6A0 (CmpTransEnlistUowInKcb.c)
 *     CmpDereferenceSecurityNode @ 0x140496BD8 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x14088427C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpLockIXLockIntent @ 0x140A22FF4 (CmpLockIXLockIntent.c)
 *     CmpAllocateUnitOfWork @ 0x140A230A0 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockExclusive @ 0x140A230F8 (CmpLockIXLockExclusive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTrans(ULONG_PTR BugCheckParameter3, __int64 a2, void *a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rcx
  _QWORD *Pool2; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // r15
  unsigned int v14; // edi
  unsigned int v15; // ebx
  ULONG_PTR v16; // rcx
  __int64 CellPaged; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *UnitOfWork; // rax
  __int64 v21; // r14
  int SecurityDescriptorNode; // ebx
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned int v25; // edi
  ULONG_PTR v26; // rcx
  ULONG_PTR v27; // rdx
  __int64 v28; // rax
  ULONG_PTR v29; // rdx
  ULONG_PTR v30; // rcx
  _DWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  ULONG_PTR v36; // rcx
  ULONG_PTR v37; // rdx
  __int64 CellFlat; // rax
  __int64 v39; // rcx
  unsigned int v40; // edx
  PVOID *v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rcx
  unsigned int v44; // [rsp+40h] [rbp-29h] BYREF
  int v45; // [rsp+44h] [rbp-25h]
  unsigned int v46[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v47[2]; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v48[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v49; // [rsp+60h] [rbp-9h]
  __int64 v50; // [rsp+68h] [rbp-1h]
  __int64 v51; // [rsp+70h] [rbp+7h]
  ULONG_PTR v52; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v53; // [rsp+D8h] [rbp+6Fh]
  void *Src; // [rsp+E0h] [rbp+77h]
  unsigned int v55; // [rsp+E8h] [rbp+7Fh]

  Src = a3;
  v53 = a2;
  v3 = 0;
  v46[0] = -1;
  v45 = -1;
  v5 = *(_QWORD *)(BugCheckParameter3 + 72);
  LODWORD(v52) = -1;
  Pool2 = 0LL;
  v8 = 0LL;
  v46[1] = 0;
  v49 = 0LL;
  v9 = v5 + 208;
  v48[0] = -1;
  v48[1] = 0;
  v44 = 0;
  do
  {
    if ( !v8 )
      v8 = *(_QWORD *)(v9 + 8);
    if ( v9 != v8 )
    {
      v10 = v8 - 32;
      v8 = *(_QWORD *)(v8 + 8);
      v50 = v10;
      if ( v10 )
        continue;
    }
    return 3221225524LL;
  }
  while ( *(_DWORD *)(v10 + 68) != 3 || *(_QWORD *)(v10 + 88) != BugCheckParameter3 );
  v11 = 0LL;
  v12 = *(_QWORD *)(BugCheckParameter3 + 216);
  if ( BugCheckParameter3 + 208 != v12 )
    v11 = v12 - 32;
  v51 = v11;
  if ( !v11 || *(_DWORD *)(v11 + 68) != 2 )
    return 3221225524LL;
  v13 = (__int64 *)(BugCheckParameter3 + 32);
  if ( *(_QWORD *)(BugCheckParameter3 + 288) == a2 )
  {
    v14 = *(_DWORD *)(BugCheckParameter3 + 280);
    v15 = *(_DWORD *)(BugCheckParameter3 + 284);
    v55 = v14;
  }
  else
  {
    v36 = *v13;
    v37 = *(unsigned int *)(BugCheckParameter3 + 40);
    v47[0] = -1;
    v47[1] = 0;
    if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v36, v37, v47);
    else
      CellFlat = HvpGetCellPaged(v36, v37, v47);
    if ( !CellFlat )
      return 3221225626LL;
    v39 = *v13;
    v14 = *(_DWORD *)(CellFlat + 36);
    v15 = *(_DWORD *)(CellFlat + 40);
    v55 = v14;
    if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v39, (__int64)v47);
    else
      HvpReleaseCellPaged(v39, v47);
  }
  if ( !v14 )
    goto LABEL_27;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 8LL * v14, 0x37344D43u);
  if ( !Pool2 )
    return 3221225626LL;
  v16 = *v13;
  if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v16, v15, v46);
  else
    CellPaged = HvpGetCellPaged(v16, v15, v46);
  v19 = CellPaged;
  if ( !CellPaged )
  {
LABEL_60:
    SecurityDescriptorNode = -1073741670;
    goto LABEL_69;
  }
  while ( v3 < v55 )
  {
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v18);
    v21 = v3;
    Pool2[v3] = UnitOfWork;
    if ( !UnitOfWork )
      goto LABEL_60;
    CmpTransEnlistUowInKcb(UnitOfWork, BugCheckParameter3);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)Pool2[v3], v53);
    if ( SecurityDescriptorNode < 0 )
      goto LABEL_69;
    if ( !(unsigned __int8)CmpLockIXLockIntent(BugCheckParameter3 + 248, Pool2[v3])
      || !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 264, Pool2[v3], 1LL) )
    {
      SecurityDescriptorNode = -1072103423;
      goto LABEL_69;
    }
    ++v3;
    *(_DWORD *)(Pool2[v21] + 68LL) = 6;
    v18 = Pool2[v21];
    *(_DWORD *)(v18 + 88) = *(_DWORD *)(v19 + 4 * v21);
  }
  v23 = *v13;
  if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v23, (__int64)v46);
  else
    HvpReleaseCellPaged(v23, v46);
LABEL_27:
  v24 = CmpAllocateUnitOfWork(v12);
  if ( !v24 )
  {
    SecurityDescriptorNode = -1073741670;
    v19 = 0LL;
    goto LABEL_44;
  }
  HvLockHiveFlusherShared(*v13);
  CmLockHiveSecurityExclusive(*v13);
  CmpTransEnlistUowInKcb((_QWORD *)v24, BugCheckParameter3);
  SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)v24, v53);
  if ( SecurityDescriptorNode < 0 )
  {
    v25 = v45;
LABEL_37:
    if ( v25 != -1 )
      CmpDereferenceSecurityNode(*v13, v25);
    v19 = 0LL;
    if ( v49 )
    {
      v34 = *v13;
      if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v34, (__int64)v48);
      else
        HvpReleaseCellPaged(v34, v48);
    }
    goto LABEL_42;
  }
  if ( (unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 248, v24, 0LL)
    && (unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 264, v24, 1LL) )
  {
    *(_QWORD *)(v24 + 88) = 0LL;
    *(_DWORD *)(v24 + 68) = 9;
    v25 = -1;
    *(_DWORD *)(v24 + 96) = -1;
    *(_BYTE *)(v24 + 100) = 0;
    v26 = *v13;
    v27 = *(unsigned int *)(BugCheckParameter3 + 40);
    if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
      v28 = HvpGetCellFlat(v26, v27, v48);
    else
      v28 = HvpGetCellPaged(v26, v27, v48);
    v29 = *(unsigned int *)(BugCheckParameter3 + 40);
    v30 = *v13;
    v49 = v28;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v30, v29, v28, 1, Src, 1, (unsigned int *)&v52);
    if ( SecurityDescriptorNode < 0 )
    {
      v25 = v52;
    }
    else
    {
      if ( !CmpFindSecurityCellCacheIndex(*v13, v52, &v44) )
        KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v52);
      v31 = *(_DWORD **)(*(_QWORD *)(*v13 + 1888) + 16LL * v44 + 8);
      *(_QWORD *)(v24 + 88) = v31;
      *(_DWORD *)(v24 + 96) = *v31;
      v32 = v50;
      *(_BYTE *)(v24 + 100) = 1;
      v24 = 0LL;
      *(_DWORD *)(v32 + 68) = 13;
      *(_DWORD *)(v51 + 68) = 15;
      if ( *(_QWORD *)(BugCheckParameter3 + 288) )
      {
        v40 = *(_DWORD *)(BugCheckParameter3 + 284);
        if ( v40 != -1 )
          HvFreeCell(*v13, v40);
      }
      v33 = v53;
      *(_DWORD *)(BugCheckParameter3 + 280) = 0;
      *(_DWORD *)(BugCheckParameter3 + 284) = -1;
      *(_QWORD *)(BugCheckParameter3 + 288) = v33;
    }
    goto LABEL_37;
  }
  SecurityDescriptorNode = -1072103423;
  v19 = 0LL;
LABEL_42:
  CmUnlockHiveSecurity(*v13);
  HvUnlockHiveFlusherShared(*v13);
  if ( v24 )
  {
    CmpRundownUnitOfWork((_QWORD *)v24);
    ExFreePoolWithTag((PVOID)v24, 0x77554D43u);
  }
LABEL_44:
  if ( Pool2 )
  {
    if ( SecurityDescriptorNode >= 0 )
    {
LABEL_77:
      ExFreePoolWithTag(Pool2, 0x37344D43u);
      goto LABEL_45;
    }
LABEL_69:
    if ( v55 )
    {
      v41 = (PVOID *)Pool2;
      v42 = v55;
      do
      {
        if ( *v41 )
        {
          CmpRundownUnitOfWork(*v41);
          ExFreePoolWithTag(*v41, 0x77554D43u);
        }
        ++v41;
        --v42;
      }
      while ( v42 );
    }
    goto LABEL_77;
  }
LABEL_45:
  if ( v19 )
  {
    v43 = *v13;
    if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v43, (__int64)v46);
    else
      HvpReleaseCellPaged(v43, v46);
  }
  return (unsigned int)SecurityDescriptorNode;
}
