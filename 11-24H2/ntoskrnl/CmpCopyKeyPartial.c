/*
 * XREFs of CmpCopyKeyPartial @ 0x140884DC0
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A144F0 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140884764 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140884794 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpAddValueToListEx @ 0x14088522C (CmpAddValueToListEx.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     CmpCopyCell @ 0x140885DE0 (CmpCopyCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        int a4,
        __int16 a5,
        ULONG_PTR BugCheckParameter4,
        int a7,
        unsigned int *a8)
{
  __int64 v10; // rdi
  __int64 CellFlat; // rax
  __int64 v12; // r15
  int SecurityDescriptorNode; // r14d
  __int16 v14; // r14
  unsigned int v15; // r12d
  __int64 CellPaged; // rax
  __int16 v17; // ax
  unsigned int v18; // r14d
  ULONG_PTR v19; // rdx
  __int64 v20; // rax
  unsigned int i; // r15d
  unsigned int v22; // r15d
  unsigned int v23; // r13d
  __int64 v25; // rax
  unsigned int *v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-41h]
  unsigned int v30[2]; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v31[2]; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v32[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v33[2]; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v35[12]; // [rsp+74h] [rbp-15h] BYREF
  __int64 v36; // [rsp+80h] [rbp-9h]
  int v37; // [rsp+88h] [rbp-1h]
  int v38; // [rsp+D0h] [rbp+47h]

  *(_QWORD *)v35 = 0LL;
  v29 = 0;
  LODWORD(BugCheckParameter4) = -1;
  v38 = -1;
  v28 = -1LL;
  v10 = 0LL;
  v34 = 0;
  v30[0] = -1;
  v30[1] = 0;
  v31[0] = -1;
  v31[1] = 0;
  v36 = 0LL;
  v32[0] = -1;
  v32[1] = 0;
  v33[0] = -1;
  v33[1] = 0;
  *(_DWORD *)&v35[8] = -1;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, v30);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, v30);
  v12 = CellFlat;
  v37 = *(_DWORD *)(CellFlat + 44);
  SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, (__int64)&BugCheckParameter4);
  if ( SecurityDescriptorNode < 0 )
  {
    v15 = BugCheckParameter4;
    goto LABEL_48;
  }
  v14 = a5;
  if ( (a5 & 2) != 0 )
  {
    a7 = *(unsigned __int16 *)(v12 + 74);
    if ( a7 )
    {
      SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, (__int64)&v28);
      if ( SecurityDescriptorNode < 0 )
      {
        v15 = BugCheckParameter4;
        v23 = v28;
        goto LABEL_49;
      }
      v14 = a5;
      v38 = v28;
    }
  }
  else
  {
    a7 = 0;
  }
  v15 = BugCheckParameter4;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(a3, (unsigned int)BugCheckParameter4, v31);
  else
    CellPaged = HvpGetCellPaged(a3, BugCheckParameter4, v31);
  v10 = CellPaged;
  *(_DWORD *)(CellPaged + 20) = 0;
  *(_DWORD *)(CellPaged + 24) = 0;
  *(_DWORD *)(CellPaged + 48) = v38;
  *(_WORD *)(CellPaged + 74) = a7;
  *(_DWORD *)(CellPaged + 44) = -1;
  *(_DWORD *)(CellPaged + 28) = -1;
  *(_DWORD *)(CellPaged + 32) = -1;
  *(_DWORD *)(CellPaged + 16) = a4;
  *(_BYTE *)(CellPaged + 12) = 0;
  if ( (v14 & 0x100) != 0 )
    *(_BYTE *)(CellPaged + 13) &= 0xFCu;
  if ( (v14 & 0x80u) != 0 )
    *(_BYTE *)(CellPaged + 13) |= 0x80u;
  v17 = *(_WORD *)(v12 + 2) & 0x30;
  *(_WORD *)(v10 + 2) = v17;
  if ( (v14 & 0x20) != 0 )
  {
    v17 = *(_WORD *)(v12 + 2) & 0xFFBF;
    *(_WORD *)(v10 + 2) = v17;
  }
  if ( a4 == -1 )
    *(_WORD *)(v10 + 2) = v17 | 0xC;
  if ( (v14 & 0x10) == 0 )
  {
    CmpLockTwoSecurityCachesExclusiveShared(a3, BugCheckParameter3);
    CmpFindSecurityCellCacheIndex(BugCheckParameter3, v37, &v34);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a3,
                               v15,
                               v10,
                               v15 >> 31,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v34 + 8) + 32LL),
                               0,
                               (unsigned int *)(v10 + 44));
    CmpUnlockTwoSecurityCaches(a3, BugCheckParameter3);
    if ( SecurityDescriptorNode < 0 )
    {
LABEL_48:
      v23 = v38;
LABEL_49:
      v22 = HIDWORD(v28);
      goto LABEL_31;
    }
  }
  if ( (*(_BYTE *)(v12 + 2) & 0x40) != 0 )
    v18 = 0;
  else
    v18 = *(_DWORD *)(v12 + 36);
  *(_DWORD *)(v10 + 36) = 0;
  a7 = v18;
  *(_DWORD *)(v10 + 40) = -1;
  if ( (a5 & 4) != 0 && v18 )
  {
    v19 = *(unsigned int *)(v12 + 40);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v20 = HvpGetCellFlat(BugCheckParameter3, v19, v32);
    else
      v20 = HvpGetCellPaged(BugCheckParameter3, v19, v32);
    v36 = v20;
    for ( i = 0; ; ++i )
    {
      if ( i >= v18 )
      {
        *(_QWORD *)(v10 + 36) = *(_QWORD *)&v35[4];
        goto LABEL_30;
      }
      SecurityDescriptorNode = CmpCopyValue(BugCheckParameter3, (__int64)v35);
      if ( SecurityDescriptorNode < 0 )
        break;
      SecurityDescriptorNode = CmpAddValueToListEx(a3, (__int64)&v35[4], a7);
      if ( SecurityDescriptorNode < 0 )
        break;
      v18 = a7;
    }
    v22 = *(_DWORD *)&v35[8];
    v23 = v38;
    v29 = *(_DWORD *)&v35[4];
  }
  else
  {
LABEL_30:
    v22 = -1;
    v29 = 0;
    v23 = -1;
    SecurityDescriptorNode = 0;
    *a8 = v15;
    v15 = -1;
  }
LABEL_31:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v30);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v30);
  if ( v10 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, v31);
    else
      HvpReleaseCellPaged(a3, v31);
  }
  if ( v36 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v32);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v32);
  }
  if ( v22 != -1 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      v25 = HvpGetCellFlat(a3, v22, v33);
    else
      v25 = HvpGetCellPaged(a3, v22, v33);
    v26 = (unsigned int *)v25;
    if ( v29 )
    {
      v27 = v29;
      do
      {
        HvFreeCell(a3, *v26++);
        --v27;
      }
      while ( v27 );
    }
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, v33);
    else
      HvpReleaseCellPaged(a3, v33);
    HvFreeCell(a3, v22);
  }
  if ( v23 != -1 )
    HvFreeCell(a3, v23);
  if ( v15 != -1 )
    HvFreeCell(a3, v15);
  return (unsigned int)SecurityDescriptorNode;
}
