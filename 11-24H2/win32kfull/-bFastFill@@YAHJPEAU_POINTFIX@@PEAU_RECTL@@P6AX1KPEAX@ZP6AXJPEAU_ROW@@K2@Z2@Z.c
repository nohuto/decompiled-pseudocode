/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140124DF4
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1401244C4 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bFastFill(
        int a1,
        struct _POINTFIX *a2,
        __m128i *a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  struct _POINTFIX *v6; // r13
  void *v7; // r11
  struct _POINTFIX *v8; // rbx
  int v9; // r10d
  FIX y; // r8d
  struct _POINTFIX *v11; // rcx
  int v12; // r12d
  int *v13; // r15
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // ebx
  int i; // eax
  __int64 v18; // r8
  int *v19; // rdx
  struct _POINTFIX *v20; // rcx
  FIX v21; // r9d
  unsigned __int32 v22; // r9d
  int v23; // r11d
  unsigned int v24; // ecx
  int v25; // edi
  int v26; // r10d
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // r11d
  int v31; // edx
  int v32; // eax
  int v33; // edi
  __int32 v34; // edx
  int v35; // ecx
  int v36; // r9d
  __int32 v37; // eax
  __int32 v38; // r8d
  bool v39; // sf
  __int32 v40; // edx
  __int32 v41; // r8d
  int v42; // edx
  int v43; // r8d
  int v44; // r15d
  int v45; // r15d
  int v46; // eax
  unsigned int v47; // ecx
  struct _POINTFIX *v49; // rax
  int v50; // edx
  __int64 v51; // r9
  __int32 v52; // edx
  int v53; // r8d
  FIX v54; // ecx
  FIX *p_y; // rax
  __int64 v56; // r8
  __int8 *v57; // rdx
  struct _POINTFIX *v58; // rcx
  unsigned __int64 v59; // rax
  __int32 v60; // edi
  __int64 v61; // r10
  unsigned __int64 v62; // r11
  unsigned __int64 v63; // rdx
  int v64; // ecx
  int v65; // eax
  unsigned int v66; // [rsp+30h] [rbp-2A8h]
  __m128i v67; // [rsp+50h] [rbp-288h]
  __m128i v68; // [rsp+60h] [rbp-278h]
  __m128i v69; // [rsp+70h] [rbp-268h]
  __int64 v70; // [rsp+80h] [rbp-258h]
  __m128i v71; // [rsp+88h] [rbp-250h]
  __m128i v72; // [rsp+98h] [rbp-240h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-230h]
  int *v74; // [rsp+B0h] [rbp-228h]
  __int32 v75; // [rsp+B8h] [rbp-220h]
  struct _POINTFIX *v76; // [rsp+C0h] [rbp-218h]
  int v77; // [rsp+C8h] [rbp-210h]
  int v78; // [rsp+CCh] [rbp-20Ch]
  void (*v79)(int, struct _ROW *, unsigned int, void *); // [rsp+D0h] [rbp-208h]
  struct _POINTFIX *v80; // [rsp+D8h] [rbp-200h]
  __m128i *v81; // [rsp+E0h] [rbp-1F8h]
  unsigned int v82; // [rsp+E8h] [rbp-1F0h]
  void (*v83)(struct _RECTL *, unsigned int, void *); // [rsp+F0h] [rbp-1E8h]
  struct _POINTFIX *v84; // [rsp+100h] [rbp-1D8h]
  __int64 v85; // [rsp+108h] [rbp-1D0h]
  __m128i v86; // [rsp+110h] [rbp-1C8h]
  __m128i v87; // [rsp+120h] [rbp-1B8h]
  __int64 v88; // [rsp+130h] [rbp-1A8h]
  __int128 v89; // [rsp+138h] [rbp-1A0h] BYREF
  _BYTE v90[320]; // [rsp+150h] [rbp-188h] BYREF
  int v91; // [rsp+2E0h] [rbp+8h]

  v91 = a1;
  v6 = a2;
  v76 = a2;
  v84 = a2;
  v81 = a3;
  v83 = a4;
  v79 = a5;
  v7 = a6;
  v8 = a2;
  v80 = &a2[a1 - 1];
  v9 = a1 - 1;
  y = a2->y;
  if ( a2[1].y <= y )
  {
    do
    {
      ++v8;
      if ( !--v9 )
        goto LABEL_13;
    }
    while ( v8[1].y <= v8->y );
    v11 = v8;
    do
    {
      if ( !--v9 )
        goto LABEL_13;
      ++v11;
    }
    while ( v11[1].y >= v11->y );
    do
    {
      if ( v11[1].y < y )
        break;
      if ( !--v9 )
        goto LABEL_13;
      ++v11;
    }
    while ( v11[1].y <= v11->y );
    return 0LL;
  }
  while ( --v9 )
  {
    ++a2;
    if ( a2[1].y < a2->y )
    {
      while ( --v9 )
      {
        ++a2;
        v54 = a2[1].y;
        p_y = &a2->y;
        if ( v54 > a2->y )
        {
          v8 = a2;
          do
          {
            if ( v54 > y )
              break;
            if ( !--v9 )
              goto LABEL_13;
            p_y += 2;
            v54 = p_y[2];
          }
          while ( v54 >= *p_y );
          return 0LL;
        }
      }
      if ( a2[1].y < y )
        v8 = a2 + 1;
      break;
    }
  }
LABEL_13:
  v73 = 4294967288LL;
  v70 = 8LL;
  v72.m128i_i64[1] = (__int64)v8;
  v69.m128i_i64[1] = (__int64)v8;
  v12 = 0;
  v66 = 0;
  v13 = (int *)v90;
  v74 = (int *)v90;
  v14 = 0;
  v15 = 0;
  v16 = (v8->y + 15) >> 4;
  if ( v81 )
  {
    v67 = *v81;
    v59 = HIDWORD(v81->m128i_i64[0]);
    if ( (int)HIDWORD(v81->m128i_i64[0]) <= v16 )
      LODWORD(v59) = v16;
    v16 = v59;
    if ( (int)v59 >= _mm_srli_si128(*v81, 8).m128i_i32[1] )
      return 1LL;
    v66 = v81->m128i_i64[1];
    v12 = (int)*v81;
  }
  else
  {
    v67.m128i_i32[1] = 0x80000000;
    v67.m128i_i32[3] = 0x7FFFFFFF;
  }
  if ( v81 )
  {
    v56 = 1LL;
    v57 = &v72.m128i_i8[8];
    while ( v56 >= 0 )
    {
      while ( 1 )
      {
        if ( !v91 )
          return 1LL;
        v58 = (struct _POINTFIX *)(*(_QWORD *)v57 + *((int *)v57 + 2));
        if ( v58 < v6 )
        {
          v58 = v80;
        }
        else if ( v58 > v80 )
        {
          v58 = v6;
        }
        if ( v58->y >> 4 >= v67.m128i_i32[1] )
          break;
        --v91;
        *(_QWORD *)v57 = v58;
      }
      --v56;
      v57 -= 40;
    }
  }
LABEL_16:
  v82 = v15;
  for ( i = 1; ; i = v78 - 1 )
  {
    v78 = i;
    if ( i < 0 )
    {
      v33 = HIDWORD(v70);
      if ( SHIDWORD(v73) < SHIDWORD(v70) )
        v33 = HIDWORD(v73);
      HIDWORD(v73) -= v33;
      HIDWORD(v70) -= v33;
      if ( v16 + v33 > v67.m128i_i32[3] )
        v33 = v67.m128i_i32[3] - v16;
      if ( v71.m128i_i32[3] | v68.m128i_i32[3] || v71.m128i_i32[1] | v68.m128i_i32[1] || v33 <= 2 )
      {
        v15 = v16;
        if ( v14 )
          v15 = v82;
        while ( 1 )
        {
          v34 = v68.m128i_i32[0];
          if ( v68.m128i_i32[0] - v71.m128i_i32[0] <= 0 )
          {
            if ( v68.m128i_i32[0] != v71.m128i_i32[0] )
            {
              v86 = v71;
              v87 = v72;
              v88 = v73;
              v73 = v70;
              v70 = v88;
              v72.m128i_i64[1] = _mm_srli_si128(v69, 8).m128i_u64[0];
              v72.m128i_i64[0] = __PAIR64__(v69.m128i_u32[1], _mm_cvtsi128_si32(v69));
              v71.m128i_i64[1] = __PAIR64__(
                                   _mm_cvtsi128_si32(_mm_srli_si128(v68, 12)),
                                   _mm_cvtsi128_si32(_mm_srli_si128(v68, 8)));
              v71.m128i_i64[0] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v68, 4)), _mm_cvtsi128_si32(v68));
              v69.m128i_i64[1] = _mm_srli_si128(v87, 8).m128i_u64[0];
              v69.m128i_i64[0] = __PAIR64__(v87.m128i_u32[1], _mm_cvtsi128_si32(v87));
              v68.m128i_i64[1] = __PAIR64__(
                                   _mm_cvtsi128_si32(_mm_srli_si128(v86, 12)),
                                   _mm_cvtsi128_si32(_mm_srli_si128(v86, 8)));
              v68.m128i_i64[0] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v86, 4)), _mm_cvtsi128_si32(v86));
              continue;
            }
            if ( v14 )
            {
              ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v79)(v15, v90, v14, v7);
LABEL_77:
              v13 = (int *)v90;
              v74 = (int *)v90;
              v14 = 0;
            }
            v15 = v16 + 1;
            goto LABEL_57;
          }
          if ( v81 )
          {
            v35 = v12;
            if ( v71.m128i_i32[0] >= v12 )
              v35 = v71.m128i_i32[0];
            *v13 = v35;
            v36 = v66;
            v37 = v66;
            if ( v34 <= (int)v66 )
              v37 = v34;
            v13[1] = v37;
            if ( v35 >= v37 )
            {
              if ( v14 )
              {
                ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v79)(v15, v90, v14, v7);
                v36 = v66;
                v7 = a6;
                v13 = (int *)v90;
                v74 = (int *)v90;
                v14 = 0;
              }
              v15 = v16 + 1;
              if ( v71.m128i_i32[0] < v12 && *(int *)v72.m128i_i64[1] >> 4 < v12 && *(int *)v69.m128i_i64[1] >> 4 < v12
                || v71.m128i_i32[0] >= v36
                && *(int *)v72.m128i_i64[1] >> 4 >= v36
                && *(int *)v69.m128i_i64[1] >> 4 >= v36 )
              {
                goto LABEL_97;
              }
              goto LABEL_57;
            }
          }
          else
          {
            *v13 = v71.m128i_i32[0];
            v13[1] = v34;
          }
          ++v14;
          v13 += 2;
          v74 = v13;
          if ( v14 == 40 )
          {
            ((void (__fastcall *)(_QWORD, _BYTE *, __int64, void *))v79)(v15, v90, 40LL, v7);
            goto LABEL_77;
          }
LABEL_57:
          v38 = v68.m128i_i32[1] + v68.m128i_i32[0];
          v68.m128i_i32[0] += v68.m128i_i32[1];
          v39 = v68.m128i_i32[3] + v68.m128i_i32[2] < 0;
          v40 = v68.m128i_i32[3] + v68.m128i_i32[2];
          v68.m128i_i32[2] += v68.m128i_i32[3];
          if ( !v39 )
          {
            v68.m128i_i32[2] = v40 - v69.m128i_i32[0];
            v68.m128i_i32[0] = v38 + 1;
          }
          v41 = v71.m128i_i32[1] + v71.m128i_i32[0];
          v71.m128i_i32[0] += v71.m128i_i32[1];
          v39 = v71.m128i_i32[3] + v71.m128i_i32[2] < 0;
          v42 = v71.m128i_i32[3] + v71.m128i_i32[2];
          v71.m128i_i32[2] += v71.m128i_i32[3];
          if ( !v39 )
          {
            v71.m128i_i32[2] = v42 - v72.m128i_i32[0];
            v71.m128i_i32[0] = v41 + 1;
          }
          --v33;
          ++v16;
          v7 = a6;
          if ( !v33 )
            goto LABEL_16;
        }
      }
      if ( v14 )
      {
        ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v79)(v15, v90, v14, v7);
        v51 = v66;
        v7 = a6;
        v13 = (int *)v90;
        v74 = (int *)v90;
        v14 = 0;
      }
      else
      {
        v51 = v66;
      }
      v52 = v68.m128i_i32[0];
      if ( v71.m128i_i32[0] != v68.m128i_i32[0] )
      {
        v53 = v71.m128i_i32[0];
        if ( v71.m128i_i32[0] <= v68.m128i_i32[0] )
        {
          v53 = v68.m128i_i32[0];
          v52 = v71.m128i_i32[0];
        }
        v89 = 0LL;
        DWORD1(v89) = v16;
        HIDWORD(v89) = v16 + v33;
        if ( v81 )
        {
          v64 = v12;
          if ( v52 >= v12 )
            v64 = v52;
          LODWORD(v89) = v64;
          v65 = v51;
          if ( v53 <= (int)v51 )
            v65 = v53;
          DWORD2(v89) = v65;
          if ( v64 < v65 )
          {
            ((void (__fastcall *)(__int128 *, __int64, void *))v83)(&v89, 1LL, v7);
            v7 = a6;
          }
        }
        else
        {
          LODWORD(v89) = v52;
          DWORD2(v89) = v53;
          ((void (__fastcall *)(__int128 *, __int64, void *, __int64))v83)(&v89, 1LL, v7, v51);
          v7 = a6;
        }
      }
LABEL_97:
      v16 += v33;
      goto LABEL_16;
    }
    v18 = 5LL * i;
    v85 = v18;
    if ( !*((_DWORD *)&v70 + 10 * i + 1) )
      break;
LABEL_33:
    ;
  }
  while ( --v91 >= 0 && v16 < v67.m128i_i32[3] )
  {
    v19 = (int *)v69.m128i_i64[v18 + 1];
    v20 = (struct _POINTFIX *)((char *)v19 + *((int *)&v70 + 2 * v18));
    v69.m128i_i64[v18 + 1] = (__int64)v20;
    if ( v20 < v6 )
    {
      v49 = v80;
      v69.m128i_i64[v18 + 1] = (__int64)v80;
      v20 = v49;
    }
    else if ( v20 > v80 )
    {
      v69.m128i_i64[v18 + 1] = (__int64)v6;
      v20 = v84;
    }
    v21 = v20->y;
    *((_DWORD *)&v70 + 2 * v18 + 1) = ((v21 + 15) >> 4) - v16;
    if ( ((v21 + 15) >> 4) - v16 > 0 )
    {
      v77 = v19[1];
      v22 = v21 - v77;
      v23 = *v19;
      v24 = v20->x - *v19;
      if ( (v24 & 0x80000000) != 0 )
      {
        v47 = -v24;
        if ( (int)v47 >= (int)v22 )
        {
          v25 = -(int)(v47 / v22);
          v68.m128i_i32[2 * v18 + 1] = v25;
          v50 = v47 % v22;
          v26 = v47 % v22;
          v68.m128i_i32[2 * v18 + 3] = v47 % v22;
          if ( (int)(v47 % v22) > 0 )
          {
            v68.m128i_i32[2 * v18 + 1] = --v25;
            v26 = v22 - v50;
            v68.m128i_i32[2 * v18 + 3] = v22 - v50;
          }
        }
        else
        {
          v68.m128i_i32[2 * v18 + 1] = -1;
          v26 = v22 - v47;
          v68.m128i_i32[2 * v18 + 3] = v22 - v47;
          v25 = -1;
        }
      }
      else if ( (int)v24 >= (int)v22 )
      {
        v25 = v24 / v22;
        v68.m128i_i32[2 * v18 + 1] = v24 / v22;
        v26 = v24 % v22;
        v68.m128i_i32[2 * v18 + 3] = v24 % v22;
      }
      else
      {
        v68.m128i_i32[2 * v18 + 1] = 0;
        v68.m128i_i32[2 * v18 + 3] = v24;
        v25 = 0;
        v26 = v24;
      }
      v69.m128i_i32[2 * v18] = v22;
      v27 = v77 & 0xF;
      v28 = -1;
      if ( (v77 & 0xF) != 0 )
      {
        v28 = -1;
        if ( 16 - v27 > 0 )
        {
          v28 = -1;
          v43 = 16 - v27;
          v44 = v23;
          do
          {
            v45 = v25 + v44;
            v46 = v26 + v28;
            v28 = v26 + v28 - v22;
            if ( v46 < 0 )
              v28 = v46;
            v23 = v45 + 1;
            if ( v46 < 0 )
              v23 = v45;
            --v43;
            v44 = v23;
          }
          while ( v43 > 0 );
          v18 = v85;
          v13 = v74;
        }
      }
      v29 = v23 & 0xF;
      if ( (v23 & 0xF) != 0 )
      {
        v23 += 15;
        v28 -= v22 * (16 - v29);
      }
      v30 = v23 >> 4;
      v68.m128i_i32[2 * v18] = v30;
      v31 = v28 >> 4;
      v68.m128i_i32[2 * v18 + 2] = v31;
      v32 = (v77 + 15) >> 4;
      if ( v32 < v67.m128i_i32[1] )
      {
        v60 = v67.m128i_i32[1] - v32;
        if ( *(int *)(v69.m128i_i64[v18 + 1] + 4) >> 4 >= v67.m128i_i32[1]
          || v68.m128i_i32[2 * v18 + 1]
          || v68.m128i_i32[2 * v18 + 3] )
        {
          v75 = v30 + v68.m128i_i32[2 * v18 + 1] * v60;
          v68.m128i_i32[2 * v18] = v75;
          v61 = v31 + v60 * (__int64)v68.m128i_i32[2 * v18 + 3];
          if ( v61 < 0 )
          {
            v68.m128i_i32[2 * v18 + 2] = v61;
          }
          else
          {
            if ( (v61 & 0xFFFFFFFF80000000uLL) != 0 )
            {
              v62 = v61 / (unsigned __int64)v22;
              v63 = v61 % (unsigned __int64)v22;
            }
            else
            {
              LODWORD(v63) = (int)v61 % (int)v22;
              LODWORD(v62) = (int)v61 / (int)v22;
            }
            v68.m128i_i32[2 * v18] = v62 + v75 + 1;
            v68.m128i_i32[2 * v18 + 2] = v63 - v22;
          }
        }
      }
      v7 = a6;
      goto LABEL_33;
    }
  }
  if ( v14 )
    ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v79)(v15, v90, v14, v7);
  return 1LL;
}
