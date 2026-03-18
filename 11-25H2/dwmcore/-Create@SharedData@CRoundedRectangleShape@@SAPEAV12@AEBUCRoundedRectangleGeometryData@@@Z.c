/*
 * XREFs of ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18005A1B0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059890 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18005AF80 (--0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1800B2040 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1801B50A0 (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

struct CRoundedRectangleShape::SharedData *__fastcall CRoundedRectangleShape::SharedData::Create(
        const struct CRoundedRectangleGeometryData *a1)
{
  HANDLE v2; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // r8
  char v5; // r10
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  unsigned int v11; // r11d
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm0_4
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  struct CRoundedRectangleShape::SharedData *result; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v22; // rax
  _DWORD *v23; // r8
  __int64 v24; // r9
  char v25; // r10
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  float v30; // xmm5_4
  unsigned int v31; // r11d
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rax
  float v35; // xmm0_4
  __m128 v36; // xmm1
  __m128 v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // rax
  float v40; // xmm4_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm2_4
  unsigned __int64 v46; // [rsp+20h] [rbp-28h]
  unsigned __int64 v47; // [rsp+20h] [rbp-28h]
  unsigned __int64 v48; // [rsp+20h] [rbp-28h]
  unsigned __int64 v49; // [rsp+20h] [rbp-28h]
  unsigned __int64 v50; // [rsp+20h] [rbp-28h]
  unsigned __int64 v51; // [rsp+20h] [rbp-28h]
  unsigned __int64 v52; // [rsp+20h] [rbp-28h]
  unsigned __int64 v53; // [rsp+20h] [rbp-28h]
  unsigned __int64 v54; // [rsp+20h] [rbp-28h]
  unsigned __int64 v55; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((float *)a1 + 12) > 0.0 )
  {
    ProcessHeap = GetProcessHeap();
    v22 = HeapAlloc(ProcessHeap, 0, 0x68uLL);
    v23 = v22;
    if ( !v22 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v24 = 0LL;
    v22[2] = 0;
    v22[16] = 0;
    *(_QWORD *)v22 = &CRoundedRectangleShape::SharedData::`vftable';
    *((_QWORD *)v22 + 9) = 0LL;
    v25 = *((_BYTE *)a1 + 52);
    v26 = *((float *)a1 + 3);
    if ( v25 )
    {
      v27 = *(float *)a1 + *((float *)a1 + 2);
      v26 = v26 + *((float *)a1 + 1);
    }
    else
    {
      v27 = *((float *)a1 + 2);
    }
    v28 = *((float *)a1 + 1);
    if ( (float)(v27 - 0.0000011920929) <= *(float *)a1 || (float)(v26 - 0.0000011920929) <= v28 )
    {
LABEL_93:
      *((_BYTE *)v23 + 68) = 1;
      *((_QWORD *)v23 + 2) = 0LL;
      *((_QWORD *)v23 + 3) = 0LL;
      *((_QWORD *)v23 + 4) = 0LL;
      v23[16] = 0;
    }
    else
    {
      v29 = v27 - *(float *)a1;
      v30 = v26 - v28;
      v31 = 1;
      v32 = 0;
      if ( !v25 )
        v31 = 4;
      v33 = 16LL;
      while ( v32 < v31 )
      {
        if ( v25 )
          v34 = 16LL;
        else
          v34 = 8LL * v32 + 16;
        v35 = *(float *)((char *)a1 + v34);
        if ( v35 > v29 )
        {
          v43 = *(float *)((char *)a1 + v34 + 4);
          if ( v43 > v30 )
          {
            v44 = (float)((float)(v35 - v29) - 0.0) / v35;
            if ( v44 > 0.0 )
            {
              v45 = (float)((float)(v43 - v30) - 0.0) / v43;
              if ( v45 > 0.0 && (float)((float)(v45 * v45) + (float)(v44 * v44)) > 1.0 )
                goto LABEL_93;
            }
          }
        }
        ++v32;
      }
      if ( v25 )
      {
        *((_BYTE *)v23 + 68) = 1;
        *((_QWORD *)v23 + 2) = *(_QWORD *)a1;
        *((_QWORD *)v23 + 3) = *((_QWORD *)a1 + 1);
        if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(a1, 0LL) )
          v55 = _mm_unpacklo_ps((__m128)*((unsigned int *)a1 + 4), (__m128)*((unsigned int *)a1 + 5)).m128_u64[0];
        else
          v55 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        *((_QWORD *)v23 + 4) = v55;
      }
      else
      {
        *((_BYTE *)v23 + 68) = 0;
        v23[4] = *(_DWORD *)a1;
        v23[5] = *((_DWORD *)a1 + 1);
        v23[6] = *((_DWORD *)a1 + 2);
        v23[7] = *((_DWORD *)a1 + 3);
        v36 = (__m128)*((unsigned int *)a1 + 4);
        if ( v36.m128_f32[0] <= 0.0 || (v37 = (__m128)*((unsigned int *)a1 + 5), v37.m128_f32[0] <= 0.0) )
          v50 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v50 = _mm_unpacklo_ps(v36, v37).m128_u64[0];
        v38 = 16LL;
        *((_QWORD *)v23 + 4) = v50;
        if ( !*((_BYTE *)a1 + 52) )
          v38 = 24LL;
        if ( *(float *)((char *)a1 + v38) <= 0.0 || *(float *)((char *)a1 + v38 + 4) <= 0.0 )
          v51 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v51 = _mm_unpacklo_ps((__m128)*((unsigned int *)a1 + 6), (__m128)*((unsigned int *)a1 + 7)).m128_u64[0];
        v39 = 16LL;
        *((_QWORD *)v23 + 5) = v51;
        if ( !*((_BYTE *)a1 + 52) )
          v39 = 32LL;
        if ( *(float *)((char *)a1 + v39) <= 0.0 || *(float *)((char *)a1 + v39 + 4) <= 0.0 )
          v52 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v52 = _mm_unpacklo_ps((__m128)*((unsigned int *)a1 + 8), (__m128)*((unsigned int *)a1 + 9)).m128_u64[0];
        *((_QWORD *)v23 + 6) = v52;
        if ( !*((_BYTE *)a1 + 52) )
          v33 = 40LL;
        if ( *(float *)((char *)a1 + v33) <= 0.0 || *(float *)((char *)a1 + v33 + 4) <= 0.0 )
          v53 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v53 = _mm_unpacklo_ps((__m128)*((unsigned int *)a1 + 10), (__m128)*((unsigned int *)a1 + 11)).m128_u64[0];
        *((_QWORD *)v23 + 7) = v53;
      }
    }
    v23[16] = *((_DWORD *)a1 + 12);
    *(_QWORD *)v23 = &CRoundedRectangleShape::FlattenedShapeSharedData::`vftable';
    result = (struct CRoundedRectangleShape::SharedData *)v23;
    *((_QWORD *)v23 + 10) = v24;
    *((_QWORD *)v23 + 11) = v24;
    *((_QWORD *)v23 + 12) = v24;
  }
  else
  {
    v2 = GetProcessHeap();
    v3 = HeapAlloc(v2, 0, 0x50uLL);
    v4 = v3;
    if ( !v3 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v3[2] = 0;
    v3[16] = 0;
    *(_QWORD *)v3 = &CRoundedRectangleShape::SharedData::`vftable';
    *((_QWORD *)v3 + 9) = 0LL;
    v5 = *((_BYTE *)a1 + 52);
    if ( v5 )
    {
      v6 = *(float *)a1 + *((float *)a1 + 2);
      v7 = *((float *)a1 + 1) + *((float *)a1 + 3);
    }
    else
    {
      v6 = *((float *)a1 + 2);
      v7 = *((float *)a1 + 3);
    }
    v8 = *((float *)a1 + 1);
    if ( (float)(v6 - 0.0000011920929) <= *(float *)a1 || (float)(v7 - 0.0000011920929) <= v8 )
    {
LABEL_88:
      *((_BYTE *)v4 + 68) = 1;
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 4) = 0LL;
      v4[16] = 0;
    }
    else
    {
      v9 = v6 - *(float *)a1;
      v10 = v7 - v8;
      v11 = 1;
      v12 = 0;
      if ( !v5 )
        v11 = 4;
      v13 = 16LL;
      while ( v12 < v11 )
      {
        if ( v5 )
          v14 = 16LL;
        else
          v14 = 8LL * v12 + 16;
        v15 = *(float *)((char *)a1 + v14);
        if ( v15 > v9 )
        {
          v40 = *(float *)((char *)a1 + v14 + 4);
          if ( v40 > v10 )
          {
            v41 = (float)((float)(v15 - v9) - 0.0) / v15;
            if ( v41 > 0.0 )
            {
              v42 = (float)((float)(v40 - v10) - 0.0) / v40;
              if ( v42 > 0.0 && (float)((float)(v42 * v42) + (float)(v41 * v41)) > 1.0 )
                goto LABEL_88;
            }
          }
        }
        ++v12;
      }
      if ( v5 )
      {
        *((_BYTE *)v4 + 68) = 1;
        *((_QWORD *)v4 + 2) = *(_QWORD *)a1;
        *((_QWORD *)v4 + 3) = *((_QWORD *)a1 + 1);
        if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(a1, 0LL) )
          v54 = _mm_unpacklo_ps((__m128)*((unsigned int *)a1 + 4), (__m128)*((unsigned int *)a1 + 5)).m128_u64[0];
        else
          v54 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        *((_QWORD *)v4 + 4) = v54;
      }
      else
      {
        *((_BYTE *)v4 + 68) = 0;
        v4[4] = *(_DWORD *)a1;
        v4[5] = *((_DWORD *)a1 + 1);
        v4[6] = *((_DWORD *)a1 + 2);
        v4[7] = *((_DWORD *)a1 + 3);
        v16 = (__m128)*((unsigned int *)a1 + 4);
        if ( v16.m128_f32[0] <= 0.0 || (v17 = (__m128)*((unsigned int *)a1 + 5), v17.m128_f32[0] <= 0.0) )
          v46 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v46 = _mm_unpacklo_ps(v16, v17).m128_u64[0];
        v18 = 16LL;
        *((_QWORD *)v4 + 4) = v46;
        if ( !*((_BYTE *)a1 + 52) )
          v18 = 24LL;
        if ( *(float *)((char *)a1 + v18) <= 0.0 || *(float *)((char *)a1 + v18 + 4) <= 0.0 )
          v47 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v47 = _mm_unpacklo_ps((__m128)*((unsigned int *)a1 + 6), (__m128)*((unsigned int *)a1 + 7)).m128_u64[0];
        v19 = 16LL;
        *((_QWORD *)v4 + 5) = v47;
        if ( !*((_BYTE *)a1 + 52) )
          v19 = 32LL;
        if ( *(float *)((char *)a1 + v19) <= 0.0 || *(float *)((char *)a1 + v19 + 4) <= 0.0 )
          v48 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v48 = _mm_unpacklo_ps((__m128)*((unsigned int *)a1 + 8), (__m128)*((unsigned int *)a1 + 9)).m128_u64[0];
        *((_QWORD *)v4 + 6) = v48;
        if ( !*((_BYTE *)a1 + 52) )
          v13 = 40LL;
        if ( *(float *)((char *)a1 + v13) <= 0.0 || *(float *)((char *)a1 + v13 + 4) <= 0.0 )
          v49 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v49 = _mm_unpacklo_ps((__m128)*((unsigned int *)a1 + 10), (__m128)*((unsigned int *)a1 + 11)).m128_u64[0];
        *((_QWORD *)v4 + 7) = v49;
      }
    }
    v4[16] = *((_DWORD *)a1 + 12);
    return (struct CRoundedRectangleShape::SharedData *)v4;
  }
  return result;
}
