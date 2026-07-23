/*
 * XREFs of CmpAddSubKeyToList @ 0x140882878
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpAddSubKeyEx @ 0x140883094 (CmpAddSubKeyEx.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A144F0 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 *     CmpFree @ 0x140882B20 (CmpFree.c)
 *     CmpAllocate @ 0x140882F70 (CmpAllocate.c)
 *     CmpSelectLeaf @ 0x14088367C (CmpSelectLeaf.c)
 *     CmpAddToLeaf @ 0x140887458 (CmpAddToLeaf.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddSubKeyToList(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned int a3)
{
  __int64 CellFlat; // rax
  __int64 v7; // rsi
  __int16 v8; // cx
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD); // rax
  unsigned int v10; // r15d
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // r14
  unsigned int v14; // edi
  _WORD *CellPaged; // rax
  _WORD *v16; // rsi
  int v17; // edi
  _DWORD *v18; // rcx
  unsigned int *v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int128 v23; // [rsp+40h] [rbp-10h]
  char v24; // [rsp+90h] [rbp+40h]
  ULONG_PTR v26; // [rsp+A8h] [rbp+58h] BYREF

  v21 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  HvpGetCellContextInitialize(&v26);
  HvpGetCellContextInitialize(&v21);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, &v26);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a3, &v26);
  v7 = CellFlat;
  v8 = *(_WORD *)(CellFlat + 72);
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(BugCheckParameter3 + 24);
    v10 = (unsigned __int16)(2 * v8);
    LOWORD(v23) = 2 * v8;
    WORD1(v23) = 2 * v8;
    v11 = (unsigned __int16)(2 * v8);
    if ( v9 == CmpAllocate )
      v12 = CmpAllocate(v11, 0LL, 540560707LL);
    else
      v12 = guard_dispatch_icall_no_overrides(v11, 0LL);
    *((_QWORD *)&v23 + 1) = v12;
    v13 = (void *)v12;
    if ( !v12 )
    {
      v17 = -1073741670;
      if ( !v7 )
        return (unsigned int)v17;
      v19 = (unsigned int *)&v26;
      goto LABEL_21;
    }
    v24 = 1;
    CmpCopyCompressedName(v12, v10, v7 + 76, *(unsigned __int16 *)(v7 + 72));
  }
  else
  {
    v13 = (void *)(CellFlat + 76);
    v24 = 0;
    *((_QWORD *)&v23 + 1) = CellFlat + 76;
    LOWORD(v10) = v8;
    LOWORD(v23) = v8;
    WORD1(v23) = v8;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v26);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
  v14 = *a2;
  LODWORD(v26) = v14;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v14, &v21);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v14, &v21);
  v22 = 0LL;
  v16 = CellPaged;
  if ( *CellPaged == 26994 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v21);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v21);
    v16 = 0LL;
    v17 = CmpSelectLeaf(BugCheckParameter3, (__int64)&v22, (__int64)&v26);
    if ( v17 < 0 )
      goto LABEL_16;
    v17 = CmpAddToLeaf(BugCheckParameter3, (unsigned int)v26, (__int64)&v26);
    if ( v17 < 0 )
      goto LABEL_16;
    v18 = (_DWORD *)v22;
  }
  else
  {
    v17 = CmpAddToLeaf(BugCheckParameter3, v14, (__int64)&v26);
    if ( v17 < 0 )
      goto LABEL_16;
    v18 = a2;
  }
  v17 = 0;
  *v18 = v26;
LABEL_16:
  if ( v24 )
  {
    if ( *(__int64 (__fastcall **)(PVOID))(BugCheckParameter3 + 32) == CmpFree )
      CmpFree(v13);
    else
      guard_dispatch_icall_no_overrides(v13, (unsigned __int16)v10);
  }
  if ( v16 )
  {
    v19 = (unsigned int *)&v21;
LABEL_21:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v19);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v19);
  }
  return (unsigned int)v17;
}
