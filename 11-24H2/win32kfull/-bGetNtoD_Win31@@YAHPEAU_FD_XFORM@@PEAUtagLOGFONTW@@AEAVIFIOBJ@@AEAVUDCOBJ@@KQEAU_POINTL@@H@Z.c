/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400BC0A0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1400B1490 (--0RESETFCOBJ@@QEAA@AEAVUDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400BB830 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 * Callees:
 *     ?bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KH@Z @ 0x1400BC5E0 (-bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KH@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400EABCC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x1401608B4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140163224 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?bParityViolatingXform@@YAHAEBVUDCOBJ@@@Z @ 0x1401EF50C (-bParityViolatingXform@@YAHAEBVUDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct UDCOBJ *a4,
        unsigned int a5,
        struct _POINTL *const a6,
        int a7)
{
  unsigned int *v11; // rdx
  int v12; // ecx
  __int64 v13; // r8
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  LONG v18; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v20; // rcx
  int v21; // r14d
  unsigned int v22; // eax
  int v23; // eax
  __int64 lfEscapement; // rcx
  int v25; // edx
  __int64 v26; // rax
  int v27; // eax
  __m128i v28; // xmm0
  int v29; // eax
  int v30; // edx
  int v31; // edx
  __int64 y; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 x; // rax
  float v36; // xmm6_4
  float v37; // xmm6_4
  __int128 v38; // xmm0
  int v39; // eax
  unsigned int *v40; // [rsp+38h] [rbp-D0h] BYREF
  __m128 *v41; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v42; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+58h] [rbp-B0h]
  int v44; // [rsp+68h] [rbp-A0h]
  __int128 v45; // [rsp+70h] [rbp-98h] BYREF
  __int128 v46; // [rsp+80h] [rbp-88h]
  int v47; // [rsp+90h] [rbp-78h]
  __m128 v48; // [rsp+98h] [rbp-70h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-60h]
  int v50; // [rsp+B8h] [rbp-50h]
  _OWORD v51[2]; // [rsp+C0h] [rbp-48h] BYREF
  int v52; // [rsp+E0h] [rbp-28h]

  v50 = 0;
  v48 = 0LL;
  v44 = 0;
  v49 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v11 = *(unsigned int **)(W32GetSessionState(a1, a2, a3) + 96);
  v40 = v11;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      if ( v11[5091]
        && (v12 & 0x200000) != 0
        && ((lfEscapement = (unsigned int)a2->lfEscapement,
             (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0)
          ? (v25 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4)
          : (v25 = (int)lNormAngle(lfEscapement) / 900),
            v25) )
      {
        v30 = v25 - 1;
        if ( !v30 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          LODWORD(a1->eYX) = dword_1403624D8[x];
          LODWORD(a1->eXY) = dword_1403624D8[a6->y];
          return 1LL;
        }
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            LODWORD(a1->eXY) = dword_140362500[y];
            LODWORD(a1->eYX) = dword_140362500[a6->x];
          }
          return 1LL;
        }
        v34 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_1403624D8[v34];
        v27 = dword_140362500[a6->y];
      }
      else
      {
        v26 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_140362500[v26];
        v27 = dword_1403624D8[a6->y];
      }
      LODWORD(a1->eYY) = v27;
      return 1LL;
    }
  }
  if ( !bGetNtoW_Win31((struct MATRIX *)&v48, a2, a3, a4, a5, a7) )
    return 0LL;
  v13 = *(_QWORD *)a4;
  v41 = &v42;
  if ( (*(_DWORD *)(*(_QWORD *)(v13 + 976) + 340LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
  {
    v15 = v48;
    v44 = v50;
    v43 = v49;
  }
  else
  {
    if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v41, (const struct MATRIX *)&v48, (const struct MATRIX *)(v13 + 320), 0) )
      return 0LL;
    v15 = _mm_mul_ps(v42, (__m128)_xmm);
  }
  v16 = *(_QWORD *)a3;
  v42 = v15;
  v17 = *(unsigned int *)(v16 + 48);
  if ( (v17 & 4) == 0 )
  {
    v18 = a2->lfEscapement;
    if ( (v17 & 0x200000) != 0 )
    {
      v33 = lNormAngle((unsigned int)v18);
      v17 = v33;
      v18 = 900 * ((int)v33 / 900 % 4);
    }
    if ( v18 && ((a5 & 1) == 0 || v40[5091]) )
    {
      if ( (unsigned int)bParityViolatingXform(a4) )
        v18 = -v18;
      v28 = (__m128i)COERCE_UNSIGNED_INT((float)v18);
      *((_QWORD *)&v46 + 1) = 0LL;
      v47 = 0;
      *(float *)v28.m128i_i32 = *(float *)v28.m128i_i32 / 10.0;
      LODWORD(v45) = efCos((unsigned int)_mm_cvtsi128_si32(v28));
      HIDWORD(v45) = v45;
      v29 = efSin((unsigned int)_mm_cvtsi128_si32(v28));
      *(_QWORD *)&v46 = 0LL;
      DWORD2(v45) = v29;
      DWORD1(v45) = v29 ^ _xmm;
      v52 = v44;
      v51[0] = v42;
      v51[1] = v43;
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v41, (const struct MATRIX *)v51, (const struct MATRIX *)&v45, 0) )
        return 0LL;
    }
    v40 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17);
    v20 = v40[10];
    if ( (v20 & 1) != 0 && (v20 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v20 > 1) )
      v21 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    else
      v21 = v40[540];
    v22 = W32GetCurrentThreadDpiAwarenessContext(v20);
    if ( (v40[10] & 1) != 0 && (v22 & 0xF) - 1 > 1 )
      v23 = (v22 >> 8) & 0x1FF;
    else
      v23 = v40[541];
    if ( v21 != v23 )
    {
      v36 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v40);
      v37 = v36 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v40);
      v38 = *(_OWORD *)(*(_QWORD *)a4 + 320LL);
      v39 = *(_DWORD *)(*(_QWORD *)a4 + 352LL);
      v46 = *(_OWORD *)(*(_QWORD *)a4 + 336LL);
      v47 = v39;
      v45 = v38;
      if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)&v45 + 4))
        && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)&v45 + 8)) )
      {
        v42.m128_f32[1] = v42.m128_f32[1] / v37;
        v42.m128_f32[2] = v42.m128_f32[2] * v37;
      }
      else
      {
        v42.m128_f32[0] = v42.m128_f32[0] * v37;
        v42.m128_f32[3] = v42.m128_f32[3] / v37;
      }
    }
  }
  *a1 = (struct _FD_XFORM)v42;
  return 1LL;
}
