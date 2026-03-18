/*
 * XREFs of ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1400E73A8
 * Callers:
 *     NtGdiArcInternal @ 0x1400E5070 (NtGdiArcInternal.c)
 *     NtGdiRoundRect @ 0x1400E62B0 (NtGdiRoundRect.c)
 *     GreEllipse @ 0x1400E65B0 (GreEllipse.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E69C0 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1400E8AF0 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct XDCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  int *v6; // r15
  int *v7; // r12
  struct XDCOBJ *v9; // r9
  int v10; // edx
  __int64 v11; // rax
  int v12; // ecx
  int *v13; // r14
  int v14; // r8d
  int *v15; // rsi
  int v16; // edx
  int v17; // r13d
  __int64 v18; // rcx
  int v19; // ebx
  FIX v20; // r11d
  FIX y; // r9d
  FIX x; // r10d
  int v23; // ebx
  __int64 v24; // rax
  int v25; // r10d
  FIX v26; // r8d
  FIX v27; // r9d
  FIX v28; // ecx
  FIX v29; // edx
  int v30; // r11d
  int v31; // eax
  int v32; // eax
  int v34; // r10d
  int v35; // eax
  _DWORD *v36; // rax
  int v37; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // r8d
  int v41; // eax
  int v42; // ecx
  int v43; // edx
  int v44; // r11d
  int v45; // r8d
  int v46; // edx
  int v47; // r9d
  int v48; // ecx
  float v49; // xmm2_4
  unsigned int v50; // r11d
  unsigned int v51; // r9d
  float v52; // xmm3_4
  float v53; // xmm4_4
  int v54; // ecx
  _DWORD *v55; // [rsp+30h] [rbp-50h]
  struct XDCOBJ *v56; // [rsp+38h] [rbp-48h] BYREF
  int v57; // [rsp+40h] [rbp-40h]
  int v58; // [rsp+44h] [rbp-3Ch]
  __int64 v59; // [rsp+48h] [rbp-38h] BYREF
  bool v60; // [rsp+50h] [rbp-30h]
  __int64 v61; // [rsp+58h] [rbp-28h] BYREF
  struct _LINEATTRS *v62; // [rsp+60h] [rbp-20h]
  struct _POINTFIX v63; // [rsp+68h] [rbp-18h] BYREF
  FIX v64; // [rsp+70h] [rbp-10h]
  FIX v65; // [rsp+74h] [rbp-Ch]

  v5 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v6 = (int *)((char *)this + 64);
  *((_DWORD *)this + 1) = 0;
  v7 = (int *)((char *)this + 72);
  *((_OWORD *)this + 4) = v5;
  v62 = a4;
  v9 = a2;
  v56 = a2;
  v10 = *((_DWORD *)this + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 976LL) + 108LL) & 1) != 0 )
  {
    --v10;
    --*v7;
    *v6 = v10;
  }
  v11 = *(_QWORD *)(*(_QWORD *)v9 + 976LL);
  if ( *(_DWORD *)(v11 + 208) == 2 )
  {
    ERECTL::vOrder((EBOX *)((char *)this + 64));
    v15 = (int *)((char *)this + 68);
    v13 = (int *)((char *)this + 76);
    goto LABEL_8;
  }
  v12 = *v7;
  if ( (*(_DWORD *)(v11 + 340) & 0x100) == 0 )
  {
    if ( v10 <= v12 )
      goto LABEL_6;
    goto LABEL_55;
  }
  if ( v10 < v12 )
  {
LABEL_55:
    *v6 = *v7;
    *v7 = v10;
  }
LABEL_6:
  v13 = (int *)((char *)this + 76);
  v14 = *((_DWORD *)this + 19);
  v15 = (int *)((char *)this + 68);
  v16 = *((_DWORD *)this + 17);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 976LL) + 340LL) & 0x200) == 0 )
  {
    if ( v16 <= v14 )
      goto LABEL_8;
    goto LABEL_56;
  }
  if ( v16 < v14 )
  {
LABEL_56:
    *v13 = *((_DWORD *)this + 17);
    *v15 = v14;
  }
LABEL_8:
  v17 = 4;
  if ( (*(_DWORD *)(*(_QWORD *)v9 + 248LL) & 4) != 0 )
  {
    v54 = *v15;
    *v15 = *v13;
    *v13 = v54;
  }
  v18 = *(_QWORD *)v9;
  v63 = *(struct _POINTFIX *)v6;
  v64 = v6[2];
  v65 = v6[3];
  v55 = *(_DWORD **)(v18 + 144);
  v19 = *(_DWORD *)(*(_QWORD *)(v18 + 976) + 208LL);
  DC::QuickInitXform(v18, &v61, 516LL);
  v20 = v65;
  v60 = v19 != 2;
  y = v63.y;
  x = v63.x;
  v59 = v61;
  if ( (v55[10] & 0x10000) == 0 )
    goto LABEL_11;
  v23 = 1;
  if ( (v62->fl & 1) == 0 )
    goto LABEL_11;
  v49 = (float)(v55[42] >> 1);
  if ( (v55[42] & 1) != 0 )
    v49 = FP_0_5 + v49;
  efHalfDiff((unsigned int)v63.x, (unsigned int)v64);
  LODWORD(v52) = efHalfDiff(v51, v50);
  if ( v53 < 0.0 )
    LODWORD(v53) ^= _xmm;
  if ( v52 < 0.0 )
    LODWORD(v52) ^= _xmm;
  if ( v49 > v53 || v49 > v52 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_11:
    v23 = 0;
  }
  v24 = *(_QWORD *)(*(_QWORD *)v56 + 976LL);
  if ( *(_DWORD *)(v24 + 208) == 2 || v23 || *((_DWORD *)this + 1) || (*(_DWORD *)(v24 + 340) & 0x20) != 0 )
  {
    *((_DWORD *)this + 2) = v64;
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v20;
    EXFORMOBJR::bXformRound((EXFORMOBJR *)&v59, (const struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    v36 = v55;
    if ( a5 && v55[44] == 5 )
    {
      v44 = *((_DWORD *)this + 2);
      v45 = *((_DWORD *)this + 3);
      v46 = *((_DWORD *)this + 6);
      v47 = *((_DWORD *)this + 7);
      if ( (((unsigned __int8)v47 | (unsigned __int8)(v46 | v45 | *((_BYTE *)this + 8))) & 0xF) == 0 )
      {
        v48 = 4;
        if ( v44 <= v46 )
          v48 = -4;
        *((_DWORD *)this + 4) -= v48;
        *((_DWORD *)this + 6) = v46 - v48;
        if ( v47 <= v45 )
          v17 = -4;
        *((_DWORD *)this + 2) = v44 + v48;
        *((_DWORD *)this + 5) -= v17;
        *((_DWORD *)this + 3) = v45 - v17;
        *((_DWORD *)this + 7) = v47 + v17;
      }
      v36 = v55;
    }
    if ( v23 )
    {
      v37 = v36[42];
      v38 = *v6;
      v39 = -v37;
      v40 = v37;
      v58 = v37;
      v57 = v37;
      if ( *v7 < v38 )
      {
        v40 = -v37;
        v57 = -v37;
      }
      if ( *v13 < *v15 )
      {
        v37 = -v37;
        v58 = v39;
      }
      HIDWORD(v56) = v37;
      LODWORD(v56) = -v40;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v59, (const struct _VECTORL *)&v56, (struct _VECTORFX *)&v56, 2uLL, 0);
      v41 = v57;
      v42 = HIDWORD(v56) + 1;
      v43 = ((int)v56 + 1) >> 1;
      *((_DWORD *)this + 2) += v43;
      v42 >>= 1;
      *((_DWORD *)this + 3) += v42;
      *((_DWORD *)this + 4) += (v41 + 1) >> 1;
      *((_DWORD *)this + 5) += (v58 + 1) >> 1;
      *((_DWORD *)this + 6) -= v43;
      *((_DWORD *)this + 7) -= v42;
    }
  }
  else
  {
    EXFORMOBJR::bXformRound((EXFORMOBJR *)&v59, (const struct _POINTL *)&v63, &v63, 2uLL);
    v25 = 16;
    if ( a5 && v55[44] == 5 )
    {
      v28 = v63.y;
      v26 = v65;
      v29 = v63.x;
      v27 = v64;
      if ( (((unsigned __int8)v64 | (unsigned __int8)(LOBYTE(v63.x) | v65 | LOBYTE(v63.y))) & 0xF) == 0 )
      {
        v34 = -4;
        v35 = -4;
        if ( v64 > v63.x )
          v35 = 4;
        v27 = v35 + v64;
        v29 = v63.x - v35;
        if ( v65 > v63.y )
          v34 = 4;
        v28 = v63.y - v34;
        v26 = v34 + v65;
        v25 = 32;
      }
    }
    else
    {
      v26 = v65;
      v27 = v64;
      v28 = v63.y;
      v29 = v63.x;
    }
    v30 = v26 - v28;
    v31 = v29 - v27;
    if ( v29 - v27 < 0 )
      v31 = v27 - v29;
    if ( v31 < v25 )
      goto LABEL_46;
    v32 = v28 - v26;
    if ( v30 > 0 )
      v32 = v26 - v28;
    if ( v32 < v25 )
    {
LABEL_46:
      *(_DWORD *)this = 1;
      return this;
    }
    if ( v27 - v29 <= 0 )
      v29 -= v25;
    else
      v27 -= v25;
    if ( v30 <= 0 )
      v28 -= v25;
    else
      v26 -= v25;
    *((_DWORD *)this + 2) = v27;
    *((_DWORD *)this + 3) = v28;
    *((_DWORD *)this + 4) = v29;
    *((_DWORD *)this + 5) = v28;
    *((_DWORD *)this + 6) = v29;
    *((_DWORD *)this + 7) = v26;
  }
  *((_QWORD *)this + 6) = *((_QWORD *)this + 1);
  *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
  *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
  return this;
}
