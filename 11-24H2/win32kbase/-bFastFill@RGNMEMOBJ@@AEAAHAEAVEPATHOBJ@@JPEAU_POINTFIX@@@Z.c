/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1400653B4
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x140065CCC (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x140029050 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFill(RGNMEMOBJ *this, struct EPATHOBJ *a2, int a3, struct _POINTFIX *a4)
{
  struct _POINTFIX *v4; // r14
  int v7; // r13d
  struct _POINTFIX *v8; // r11
  FIX y; // ebx
  struct _POINTFIX *v10; // rdi
  int v11; // r10d
  FIX v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct REGION *Region; // rax
  unsigned int v18; // r8d
  _QWORD *v19; // rax
  struct REGION_CORE *v20; // rdx
  struct REGION_CORE *v21; // rdx
  unsigned __int64 v22; // rdx
  struct SCAN *pScan; // r9
  int v24; // r12d
  struct SCAN *v25; // rdi
  __int64 v26; // rax
  __int8 *i; // r8
  int *v28; // r13
  struct _POINTFIX *v29; // rcx
  FIX v30; // r10d
  int v31; // r14d
  unsigned int v32; // r10d
  int v33; // r13d
  unsigned int v34; // ecx
  int v35; // r15d
  int v36; // r11d
  bool v37; // zf
  int v38; // r14d
  int v39; // r14d
  int v40; // edx
  int v41; // r8d
  int v42; // r13d
  bool v43; // sf
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int v47; // r15d
  int v48; // r13d
  __int128 v49; // xmm8
  __m128i v50; // xmm6
  int v51; // r8d
  __int128 v52; // xmm9
  __m128i v53; // xmm7
  int v54; // r10d
  int v55; // r14d
  int v56; // eax
  int v57; // ecx
  __m128i v58; // xmm5
  __m128i v59; // xmm4
  __int64 v60; // r11
  __int32 v61; // eax
  int v62; // r10d
  __int32 v63; // r8d
  struct _POINTFIX *v64; // rax
  __int64 v65; // rbx
  unsigned int v66; // eax
  unsigned int v67; // r8d
  unsigned int v69; // ecx
  int v70; // edx
  FIX v71; // ecx
  FIX *v72; // rax
  __m128i v73; // xmm1
  __int128 v74; // xmm0
  __m128i v75; // xmm2
  struct _POINTFIX *v76; // rdx
  FIX v77; // ecx
  FIX *p_y; // rax
  int v79; // eax
  int v80; // [rsp+28h] [rbp-99h]
  int v81; // [rsp+28h] [rbp-99h]
  int v82; // [rsp+2Ch] [rbp-95h]
  char *v83; // [rsp+30h] [rbp-91h]
  int v84; // [rsp+30h] [rbp-91h]
  __int64 v85; // [rsp+38h] [rbp-89h]
  __m128i v86; // [rsp+48h] [rbp-79h]
  __m128i v87; // [rsp+58h] [rbp-69h]
  __int64 v88; // [rsp+68h] [rbp-59h]
  __m128i v89; // [rsp+70h] [rbp-51h] BYREF
  __m128i v90; // [rsp+80h] [rbp-41h]
  __int64 v91; // [rsp+90h] [rbp-31h]
  struct _POINTFIX *v92; // [rsp+98h] [rbp-29h]
  int v94; // [rsp+138h] [rbp+77h]

  v94 = a3;
  v4 = a4;
  v7 = a3;
  v8 = v4;
  y = v4->y;
  v10 = v4;
  v11 = a3 - 1;
  v92 = &v4[a3 - 1];
  if ( v4[1].y <= y )
  {
    while ( 1 )
    {
      ++v10;
      if ( !--v11 )
        break;
      if ( v10[1].y > v10->y )
      {
        v76 = v10;
        while ( --v11 )
        {
          v77 = v76[2].y;
          ++v76;
          p_y = &v76->y;
          if ( v77 < v76->y )
          {
            while ( 1 )
            {
              if ( v77 < y )
                return 0LL;
              if ( !--v11 )
                break;
              v77 = p_y[4];
              p_y += 2;
              if ( v77 > *p_y )
                return 0LL;
            }
            goto LABEL_7;
          }
        }
        break;
      }
    }
  }
  else
  {
    while ( --v11 )
    {
      v12 = v8[1].y;
      ++v8;
      if ( v8[1].y < v12 )
      {
        while ( --v11 )
        {
          v71 = v8[2].y;
          ++v8;
          v72 = &v8->y;
          if ( v71 > v8->y )
          {
            v10 = v8;
            do
            {
              if ( v71 > y )
                break;
              if ( !--v11 )
                goto LABEL_7;
              v71 = v72[4];
              v72 += 2;
            }
            while ( v71 >= *v72 );
            return 0LL;
          }
        }
        if ( v8[1].y < y )
          v10 = v8 + 1;
        break;
      }
    }
  }
LABEL_7:
  v13 = (v10->y + 15) >> 4;
  v14 = *(int *)(*((_QWORD *)a2 + 1) + 60LL) - (__int64)*(int *)(*((_QWORD *)a2 + 1) + 52LL);
  v88 = 8LL;
  v91 = 4294967288LL;
  v90.m128i_i64[1] = (__int64)v10;
  v87.m128i_i64[1] = (__int64)v10;
  v15 = 24 * ((v14 + 15) >> 4) + 32;
  if ( v15 > 0x7FFFFFFF )
    return 0LL;
  v16 = 112LL;
  if ( (unsigned __int64)v15 > 0x70 )
    v16 = (unsigned int)v15;
  Region = RGNMEMOBJ::AllocateRegion(v16);
  *(_QWORD *)this = Region;
  if ( !Region )
    return 0LL;
  REGION_CORE::set_sizeScan((struct REGION *)((char *)Region + 24), 0LL, v18);
  *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 48LL) = 0;
  v19 = (_QWORD *)(*(_QWORD *)this + 80LL);
  v19[1] = v19;
  *v19 = v19;
  REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL), v20);
  REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)this + 24LL));
  pScan = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL), v21);
  v24 = 1;
  *(_DWORD *)pScan = 0;
  v25 = (struct SCAN *)((char *)pScan + 16);
  *((_DWORD *)pScan + 3) = 0;
  *((_DWORD *)pScan + 1) = 0x80000000;
  *((_DWORD *)pScan + 2) = v13;
LABEL_12:
  v26 = 1LL;
  for ( i = &v89.m128i_i8[4]; ; i -= 40 )
  {
    v83 = i;
    v85 = v26;
    if ( v26 < 0 )
    {
      v22 = HIDWORD(v88);
      v47 = v89.m128i_i32[1];
      v48 = v86.m128i_i32[1];
      if ( SHIDWORD(v91) < SHIDWORD(v88) )
        v22 = HIDWORD(v91);
      HIDWORD(v91) -= v22;
      HIDWORD(v88) -= v22;
      v84 = v89.m128i_i32[3];
      if ( v89.m128i_i32[3] | v86.m128i_i32[3] || v89.m128i_i32[1] | v86.m128i_i32[1] )
      {
        v49 = (unsigned __int64)v91;
        v50 = v90;
        v51 = v89.m128i_i32[2];
        v52 = (unsigned __int64)v88;
        v53 = v87;
        v54 = v86.m128i_i32[2];
        v55 = v86.m128i_i32[3];
        v82 = v90.m128i_i32[0];
        v56 = v89.m128i_i32[0];
        v81 = v87.m128i_i32[0];
        v57 = v86.m128i_i32[0];
        do
        {
          v58 = v86;
          v59 = v89;
          while ( 1 )
          {
            if ( v57 - v56 > 0 )
            {
              if ( *(_DWORD *)pScan != 2 || *((_DWORD *)pScan + 3) != v56 || *((_DWORD *)pScan + 4) != v57 )
              {
                *(_DWORD *)v25 = 2;
                *((_DWORD *)v25 + 5) = 2;
                v60 = 24LL;
                *((_DWORD *)v25 + 3) = v56;
                *((_DWORD *)v25 + 4) = v57;
LABEL_45:
                *((_DWORD *)v25 + 1) = v13;
                pScan = v25;
                *((_DWORD *)v25 + 2) = ++v13;
                v25 = (struct SCAN *)((char *)v25 + v60);
                ++v24;
                goto LABEL_46;
              }
              goto LABEL_69;
            }
            if ( v57 == v56 )
              break;
            v73 = v59;
            v74 = v49;
            v59 = v58;
            v86 = v73;
            v75 = v50;
            v56 = _mm_cvtsi128_si32(v58);
            v50 = v53;
            v81 = _mm_cvtsi128_si32(v75);
            v49 = v52;
            v82 = _mm_cvtsi128_si32(v53);
            v52 = v74;
            v53 = v75;
            v84 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 12));
            v47 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
            v89 = v58;
            v58 = v73;
            v55 = _mm_cvtsi128_si32(_mm_srli_si128(v73, 12));
            v51 = _mm_cvtsi128_si32(_mm_srli_si128(v59, 8));
            v48 = _mm_cvtsi128_si32(_mm_srli_si128(v73, 4));
            v54 = _mm_cvtsi128_si32(_mm_srli_si128(v73, 8));
            v57 = _mm_cvtsi128_si32(v73);
          }
          if ( *(_DWORD *)pScan )
          {
            *(_DWORD *)v25 = 0;
            *((_DWORD *)v25 + 3) = 0;
            v60 = 16LL;
            goto LABEL_45;
          }
LABEL_69:
          *((_DWORD *)pScan + 2) = ++v13;
LABEL_46:
          v57 += v48;
          v43 = v55 + v54 < 0;
          v54 += v55;
          v86.m128i_i32[0] = v57;
          v86.m128i_i32[2] = v54;
          if ( !v43 )
          {
            v54 -= v81;
            ++v57;
            v86.m128i_i32[2] = v54;
            v86.m128i_i32[0] = v57;
          }
          v56 += v47;
          v43 = v84 + v51 < 0;
          v51 += v84;
          v89.m128i_i32[2] = v51;
          v89.m128i_i32[0] = v56;
          if ( !v43 )
          {
            v51 -= v82;
            ++v56;
            v89.m128i_i32[2] = v51;
            v89.m128i_i32[0] = v56;
          }
          v22 = (unsigned int)(v22 - 1);
        }
        while ( (_DWORD)v22 );
        v4 = a4;
        v90 = v50;
        v87 = v53;
        v91 = v49;
        v88 = v52;
        goto LABEL_52;
      }
      v61 = v86.m128i_i32[0];
      v62 = *(_DWORD *)pScan;
      if ( v89.m128i_i32[0] == v86.m128i_i32[0] )
      {
        v79 = v13 + v22;
        if ( !v62 )
        {
          *((_DWORD *)pScan + 2) = v79;
          v13 += v22;
          goto LABEL_52;
        }
        *(_DWORD *)v25 = 0;
        pScan = v25;
        *((_DWORD *)v25 + 1) = v13;
        v13 += v22;
        *((_DWORD *)v25 + 3) = 0;
        *((_DWORD *)v25 + 2) = v79;
        v25 = (struct SCAN *)((char *)v25 + 16);
      }
      else
      {
        v63 = v89.m128i_i32[0];
        if ( v89.m128i_i32[0] <= v86.m128i_i32[0] )
        {
          v63 = v86.m128i_i32[0];
          v61 = v89.m128i_i32[0];
        }
        if ( v62 == 2 && *((_DWORD *)pScan + 3) == v61 && *((_DWORD *)pScan + 4) == v63 )
        {
          v13 += v22;
          *((_DWORD *)pScan + 2) = v13;
          goto LABEL_52;
        }
        *(_DWORD *)v25 = 2;
        pScan = v25;
        *((_DWORD *)v25 + 1) = v13;
        v13 += v22;
        *((_DWORD *)v25 + 2) = v13;
        *((_DWORD *)v25 + 3) = v61;
        *((_DWORD *)v25 + 4) = v63;
        *((_DWORD *)v25 + 5) = 2;
        v25 = (struct SCAN *)((char *)v25 + 24);
      }
      ++v24;
LABEL_52:
      v7 = v94;
      goto LABEL_12;
    }
    if ( !*((_DWORD *)i + 8) )
      break;
LABEL_35:
    --v26;
  }
  while ( 1 )
  {
    v94 = v7 - 1;
    if ( v7 - 1 < 0 )
      break;
    v28 = *(int **)(i + 20);
    v29 = (struct _POINTFIX *)((char *)v28 + *((int *)i + 7));
    *(_QWORD *)(i + 20) = v29;
    if ( v29 < v4 )
    {
      v64 = v92;
      *(_QWORD *)(i + 20) = v92;
      v29 = v64;
    }
    else if ( v29 > v92 )
    {
      *(_QWORD *)(i + 20) = v4;
      v29 = v4;
    }
    v30 = v29->y;
    *((_DWORD *)i + 8) = ((v30 + 15) >> 4) - v13;
    if ( ((v30 + 15) >> 4) - v13 > 0 )
    {
      v31 = v28[1];
      v32 = v30 - v31;
      v33 = *v28;
      v34 = v29->x - v33;
      if ( (v34 & 0x80000000) != 0 )
      {
        v69 = -v34;
        if ( (int)v69 < (int)v32 )
        {
          *(_DWORD *)i = -1;
          v36 = v32 - v69;
          *((_DWORD *)i + 2) = v32 - v69;
          v35 = -1;
        }
        else
        {
          v70 = v69 % v32;
          v35 = -(int)(v69 / v32);
          *(_DWORD *)i = v35;
          v36 = v69 % v32;
          *((_DWORD *)i + 2) = v69 % v32;
          if ( (int)(v69 % v32) > 0 )
          {
            *(_DWORD *)i = --v35;
            v36 = v32 - v70;
            *((_DWORD *)i + 2) = v32 - v70;
          }
        }
      }
      else if ( (int)v34 >= (int)v32 )
      {
        v35 = v34 / v32;
        *(_DWORD *)i = v34 / v32;
        v36 = v34 % v32;
        *((_DWORD *)i + 2) = v34 % v32;
      }
      else
      {
        *(_DWORD *)i = 0;
        v35 = 0;
        v36 = v34;
        *((_DWORD *)i + 2) = v34;
      }
      v38 = v31 & 0xF;
      v37 = v38 == 0;
      *((_DWORD *)i + 3) = v32;
      v80 = v38;
      v39 = v33;
      v40 = -1;
      if ( !v37 && 16 - v80 > 0 )
      {
        v41 = 16 - v80;
        do
        {
          v42 = v35 + v33;
          v43 = v36 + v40 < 0;
          v44 = v36 + v40;
          v45 = v44;
          v39 = v42 + 1;
          if ( v43 )
            v39 = v42;
          v40 = v44 - v32;
          v33 = v39;
          if ( v45 < 0 )
            v40 = v45;
          --v41;
        }
        while ( v41 > 0 );
        i = v83;
      }
      v46 = v39 & 0xF;
      if ( (v39 & 0xF) != 0 )
      {
        v39 += 15;
        v40 -= v32 * (16 - v46);
      }
      v26 = v85;
      v7 = v94;
      v22 = (unsigned int)(v40 >> 4);
      *((_DWORD *)i - 1) = v39 >> 4;
      v4 = a4;
      *((_DWORD *)i + 1) = v22;
      goto LABEL_35;
    }
    v7 = v94;
  }
  if ( *(_DWORD *)pScan )
  {
    ++v24;
    *(_DWORD *)v25 = 0;
    *((_QWORD *)v25 + 1) = 0x7FFFFFFFLL;
    *((_DWORD *)v25 + 1) = v13;
    LODWORD(v25) = (_DWORD)v25 + 16;
  }
  else
  {
    *((_DWORD *)pScan + 2) = 0x7FFFFFFF;
  }
  *(_DWORD *)(*(_QWORD *)this + 48LL) = v24;
  v65 = *(_QWORD *)this;
  v66 = (unsigned int)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL), (struct REGION_CORE *)v22);
  REGION_CORE::set_sizeScan((REGION_CORE *)(v65 + 24), (struct REGION_CORE *)((unsigned int)v25 - v66), v67);
  return 1LL;
}
