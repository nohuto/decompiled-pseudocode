/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x140830F98
 * Callers:
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x14047B1E0 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x14048F78C (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x140496C88 (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpRemoveSecurityCellList @ 0x1404ACA80 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1404C5A14 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmGetKCBCacheSecurity @ 0x140831720 (CmGetKCBCacheSecurity.c)
 *     CmpTraceSecurityChanging @ 0x1408317FC (CmpTraceSecurityChanging.c)
 *     CmpFindMatchingDescriptorCell @ 0x140831A34 (CmpFindMatchingDescriptorCell.c)
 *     CmpAddSecurityCellToCache @ 0x140832634 (CmpAddSecurityCellToCache.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086E968 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSetSecurityDescriptorInfo(
        ULONG_PTR a1,
        _DWORD *a2,
        size_t a3,
        ULONG_PTR a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  ULONG_PTR v10; // rdi
  int v11; // esi
  unsigned int v12; // r15d
  __int64 v13; // r14
  bool v14; // zf
  __int64 CellPaged; // rax
  unsigned int v16; // r12d
  __int64 CellFlat; // rax
  unsigned int *v18; // r13
  struct _PRIVILEGE_SET *Pool; // rax
  int Cell; // esi
  int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // r15d
  size_t v24; // rbx
  ULONG_PTR v25; // r15
  __int64 v26; // rdx
  _DWORD *v27; // rax
  __int64 v28; // rbx
  struct _PRIVILEGE_SET *v29; // rax
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  bool v34; // al
  ULONG_PTR v35; // r15
  size_t *v36; // r12
  __int64 v37; // rax
  ULONG_PTR BugCheckParameter4; // r15
  size_t v39; // rax
  __int64 v40; // rax
  unsigned int v41; // eax
  bool v42; // r15
  __int64 v43; // rax
  ULONG_PTR v44; // r12
  __int64 v45; // rcx
  _DWORD *v46; // rax
  int v47; // eax
  bool v48; // bl
  __int64 v49; // [rsp+48h] [rbp-71h]
  _DWORD v50[2]; // [rsp+50h] [rbp-69h] BYREF
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  __int64 v52; // [rsp+60h] [rbp-59h] BYREF
  __int64 v53; // [rsp+68h] [rbp-51h] BYREF
  _DWORD v54[2]; // [rsp+70h] [rbp-49h] BYREF
  _DWORD v55[2]; // [rsp+78h] [rbp-41h] BYREF
  ULONG_PTR v56; // [rsp+80h] [rbp-39h] BYREF
  __int64 v57; // [rsp+88h] [rbp-31h]
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-29h]
  ULONG_PTR v59; // [rsp+98h] [rbp-21h]
  _DWORD *v60; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v61; // [rsp+A8h] [rbp-11h]
  ULONG_PTR BugCheckParameter3; // [rsp+108h] [rbp+4Fh] BYREF
  _DWORD *v63; // [rsp+110h] [rbp+57h]
  size_t Size; // [rsp+118h] [rbp+5Fh] BYREF
  ULONG_PTR v65; // [rsp+120h] [rbp+67h]

  v65 = a4;
  Size = a3;
  v63 = a2;
  BugCheckParameter3 = a1;
  P = 0LL;
  v50[0] = -1;
  v61 = 0LL;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = a3;
  v12 = *(_DWORD *)(a1 + 40);
  v52 = 0xFFFFFFFFLL;
  v13 = 0LL;
  v54[0] = -1;
  v14 = (*(_BYTE *)(v10 + 140) & 1) == 0;
  v55[0] = -1;
  v56 = 0LL;
  LODWORD(v65) = 0;
  v50[1] = 0;
  v54[1] = 0;
  v55[1] = 0;
  v60 = 0LL;
  v49 = 0LL;
  v53 = 0LL;
  Privileges = 0LL;
  LODWORD(v59) = v12;
  if ( v14 )
    CellPaged = HvpGetCellPaged(v10);
  else
    CellPaged = HvpGetCellFlat(v10, v12);
  v57 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v10, CellPaged, v12);
  v16 = *(_DWORD *)CmGetKCBCacheSecurity(a1, a7);
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v10, v16);
  else
    CellFlat = HvpGetCellPaged(v10);
  v18 = (unsigned int *)CellFlat;
  if ( !CellFlat
    || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, *(unsigned int *)(CellFlat + 16), 0x36384D43u),
        (Privileges = Pool) == 0LL) )
  {
    Cell = -1073741670;
    goto LABEL_82;
  }
  memmove(Pool, v18 + 5, v18[4]);
  P = Privileges;
  Cell = RtlpSetSecurityObject(0, *v63, v11, (unsigned int)&P, 0, a5, a6, a9);
  if ( Cell >= 0 )
  {
    Cell = CmpTraceSecurityChanging(a1, (_DWORD)Privileges, *v63, Size, (__int64)P);
    if ( Cell >= 0 )
    {
      v21 = RtlLengthSecurityDescriptorStrict();
      v22 = a7;
      LODWORD(Size) = v21;
      if ( a7 )
        v23 = 1;
      else
        v23 = v12 >> 31;
      v24 = MEMORY[0xFFFFF78000000014];
      if ( a7 )
      {
        Cell = HvpMarkCellDirty(v10, v16);
        if ( Cell < 0 )
          goto LABEL_23;
        v43 = a8;
        *(_DWORD *)(a8 + 96) = -1;
        *(_QWORD *)(v43 + 88) = 0LL;
        *(_DWORD *)(v43 + 68) = 9;
        *(_BYTE *)(v43 + 100) = 0;
      }
      else
      {
        Cell = HvpMarkCellDirty(v10, (unsigned int)v59);
        if ( Cell < 0 )
          goto LABEL_23;
        Cell = HvpMarkCellDirty(v10, v16);
        if ( Cell < 0 )
          goto LABEL_23;
      }
      if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v10, P, v23, &v56, &v60) )
      {
        v25 = (unsigned int)v56;
        if ( (_DWORD)v56 == v16 )
        {
          if ( v22 )
          {
            Cell = CmpKeySecurityIncrementReferenceCount((__int64)v18, v10, v56, 0);
            if ( Cell >= 0 )
            {
              v26 = a8;
              v27 = v60;
              *(_DWORD *)(a8 + 96) = v25;
              *(_QWORD *)(v26 + 88) = v27;
            }
          }
          else
          {
            v44 = BugCheckParameter3;
            *(_QWORD *)(v57 + 4) = v24;
            *(_QWORD *)(v44 + 168) = v24;
          }
          goto LABEL_23;
        }
        Cell = HvpMarkCellDirty(v10, (unsigned int)v56);
        if ( Cell >= 0 )
        {
          if ( v22 )
          {
            v31 = v60;
            v32 = a8;
            *(_DWORD *)(a8 + 96) = *v60;
            *(_QWORD *)(v32 + 88) = v31;
LABEL_44:
            if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
              v33 = HvpGetCellFlat(v10, (unsigned int)v25);
            else
              v33 = HvpGetCellPaged(v10);
            v13 = v33;
            if ( v33 )
            {
              Cell = CmpKeySecurityIncrementReferenceCount(v33, v10, v25, 0);
              if ( Cell < 0 )
                goto LABEL_24;
              if ( !a7 )
              {
                v34 = CmpKeySecurityDecrementReferenceCount((__int64)v18, v10, v16);
                v14 = (*(_BYTE *)(v10 + 140) & 1) == 0;
                LOBYTE(Size) = v34;
                if ( v14 )
                  HvpReleaseCellPaged(v10, v50);
                else
                  HvpReleaseCellFlat(v10, v50);
                v18 = 0LL;
                if ( (_BYTE)Size )
                {
                  CmpRemoveSecurityCellList(v10, v16);
                  HvFreeCell(v10, v16);
                }
                *(_DWORD *)(v57 + 44) = v25;
              }
              v49 = 0LL;
              LODWORD(v35) = v16;
              if ( !a7 )
              {
LABEL_55:
                v36 = (size_t *)BugCheckParameter3;
                v37 = v57;
                LODWORD(BugCheckParameter3) = 0;
                *(_QWORD *)(v57 + 4) = v24;
                ++v36[38];
                v36[21] = v24;
                BugCheckParameter4 = *(unsigned int *)(v37 + 44);
                if ( (_DWORD)BugCheckParameter4 == -1 )
                {
                  v39 = 0LL;
                }
                else
                {
                  Size = v36[4];
                  if ( !CmpFindSecurityCellCacheIndex(Size, BugCheckParameter4, &BugCheckParameter3) )
                  {
                    v36[11] = 0LL;
                    KeBugCheckEx(0x51u, 4uLL, 1uLL, (ULONG_PTR)v36, BugCheckParameter4);
                  }
                  v39 = *(_QWORD *)(*(_QWORD *)(Size + 1888) + 16LL * (unsigned int)BugCheckParameter3 + 8);
                }
                v36[11] = v39;
                LODWORD(v65) = 0;
                goto LABEL_24;
              }
              v45 = a8;
              goto LABEL_103;
            }
            if ( !a7 )
              KeBugCheckEx(0x51u, 4uLL, 5uLL, v10, v25);
LABEL_98:
            Cell = -1073741670;
            goto LABEL_24;
          }
          Cell = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v18, v10, v16);
          if ( Cell >= 0 )
            goto LABEL_44;
        }
LABEL_23:
        v13 = v53;
LABEL_24:
        v28 = v49;
        goto LABEL_25;
      }
      RtlLengthSecurityDescriptorStrict();
      Cell = HvAllocateCell(v10, (__int64)&v53, (__int64)&v52);
      if ( Cell < 0 )
        goto LABEL_23;
      v35 = HIDWORD(v56);
      LODWORD(v65) = HIDWORD(v56);
      if ( v22 )
      {
        v13 = v53;
        *(_DWORD *)(v53 + 8) = HIDWORD(v56);
        *(_DWORD *)(v13 + 4) = v35;
      }
      else
      {
        Cell = HvpMarkCellDirty(v10, v18[1]);
        if ( Cell < 0 )
          goto LABEL_23;
        Cell = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v18, v10, v16);
        if ( Cell < 0 )
          goto LABEL_23;
        if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
          v40 = HvpGetCellFlat(v10, v18[1]);
        else
          v40 = HvpGetCellPaged(v10);
        v13 = v53;
        v49 = v40;
        if ( !v40 )
          goto LABEL_98;
        *(_DWORD *)(v53 + 4) = v18[1];
        *(_DWORD *)(v13 + 8) = v16;
        v18[1] = v35;
        *(_DWORD *)(v40 + 8) = v35;
      }
      v41 = Size;
      *(_WORD *)v13 = 27507;
      *(_DWORD *)(v13 + 12) = 1;
      *(_DWORD *)(v13 + 16) = v41;
      memmove((void *)(v13 + 20), P, v41);
      Cell = CmpAddSecurityCellToCache(v10, (unsigned int)v35);
      if ( Cell >= 0 )
      {
        if ( !a7 )
        {
          *(_DWORD *)(v57 + 44) = v35;
          v42 = CmpKeySecurityDecrementReferenceCount((__int64)v18, v10, v16);
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, v50);
          else
            HvpReleaseCellPaged(v10, v50);
          v18 = 0LL;
          if ( v42 )
          {
            CmpRemoveSecurityCellList(v10, v16);
            HvFreeCell(v10, v16);
          }
          goto LABEL_55;
        }
        LODWORD(Size) = 0;
        if ( !CmpFindSecurityCellCacheIndex(v10, v35, &Size) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, v35);
        v45 = a8;
        v46 = *(_DWORD **)(*(_QWORD *)(v10 + 1888) + 16LL * (unsigned int)Size + 8);
        *(_QWORD *)(a8 + 88) = v46;
        *(_DWORD *)(v45 + 96) = *v46;
LABEL_103:
        v47 = CmAddLogForAction(v45, 1LL);
        LODWORD(v65) = 0;
        Cell = v47;
        if ( v47 < 0 )
        {
          v48 = CmpKeySecurityDecrementReferenceCount(v13, v10, v35);
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, &v52);
          else
            HvpReleaseCellPaged(v10, &v52);
          v13 = 0LL;
          LODWORD(v65) = 0;
          if ( v48 )
          {
            CmpRemoveSecurityCellList(v10, (unsigned int)v35);
            HvFreeCell(v10, (unsigned int)v35);
            LODWORD(v65) = 0;
          }
        }
        goto LABEL_24;
      }
      v28 = v49;
      if ( !a7 )
      {
        v18[1] = *(_DWORD *)(v13 + 4);
        *(_DWORD *)(v49 + 8) = *(_DWORD *)(v13 + 8);
      }
LABEL_25:
      if ( P )
        ExFreePoolWithTag(P, 0);
      v29 = Privileges;
      if ( !Privileges )
        goto LABEL_29;
      goto LABEL_28;
    }
LABEL_82:
    v28 = 0LL;
    goto LABEL_25;
  }
  P = 0LL;
  v28 = 0LL;
  v29 = Privileges;
LABEL_28:
  CmSiFreeMemory(v29);
LABEL_29:
  if ( (_DWORD)v65 )
    HvFreeCell(v10, (unsigned int)v65);
  if ( v28 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, v54);
    else
      HvpReleaseCellPaged(v10, v54);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v52);
    else
      HvpReleaseCellPaged(v10, &v52);
  }
  if ( v18 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, v50);
    else
      HvpReleaseCellPaged(v10, v50);
  }
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v10, v55);
  else
    HvpReleaseCellPaged(v10, v55);
  return (unsigned int)Cell;
}
