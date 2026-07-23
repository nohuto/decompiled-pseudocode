/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1408328B8
 * Callers:
 *     CmCheckRegistry @ 0x140AE4CC0 (CmCheckRegistry.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     CmpAdjustSecurityCacheSize @ 0x140832018 (CmpAdjustSecurityCacheSize.c)
 *     CmpAddSecurityCellToCache @ 0x140832634 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140833A70 (RtlValidRelativeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408798A0 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCheckSecurityCellAccess @ 0x14090AD30 (CmpCheckSecurityCellAccess.c)
 *     CmpInitSecurityCache @ 0x140933134 (CmpInitSecurityCache.c)
 *     CmpDestroySecurityCache @ 0x140965680 (CmpDestroySecurityCache.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r14
  __int64 CellFlat; // rax
  __int64 v8; // r13
  unsigned int v9; // r15d
  unsigned int v10; // esi
  unsigned int v11; // r14d
  char IsCellAllocated; // al
  __int64 v13; // r12
  __int64 CellPaged; // rax
  unsigned int v15; // eax
  ULONG v16; // edx
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rax
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int i; // edi
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // ecx
  ULONG v29; // edx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+20h] [rbp-38h]
  unsigned int v35; // [rsp+30h] [rbp-28h]
  int v36; // [rsp+34h] [rbp-24h]
  __int64 v37; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v38[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v39; // [rsp+A0h] [rbp+48h] BYREF
  int v40; // [rsp+A8h] [rbp+50h]
  _BYTE *v41; // [rsp+B0h] [rbp+58h]
  __int64 v42; // [rsp+B8h] [rbp+60h]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v38[0] = 0LL;
  v37 = 0LL;
  HvpGetCellContextInitialize(v38);
  v6 = 0LL;
  HvpGetCellContextInitialize(&v37);
  v36 = *(_DWORD *)(BugCheckParameter3 + 1872);
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter3,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL)) )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v33 = 0;
    goto LABEL_46;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL));
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v8 = CellFlat;
  if ( !CellFlat )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v33 = 16;
LABEL_46:
    v19 = -1073741492;
    SetFailureLocation(v24, 0, 9, -1073741492, v33);
    return v19;
  }
  if ( -4 - *(_DWORD *)(CellFlat - 4) < 76 )
  {
    v23 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v32 = 24;
LABEL_56:
    v19 = -1073741492;
    v22 = -1073741492;
LABEL_57:
    SetFailureLocation(v23, 0, 9, v22, v32);
    goto LABEL_32;
  }
  v9 = *(_DWORD *)(CellFlat + 44);
  v10 = 0;
  v11 = v9;
  v35 = v9;
  while ( 1 )
  {
    IsCellAllocated = HvIsCellAllocated(BugCheckParameter3, v9);
    v13 = a5;
    if ( !IsCellAllocated )
    {
      if ( v11 != v9 )
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
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v9);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    v6 = (_DWORD *)CellPaged;
    if ( !CellPaged )
    {
      v32 = 144;
      goto LABEL_55;
    }
    v15 = -4 - *(_DWORD *)(CellPaged - 4);
    if ( v15 < 0x14 )
      break;
    v16 = v6[4];
    if ( v16 + 20 < v16 || v16 + 20 > v15 )
      break;
    if ( v9 != v35 && v6[2] != v10 )
    {
      v32 = 160;
      goto LABEL_55;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v6 + 5, v16, 0) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v37);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v37);
      v34 = 168;
      goto LABEL_81;
    }
    if ( v36 )
    {
      v39 = 0;
      if ( !CmpFindSecurityCellCacheIndex(BugCheckParameter3, v9, &v39) )
      {
        v19 = -1073741275;
        v32 = 184;
        v22 = -1073741275;
        goto LABEL_42;
      }
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v39 + 8) + 28LL) = 0;
    }
    else
    {
      v18 = CmpAddSecurityCellToCache(BugCheckParameter3, v9, 1, v17);
      v19 = v18;
      if ( v18 < 0 )
      {
        v32 = 176;
        goto LABEL_41;
      }
    }
    v10 = v9;
    v9 = v6[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v37);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v37);
    v11 = v35;
    if ( v9 == v35 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v20 = HvpGetCellFlat(BugCheckParameter3, v9);
      else
        v20 = HvpGetCellPaged(BugCheckParameter3);
      v6 = (_DWORD *)v20;
      if ( *(_DWORD *)(v20 + 8) != v10 )
      {
        v32 = 200;
        goto LABEL_55;
      }
      if ( !v36 )
        CmpAdjustSecurityCacheSize(BugCheckParameter3);
      if ( (v40 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
      {
        for ( i = 0; i < *(_DWORD *)(BugCheckParameter3 + 1872); ++i )
        {
          v26 = CmpCheckSecurityCellAccess(BugCheckParameter3, 0);
          v19 = v26;
          if ( v26 < 0 )
          {
            SetFailureLocation(v13, 0, 9, v26, 208);
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
    HvpReleaseCellFlat(BugCheckParameter3, &v37);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v37);
  v34 = 152;
LABEL_81:
  v6 = 0LL;
  SetFailureLocation(v13, 1, 9, -1073741492, v34);
LABEL_83:
  if ( (v40 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
  {
    v32 = 112;
    goto LABEL_55;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v8 + 44)) )
  {
    v32 = 32;
    goto LABEL_55;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v27 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v8 + 44));
  else
    v27 = HvpGetCellPaged(BugCheckParameter3);
  v6 = (_DWORD *)v27;
  if ( !v27 )
  {
    v32 = 48;
    goto LABEL_55;
  }
  v28 = -4 - *(_DWORD *)(v27 - 4);
  if ( v28 < 0x14 || (v29 = *(_DWORD *)(v27 + 16), v29 + 20 < v29) || v29 + 20 > v28 )
  {
    v32 = 80;
LABEL_55:
    v23 = v13;
    goto LABEL_56;
  }
  if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v27 + 20), v29, 0) )
  {
    v32 = 64;
    goto LABEL_55;
  }
  v18 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v8 + 44));
  v19 = v18;
  if ( v18 < 0 )
  {
    v32 = 96;
LABEL_41:
    v22 = v18;
LABEL_42:
    v23 = v13;
    goto LABEL_57;
  }
  v30 = *(_DWORD *)(v8 + 44);
  v6[2] = v30;
  v6[1] = v30;
  CmpDestroySecurityCache(BugCheckParameter3);
  CmpInitSecurityCache(BugCheckParameter3);
  v19 = -1073741267;
  v31 = *(_QWORD *)(BugCheckParameter3 + 64);
  *v41 = 1;
  *(_DWORD *)(v31 + 4088) |= 4u;
LABEL_32:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v38);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v38);
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v37);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v37);
  }
  return v19;
}
