/*
 * XREFs of CmpAddSubKeyToList @ 0x14087E9C8
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpAddSubKeyEx @ 0x14087F1E4 (CmpAddSubKeyEx.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A1F3F0 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpCopyCompressedName @ 0x14087E8A0 (CmpCopyCompressedName.c)
 *     CmpFree @ 0x14087EC70 (CmpFree.c)
 *     CmpAllocate @ 0x14087F0C0 (CmpAllocate.c)
 *     CmpSelectLeaf @ 0x14087F7CC (CmpSelectLeaf.c)
 *     CmpAddToLeaf @ 0x1408835A8 (CmpAddToLeaf.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddSubKeyToList(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned int a3)
{
  __int64 CellFlat; // rax
  __int64 v7; // r9
  __int64 v8; // rsi
  __int16 v9; // cx
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rax
  unsigned int v11; // r15d
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  void *v14; // r14
  unsigned int v15; // edi
  _WORD *CellPaged; // rax
  _WORD *v17; // rsi
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rcx
  unsigned int *v22; // rdx
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  __int128 v26; // [rsp+40h] [rbp-10h]
  char v27; // [rsp+90h] [rbp+40h]
  ULONG_PTR v29; // [rsp+A8h] [rbp+58h] BYREF

  v24 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  HvpGetCellContextInitialize(&v29);
  HvpGetCellContextInitialize(&v24);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, &v29);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a3, &v29);
  v8 = CellFlat;
  v9 = *(_WORD *)(CellFlat + 72);
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
  {
    v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(BugCheckParameter3 + 24);
    v11 = (unsigned __int16)(2 * v9);
    LOWORD(v26) = 2 * v9;
    WORD1(v26) = 2 * v9;
    v12 = (unsigned __int16)(2 * v9);
    if ( v10 == CmpAllocate )
      v13 = CmpAllocate(v12, 0LL, 540560707LL);
    else
      v13 = guard_dispatch_icall_no_overrides(v12, 0LL, 540560707LL, v7);
    *((_QWORD *)&v26 + 1) = v13;
    v14 = (void *)v13;
    if ( !v13 )
    {
      v18 = -1073741670;
      if ( !v8 )
        return (unsigned int)v18;
      v22 = (unsigned int *)&v29;
      goto LABEL_21;
    }
    v27 = 1;
    CmpCopyCompressedName(v13, v11, v8 + 76, *(unsigned __int16 *)(v8 + 72));
  }
  else
  {
    v14 = (void *)(CellFlat + 76);
    v27 = 0;
    *((_QWORD *)&v26 + 1) = CellFlat + 76;
    LOWORD(v11) = v9;
    LOWORD(v26) = v9;
    WORD1(v26) = v9;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v29);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
  v15 = *a2;
  LODWORD(v29) = v15;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v15, &v24);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v15, &v24);
  v25 = 0LL;
  v17 = CellPaged;
  if ( *CellPaged == 26994 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v24);
    v17 = 0LL;
    v18 = CmpSelectLeaf(BugCheckParameter3, (__int64)&v25, (__int64)&v29);
    if ( v18 < 0 )
      goto LABEL_16;
    v18 = CmpAddToLeaf(BugCheckParameter3, (unsigned int)v29, (__int64)&v29);
    if ( v18 < 0 )
      goto LABEL_16;
    v21 = (_DWORD *)v25;
  }
  else
  {
    v18 = CmpAddToLeaf(BugCheckParameter3, v15, (__int64)&v29);
    if ( v18 < 0 )
      goto LABEL_16;
    v21 = a2;
  }
  v18 = 0;
  *v21 = v29;
LABEL_16:
  if ( v27 )
  {
    if ( *(__int64 (__fastcall **)(PVOID))(BugCheckParameter3 + 32) == CmpFree )
      CmpFree(v14);
    else
      guard_dispatch_icall_no_overrides(v14, (unsigned __int16)v11, v19, v20);
  }
  if ( v17 )
  {
    v22 = (unsigned int *)&v24;
LABEL_21:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v22);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v22);
  }
  return (unsigned int)v18;
}
