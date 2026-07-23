/*
 * XREFs of CmpCopySyncTree2 @ 0x1408877A4
 * Callers:
 *     CmpCopySyncTree @ 0x1407E2380 (CmpCopySyncTree.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpMergeKeyValues @ 0x1407E24E4 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpAddSubKeyEx @ 0x140883094 (CmpAddSubKeyEx.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     CmpFindSubKeyByNumber @ 0x140888160 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpMarkKeyParentDirty @ 0x140A54E68 (CmpMarkKeyParentDirty.c)
 *     CmpInitializeKeyNameString @ 0x140A6FC54 (CmpInitializeKeyNameString.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AA89B0 (CmpSyncSubKeysAfterDelete.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCopySyncTree2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        __int16 a6,
        int a7)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned int *v11; // r12
  ULONG_PTR v12; // rdx
  __int64 CellFlat; // rax
  int SubKeyByNumber; // edi
  unsigned int v15; // esi
  char v16; // di
  __int64 v17; // rax
  char v18; // al
  int v19; // ecx
  char v20; // dl
  unsigned int v21; // r13d
  ULONG_PTR v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  unsigned int v27; // eax
  __int64 v28; // rsi
  char v29; // dl
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // edx
  _BYTE *v35; // r13
  int v36; // esi
  __int64 v37; // rdi
  bool v38; // zf
  __int64 v39; // rax
  int v40; // edx
  size_t v41; // r8
  int v42; // eax
  ULONG_PTR CellPaged; // rax
  ULONG_PTR v44; // rdx
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rdx
  unsigned int v48; // esi
  void *Pool2; // rdi
  unsigned int v50; // eax
  __int64 v51; // rcx
  ULONG_PTR v52; // rdx
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rdx
  int v58; // eax
  ULONG_PTR v59; // rdx
  __int64 v60; // rax
  unsigned int v61; // ecx
  int v62[2]; // [rsp+28h] [rbp-B1h]
  ULONG_PTR v63; // [rsp+30h] [rbp-A9h]
  __int16 v64; // [rsp+38h] [rbp-A1h]
  int v65; // [rsp+4Ch] [rbp-8Dh]
  _BYTE *Src; // [rsp+50h] [rbp-89h]
  ULONG_PTR v67; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v68[2]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v69[2]; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v70[2]; // [rsp+70h] [rbp-69h] BYREF
  int v71; // [rsp+78h] [rbp-61h]
  int v72; // [rsp+7Ch] [rbp-5Dh]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-59h]
  unsigned int v74[2]; // [rsp+88h] [rbp-51h] BYREF
  unsigned int v75[2]; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v76; // [rsp+98h] [rbp-41h]
  __int64 v77; // [rsp+A0h] [rbp-39h]
  unsigned int v78[2]; // [rsp+A8h] [rbp-31h] BYREF
  unsigned int v79[2]; // [rsp+B0h] [rbp-29h] BYREF
  unsigned int v80[2]; // [rsp+B8h] [rbp-21h] BYREF
  int v81; // [rsp+C0h] [rbp-19h]
  int v82; // [rsp+C4h] [rbp-15h]
  PVOID P; // [rsp+C8h] [rbp-11h]
  __int128 v84[4]; // [rsp+D0h] [rbp-9h] BYREF
  char v86; // [rsp+130h] [rbp+57h]
  bool v87; // [rsp+138h] [rbp+5Fh]

  v72 = 0;
  v81 = a6 & 1;
  v8 = a1;
  LODWORD(BugCheckParameter4) = 0;
  LODWORD(v67) = 0;
  v86 = 0;
  v70[0] = -1;
  v70[1] = 0;
  LODWORD(v9) = 0;
  v75[0] = -1;
  v10 = 0LL;
  v75[1] = 0;
  v74[0] = -1;
  v74[1] = 0;
  v68[0] = -1;
  v68[1] = 0;
  v78[0] = -1;
  v78[1] = 0;
  v82 = -1;
  P = 0LL;
  v87 = (unsigned int)(a7 - 1) <= 1;
  v69[0] = -1;
  v69[1] = 0;
  Src = 0LL;
  v76 = 0;
  v65 = -1;
  v71 = 1;
  v84[0] = 0LL;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    P = (PVOID)ExAllocatePool2(0x100uLL, 0x200uLL, 0x6E5A6D43u);
    if ( !P )
      return 3221225626LL;
  }
LABEL_2:
  v11 = (unsigned int *)(v8 + 20LL * (unsigned int)v9);
  v11[2] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 )
      {
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a4, v74);
        else
          HvpReleaseCellPaged(a4, v74);
      }
      v12 = *v11;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(a4, v12, v74);
      else
        CellFlat = HvpGetCellPaged(a4, v12, v74);
      v77 = CellFlat;
      v10 = CellFlat;
      SubKeyByNumber = CmpFindSubKeyByNumber(a4);
      if ( SubKeyByNumber < 0 )
        goto LABEL_123;
      ++v11[2];
      v15 = BugCheckParameter4;
      v16 = v81;
      if ( (_DWORD)BugCheckParameter4 == -1 || !(_BYTE)v81 && (BugCheckParameter4 & 0x80000000) != 0LL )
        break;
      if ( v87 )
      {
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(a4, (unsigned int)BugCheckParameter4, v70);
        else
          CellPaged = HvpGetCellPaged(a4, BugCheckParameter4, v70);
        v28 = CellPaged;
        CmpInitializeKeyNameString(CellPaged);
        v44 = v11[1];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v45 = HvpGetCellFlat(BugCheckParameter3, v44, v78);
        else
          v45 = HvpGetCellPaged(BugCheckParameter3, v44, v78);
        LODWORD(v67) = 0;
        CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v45, (unsigned __int16 *)v84, &v67);
        v21 = v67;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v78);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v78);
        if ( v21 != -1 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v55 = HvpGetCellFlat(BugCheckParameter3, v21, v75);
          else
            v55 = HvpGetCellPaged(BugCheckParameter3, v21, v75);
          v30 = v55;
          if ( a7 == 2 || *(_QWORD *)(v55 + 4) < *(_QWORD *)(v28 + 4) )
          {
            if ( (v11[4] & 2) == 0 && *(_WORD *)(v28 + 74) > *(_WORD *)(v55 + 74) )
            {
              SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v11[1], 0);
              if ( SubKeyByNumber < 0 )
                goto LABEL_125;
              *((_BYTE *)v11 + 16) |= 2u;
            }
            v62[0] = v21;
            if ( a7 == 2 )
              v58 = CmpMergeKeyValues(a4, v56, (_DWORD *)v28, BugCheckParameter3, v21, v30);
            else
              v58 = CmpSyncKeyValues(a4, v56, v28, BugCheckParameter3, *(ULONG_PTR *)v62, v30, v64);
            SubKeyByNumber = v58;
            if ( v58 < 0 )
              goto LABEL_125;
            v59 = v11[1];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v60 = HvpGetCellFlat(BugCheckParameter3, v59, v68);
            else
              v60 = HvpGetCellPaged(BugCheckParameter3, v59, v68);
            v61 = *(unsigned __int16 *)(v30 + 74);
            if ( v61 > *(_DWORD *)(v60 + 56) )
              *(_DWORD *)(v60 + 56) = v61;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v68);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v68);
            *(_QWORD *)(v30 + 4) = *(_QWORD *)(v28 + 4);
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v75);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v75);
          if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
            HvpReleaseCellFlat(a4, v70);
          else
            HvpReleaseCellPaged(a4, v70);
          v28 = 0LL;
          v29 = 0;
          goto LABEL_41;
        }
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a4, v70);
        else
          HvpReleaseCellPaged(a4, v70);
        v15 = BugCheckParameter4;
        v10 = v77;
        v86 = 1;
      }
      if ( (a6 & 0x40) == 0 )
        goto LABEL_22;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        v17 = HvpGetCellFlat(a4, v15, v69);
      else
        v17 = HvpGetCellPaged(a4, v15, v69);
      v18 = *(_BYTE *)(v17 + 12);
      if ( (v18 & 2) != 0 )
        v19 = 1;
      else
        v19 = ((v18 & 1) == 0) | 2;
      if ( v19 > v71 )
      {
        *((_BYTE *)v11 + 16) |= 1u;
        v38 = (*(_BYTE *)(a4 + 140) & 1) == 0;
      }
      else
      {
        v20 = *(_BYTE *)(a4 + 140) & 1;
        if ( v19 > (int)(v11[3] << 29) >> 29 )
        {
          if ( v20 )
            HvpReleaseCellFlat(a4, v69);
          else
            HvpReleaseCellPaged(a4, v69);
LABEL_22:
          SubKeyByNumber = CmpCopyKeyPartial(a4, v15, BugCheckParameter3, v11[1], a6 | 4u, v63, 2, (unsigned int *)&v67);
          if ( SubKeyByNumber < 0 )
            goto LABEL_123;
          if ( (v11[4] & 2) == 0 )
          {
            SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v11[1], 0);
            if ( SubKeyByNumber < 0 )
              goto LABEL_123;
            *((_BYTE *)v11 + 16) |= 2u;
          }
          v21 = v67;
          SubKeyByNumber = CmpAddSubKeyEx(BugCheckParameter3, v11[1], v67);
          if ( SubKeyByNumber >= 0 )
          {
            v22 = v11[1];
            v80[1] = 0;
            v38 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
            v80[0] = -1;
            v79[0] = -1;
            v79[1] = 0;
            if ( v38 )
              v23 = HvpGetCellPaged(BugCheckParameter3, v22, v80);
            else
              v23 = HvpGetCellFlat(BugCheckParameter3, v22, v80);
            v24 = v23;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v25 = HvpGetCellFlat(BugCheckParameter3, v21, v79);
            else
              v25 = HvpGetCellPaged(BugCheckParameter3, v21, v79);
            v26 = 2 * *(_WORD *)(v25 + 72);
            if ( (*(_BYTE *)(v25 + 2) & 0x20) == 0 )
              v26 = *(_WORD *)(v25 + 72);
            if ( (unsigned __int16)*(_DWORD *)(v24 + 52) < (unsigned int)v26 )
              *(_WORD *)(v24 + 52) = v26;
            v27 = *(unsigned __int16 *)(v25 + 74);
            if ( *(_DWORD *)(v24 + 56) < v27 )
              *(_DWORD *)(v24 + 56) = v27;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v79);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v79);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v80);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v80);
            v28 = 0LL;
            if ( !v87 || !v86 )
              goto LABEL_40;
            SubKeyByNumber = CmpMarkKeyParentDirty(BugCheckParameter3);
            if ( SubKeyByNumber >= 0 )
            {
              v82 = v9;
              v87 = 0;
LABEL_40:
              v29 = 1;
LABEL_41:
              v30 = 0LL;
              v31 = (unsigned int)(v72 + 1);
              v72 = v31;
              if ( (unsigned int)v31 < 0x200 )
              {
                v8 = a1;
                v32 = 5 * v31;
                LODWORD(v9) = v31;
                v33 = BugCheckParameter4;
                *(_DWORD *)(a1 + 4 * v32 + 12) &= 0xFFFFFFF8;
                *(_DWORD *)(a1 + 4 * v32) = v33;
                LOBYTE(v33) = *(_BYTE *)(a1 + 4 * v32 + 16) & 0xFC;
                *(_DWORD *)(a1 + 4 * v32 + 4) = v21;
                v10 = v77;
                *(_BYTE *)(a1 + 4 * v32 + 16) = (2 * v29) | v33;
                goto LABEL_2;
              }
              SubKeyByNumber = -1073741670;
              goto LABEL_125;
            }
            goto LABEL_124;
          }
LABEL_123:
          v28 = 0LL;
LABEL_124:
          v30 = 0LL;
LABEL_125:
          v35 = Src;
          goto LABEL_126;
        }
        v38 = v20 == 0;
      }
      if ( v38 )
        HvpReleaseCellPaged(a4, v69);
      else
        HvpReleaseCellFlat(a4, v69);
    }
    if ( v87 && a7 != 2 )
    {
      v52 = v11[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v53 = HvpGetCellFlat(BugCheckParameter3, v52, v68);
      else
        v53 = HvpGetCellPaged(BugCheckParameter3, v52, v68);
      if ( v16 )
        v54 = *(_DWORD *)(v10 + 24);
      else
        v54 = 0;
      if ( *(_DWORD *)(v53 + 20) + *(_DWORD *)(v53 + 24) > (unsigned int)(*(_DWORD *)(v10 + 20) + v54) )
        CmpSyncSubKeysAfterDelete(a4, v10, BugCheckParameter3, v53, P);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v68);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v68);
    }
    v34 = v65;
    if ( (v11[4] & 1) == 0 )
    {
      v35 = Src;
      v36 = v71;
      goto LABEL_46;
    }
    v34 = v65 + 1;
    v65 = v34;
    if ( v34 >= v76 )
      break;
    v35 = Src;
LABEL_87:
    v36 = v71;
    v11[2] = 0;
    v50 = v36 ^ (v11[3] ^ v36) & 0xFFFFFFF8;
    *((_BYTE *)v11 + 16) &= ~1u;
    v11[3] = v50;
    v51 = 5LL * v34;
    *(_OWORD *)&v35[4 * v51] = *(_OWORD *)v11;
    *(_DWORD *)&v35[4 * v51 + 16] = v11[4];
LABEL_46:
    if ( (_DWORD)v9 )
    {
      v37 = a1;
    }
    else
    {
      if ( v34 == -1 )
      {
        if ( (a6 & 0x40) != 0 )
          *(_DWORD *)(BugCheckParameter3 + 4760) = *(_DWORD *)(BugCheckParameter3 + 280);
        SubKeyByNumber = 0;
        goto LABEL_167;
      }
      v37 = a1;
      v39 = v34;
      v40 = v34 - 1;
      v65 = v40;
      v41 = 20 * v39;
      if ( ((v35[12] ^ v35[20 * v39 + 12]) & 7) != 0 )
      {
        *(_OWORD *)a1 = *(_OWORD *)v35;
        *(_DWORD *)(a1 + 16) = *((_DWORD *)v35 + 4);
        memmove(v35, v35 + 20, v41);
        v40 = v65;
      }
      else
      {
        *(_OWORD *)a1 = *(_OWORD *)&v35[v41];
        *(_DWORD *)(a1 + 16) = *(_DWORD *)&v35[v41 + 16];
      }
      LODWORD(v9) = 1;
      if ( v36 == (int)(*(_DWORD *)(a1 + 12) << 29) >> 29 )
      {
        v42 = *(_DWORD *)(BugCheckParameter3 + 280);
        v71 = v36 + 1;
        v65 = v40;
        if ( v36 == 1 )
          *(_DWORD *)(BugCheckParameter3 + 4752) = v42;
        else
          *(_DWORD *)(BugCheckParameter3 + 4756) = v42;
      }
    }
    v10 = v77;
    v9 = (unsigned int)(v9 - 1);
    v72 = v9;
    v11 = (unsigned int *)(v37 + 20 * v9);
    if ( v86 && (_DWORD)v9 == v82 )
    {
      v87 = 1;
      v86 = 0;
    }
  }
  v46 = 1;
  if ( v76 + 1 <= (v76 >> 1) + v76 )
    v46 = v76 >> 1;
  v47 = v76 + v46;
  v48 = v47;
  v35 = Src;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 20 * v47, 0x20204D43u);
  if ( Pool2 )
  {
    memmove(Pool2, Src, 20LL * v76);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    v34 = v65;
    v35 = Pool2;
    Src = Pool2;
    v76 = v48;
    goto LABEL_87;
  }
  SubKeyByNumber = -1073741670;
LABEL_167:
  v30 = 0LL;
  v28 = 0LL;
LABEL_126:
  if ( v77 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, v74);
    else
      HvpReleaseCellPaged(a4, v74);
  }
  if ( v28 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, v70);
    else
      HvpReleaseCellPaged(a4, v70);
  }
  if ( v30 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v75);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v75);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  return (unsigned int)SubKeyByNumber;
}
