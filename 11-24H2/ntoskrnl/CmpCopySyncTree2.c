/*
 * XREFs of CmpCopySyncTree2 @ 0x1408838F4
 * Callers:
 *     CmpCopySyncTree @ 0x1407E1E30 (CmpCopySyncTree.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpMergeKeyValues @ 0x1407E1F94 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407E2A84 (CmpSyncKeyValues.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140872180 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpAddSubKeyEx @ 0x14087F1E4 (CmpAddSubKeyEx.c)
 *     CmpCopyKeyPartial @ 0x140880F10 (CmpCopyKeyPartial.c)
 *     CmpFindSubKeyByNumber @ 0x1408842B0 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpMarkKeyParentDirty @ 0x140A5D138 (CmpMarkKeyParentDirty.c)
 *     CmpInitializeKeyNameString @ 0x140A757B4 (CmpInitializeKeyNameString.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AAD930 (CmpSyncSubKeysAfterDelete.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned int v47; // esi
  void *Pool2; // rdi
  unsigned int v49; // eax
  __int64 v50; // rcx
  ULONG_PTR v51; // rdx
  __int64 v52; // rax
  int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rdx
  int v57; // eax
  ULONG_PTR v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // ecx
  ULONG_PTR v61; // [rsp+30h] [rbp-A9h]
  __int16 v62; // [rsp+38h] [rbp-A1h]
  int v63; // [rsp+4Ch] [rbp-8Dh]
  _BYTE *Src; // [rsp+50h] [rbp-89h]
  ULONG_PTR v65; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v66[2]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v67[2]; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v68[2]; // [rsp+70h] [rbp-69h] BYREF
  int v69; // [rsp+78h] [rbp-61h]
  int v70; // [rsp+7Ch] [rbp-5Dh]
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-59h]
  unsigned int v72[2]; // [rsp+88h] [rbp-51h] BYREF
  unsigned int v73[2]; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v74; // [rsp+98h] [rbp-41h]
  __int64 v75; // [rsp+A0h] [rbp-39h]
  unsigned int v76[2]; // [rsp+A8h] [rbp-31h] BYREF
  unsigned int v77[2]; // [rsp+B0h] [rbp-29h] BYREF
  unsigned int v78[2]; // [rsp+B8h] [rbp-21h] BYREF
  int v79; // [rsp+C0h] [rbp-19h]
  int v80; // [rsp+C4h] [rbp-15h]
  PVOID P; // [rsp+C8h] [rbp-11h]
  __int128 v82[4]; // [rsp+D0h] [rbp-9h] BYREF
  char v84; // [rsp+130h] [rbp+57h]
  bool v85; // [rsp+138h] [rbp+5Fh]

  v70 = 0;
  v79 = a6 & 1;
  v8 = a1;
  LODWORD(BugCheckParameter4) = 0;
  LODWORD(v65) = 0;
  v84 = 0;
  v68[0] = -1;
  v68[1] = 0;
  LODWORD(v9) = 0;
  v73[0] = -1;
  v10 = 0LL;
  v73[1] = 0;
  v72[0] = -1;
  v72[1] = 0;
  v66[0] = -1;
  v66[1] = 0;
  v76[0] = -1;
  v76[1] = 0;
  v80 = -1;
  P = 0LL;
  v85 = (unsigned int)(a7 - 1) <= 1;
  v67[0] = -1;
  v67[1] = 0;
  Src = 0LL;
  v74 = 0;
  v63 = -1;
  v69 = 1;
  v82[0] = 0LL;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    P = (PVOID)ExAllocatePool2(0x100uLL);
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
          HvpReleaseCellFlat(a4, v72);
        else
          HvpReleaseCellPaged(a4, v72);
      }
      v12 = *v11;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(a4, v12, v72);
      else
        CellFlat = HvpGetCellPaged(a4, v12, v72);
      v75 = CellFlat;
      v10 = CellFlat;
      SubKeyByNumber = CmpFindSubKeyByNumber(a4);
      if ( SubKeyByNumber < 0 )
        goto LABEL_123;
      ++v11[2];
      v15 = BugCheckParameter4;
      v16 = v79;
      if ( (_DWORD)BugCheckParameter4 == -1 || !(_BYTE)v79 && (BugCheckParameter4 & 0x80000000) != 0LL )
        break;
      if ( v85 )
      {
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(a4, (unsigned int)BugCheckParameter4, v68);
        else
          CellPaged = HvpGetCellPaged(a4, BugCheckParameter4, v68);
        v28 = CellPaged;
        CmpInitializeKeyNameString(CellPaged);
        v44 = v11[1];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v45 = HvpGetCellFlat(BugCheckParameter3, v44, v76);
        else
          v45 = HvpGetCellPaged(BugCheckParameter3, v44, v76);
        LODWORD(v65) = 0;
        CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v45, (unsigned __int16 *)v82, &v65);
        v21 = v65;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v76);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v76);
        if ( v21 != -1 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v54 = HvpGetCellFlat(BugCheckParameter3, v21, v73);
          else
            v54 = HvpGetCellPaged(BugCheckParameter3, v21, v73);
          v30 = v54;
          if ( a7 == 2 || *(_QWORD *)(v54 + 4) < *(_QWORD *)(v28 + 4) )
          {
            if ( (v11[4] & 2) == 0 && *(_WORD *)(v28 + 74) > *(_WORD *)(v54 + 74) )
            {
              SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v11[1], 0);
              if ( SubKeyByNumber < 0 )
                goto LABEL_125;
              *((_BYTE *)v11 + 16) |= 2u;
            }
            if ( a7 == 2 )
              v57 = CmpMergeKeyValues(a4, v55, (_DWORD *)v28, BugCheckParameter3, v21, v30);
            else
              v57 = CmpSyncKeyValues(a4, v55, v28, BugCheckParameter3, v21, v30, v62);
            SubKeyByNumber = v57;
            if ( v57 < 0 )
              goto LABEL_125;
            v58 = v11[1];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v59 = HvpGetCellFlat(BugCheckParameter3, v58, v66);
            else
              v59 = HvpGetCellPaged(BugCheckParameter3, v58, v66);
            v60 = *(unsigned __int16 *)(v30 + 74);
            if ( v60 > *(_DWORD *)(v59 + 56) )
              *(_DWORD *)(v59 + 56) = v60;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v66);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v66);
            *(_QWORD *)(v30 + 4) = *(_QWORD *)(v28 + 4);
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v73);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v73);
          if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
            HvpReleaseCellFlat(a4, v68);
          else
            HvpReleaseCellPaged(a4, v68);
          v28 = 0LL;
          v29 = 0;
          goto LABEL_41;
        }
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a4, v68);
        else
          HvpReleaseCellPaged(a4, v68);
        v15 = BugCheckParameter4;
        v10 = v75;
        v84 = 1;
      }
      if ( (a6 & 0x40) == 0 )
        goto LABEL_22;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        v17 = HvpGetCellFlat(a4, v15, v67);
      else
        v17 = HvpGetCellPaged(a4, v15, v67);
      v18 = *(_BYTE *)(v17 + 12);
      if ( (v18 & 2) != 0 )
        v19 = 1;
      else
        v19 = ((v18 & 1) == 0) | 2;
      if ( v19 > v69 )
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
            HvpReleaseCellFlat(a4, v67);
          else
            HvpReleaseCellPaged(a4, v67);
LABEL_22:
          SubKeyByNumber = CmpCopyKeyPartial(a4, v15, BugCheckParameter3, v11[1], a6 | 4u, v61, 2, (unsigned int *)&v65);
          if ( SubKeyByNumber < 0 )
            goto LABEL_123;
          if ( (v11[4] & 2) == 0 )
          {
            SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v11[1], 0);
            if ( SubKeyByNumber < 0 )
              goto LABEL_123;
            *((_BYTE *)v11 + 16) |= 2u;
          }
          v21 = v65;
          SubKeyByNumber = CmpAddSubKeyEx(BugCheckParameter3, v11[1], v65);
          if ( SubKeyByNumber >= 0 )
          {
            v22 = v11[1];
            v78[1] = 0;
            v38 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
            v78[0] = -1;
            v77[0] = -1;
            v77[1] = 0;
            if ( v38 )
              v23 = HvpGetCellPaged(BugCheckParameter3, v22, v78);
            else
              v23 = HvpGetCellFlat(BugCheckParameter3, v22, v78);
            v24 = v23;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v25 = HvpGetCellFlat(BugCheckParameter3, v21, v77);
            else
              v25 = HvpGetCellPaged(BugCheckParameter3, v21, v77);
            v26 = 2 * *(_WORD *)(v25 + 72);
            if ( (*(_BYTE *)(v25 + 2) & 0x20) == 0 )
              v26 = *(_WORD *)(v25 + 72);
            if ( (unsigned __int16)*(_DWORD *)(v24 + 52) < (unsigned int)v26 )
              *(_WORD *)(v24 + 52) = v26;
            v27 = *(unsigned __int16 *)(v25 + 74);
            if ( *(_DWORD *)(v24 + 56) < v27 )
              *(_DWORD *)(v24 + 56) = v27;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v77);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v77);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v78);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v78);
            v28 = 0LL;
            if ( !v85 || !v84 )
              goto LABEL_40;
            SubKeyByNumber = CmpMarkKeyParentDirty(BugCheckParameter3);
            if ( SubKeyByNumber >= 0 )
            {
              v80 = v9;
              v85 = 0;
LABEL_40:
              v29 = 1;
LABEL_41:
              v30 = 0LL;
              v31 = (unsigned int)(v70 + 1);
              v70 = v31;
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
                v10 = v75;
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
        HvpReleaseCellPaged(a4, v67);
      else
        HvpReleaseCellFlat(a4, v67);
    }
    if ( v85 && a7 != 2 )
    {
      v51 = v11[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v52 = HvpGetCellFlat(BugCheckParameter3, v51, v66);
      else
        v52 = HvpGetCellPaged(BugCheckParameter3, v51, v66);
      if ( v16 )
        v53 = *(_DWORD *)(v10 + 24);
      else
        v53 = 0;
      if ( *(_DWORD *)(v52 + 20) + *(_DWORD *)(v52 + 24) > (unsigned int)(*(_DWORD *)(v10 + 20) + v53) )
        CmpSyncSubKeysAfterDelete(a4, v10, BugCheckParameter3, v52, P);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v66);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v66);
    }
    v34 = v63;
    if ( (v11[4] & 1) == 0 )
    {
      v35 = Src;
      v36 = v69;
      goto LABEL_46;
    }
    v34 = v63 + 1;
    v63 = v34;
    if ( v34 >= v74 )
      break;
    v35 = Src;
LABEL_87:
    v36 = v69;
    v11[2] = 0;
    v49 = v36 ^ (v11[3] ^ v36) & 0xFFFFFFF8;
    *((_BYTE *)v11 + 16) &= ~1u;
    v11[3] = v49;
    v50 = 5LL * v34;
    *(_OWORD *)&v35[4 * v50] = *(_OWORD *)v11;
    *(_DWORD *)&v35[4 * v50 + 16] = v11[4];
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
      v63 = v40;
      v41 = 20 * v39;
      if ( ((v35[12] ^ v35[20 * v39 + 12]) & 7) != 0 )
      {
        *(_OWORD *)a1 = *(_OWORD *)v35;
        *(_DWORD *)(a1 + 16) = *((_DWORD *)v35 + 4);
        memmove(v35, v35 + 20, v41);
        v40 = v63;
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
        v69 = v36 + 1;
        v63 = v40;
        if ( v36 == 1 )
          *(_DWORD *)(BugCheckParameter3 + 4752) = v42;
        else
          *(_DWORD *)(BugCheckParameter3 + 4756) = v42;
      }
    }
    v10 = v75;
    v9 = (unsigned int)(v9 - 1);
    v70 = v9;
    v11 = (unsigned int *)(v37 + 20 * v9);
    if ( v84 && (_DWORD)v9 == v80 )
    {
      v85 = 1;
      v84 = 0;
    }
  }
  v46 = 1;
  if ( v74 + 1 <= (v74 >> 1) + v74 )
    v46 = v74 >> 1;
  v47 = v74 + v46;
  v35 = Src;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    memmove(Pool2, Src, 20LL * v74);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    v34 = v63;
    v35 = Pool2;
    Src = Pool2;
    v74 = v47;
    goto LABEL_87;
  }
  SubKeyByNumber = -1073741670;
LABEL_167:
  v30 = 0LL;
  v28 = 0LL;
LABEL_126:
  if ( v75 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, v72);
    else
      HvpReleaseCellPaged(a4, v72);
  }
  if ( v28 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, v68);
    else
      HvpReleaseCellPaged(a4, v68);
  }
  if ( v30 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v73);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v73);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  return (unsigned int)SubKeyByNumber;
}
