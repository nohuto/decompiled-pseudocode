/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC
 * Callers:
 *     CmCheckRegistry @ 0x140AE33E0 (CmCheckRegistry.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14041FBC0 (CmpFindSecurityCellCacheIndex.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14085B000 (RtlValidRelativeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x140875570 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpCheckSecurityCellAccess @ 0x1409172C0 (CmpCheckSecurityCellAccess.c)
 *     CmpInitSecurityCache @ 0x140930FF4 (CmpInitSecurityCache.c)
 *     CmpDestroySecurityCache @ 0x14097CE70 (CmpDestroySecurityCache.c)
 *     CmpAddSecurityCellToCache @ 0x1409A1310 (CmpAddSecurityCellToCache.c)
 *     CmpAdjustSecurityCacheSize @ 0x1409A1594 (CmpAdjustSecurityCacheSize.c)
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
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int i; // edi
  int v26; // eax
  ULONG_PTR v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // ecx
  ULONG v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  int v36; // [rsp+20h] [rbp-38h]
  int v37; // [rsp+20h] [rbp-38h]
  int v38; // [rsp+20h] [rbp-38h]
  unsigned int v39; // [rsp+30h] [rbp-28h]
  int v40; // [rsp+34h] [rbp-24h]
  __int64 v41; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v42[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+48h] BYREF
  int v44; // [rsp+A8h] [rbp+50h]
  _BYTE *v45; // [rsp+B0h] [rbp+58h]
  __int64 v46; // [rsp+B8h] [rbp+60h]

  v46 = a4;
  v45 = a3;
  v44 = a2;
  *(_QWORD *)v42 = 0LL;
  v41 = 0LL;
  HvpGetCellContextInitialize(v42);
  v6 = 0LL;
  HvpGetCellContextInitialize(&v41);
  v40 = *(_DWORD *)(BugCheckParameter3 + 1872);
  if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL)) )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v37 = 0;
    goto LABEL_46;
  }
  v7 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7, v42);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v7, v42);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v37 = 16;
LABEL_46:
    v19 = -1073741492;
    SetFailureLocation(v24, 0, 9, -1073741492, v37);
    return v19;
  }
  if ( -4 - *(_DWORD *)(CellFlat - 4) < 76 )
  {
    v23 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v36 = 24;
LABEL_56:
    v19 = -1073741492;
    v22 = -1073741492;
LABEL_57:
    SetFailureLocation(v23, 0, 9, v22, v36);
    goto LABEL_32;
  }
  v10 = *(_DWORD *)(CellFlat + 44);
  v11 = 0;
  v12 = v10;
  v39 = v10;
  while ( 1 )
  {
    IsCellAllocated = HvIsCellAllocated(BugCheckParameter3, v10);
    v14 = a5;
    if ( !IsCellAllocated )
    {
      if ( v12 != v10 )
      {
        v6 = 0LL;
        goto LABEL_83;
      }
      v19 = -1073741492;
      SetFailureLocation(a5, 0, 9, -1073741492, 128);
      v6 = 0LL;
      goto LABEL_32;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v10, &v41);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v10, &v41);
    v6 = (_DWORD *)CellPaged;
    if ( !CellPaged )
    {
      v36 = 144;
      goto LABEL_55;
    }
    v16 = -4 - *(_DWORD *)(CellPaged - 4);
    if ( v16 < 0x14 )
      break;
    v17 = v6[4];
    if ( v17 + 20 < v17 || v17 + 20 > v16 )
      break;
    if ( v10 != v39 && v6[2] != v11 )
    {
      v36 = 160;
      goto LABEL_55;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v6 + 5, v17, 0) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v41);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v41);
      v38 = 168;
      goto LABEL_81;
    }
    if ( v40 )
    {
      v43 = 0;
      if ( !CmpFindSecurityCellCacheIndex(BugCheckParameter3, v10, &v43) )
      {
        v19 = -1073741275;
        v36 = 184;
        v22 = -1073741275;
        goto LABEL_42;
      }
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v43 + 8) + 28LL) = 0;
    }
    else
    {
      v18 = CmpAddSecurityCellToCache(BugCheckParameter3, v10);
      v19 = v18;
      if ( v18 < 0 )
      {
        v36 = 176;
        goto LABEL_41;
      }
    }
    v11 = v10;
    v10 = v6[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v41);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v41);
    v12 = v39;
    if ( v10 == v39 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v20 = HvpGetCellFlat(BugCheckParameter3, v10, &v41);
      else
        v20 = HvpGetCellPaged(BugCheckParameter3, v10, &v41);
      v6 = (_DWORD *)v20;
      if ( *(_DWORD *)(v20 + 8) != v11 )
      {
        v36 = 200;
        goto LABEL_55;
      }
      if ( !v40 )
        CmpAdjustSecurityCacheSize(BugCheckParameter3);
      if ( (v44 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
      {
        for ( i = 0; i < *(_DWORD *)(BugCheckParameter3 + 1872); ++i )
        {
          v26 = CmpCheckSecurityCellAccess(BugCheckParameter3);
          v19 = v26;
          if ( v26 < 0 )
          {
            SetFailureLocation(v14, 0, 9, v26, 208);
            if ( v19 != -1073741670 )
              v19 = -1073741492;
            goto LABEL_32;
          }
        }
      }
      v19 = 0;
      goto LABEL_32;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v41);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v41);
  v38 = 152;
LABEL_81:
  v6 = 0LL;
  SetFailureLocation(v14, 1, 9, -1073741492, v38);
LABEL_83:
  if ( (v44 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
  {
    v36 = 112;
    goto LABEL_55;
  }
  if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v9 + 44)) )
  {
    v36 = 32;
    goto LABEL_55;
  }
  v27 = *(unsigned int *)(v9 + 44);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v28 = HvpGetCellFlat(BugCheckParameter3, v27, &v41);
  else
    v28 = HvpGetCellPaged(BugCheckParameter3, v27, &v41);
  v6 = (_DWORD *)v28;
  if ( !v28 )
  {
    v36 = 48;
    goto LABEL_55;
  }
  v29 = -4 - *(_DWORD *)(v28 - 4);
  if ( v29 < 0x14 || (v30 = *(_DWORD *)(v28 + 16), v30 + 20 < v30) || v30 + 20 > v29 )
  {
    v36 = 80;
LABEL_55:
    v23 = v14;
    goto LABEL_56;
  }
  if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v28 + 20), v30, 0) )
  {
    v36 = 64;
    goto LABEL_55;
  }
  v18 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v9 + 44), 0);
  v19 = v18;
  if ( v18 < 0 )
  {
    v36 = 96;
LABEL_41:
    v22 = v18;
LABEL_42:
    v23 = v14;
    goto LABEL_57;
  }
  v34 = *(_DWORD *)(v9 + 44);
  v6[2] = v34;
  v6[1] = v34;
  CmpDestroySecurityCache(BugCheckParameter3, v31, v32, v33);
  CmpInitSecurityCache(BugCheckParameter3);
  v19 = -1073741267;
  v35 = *(_QWORD *)(BugCheckParameter3 + 64);
  *v45 = 1;
  *(_DWORD *)(v35 + 4088) |= 4u;
LABEL_32:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v42);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v42);
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v41);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v41);
  }
  return v19;
}
