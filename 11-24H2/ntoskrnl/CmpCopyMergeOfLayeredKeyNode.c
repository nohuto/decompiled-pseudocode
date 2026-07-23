/*
 * XREFs of CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4
 * Callers:
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140909474 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmLockHiveSecurityExclusive @ 0x14088427C (CmLockHiveSecurityExclusive.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCopyCell @ 0x140885DE0 (CmpCopyCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14090A158 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14090A984 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCopyMergeOfLayeredKeyNode(
        __int16 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // r15d
  __int16 v13; // bx
  __int64 v14; // r13
  __int64 i; // rdx
  __int64 EntryAtLayerHeight; // rax
  int v17; // r9d
  unsigned int v18; // edi
  int v19; // eax
  char *v20; // rbx
  int SecurityDescriptorNode; // r14d
  __int16 v22; // cx
  ULONG_PTR v23; // r13
  __int64 CellFlat; // rax
  __int64 v25; // rdi
  void *Src; // rax
  unsigned int v27; // edi
  __int16 v28; // r12
  __int64 v30; // rax
  int v31; // r10d
  int EffectiveKeyNodeSemantics; // eax
  __int64 v33; // rdx
  ULONG_PTR v34; // rcx
  char v35; // r9
  __int64 v36; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+48h] [rbp-28h] BYREF
  __int64 v38; // [rsp+50h] [rbp-20h] BYREF
  void *v39; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR v41; // [rsp+68h] [rbp-8h]
  ULONG_PTR v42; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp+48h]
  ULONG_PTR BugCheckParameter4; // [rsp+C8h] [rbp+58h] BYREF

  BugCheckParameter3 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v37 = 0LL;
  v38 = 0LL;
  LODWORD(v42) = -1;
  v39 = 0LL;
  HvpGetCellContextInitialize(&v38);
  HvpGetCellContextInitialize(&v37);
  v12 = a5;
  LODWORD(v36) = v11;
  if ( a5 == 2 )
  {
    if ( a3 == v11 )
      v12 = v10;
    else
      v12 = a3 >> 31;
  }
  v13 = *a1;
  v14 = v10;
  for ( i = (unsigned __int16)*a1; (i & 0x8000u) == 0LL; LOWORD(i) = i - 1 )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    if ( *(_DWORD *)(EntryAtLayerHeight + 8) != v17 )
    {
      v14 = EntryAtLayerHeight;
      break;
    }
  }
  CmpGetSecurityCellForKeyNodeStack(a1, &BugCheckParameter3, &BugCheckParameter4);
  v41 = 0LL;
  v43 = -1;
  LOWORD(a5) = 0;
  if ( (a4 & 1) != 0 )
  {
    while ( v13 >= 0 )
    {
      v30 = CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v13);
      if ( *(_DWORD *)(v30 + 8) != v31 )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*(_QWORD *)v30);
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        if ( *(char *)(v33 + 13) >= v35 )
        {
          v43 = *(_DWORD *)(v33 + 48);
          LOWORD(a5) = *(_WORD *)(v33 + 74);
          v41 = v34;
          break;
        }
        if ( EffectiveKeyNodeSemantics )
          break;
      }
      --v13;
    }
  }
  v18 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 16) + 72LL) + 76;
  v19 = HvAllocateCell(a2, v18, v12, (unsigned int *)&v42, &v39, (__int64)&v38);
  v20 = (char *)v39;
  SecurityDescriptorNode = v19;
  if ( v19 < 0 )
  {
    v27 = v42;
  }
  else
  {
    memmove(v39, *(const void **)(v14 + 16), v18);
    v20[12] = 0;
    v20[13] = v20[13] & 0x7C | 0x80;
    *((_DWORD *)v20 + 4) = a3;
    *(_QWORD *)(v20 + 20) = 0LL;
    *((_DWORD *)v20 + 7) = -1;
    *((_DWORD *)v20 + 8) = -1;
    *((_DWORD *)v20 + 9) = 0;
    *((_DWORD *)v20 + 10) = -1;
    *((_DWORD *)v20 + 11) = -1;
    *((_DWORD *)v20 + 12) = -1;
    *((_WORD *)v20 + 26) = 0;
    *((_QWORD *)v20 + 7) = 0LL;
    *((_QWORD *)v20 + 8) = 0LL;
    *((_WORD *)v20 + 37) = 0;
    v22 = *(_WORD *)(*(_QWORD *)(v14 + 16) + 2LL) & 0xFFBF;
    *((_WORD *)v20 + 1) = v22;
    if ( a3 == -1 )
      *((_WORD *)v20 + 1) = v22 | 0xC;
    v23 = BugCheckParameter3;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v37);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, &v37);
    v25 = CellFlat;
    CmLockHiveSecurityExclusive(a2);
    Src = (void *)(v25 + 20);
    v27 = v42;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a2,
                               (unsigned int)v42,
                               (__int64)v20,
                               (unsigned int)v42 >> 31,
                               Src,
                               0,
                               (unsigned int *)v20 + 11);
    CmUnlockHiveSecurity(a2);
    if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v23, (__int64)&v37);
    else
      HvpReleaseCellPaged(v23, (unsigned int *)&v37);
    if ( SecurityDescriptorNode >= 0 )
    {
      v28 = a5;
      if ( !(_WORD)a5 )
      {
LABEL_16:
        SecurityDescriptorNode = 0;
        *a6 = v27;
        v27 = -1;
        goto LABEL_17;
      }
      SecurityDescriptorNode = CmpCopyCell(v41, v43, a2, v12, &v36);
      if ( SecurityDescriptorNode >= 0 )
      {
        *((_DWORD *)v20 + 12) = v36;
        *((_WORD *)v20 + 37) = v28;
        goto LABEL_16;
      }
    }
  }
LABEL_17:
  if ( v20 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, (__int64)&v38);
    else
      HvpReleaseCellPaged(a2, (unsigned int *)&v38);
  }
  if ( v27 != -1 )
    CmpFreeKeyByCell(a2, v27, 0);
  return (unsigned int)SecurityDescriptorNode;
}
