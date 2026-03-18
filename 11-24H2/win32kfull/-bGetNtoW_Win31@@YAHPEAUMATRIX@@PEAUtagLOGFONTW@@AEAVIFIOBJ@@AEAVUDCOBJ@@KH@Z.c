/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KH@Z @ 0x1400BC5E0
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400BC0A0 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z @ 0x1400BCCFC (-lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400EABCC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x1401608B4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140163224 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        __int16 **a3,
        struct UDCOBJ *a4,
        char a5,
        int a6)
{
  __int64 v6; // r10
  BOOL v11; // eax
  bool v12; // r15
  LONG lfHeight; // ebx
  int v14; // r13d
  __int16 *v15; // rax
  int v16; // ecx
  float v17; // xmm3_4
  float v18; // xmm4_4
  __m128i v19; // xmm9
  unsigned int *v20; // rbx
  LONG lfWidth; // ecx
  int v22; // r15d
  float v23; // xmm0_4
  __int16 *v24; // rcx
  float v25; // xmm6_4
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v27; // rcx
  int v28; // esi
  unsigned int v29; // eax
  int v30; // eax
  signed int v31; // ebx
  int v32; // ecx
  LONG lfOrientation; // eax
  __m128i v35; // xmm0
  __int32 v36; // eax
  __int128 v37; // xmm1
  int v38; // eax
  __int128 v39; // xmm0
  __int16 *v40; // rsi
  LONG v41; // edx
  int v42; // r9d
  int v43; // r8d
  float v44; // xmm2_4
  float v45; // xmm6_4
  __m128i v46; // xmm1
  int v47; // edx
  unsigned int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // ecx
  __int64 v53; // rax
  int *v54; // rdx
  int v55; // ecx
  float v56; // xmm2_4
  __m128i v57; // xmm0
  int v58; // r10d
  unsigned int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  float v63; // xmm4_4
  __m128i v64; // xmm1
  bool v65; // [rsp+28h] [rbp-A9h]
  __int64 v66; // [rsp+30h] [rbp-A1h]
  BOOL v67; // [rsp+38h] [rbp-99h]
  unsigned int *v68; // [rsp+40h] [rbp-91h] BYREF
  struct MATRIX *v69; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v70[4]; // [rsp+50h] [rbp-81h] BYREF
  __int64 v71; // [rsp+60h] [rbp-71h]
  __int64 v72; // [rsp+68h] [rbp-69h]
  int v73; // [rsp+70h] [rbp-61h]
  __int128 v74; // [rsp+78h] [rbp-59h] BYREF
  __int128 v75; // [rsp+88h] [rbp-49h]
  int v76; // [rsp+98h] [rbp-39h]

  v6 = *(_QWORD *)a4;
  v11 = *(float *)(*(_QWORD *)a4 + 452LL) != 0.0 && !(unsigned int)EFLOAT::bIsZero((EFLOAT *)(v6 + 456));
  v67 = v11;
  v12 = (a5 & 2) == 0 && (v11 || (*(_DWORD *)(*(_QWORD *)(v6 + 976) + 340LL) & 0x1000) == 0);
  lfHeight = a2->lfHeight;
  v14 = 1;
  v65 = v12;
  if ( !a2->lfHeight )
    lfHeight = lGetDefaultWorldHeight(a4);
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 19708LL)
    && !_wcsicmp(a2->lfFaceName, L"MS Shell Dlg")
    && !a6 )
  {
    if ( lfHeight > 0 )
    {
      if ( lfHeight >= 12 )
      {
        if ( lfHeight <= 15 )
        {
          v15 = *a3;
          lfHeight = 14;
          goto LABEL_38;
        }
        if ( lfHeight <= 19 )
          lfHeight = 16;
      }
    }
    else
    {
      if ( (unsigned int)(lfHeight + 12) <= 3 )
      {
        v15 = *a3;
        lfHeight = -11;
        goto LABEL_12;
      }
      if ( (unsigned int)(lfHeight + 15) <= 2 )
      {
        v15 = *a3;
        lfHeight = -13;
        goto LABEL_12;
      }
    }
  }
  v15 = *a3;
  if ( lfHeight <= 0 )
  {
LABEL_12:
    v16 = v15[28];
    lfHeight = -lfHeight;
    goto LABEL_13;
  }
LABEL_38:
  v16 = v15[30] + v15[31];
LABEL_13:
  v17 = (float)lfHeight / (float)v16;
  v18 = v17;
  *((float *)a1 + 3) = v17;
  if ( v12 )
  {
    v53 = *(_QWORD *)a4;
    if ( v67 )
    {
      v19 = (__m128i)*(unsigned int *)(v53 + 452);
      v56 = *(float *)(v53 + 456);
    }
    else
    {
      v54 = *(int **)(v53 + 976);
      v55 = v54[85];
      if ( (v55 & 0x1000) != 0 )
      {
        v19 = 0u;
        v56 = 0.0;
      }
      else if ( (v55 & 2) != 0 )
      {
        v19 = (__m128i)*(unsigned int *)(v53 + 320);
        *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 * 0.0625;
        v56 = *(float *)(v53 + 332) * 0.0625;
      }
      else
      {
        v64 = (__m128i)COERCE_UNSIGNED_INT((float)v54[83]);
        *(float *)v64.m128i_i32 = *(float *)v64.m128i_i32 / (float)v54[79];
        v19 = v64;
        v56 = (float)v54[84] / (float)v54[80];
      }
    }
    if ( *(float *)v19.m128i_i32 != 1.0 )
      v14 = 0;
    if ( v56 != 1.0 )
      v17 = v56 * v17;
    if ( v17 < 0.0 )
      LODWORD(v17) ^= _xmm;
    if ( v56 < 0.0 )
      *((_DWORD *)a1 + 3) ^= _xmm;
  }
  else
  {
    v19 = 0u;
  }
  v20 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
  v68 = v20;
  if ( !v20 )
    return 0LL;
  lfWidth = a2->lfWidth;
  v22 = v14;
  v23 = v17;
  if ( !lfWidth )
    goto LABEL_17;
  v40 = *a3;
  v41 = -lfWidth;
  v42 = 1;
  if ( lfWidth > 0 )
    v41 = a2->lfWidth;
  v43 = v41;
  v44 = (float)v40[38];
  v45 = (float)v41;
  v46 = (__m128i)LODWORD(v44);
  if ( v65 )
  {
    if ( !v14 )
    {
      v57 = v19;
      *(float *)v57.m128i_i32 = *(float *)v19.m128i_i32 * v45;
      v58 = _mm_cvtsi128_si32(v57);
      v45 = *(float *)v19.m128i_i32 * v45;
      v59 = (unsigned __int8)(v58 >> 23);
      if ( v59 > 0x9E )
      {
        v42 = 0;
        v43 = v41;
      }
      else
      {
        v60 = v58 & 0x7FFFFF | 0x800000LL;
        if ( v59 < 0x76 )
          v61 = v60 >> (118 - (unsigned __int8)v59);
        else
          v61 = v60 << ((unsigned __int8)v59 - 118);
        v62 = (v61 + 0x80000000LL) >> 32;
        v43 = -(int)v62;
        if ( v58 >= 0 )
          v43 = v62;
      }
    }
    if ( v45 < 0.0 )
      LODWORD(v45) ^= _xmm;
    if ( v43 < 0 )
      v43 = -v43;
  }
  *(float *)v46.m128i_i32 = v44 * v17;
  v47 = _mm_cvtsi128_si32(v46);
  v48 = (unsigned __int8)(v47 >> 23);
  if ( v48 > 0x9E )
  {
    v22 = v14;
    v23 = v17;
  }
  else
  {
    v49 = v47 & 0x7FFFFF | 0x800000LL;
    if ( v48 < 0x76 )
      v50 = v49 >> (118 - (unsigned __int8)v48);
    else
      v50 = v49 << ((unsigned __int8)v48 - 118);
    v23 = v17;
    v51 = (v50 + 0x80000000LL) >> 32;
    v22 = v14;
    v52 = -(int)v51;
    if ( v47 >= 0 )
      v52 = v51;
    if ( v52 > 0 && v42 && v43 / 256 < v52 )
      goto LABEL_54;
  }
  if ( (*((_DWORD *)v40 + 12) & 4) != 0 )
  {
LABEL_54:
    v25 = v45 / v44;
    goto LABEL_29;
  }
LABEL_17:
  v24 = *a3;
  if ( (*((_DWORD *)*a3 + 12) & 4) != 0 )
  {
    v25 = v18;
    if ( !v22 )
    {
      v63 = v18 * *(float *)v19.m128i_i32;
      v25 = v63;
      if ( v63 < 0.0 )
        LODWORD(v25) = LODWORD(v63) ^ _xmm;
    }
  }
  else
  {
    v25 = v23;
  }
  v66 = *((_QWORD *)v24 + 16);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v24);
  v27 = v20[10];
  if ( (v27 & 1) != 0 && (v27 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v27 > 1) )
    v28 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    v28 = v20[540];
  v29 = W32GetCurrentThreadDpiAwarenessContext(v27);
  if ( (v20[10] & 1) != 0 && (v29 & 0xF) - 1 > 1 )
    v30 = (v29 >> 8) & 0x1FF;
  else
    v30 = v20[541];
  if ( v28 == v30 || v67 )
  {
    v31 = HIDWORD(v66);
    v32 = v66;
  }
  else
  {
    v31 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v68) * HIDWORD(v66);
    v32 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v68) * v66;
  }
  if ( v32 != v31 )
    v25 = (float)((float)v31 * v25) / (float)v32;
LABEL_29:
  if ( !v22 )
    v25 = v25 / *(float *)v19.m128i_i32;
  *(float *)a1 = v25;
  v69 = a1;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  if ( (*((_DWORD *)*a3 + 12) & 4) == 0 )
    goto LABEL_32;
  lfOrientation = a2->lfOrientation;
  if ( !lfOrientation )
    goto LABEL_32;
  v35 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
  v72 = 0LL;
  v73 = 0;
  v76 = 0;
  *(float *)v35.m128i_i32 = *(float *)v35.m128i_i32 / 10.0;
  v74 = 0LL;
  v75 = 0LL;
  v70[0] = efCos((unsigned int)_mm_cvtsi128_si32(v35));
  v70[3] = v70[0];
  v36 = efSin((unsigned int)_mm_cvtsi128_si32(v35));
  v37 = *((_OWORD *)a1 + 1);
  v71 = 0LL;
  v35.m128i_i32[0] = v36;
  v38 = *((_DWORD *)a1 + 8);
  v70[1] = v35.m128i_i32[0];
  v70[2] = v35.m128i_i32[0] ^ _xmm;
  v39 = *(_OWORD *)a1;
  v76 = v38;
  v75 = v37;
  v74 = v39;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v69, (const struct MATRIX *)&v74, (const struct MATRIX *)v70, 0) )
  {
LABEL_32:
    *((_DWORD *)a1 + 1) ^= _xmm;
    *((_DWORD *)a1 + 3) ^= _xmm;
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v69, 8u);
    return 1LL;
  }
  return 0LL;
}
