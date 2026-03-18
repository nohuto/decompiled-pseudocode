/*
 * XREFs of CmpUndoDeleteKeyForTrans @ 0x140977BB4
 * Callers:
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140429CE0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14047F774 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404838EC (CmpTransEnlistUowInKcb.c)
 *     CmpDereferenceSecurityNode @ 0x1404A3C08 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpAllocateUnitOfWork @ 0x14086901C (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140869074 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140869120 (CmpLockIXLockExclusive.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     CmpRundownUnitOfWork @ 0x140885C90 (CmpRundownUnitOfWork.c)
 *     CmLockHiveSecurityExclusive @ 0x14088709C (CmLockHiveSecurityExclusive.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140BA9AB8 (CmUnlockHiveSecurity.c)
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
  __int64 v18; // rdi
  _QWORD *UnitOfWork; // rax
  __int64 v20; // r14
  int SecurityDescriptorNode; // ebx
  __int64 v22; // rcx
  __int64 v23; // r14
  unsigned int v24; // edi
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // rdx
  __int64 v27; // rax
  ULONG_PTR v28; // rdx
  ULONG_PTR v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  ULONG_PTR v35; // rcx
  ULONG_PTR v36; // rdx
  __int64 CellFlat; // rax
  __int64 v38; // rcx
  unsigned int v39; // edx
  PVOID *v40; // rsi
  __int64 v41; // r14
  __int64 v42; // rcx
  unsigned int v43; // [rsp+40h] [rbp-29h] BYREF
  int v44; // [rsp+44h] [rbp-25h]
  __int64 v45; // [rsp+48h] [rbp-21h] BYREF
  __int64 v46; // [rsp+50h] [rbp-19h] BYREF
  __int64 v47; // [rsp+58h] [rbp-11h] BYREF
  __int64 v48; // [rsp+60h] [rbp-9h]
  __int64 v49; // [rsp+68h] [rbp-1h]
  __int64 v50; // [rsp+70h] [rbp+7h]
  ULONG_PTR v51; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v52; // [rsp+D8h] [rbp+6Fh]
  void *Src; // [rsp+E0h] [rbp+77h]
  unsigned int v54; // [rsp+E8h] [rbp+7Fh]

  Src = a3;
  v52 = a2;
  v3 = 0;
  v45 = 0xFFFFFFFFLL;
  v44 = -1;
  v5 = *(_QWORD *)(BugCheckParameter3 + 72);
  LODWORD(v51) = -1;
  Pool2 = 0LL;
  v8 = 0LL;
  v48 = 0LL;
  v9 = v5 + 208;
  v47 = 0xFFFFFFFFLL;
  v43 = 0;
  do
  {
    if ( !v8 )
      v8 = *(_QWORD *)(v9 + 8);
    if ( v9 != v8 )
    {
      v10 = v8 - 32;
      v8 = *(_QWORD *)(v8 + 8);
      v49 = v10;
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
  v50 = v11;
  if ( !v11 || *(_DWORD *)(v11 + 68) != 2 )
    return 3221225524LL;
  v13 = (__int64 *)(BugCheckParameter3 + 32);
  if ( *(_QWORD *)(BugCheckParameter3 + 288) == a2 )
  {
    v14 = *(_DWORD *)(BugCheckParameter3 + 280);
    v15 = *(_DWORD *)(BugCheckParameter3 + 284);
    v54 = v14;
  }
  else
  {
    v35 = *v13;
    v36 = *(unsigned int *)(BugCheckParameter3 + 40);
    v46 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v35, v36, &v46);
    else
      CellFlat = HvpGetCellPaged(v35, v36, &v46);
    if ( !CellFlat )
      return 3221225626LL;
    v38 = *v13;
    v14 = *(_DWORD *)(CellFlat + 36);
    v15 = *(_DWORD *)(CellFlat + 40);
    v54 = v14;
    if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v38, &v46);
    else
      HvpReleaseCellPaged(v38, (unsigned int *)&v46);
  }
  if ( !v14 )
    goto LABEL_27;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v16 = *v13;
  if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v16, v15, &v45);
  else
    CellPaged = HvpGetCellPaged(v16, v15, &v45);
  v18 = CellPaged;
  if ( !CellPaged )
  {
LABEL_60:
    SecurityDescriptorNode = -1073741670;
    goto LABEL_69;
  }
  while ( v3 < v54 )
  {
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
    v20 = v3;
    Pool2[v3] = UnitOfWork;
    if ( !UnitOfWork )
      goto LABEL_60;
    CmpTransEnlistUowInKcb(UnitOfWork, BugCheckParameter3);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)Pool2[v3], v52);
    if ( SecurityDescriptorNode < 0 )
      goto LABEL_69;
    if ( !CmpLockIXLockIntent((unsigned int *)(BugCheckParameter3 + 248), Pool2[v3])
      || !CmpLockIXLockExclusive(BugCheckParameter3 + 264, Pool2[v3], 1) )
    {
      SecurityDescriptorNode = -1072103423;
      goto LABEL_69;
    }
    ++v3;
    *(_DWORD *)(Pool2[v20] + 68LL) = 6;
    *(_DWORD *)(Pool2[v20] + 88LL) = *(_DWORD *)(v18 + 4 * v20);
  }
  v22 = *v13;
  if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v22, &v45);
  else
    HvpReleaseCellPaged(v22, (unsigned int *)&v45);
LABEL_27:
  v23 = CmpAllocateUnitOfWork();
  if ( !v23 )
  {
    SecurityDescriptorNode = -1073741670;
    v18 = 0LL;
    goto LABEL_44;
  }
  HvLockHiveFlusherShared(*v13);
  CmLockHiveSecurityExclusive(*v13);
  CmpTransEnlistUowInKcb((_QWORD *)v23, BugCheckParameter3);
  SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)v23, v52);
  if ( SecurityDescriptorNode < 0 )
  {
    v24 = v44;
LABEL_37:
    if ( v24 != -1 )
      CmpDereferenceSecurityNode(*v13, v24);
    v18 = 0LL;
    if ( v48 )
    {
      v33 = *v13;
      if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v33, &v47);
      else
        HvpReleaseCellPaged(v33, (unsigned int *)&v47);
    }
    goto LABEL_42;
  }
  if ( CmpLockIXLockExclusive(BugCheckParameter3 + 248, v23, 0)
    && CmpLockIXLockExclusive(BugCheckParameter3 + 264, v23, 1) )
  {
    *(_QWORD *)(v23 + 88) = 0LL;
    *(_DWORD *)(v23 + 68) = 9;
    v24 = -1;
    *(_DWORD *)(v23 + 96) = -1;
    *(_BYTE *)(v23 + 100) = 0;
    v25 = *v13;
    v26 = *(unsigned int *)(BugCheckParameter3 + 40);
    if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
      v27 = HvpGetCellFlat(v25, v26, &v47);
    else
      v27 = HvpGetCellPaged(v25, v26, &v47);
    v28 = *(unsigned int *)(BugCheckParameter3 + 40);
    v29 = *v13;
    v48 = v27;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v29, v28, v27, 1u, Src, 1, (unsigned int *)&v51);
    if ( SecurityDescriptorNode < 0 )
    {
      v24 = v51;
    }
    else
    {
      if ( !CmpFindSecurityCellCacheIndex(*v13, v51, &v43) )
        KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v51);
      v30 = *(_DWORD **)(*(_QWORD *)(*v13 + 1888) + 16LL * v43 + 8);
      *(_QWORD *)(v23 + 88) = v30;
      *(_DWORD *)(v23 + 96) = *v30;
      v31 = v49;
      *(_BYTE *)(v23 + 100) = 1;
      v23 = 0LL;
      *(_DWORD *)(v31 + 68) = 13;
      *(_DWORD *)(v50 + 68) = 15;
      if ( *(_QWORD *)(BugCheckParameter3 + 288) )
      {
        v39 = *(_DWORD *)(BugCheckParameter3 + 284);
        if ( v39 != -1 )
          HvFreeCell(*v13, v39);
      }
      v32 = v52;
      *(_DWORD *)(BugCheckParameter3 + 280) = 0;
      *(_DWORD *)(BugCheckParameter3 + 284) = -1;
      *(_QWORD *)(BugCheckParameter3 + 288) = v32;
    }
    goto LABEL_37;
  }
  SecurityDescriptorNode = -1072103423;
  v18 = 0LL;
LABEL_42:
  CmUnlockHiveSecurity(*v13);
  HvUnlockHiveFlusherShared(*v13);
  if ( v23 )
  {
    CmpRundownUnitOfWork((_QWORD *)v23);
    ExFreePoolWithTag((PVOID)v23, 0x77554D43u);
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
    if ( v54 )
    {
      v40 = (PVOID *)Pool2;
      v41 = v54;
      do
      {
        if ( *v40 )
        {
          CmpRundownUnitOfWork(*v40);
          ExFreePoolWithTag(*v40, 0x77554D43u);
        }
        ++v40;
        --v41;
      }
      while ( v41 );
    }
    goto LABEL_77;
  }
LABEL_45:
  if ( v18 )
  {
    v42 = *v13;
    if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v42, &v45);
    else
      HvpReleaseCellPaged(v42, (unsigned int *)&v45);
  }
  return (unsigned int)SecurityDescriptorNode;
}
