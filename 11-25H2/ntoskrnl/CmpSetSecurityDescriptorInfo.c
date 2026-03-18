/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1409765B8
 * Callers:
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140429CE0 (CmpFindSecurityCellCacheIndex.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x14047F924 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404960C4 (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpRemoveSecurityCellList @ 0x1404B13E8 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1404F20CC (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1404F262C (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmAddLogForAction @ 0x140868A1C (CmAddLogForAction.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086CCD4 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     CmpAddSecurityCellToCache @ 0x14091CE7C (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x1409763A4 (CmpFindMatchingDescriptorCell.c)
 *     CmGetKCBCacheSecurity @ 0x140976D40 (CmGetKCBCacheSecurity.c)
 *     CmpTraceSecurityChanging @ 0x140976E1C (CmpTraceSecurityChanging.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int *v27; // rax
  int *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  bool v31; // al
  ULONG_PTR v32; // r15
  size_t *v33; // r12
  __int64 v34; // rax
  ULONG_PTR BugCheckParameter4; // r15
  size_t v36; // rax
  __int64 v37; // rbx
  struct _PRIVILEGE_SET *v38; // rax
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // r9
  bool v43; // r15
  __int64 v44; // rax
  ULONG_PTR v45; // r12
  ULONG_PTR v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  _DWORD *v49; // rax
  int v50; // eax
  bool v51; // bl
  __int64 v52; // [rsp+48h] [rbp-71h]
  __int64 v53; // [rsp+50h] [rbp-69h] BYREF
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  __int64 v55; // [rsp+60h] [rbp-59h] BYREF
  __int64 v56; // [rsp+68h] [rbp-51h] BYREF
  __int64 v57; // [rsp+70h] [rbp-49h] BYREF
  __int64 v58; // [rsp+78h] [rbp-41h] BYREF
  ULONG_PTR v59; // [rsp+80h] [rbp-39h] BYREF
  __int64 v60; // [rsp+88h] [rbp-31h]
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-29h]
  ULONG_PTR v62; // [rsp+98h] [rbp-21h]
  int *v63; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-11h]
  ULONG_PTR BugCheckParameter3; // [rsp+108h] [rbp+4Fh] BYREF
  unsigned int *v66; // [rsp+110h] [rbp+57h]
  size_t Size; // [rsp+118h] [rbp+5Fh] BYREF
  ULONG_PTR v68; // [rsp+120h] [rbp+67h]

  v68 = a4;
  Size = a3;
  v66 = a2;
  BugCheckParameter3 = a1;
  P = 0LL;
  v53 = 0xFFFFFFFFLL;
  v64 = 0LL;
  v10 = *(_QWORD *)(a1 + 32);
  v12 = *(_DWORD *)(a1 + 40);
  v55 = 0xFFFFFFFFLL;
  v13 = 0LL;
  v57 = 0xFFFFFFFFLL;
  v14 = (*(_BYTE *)(v10 + 140) & 1) == 0;
  v58 = 0xFFFFFFFFLL;
  v59 = 0LL;
  LODWORD(v68) = 0;
  v63 = 0LL;
  v52 = 0LL;
  v56 = 0LL;
  Privileges = 0LL;
  LODWORD(v62) = v12;
  if ( v14 )
    CellPaged = HvpGetCellPaged(v10, v12, &v58);
  else
    CellPaged = HvpGetCellFlat(v10, v12, &v58);
  v60 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v10, CellPaged, v12);
  v16 = *(_DWORD *)CmGetKCBCacheSecurity(a1, a7);
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v10, v16, &v53);
  else
    CellFlat = HvpGetCellPaged(v10, v16, &v53);
  v18 = (unsigned int *)CellFlat;
  if ( !CellFlat || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL), (Privileges = Pool) == 0LL) )
  {
    v20 = -1073741670;
    goto LABEL_77;
  }
  memmove(Pool, v18 + 5, v18[4]);
  P = Privileges;
  v20 = RtlpSetSecurityObject(0LL, *v66, a3, (__int64 *)&P, 0, a5, a6, a9);
  if ( v20 >= 0 )
  {
    v20 = CmpTraceSecurityChanging(a1, (_DWORD)Privileges, *v66, Size, (__int64)P);
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
          goto LABEL_59;
        v44 = a8;
        *(_DWORD *)(a8 + 96) = -1;
        *(_QWORD *)(v44 + 88) = 0LL;
        *(_DWORD *)(v44 + 68) = 9;
        *(_BYTE *)(v44 + 100) = 0;
      }
      else
      {
        v20 = HvpMarkCellDirty(v10, (unsigned int)v62, 0);
        if ( v20 < 0 )
          goto LABEL_59;
        v20 = HvpMarkCellDirty(v10, v16, 0);
        if ( v20 < 0 )
          goto LABEL_59;
      }
      if ( CmpFindMatchingDescriptorCell(v10, P, v23, &v59, &v63) )
      {
        v25 = (unsigned int)v59;
        if ( (_DWORD)v59 == v16 )
        {
          if ( v22 )
          {
            v20 = CmpKeySecurityIncrementReferenceCount((__int64)v18, v10, v59, 0);
            if ( v20 >= 0 )
            {
              v26 = a8;
              v27 = v63;
              *(_DWORD *)(a8 + 96) = v25;
              *(_QWORD *)(v26 + 88) = v27;
            }
          }
          else
          {
            v45 = BugCheckParameter3;
            *(_QWORD *)(v60 + 4) = v24;
            *(_QWORD *)(v45 + 168) = v24;
          }
          goto LABEL_59;
        }
        v20 = HvpMarkCellDirty(v10, (unsigned int)v59, 0);
        if ( v20 >= 0 )
        {
          if ( v22 )
          {
            v28 = v63;
            v29 = a8;
            *(_DWORD *)(a8 + 96) = *v63;
            *(_QWORD *)(v29 + 88) = v28;
LABEL_23:
            if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
              v30 = HvpGetCellFlat(v10, (unsigned int)v25, &v55);
            else
              v30 = HvpGetCellPaged(v10, v25, &v55);
            v13 = v30;
            if ( v30 )
            {
              v20 = CmpKeySecurityIncrementReferenceCount(v30, v10, v25, 0);
              if ( v20 < 0 )
              {
LABEL_38:
                v37 = v52;
                goto LABEL_39;
              }
              if ( !a7 )
              {
                v31 = CmpKeySecurityDecrementReferenceCount((__int64)v18, v10, v16);
                v14 = (*(_BYTE *)(v10 + 140) & 1) == 0;
                LOBYTE(Size) = v31;
                if ( v14 )
                  HvpReleaseCellPaged(v10, (unsigned int *)&v53);
                else
                  HvpReleaseCellFlat(v10, &v53);
                v18 = 0LL;
                if ( (_BYTE)Size )
                {
                  CmpRemoveSecurityCellList(v10, v16);
                  HvFreeCell(v10, v16);
                }
                *(_DWORD *)(v60 + 44) = v25;
              }
              v52 = 0LL;
              LODWORD(v32) = v16;
              if ( !a7 )
              {
LABEL_34:
                v33 = (size_t *)BugCheckParameter3;
                v34 = v60;
                LODWORD(BugCheckParameter3) = 0;
                *(_QWORD *)(v60 + 4) = v24;
                ++v33[38];
                v33[21] = v24;
                BugCheckParameter4 = *(unsigned int *)(v34 + 44);
                if ( (_DWORD)BugCheckParameter4 == -1 )
                {
                  v36 = 0LL;
                }
                else
                {
                  Size = v33[4];
                  if ( !CmpFindSecurityCellCacheIndex(Size, BugCheckParameter4, &BugCheckParameter3) )
                  {
                    v33[11] = 0LL;
                    KeBugCheckEx(0x51u, 4uLL, 1uLL, (ULONG_PTR)v33, BugCheckParameter4);
                  }
                  v36 = *(_QWORD *)(*(_QWORD *)(Size + 1888) + 16LL * (unsigned int)BugCheckParameter3 + 8);
                }
                v33[11] = v36;
                LODWORD(v68) = 0;
                goto LABEL_38;
              }
              v48 = a8;
              goto LABEL_103;
            }
            if ( !a7 )
              KeBugCheckEx(0x51u, 4uLL, 5uLL, v10, v25);
LABEL_98:
            v20 = -1073741670;
            goto LABEL_38;
          }
          v20 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v18, v10, v16);
          if ( v20 >= 0 )
            goto LABEL_23;
        }
LABEL_59:
        v13 = v56;
        goto LABEL_38;
      }
      v40 = RtlLengthSecurityDescriptorStrict();
      v20 = HvAllocateCell(v10, v40 + 20, v23, (unsigned int *)&v59 + 1, &v56, (__int64)&v55);
      if ( v20 < 0 )
        goto LABEL_59;
      v32 = HIDWORD(v59);
      LODWORD(v68) = HIDWORD(v59);
      if ( v22 )
      {
        v13 = v56;
        *(_DWORD *)(v56 + 8) = HIDWORD(v59);
        *(_DWORD *)(v13 + 4) = v32;
      }
      else
      {
        v20 = HvpMarkCellDirty(v10, v18[1], 0);
        if ( v20 < 0 )
          goto LABEL_59;
        v20 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v18, v10, v16);
        if ( v20 < 0 )
          goto LABEL_59;
        v46 = v18[1];
        if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
          v47 = HvpGetCellFlat(v10, v46, &v57);
        else
          v47 = HvpGetCellPaged(v10, v46, &v57);
        v13 = v56;
        v52 = v47;
        if ( !v47 )
          goto LABEL_98;
        *(_DWORD *)(v56 + 4) = v18[1];
        *(_DWORD *)(v13 + 8) = v16;
        v18[1] = v32;
        *(_DWORD *)(v47 + 8) = v32;
      }
      v41 = Size;
      *(_WORD *)v13 = 27507;
      *(_DWORD *)(v13 + 12) = 1;
      *(_DWORD *)(v13 + 16) = v41;
      memmove((void *)(v13 + 20), P, v41);
      v20 = CmpAddSecurityCellToCache(v10, (unsigned int)v32, 0, v42);
      if ( v20 >= 0 )
      {
        if ( !a7 )
        {
          *(_DWORD *)(v60 + 44) = v32;
          v43 = CmpKeySecurityDecrementReferenceCount((__int64)v18, v10, v16);
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, &v53);
          else
            HvpReleaseCellPaged(v10, (unsigned int *)&v53);
          v18 = 0LL;
          if ( v43 )
          {
            CmpRemoveSecurityCellList(v10, v16);
            HvFreeCell(v10, v16);
          }
          goto LABEL_34;
        }
        LODWORD(Size) = 0;
        if ( !CmpFindSecurityCellCacheIndex(v10, v32, &Size) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, v32);
        v48 = a8;
        v49 = *(_DWORD **)(*(_QWORD *)(v10 + 1888) + 16LL * (unsigned int)Size + 8);
        *(_QWORD *)(a8 + 88) = v49;
        *(_DWORD *)(v48 + 96) = *v49;
LABEL_103:
        v50 = CmAddLogForAction(v48, 1u);
        LODWORD(v68) = 0;
        v20 = v50;
        if ( v50 < 0 )
        {
          v51 = CmpKeySecurityDecrementReferenceCount(v13, v10, v32);
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, &v55);
          else
            HvpReleaseCellPaged(v10, (unsigned int *)&v55);
          v13 = 0LL;
          LODWORD(v68) = 0;
          if ( v51 )
          {
            CmpRemoveSecurityCellList(v10, (unsigned int)v32);
            HvFreeCell(v10, v32);
            LODWORD(v68) = 0;
          }
        }
        goto LABEL_38;
      }
      v37 = v52;
      if ( !a7 )
      {
        v18[1] = *(_DWORD *)(v13 + 4);
        *(_DWORD *)(v52 + 8) = *(_DWORD *)(v13 + 8);
      }
LABEL_39:
      if ( P )
        ExFreePoolWithTag(P, 0);
      v38 = Privileges;
      if ( !Privileges )
        goto LABEL_42;
      goto LABEL_79;
    }
LABEL_77:
    v37 = 0LL;
    goto LABEL_39;
  }
  P = 0LL;
  v37 = 0LL;
  v38 = Privileges;
LABEL_79:
  CmSiFreeMemory(v38);
LABEL_42:
  if ( (_DWORD)v68 )
    HvFreeCell(v10, v68);
  if ( v37 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v57);
    else
      HvpReleaseCellPaged(v10, (unsigned int *)&v57);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v55);
    else
      HvpReleaseCellPaged(v10, (unsigned int *)&v55);
  }
  if ( v18 )
  {
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v10, &v53);
    else
      HvpReleaseCellPaged(v10, (unsigned int *)&v53);
  }
  if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v10, &v58);
  else
    HvpReleaseCellPaged(v10, (unsigned int *)&v58);
  return (unsigned int)v20;
}
