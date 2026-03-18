/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x14091C778
 * Callers:
 *     CmCheckRegistry @ 0x140995590 (CmCheckRegistry.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140429CE0 (CmpFindSecurityCellCacheIndex.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x140878DF0 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpDestroySecurityCache @ 0x140885554 (CmpDestroySecurityCache.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14091BF80 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAddSecurityCellToCache @ 0x14091CE7C (CmpAddSecurityCellToCache.c)
 *     CmpInitSecurityCache @ 0x140A34BA4 (CmpInitSecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x140A48654 (CmpCheckSecurityCellAccess.c)
 *     CmpAdjustSecurityCacheSize @ 0x140A51714 (CmpAdjustSecurityCacheSize.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r14
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // r13
  unsigned int v10; // r15d
  unsigned int v11; // esi
  unsigned int v12; // r14d
  char IsCellAllocated; // al
  __int64 v14; // r12
  __int64 CellPaged; // rax
  unsigned int v16; // eax
  ULONG v17; // edx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rax
  unsigned int i; // edi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // r9d
  ULONG_PTR v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // ecx
  ULONG v30; // edx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+20h] [rbp-38h]
  int v35; // [rsp+20h] [rbp-38h]
  unsigned int v36; // [rsp+30h] [rbp-28h]
  int v37; // [rsp+34h] [rbp-24h]
  __int64 v38; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v39[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v40; // [rsp+A0h] [rbp+48h] BYREF
  int v41; // [rsp+A8h] [rbp+50h]
  _BYTE *v42; // [rsp+B0h] [rbp+58h]
  __int64 v43; // [rsp+B8h] [rbp+60h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  *(_QWORD *)v39 = 0LL;
  v38 = 0LL;
  HvpGetCellContextInitialize(v39);
  v6 = 0LL;
  HvpGetCellContextInitialize(&v38);
  v37 = *(_DWORD *)(BugCheckParameter3 + 1872);
  if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL)) )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v33 = 0;
    goto LABEL_49;
  }
  v7 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7, v39);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v7, v39);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v33 = 16;
LABEL_49:
    v19 = -1073741492;
    SetFailureLocation(v24, 0, 9, -1073741492, v33);
    return v19;
  }
  if ( -4 - *(_DWORD *)(CellFlat - 4) < 76 )
  {
    v25 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v34 = 24;
    goto LABEL_101;
  }
  v10 = *(_DWORD *)(CellFlat + 44);
  v11 = 0;
  v12 = v10;
  v36 = v10;
  do
  {
    IsCellAllocated = HvIsCellAllocated(BugCheckParameter3, v10);
    v14 = a5;
    if ( !IsCellAllocated )
    {
      if ( v12 == v10 )
      {
        v19 = -1073741492;
        SetFailureLocation(a5, 0, 9, -1073741492, 128);
        v6 = 0LL;
        goto LABEL_32;
      }
      v6 = 0LL;
      goto LABEL_81;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v10, &v38);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v10, &v38);
    v6 = (_DWORD *)CellPaged;
    if ( !CellPaged )
    {
      v34 = 144;
      goto LABEL_100;
    }
    v16 = -4 - *(_DWORD *)(CellPaged - 4);
    if ( v16 < 0x14 || (v17 = v6[4], v17 + 20 < v17) || v17 + 20 > v16 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v38);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v38);
      v35 = 152;
LABEL_79:
      v6 = 0LL;
      SetFailureLocation(v14, 1, 9, -1073741492, v35);
LABEL_81:
      if ( (v41 & 0x20000) == 0 && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) )
      {
        if ( HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v9 + 44)) )
        {
          v27 = *(unsigned int *)(v9 + 44);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v28 = HvpGetCellFlat(BugCheckParameter3, v27, &v38);
          else
            v28 = HvpGetCellPaged(BugCheckParameter3, v27, &v38);
          v6 = (_DWORD *)v28;
          if ( v28 )
          {
            v29 = -4 - *(_DWORD *)(v28 - 4);
            if ( v29 < 0x14 || (v30 = *(_DWORD *)(v28 + 16), v30 + 20 < v30) || v30 + 20 > v29 )
            {
              v34 = 80;
            }
            else
            {
              if ( RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v28 + 20), v30, 0) )
              {
                v18 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v9 + 44), 0);
                v19 = v18;
                if ( v18 >= 0 )
                {
                  v31 = *(_DWORD *)(v9 + 44);
                  v6[2] = v31;
                  v6[1] = v31;
                  CmpDestroySecurityCache(BugCheckParameter3);
                  CmpInitSecurityCache(BugCheckParameter3);
                  v19 = -1073741267;
                  v32 = *(_QWORD *)(BugCheckParameter3 + 64);
                  *v42 = 1;
                  *(_DWORD *)(v32 + 4088) |= 4u;
                  goto LABEL_32;
                }
                v34 = 96;
LABEL_72:
                v26 = v18;
LABEL_74:
                v25 = v14;
                goto LABEL_102;
              }
              v34 = 64;
            }
          }
          else
          {
            v34 = 48;
          }
        }
        else
        {
          v34 = 32;
        }
      }
      else
      {
        v34 = 112;
      }
LABEL_100:
      v25 = v14;
LABEL_101:
      v19 = -1073741492;
      v26 = -1073741492;
LABEL_102:
      SetFailureLocation(v25, 0, 9, v26, v34);
      goto LABEL_32;
    }
    if ( v10 != v36 && v6[2] != v11 )
    {
      v34 = 160;
      goto LABEL_100;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v6 + 5, v17, 0) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v38);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v38);
      v35 = 168;
      goto LABEL_79;
    }
    if ( !v37 )
    {
      v18 = CmpAddSecurityCellToCache(BugCheckParameter3, v10);
      v19 = v18;
      if ( v18 >= 0 )
        goto LABEL_19;
      v34 = 176;
      goto LABEL_72;
    }
    v40 = 0;
    if ( !CmpFindSecurityCellCacheIndex(BugCheckParameter3, v10, &v40) )
    {
      v19 = -1073741275;
      v34 = 184;
      v26 = -1073741275;
      goto LABEL_74;
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v40 + 8) + 28LL) = 0;
LABEL_19:
    v11 = v10;
    v10 = v6[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v38);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v38);
    v12 = v36;
  }
  while ( v10 != v36 );
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v20 = HvpGetCellFlat(BugCheckParameter3, v10, &v38);
  else
    v20 = HvpGetCellPaged(BugCheckParameter3, v10, &v38);
  v6 = (_DWORD *)v20;
  if ( *(_DWORD *)(v20 + 8) != v11 )
  {
    v34 = 200;
    goto LABEL_100;
  }
  if ( !v37 )
    CmpAdjustSecurityCacheSize(BugCheckParameter3);
  if ( (v41 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
  {
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter3 + 1872); ++i )
    {
      v23 = CmpCheckSecurityCellAccess(BugCheckParameter3, 0);
      v19 = v23;
      if ( v23 < 0 )
      {
        SetFailureLocation(v14, 0, 9, v23, 208);
        if ( v19 != -1073741670 )
          v19 = -1073741492;
        goto LABEL_32;
      }
    }
  }
  v19 = 0;
LABEL_32:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v39);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v39);
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v38);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v38);
  }
  return v19;
}
