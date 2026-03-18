/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1409A0064
 * Callers:
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14041FBC0 (CmpFindSecurityCellCacheIndex.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x140480680 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x140494ECC (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x14049C05C (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpRemoveSecurityCellList @ 0x1404B21F0 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1404CC5A4 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086A638 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408822D8 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmGetKCBCacheSecurity @ 0x1409A07E0 (CmGetKCBCacheSecurity.c)
 *     CmpTraceSecurityChanging @ 0x1409A08BC (CmpTraceSecurityChanging.c)
 *     CmpFindMatchingDescriptorCell @ 0x1409A0AF4 (CmpFindMatchingDescriptorCell.c)
 *     CmpAddSecurityCellToCache @ 0x1409A1310 (CmpAddSecurityCellToCache.c)
 *     CmAddLogForAction @ 0x140A05328 (CmAddLogForAction.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSetSecurityDescriptorInfo(
        ULONG_PTR a1,
        unsigned int *a2,
        size_t a3,
        ULONG_PTR a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        struct _SECURITY_SUBJECT_CONTEXT *a9)
{
  ULONG_PTR v10; // rdi
  unsigned int v12; // r15d
  __int64 v13; // r14
  bool v14; // zf
  __int64 CellPaged; // rax
  unsigned int v16; // r12d
  __int64 CellFlat; // rax
  unsigned int *v18; // r13
  struct _PRIVILEGE_SET *Pool; // rax
  int v20; // esi
  int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // r15d
  size_t v24; // rbx
  ULONG_PTR v25; // r15
  __int64 v26; // rdx
  _DWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rbx
  struct _PRIVILEGE_SET *v30; // rax
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  bool v35; // al
  ULONG_PTR v36; // r15
  size_t *v37; // r12
  __int64 v38; // rax
  ULONG_PTR BugCheckParameter4; // r15
  size_t v40; // rax
  ULONG_PTR v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // eax
  bool v44; // r15
  __int64 v45; // rax
  ULONG_PTR v46; // r12
  __int64 v47; // rcx
  _DWORD *v48; // rax
  int v49; // eax
  bool v50; // bl
  __int64 v51; // [rsp+48h] [rbp-71h]
  unsigned int v52[2]; // [rsp+50h] [rbp-69h] BYREF
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  __int64 v54; // [rsp+60h] [rbp-59h] BYREF
  __int64 v55; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v56[2]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v57[2]; // [rsp+78h] [rbp-41h] BYREF
  ULONG_PTR v58; // [rsp+80h] [rbp-39h] BYREF
  __int64 v59; // [rsp+88h] [rbp-31h]
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-29h]
  ULONG_PTR v61; // [rsp+98h] [rbp-21h]
  _DWORD *v62; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-11h]
  ULONG_PTR BugCheckParameter3; // [rsp+108h] [rbp+4Fh] BYREF
  unsigned int *v65; // [rsp+110h] [rbp+57h]
  size_t Size; // [rsp+118h] [rbp+5Fh] BYREF
  ULONG_PTR v67; // [rsp+120h] [rbp+67h]

  v67 = a4;
  Size = a3;
  v65 = a2;
  BugCheckParameter3 = a1;
  P = 0LL;
  v52[0] = -1;
  v63 = 0LL;
  v10 = *(_QWORD *)(a1 + 32);
  v12 = *(_DWORD *)(a1 + 40);
  v54 = 0xFFFFFFFFLL;
  v13 = 0LL;
  v56[0] = -1;
  v14 = (*(_BYTE *)(v10 + 140) & 1) == 0;
  v57[0] = -1;
  v58 = 0LL;
  LODWORD(v67) = 0;
  v52[1] = 0;
  v56[1] = 0;
  v57[1] = 0;
  v62 = 0LL;
  v51 = 0LL;
  v55 = 0LL;
  Privileges = 0LL;
  LODWORD(v61) = v12;
  if ( v14 )
    CellPaged = HvpGetCellPaged(v10, v12, v57);
  else
    CellPaged = HvpGetCellFlat(v10, v12, v57);
  v59 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v10, CellPaged, v12);
  v16 = *(_DWORD *)CmGetKCBCacheSecurity(a1, a7);
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v10, v16, v52);
  else
    CellFlat = HvpGetCellPaged(v10, v16, v52);
  v18 = (unsigned int *)CellFlat;
  if ( !CellFlat || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL), (Privileges = Pool) == 0LL) )
  {
    v20 = -1073741670;
    goto LABEL_82;
  }
  memmove(Pool, v18 + 5, v18[4]);
  P = Privileges;
  v20 = RtlpSetSecurityObject(0LL, *v65, a3, (__int64 *)&P, 0, a5, a6, a9);
  if ( v20 >= 0 )
  {
    v20 = CmpTraceSecurityChanging(a1, (_DWORD)Privileges, *v65, Size, (__int64)P);
    if ( v20 >= 0 )
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
        v20 = HvpMarkCellDirty(v10, v16, 0);
        if ( v20 < 0 )
          goto LABEL_23;
        v45 = a8;
        *(_DWORD *)(a8 + 96) = -1;
        *(_QWORD *)(v45 + 88) = 0LL;
        *(_DWORD *)(v45 + 68) = 9;
        *(_BYTE *)(v45 + 100) = 0;
      }
      else
      {
        v20 = HvpMarkCellDirty(v10, (unsigned int)v61, 0);
        if ( v20 < 0 )
          goto LABEL_23;
        v20 = HvpMarkCellDirty(v10, v16, 0);
        if ( v20 < 0 )
          goto LABEL_23;
      }
      if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v10, P, v23, &v58, &v62) )
      {
        v25 = (unsigned int)v58;
        if ( (_DWORD)v58 == v16 )
        {
          if ( v22 )
          {
            v20 = CmpKeySecurityIncrementReferenceCount((__int64)v18, v10, v58, 0);
            if ( v20 >= 0 )
            {
              v26 = a8;
              v27 = v62;
              *(_DWORD *)(a8 + 96) = v25;
              *(_QWORD *)(v26 + 88) = v27;
            }
          }
          else
          {
            v46 = BugCheckParameter3;
            *(_QWORD *)(v59 + 4) = v24;
            *(_QWORD *)(v46 + 168) = v24;
          }
          goto LABEL_23;
        }
        v20 = HvpMarkCellDirty(v10, (unsigned int)v58, 0);
        if ( v20 >= 0 )
        {
          if ( v22 )
          {
            v32 = v62;
            v33 = a8;
            *(_DWORD *)(a8 + 96) = *v62;
            *(_QWORD *)(v33 + 88) = v32;
LABEL_44:
            if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
              v34 = HvpGetCellFlat(v10, (unsigned int)v25, &v54);
            else
              v34 = HvpGetCellPaged(v10, v25, &v54);
            v13 = v34;
            if ( v34 )
            {
              v20 = CmpKeySecurityIncrementReferenceCount(v34, v10, v25, 0);
              if ( v20 < 0 )
                goto LABEL_24;
              if ( !a7 )
              {
                v35 = CmpKeySecurityDecrementReferenceCount((__int64)v18, v10, v16);
                v14 = (*(_BYTE *)(v10 + 140) & 1) == 0;
                LOBYTE(Size) = v35;
                if ( v14 )
                  HvpReleaseCellPaged(v10, v52);
                else
                  HvpReleaseCellFlat(v10, (__int64)v52);
                v18 = 0LL;
                if ( (_BYTE)Size )
                {
                  CmpRemoveSecurityCellList(v10, v16);
                  HvFreeCell(v10, v16);
                }
                *(_DWORD *)(v59 + 44) = v25;
              }
              v51 = 0LL;
              LODWORD(v36) = v16;
              if ( !a7 )
              {
LABEL_55:
                v37 = (size_t *)BugCheckParameter3;
                v38 = v59;
                LODWORD(BugCheckParameter3) = 0;
                *(_QWORD *)(v59 + 4) = v24;
                ++v37[38];
                v37[21] = v24;
                BugCheckParameter4 = *(unsigned int *)(v38 + 44);
                if ( (_DWORD)BugCheckParameter4 == -1 )
                {
                  v40 = 0LL;
                }
                else
                {
                  Size = v37[4];
                  if ( !CmpFindSecurityCellCacheIndex(Size, BugCheckParameter4, &BugCheckParameter3) )
                  {
                    v37[11] = 0LL;
                    KeBugCheckEx(0x51u, 4uLL, 1uLL, (ULONG_PTR)v37, BugCheckParameter4);
                  }
                  v40 = *(_QWORD *)(*(_QWORD *)(Size + 1888) + 16LL * (unsigned int)BugCheckParameter3 + 8);
                }
                v37[11] = v40;
                LODWORD(v67) = 0;
                goto LABEL_24;
              }
              v47 = a8;
              goto LABEL_103;
            }
            if ( !a7 )
              KeBugCheckEx(0x51u, 4uLL, 5uLL, v10, v25);
LABEL_98:
            v20 = -1073741670;
            goto LABEL_24;
          }
          v20 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v18, v10, v16);
          if ( v20 >= 0 )
            goto LABEL_44;
        }
LABEL_23:
        v13 = v55;
LABEL_24:
        v29 = v51;
        goto LABEL_25;
      }
      v28 = RtlLengthSecurityDescriptorStrict();
      v20 = HvAllocateCell(v10, v28 + 20, v23, (unsigned int *)&v58 + 1, &v55, (__int64)&v54);
      if ( v20 < 0 )
        goto LABEL_23;
      v36 = HIDWORD(v58);
      LODWORD(v67) = HIDWORD(v58);
      if ( v22 )
      {
        v13 = v55;
        *(_DWORD *)(v55 + 8) = HIDWORD(v58);
        *(_DWORD *)(v13 + 4) = v36;
      }
      else
      {
        v20 = HvpMarkCellDirty(v10, v18[1], 0);
        if ( v20 < 0 )
          goto LABEL_23;
        v20 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v18, v10, v16);
        if ( v20 < 0 )
          goto LABEL_23;
        v41 = v18[1];
        if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
          v42 = HvpGetCellFlat(v10, v41, v56);
        else
          v42 = HvpGetCellPaged(v10, v41, v56);
        v13 = v55;
        v51 = v42;
        if ( !v42 )
          goto LABEL_98;
        *(_DWORD *)(v55 + 4) = v18[1];
        *(_DWORD *)(v13 + 8) = v16;
        v18[1] = v36;
        *(_DWORD *)(v42 + 8) = v36;
      }
      v43 = Size;
      *(_WORD *)v13 = 27507;
      *(_DWORD *)(v13 + 12) = 1;
      *(_DWORD *)(v13 + 16) = v43;
      memmove((void *)(v13 + 20), P, v43);
      v20 = CmpAddSecurityCellToCache(v10, (unsigned int)v36);
      if ( v20 >= 0 )
      {
        if ( !a7 )
        {
          *(_DWORD *)(v59 + 44) = v36;
          v44 = CmpKeySecurityDecrementReferenceCount((__int64)v18, v10, v16);
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, (__int64)v52);
          else
            HvpReleaseCellPaged(v10, v52);
          v18 = 0LL;
          if ( v44 )
          {
            CmpRemoveSecurityCellList(v10, v16);
            HvFreeCell(v10, v16);
          }
          goto LABEL_55;
        }
        LODWORD(Size) = 0;
        if ( !CmpFindSecurityCellCacheIndex(v10, v36, &Size) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, v36);
        v47 = a8;
        v48 = *(_DWORD **)(*(_QWORD *)(v10 + 1888) + 16LL * (unsigned int)Size + 8);
        *(_QWORD *)(a8 + 88) = v48;
        *(_DWORD *)(v47 + 96) = *v48;
LABEL_103:
        v49 = CmAddLogForAction(v47, 1LL);
        LODWORD(v67) = 0;
        v20 = v49;
        if ( v49 < 0 )
        {
          v50 = CmpKeySecurityDecrementReferenceCount(v13, v10, v36);
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, (__int64)&v54);
          else
            HvpReleaseCellPaged(v10, (unsigned int *)&v54);
          v13 = 0LL;
          LODWORD(v67) = 0;
          if ( v50 )
          {
            CmpRemoveSecurityCellList(v10, (unsigned int)v36);
            HvFreeCell(v10, v36);
            LODWORD(v67) = 0;
          }
        }
        goto LABEL_24;
      }
      v29 = v51;
      if ( !a7 )
      {
        v18[1] = *(_DWORD *)(v13 + 4);
        *(_DWORD *)(v51 + 8) = *(_DWORD *)(v13 + 8);
      }
LABEL_25:
      if ( P )
        ExFreePoolWithTag(P, 0);
      v30 = Privileges;
      if ( !Privileges )
        goto LABEL_29;
      goto LABEL_28;
    }
LABEL_82:
    v29 = 0LL;
    goto LABEL_25;
  }
  P = 0LL;
  v29 = 0LL;
  v30 = Privileges;
LABEL_28:
  CmSiFreeMemory(v30);
LABEL_29:
  if ( (_DWORD)v67 )
    HvFreeCell(v10, v67);
  if ( v29 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, (__int64)v56);
    else
      HvpReleaseCellPaged(v10, v56);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, (__int64)&v54);
    else
      HvpReleaseCellPaged(v10, (unsigned int *)&v54);
  }
  if ( v18 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, (__int64)v52);
    else
      HvpReleaseCellPaged(v10, v52);
  }
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v10, (__int64)v57);
  else
    HvpReleaseCellPaged(v10, v57);
  return (unsigned int)v20;
}
