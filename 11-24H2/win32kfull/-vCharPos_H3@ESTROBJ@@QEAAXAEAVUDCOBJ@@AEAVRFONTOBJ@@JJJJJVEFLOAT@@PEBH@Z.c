/*
 * XREFs of ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400AE8F0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AD5F0 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x1401C4130 (-vCharPos_H2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z.c)
 * Callees:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14005C3DC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1400ABD28 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400ACD2C (xInsertMetricsPlusRFONTOBJ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AF180 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AF42C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400AFDC4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1400C10A0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400C1FD8 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H3(
        __int64 a1,
        struct UDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        int *a10)
{
  int v10; // r11d
  unsigned int v12; // edi
  int v14; // r10d
  __int64 v15; // r15
  struct RFONTOBJ *v16; // rdx
  unsigned __int16 *v17; // r9
  int v18; // r12d
  int v19; // ecx
  int v20; // ebx
  int v21; // r13d
  int *v22; // r14
  __int64 v23; // rax
  char *v24; // rdi
  unsigned int v25; // r10d
  struct RFONTOBJ *v26; // rsi
  __int64 v27; // r8
  _DWORD *v28; // rbp
  int v29; // r14d
  struct GPRUN *v30; // rbp
  unsigned __int16 *v31; // r12
  int v32; // ebx
  __int64 v33; // r8
  struct _GLYPHDATA *v34; // rbx
  __int64 v35; // rax
  struct UDCOBJ *v36; // rsi
  unsigned int v37; // r9d
  int *v38; // r8
  int v39; // r10d
  int i; // r11d
  _DWORD *v41; // rdx
  int v42; // eax
  int v43; // ecx
  struct GPRUN *Run; // rax
  __int64 v45; // rdx
  __int64 result; // rax
  int v47; // ecx
  unsigned int v48; // r15d
  int v49; // edx
  int v50; // r8d
  int v51; // r11d
  char *v52; // rdx
  int v53; // r10d
  RFONTOBJ *v54; // rcx
  unsigned __int16 v55; // r14
  __int64 v56; // rbx
  struct _GLYPHDATA **v57; // r15
  __m128i v58; // xmm1
  int v59; // ebx
  int v60; // r8d
  int v61; // edx
  int v62; // ecx
  int v63; // eax
  int v64; // [rsp+40h] [rbp-68h]
  unsigned __int16 *v65; // [rsp+50h] [rbp-58h]
  struct RFONTOBJ *v66; // [rsp+58h] [rbp-50h]
  int v70; // [rsp+C8h] [rbp+20h] BYREF

  v10 = a6;
  v12 = a7;
  v14 = *(_DWORD *)(a1 + 4);
  v15 = a1;
  v64 = 0;
  if ( a7 | a6 )
  {
    v58 = (__m128i)a9;
    v59 = v14 | *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x40 | 2;
    *(_DWORD *)(a1 + 4) = v59;
    if ( v10 )
    {
      v70 = 0;
      bFToL(a1, &v70, 0LL);
      v60 = v70;
      *(_DWORD *)(v15 + 116) = v70;
      if ( v60 > 0 )
        *(_DWORD *)(v15 + 4) = v59 | 0x800;
    }
    if ( (unsigned __int8)bCalcBreakExtra((unsigned int)_mm_cvtsi128_si32(v58), v12, a8, v15 + 120) )
    {
      v61 = *(_DWORD *)(v15 + 116);
      v62 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( v62 + v61 + *(_DWORD *)(v15 + 120) < 0 )
        *(_DWORD *)(v15 + 120) = -(v61 + v62);
      v63 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
      *(_DWORD *)(v15 + 4) |= 0x1000u;
      v64 = v63;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = v14 | *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x71 | 2;
  }
  v16 = *(struct RFONTOBJ **)(v15 + 64);
  v17 = *(unsigned __int16 **)(v15 + 40);
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v66 = v16;
  v22 = a10;
  v65 = v17;
  v70 = a4 + 8;
  a5 = (a5 + 8) >> 4;
  v19 = a5;
  *((_DWORD *)v16 + 4) = (a4 + 8) >> 4;
  *((_DWORD *)v16 + 5) = v19;
  if ( v22 )
  {
    v29 = *v22;
LABEL_15:
    if ( !v29 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v23 = *(_QWORD *)a3;
  v24 = (char *)v17;
  v25 = *(_DWORD *)v15;
  v26 = v16;
  a7 = *(_DWORD *)v15;
  if ( !*(_QWORD *)(v23 + 480) )
  {
    result = RFONTOBJ::bAllocateCache(a3, v16);
    if ( !(_DWORD)result )
      return result;
    v25 = a7;
    v16 = v26;
    v17 = (unsigned __int16 *)v24;
  }
  v27 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 104LL) + 1808LL) & 0x40000000) == 0 || *(_DWORD *)(v27 + 88) != 1 )
  {
    v28 = *(_DWORD **)(v27 + 480);
    v29 = 1;
    a6 = 1;
    if ( *v28 )
    {
      v30 = (struct GPRUN *)(v28 + 4);
      v31 = &v17[v25];
      while ( 1 )
      {
        if ( v24 >= (char *)v31 )
        {
          v20 = 0;
          v18 = 0;
          goto LABEL_15;
        }
        v32 = *(unsigned __int16 *)v24;
        v33 = (unsigned int)(v32 - *(_DWORD *)v30);
        if ( (unsigned int)v33 >= *((_DWORD *)v30 + 1) )
        {
          Run = RFONTOBJ::gprunFindRun(a3, v32);
          v30 = Run;
          v33 = (unsigned int)(v32 - *(_DWORD *)Run);
          if ( (unsigned int)v33 >= *((_DWORD *)Run + 1) )
          {
            result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(
                                a3,
                                a2,
                                (struct ESTROBJ *)v15,
                                v24,
                                (char *)v65,
                                a7,
                                &a6,
                                1);
            v34 = (struct _GLYPHDATA *)result;
            if ( !result )
              return result;
            goto LABEL_12;
          }
          _mm_lfence();
          v34 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v33);
        }
        else
        {
          _mm_lfence();
          v34 = *(struct _GLYPHDATA **)(*((_QWORD *)v30 + 1) + 8 * v33);
        }
        if ( !v34 )
        {
          v54 = a3;
          v55 = *(_WORD *)v24;
          v56 = (unsigned int)v33;
          v57 = (struct _GLYPHDATA **)(*((_QWORD *)v30 + 1) + 8 * v33);
          if ( !*(_QWORD *)(*(_QWORD *)a3 + 480LL) )
          {
            result = RFONTOBJ::bAllocateCache(a3, v16);
            if ( !(_DWORD)result )
              return result;
            v54 = a3;
          }
          result = xInsertMetricsPlusRFONTOBJ(v54, v57, v55);
          if ( !(_DWORD)result )
            return result;
          v15 = a1;
          v34 = *(struct _GLYPHDATA **)(*((_QWORD *)v30 + 1) + 8 * v56);
        }
LABEL_12:
        v29 = a6;
        if ( !v34->gdf.pgb && a6 && *(_DWORD *)(*(_QWORD *)a3 + 88LL) )
        {
          if ( !(unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v34) )
            v29 = 0;
          a6 = v29;
        }
        v24 += 2;
        *(_DWORD *)v26 = v34->hg;
        *((_QWORD *)v26 + 1) = v34;
        v26 = (struct RFONTOBJ *)((char *)v26 + 24);
      }
    }
    if ( v25 )
    {
      v48 = a7;
      do
      {
        *(_DWORD *)v26 = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
        *((_QWORD *)v26 + 1) = RFONTOBJ::pgdDefault(a3);
        v26 = (struct RFONTOBJ *)((char *)v26 + 24);
        --v48;
      }
      while ( v48 );
      v15 = a1;
    }
LABEL_16:
    v35 = *(_QWORD *)(v15 + 64);
    *(_DWORD *)(v15 + 232) |= 2u;
    *(_QWORD *)(v15 + 32) = v35;
LABEL_17:
    v36 = a2;
    goto LABEL_18;
  }
  v36 = a2;
  result = RFONTOBJ::bGetGlyphMetrics(a3, v25, (struct _GLYPHPOS *)v16, v17, a2, 0, (struct ESTROBJ *)v15);
  if ( !(_DWORD)result )
    return result;
LABEL_18:
  if ( (*(_BYTE *)(v15 + 4) & 0x30) != 0x30 || (v49 = *(_DWORD *)(v15 + 116), v49 < 0) || *(_DWORD *)(v15 + 120) )
  {
    v37 = *(_DWORD *)v15;
    v38 = (int *)((char *)v66 + 16);
    v39 = a5;
    for ( i = v70; ; *v38 = (i + v21) >> 4 )
    {
      v41 = (_DWORD *)*((_QWORD *)v38 - 1);
      v42 = v41[3];
      if ( v21 + v41[4] < v18 )
        v18 = v21 + v41[4];
      if ( v21 + v41[5] > v20 )
        v20 = v21 + v41[5];
      v43 = *(_DWORD *)(v15 + 116);
      v21 += v42;
      if ( v43 && v43 + v42 > 0 )
        v21 += v43;
      if ( *(v38 - 4) == v64 )
        v21 += *(_DWORD *)(v15 + 120);
      if ( !--v37 )
        break;
      v38 += 6;
      v38[1] = v39;
    }
    if ( v21 <= v20 )
      goto LABEL_33;
  }
  else
  {
    v21 = v49 + *(_DWORD *)(*((_QWORD *)v66 + 1) + 12LL);
    v50 = *(_DWORD *)v15 - 1;
    if ( *(_DWORD *)v15 != 1 )
    {
      v51 = v70;
      v52 = (char *)v66 + 20;
      v53 = a5;
      do
      {
        *((_DWORD *)v52 + 6) = v53;
        v52 += 24;
        *((_DWORD *)v52 - 1) = (v51 + v21) >> 4;
        v21 += *(_DWORD *)(v15 + 116) + *(_DWORD *)(*(_QWORD *)(v52 - 12) + 12LL);
        --v50;
      }
      while ( v50 );
    }
    v18 = 0;
  }
  v20 = v21;
LABEL_33:
  *(_DWORD *)(v15 + 112) = v21;
  *(_DWORD *)(v15 + 80) = v21;
  *(_DWORD *)(v15 + 84) = 0;
  *(_DWORD *)(v15 + 96) = v18;
  *(_DWORD *)(v15 + 104) = v20;
  v45 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 976LL) + 340LL) & 0x40) != 0 )
  {
    *(_DWORD *)(v15 + 100) = -*(_DWORD *)(v45 + 312);
    result = *(_QWORD *)a3;
    v47 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
  }
  else
  {
    *(_DWORD *)(v15 + 100) = *(_DWORD *)(v45 + 308);
    result = *(_QWORD *)a3;
    v47 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  }
  *(_DWORD *)(v15 + 108) = v47;
  *(_DWORD *)(v15 + 232) |= 4u;
  return result;
}
