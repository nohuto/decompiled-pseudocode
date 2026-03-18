/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400AE350
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AD5F0 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14005C3DC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1400ABD28 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400AC448 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AF180 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AF42C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400AFDC4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400C1FD8 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H1(
        unsigned int *a1,
        struct RFONTOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int *a6,
        int a7)
{
  struct _GLYPHPOS *v7; // r15
  RFONTOBJ *i; // rbp
  unsigned __int16 *v9; // r13
  int v11; // xmm6_4
  char *v12; // rdi
  __int64 v13; // rbx
  struct _GLYPHPOS *v14; // rsi
  __int64 v15; // r8
  _DWORD *v16; // rbp
  int v17; // r14d
  struct GPRUN *v18; // rbp
  unsigned __int16 *v19; // r15
  int v20; // ebx
  __int64 v21; // r8
  struct _GLYPHDATA *v22; // rbx
  __int64 v23; // rax
  LONG *p_y; // r8
  __int64 v25; // r9
  int v26; // r13d
  int v27; // esi
  int v28; // edi
  int v29; // ebx
  int v30; // r11d
  int v31; // r10d
  int *v32; // r14
  __int64 v33; // rdx
  int v34; // eax
  struct GPRUN *Run; // rax
  __int64 v36; // rdx
  __int64 result; // rax
  int v38; // ecx
  __m128i v39; // xmm0
  int v40; // ebp
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // r10d
  int *v46; // r14
  int v47; // edx
  int v48; // eax
  __m128i v49; // xmm0
  int v50; // ebp
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // [rsp+40h] [rbp-78h]
  struct _GLYPHPOS *v55; // [rsp+50h] [rbp-68h]
  struct UDCOBJ *v57; // [rsp+C8h] [rbp+10h]

  v57 = a2;
  v7 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  i = a3;
  v9 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v11 = a7;
  v55 = v7;
  a1[1] |= *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x40 | 2;
  v12 = (char *)v9;
  v13 = *a1;
  v14 = v7;
  v54 = *a1;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 480LL) )
  {
    result = RFONTOBJ::bAllocateCache(a3, a2);
    if ( !(_DWORD)result )
      return result;
    a2 = v57;
  }
  v15 = *(_QWORD *)i;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 104LL) + 1808LL) & 0x40000000) != 0 && *(_DWORD *)(v15 + 88) == 1 )
  {
    result = RFONTOBJ::bGetGlyphMetrics(i, v13, v7, v9, a2, 0, (struct ESTROBJ *)a1);
    if ( (_DWORD)result )
      goto LABEL_13;
    return result;
  }
  v16 = *(_DWORD **)(v15 + 480);
  v17 = 1;
  a7 = 1;
  if ( *v16 )
  {
    v18 = (struct GPRUN *)(v16 + 4);
    v19 = &v9[v13];
    while ( 1 )
    {
      if ( v12 >= (char *)v19 )
      {
        i = a3;
        v7 = v55;
        if ( v17 )
          goto LABEL_12;
        goto LABEL_13;
      }
      v20 = *(unsigned __int16 *)v12;
      v21 = (unsigned int)(v20 - *(_DWORD *)v18);
      if ( (unsigned int)v21 >= *((_DWORD *)v18 + 1) )
      {
        Run = RFONTOBJ::gprunFindRun(a3, v20);
        v18 = Run;
        v21 = (unsigned int)(v20 - *(_DWORD *)Run);
        if ( (unsigned int)v21 >= *((_DWORD *)Run + 1) )
        {
          result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(
                              a3,
                              v57,
                              (struct ESTROBJ *)a1,
                              v12,
                              (char *)v9,
                              v54,
                              &a7,
                              1);
          v22 = (struct _GLYPHDATA *)result;
          if ( !result )
            return result;
          goto LABEL_9;
        }
        _mm_lfence();
        v22 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v21);
      }
      else
      {
        _mm_lfence();
        v22 = *(struct _GLYPHDATA **)(*((_QWORD *)v18 + 1) + 8 * v21);
      }
      if ( !v22 )
      {
        v44 = (unsigned int)v21;
        result = RFONTOBJ::bInsertMetricsPlus(a3, (struct _GLYPHDATA **)(*((_QWORD *)v18 + 1) + 8 * v21));
        if ( !(_DWORD)result )
          return result;
        v22 = *(struct _GLYPHDATA **)(*((_QWORD *)v18 + 1) + 8 * v44);
      }
LABEL_9:
      v17 = a7;
      if ( !v22->gdf.pgb && a7 && *(_DWORD *)(*(_QWORD *)a3 + 88LL) )
      {
        if ( !(unsigned int)RFONTOBJ::bInsertGlyphbits(a3, v22) )
          v17 = 0;
        a7 = v17;
      }
      v12 += 2;
      v14->hg = v22->hg;
      v14->pgdf = &v22->gdf;
      ++v14;
    }
  }
  for ( i = a3; (_DWORD)v13; LODWORD(v13) = v13 - 1 )
  {
    v14->hg = *(_DWORD *)(*(_QWORD *)a3 + 456LL);
    v14->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
    ++v14;
  }
LABEL_12:
  v23 = *((_QWORD *)a1 + 8);
  a1[58] |= 2u;
  *((_QWORD *)a1 + 4) = v23;
LABEL_13:
  p_y = &v7->ptl.y;
  LODWORD(v25) = 0;
  v26 = a4 + 8;
  v27 = (a5 + 8) >> 4;
  v28 = 0;
  v7->ptl.x = (a4 + 8) >> 4;
  v29 = 0;
  v7->ptl.y = v27;
  v30 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)i + 268LL) & 0x10) == 0 || (a1[58] & 0x1400) != 0 )
  {
    v31 = *a1;
    v32 = a6;
    while ( 1 )
    {
      v33 = *(_QWORD *)(p_y - 3);
      v34 = *v32++;
      if ( (int)v25 + *(_DWORD *)(v33 + 16) < v28 )
        v28 = v25 + *(_DWORD *)(v33 + 16);
      if ( (int)v25 + *(_DWORD *)(v33 + 20) > v29 )
        v29 = v25 + *(_DWORD *)(v33 + 20);
      v30 += v34;
      if ( *(float *)&v11 == 16.0 )
      {
        LODWORD(v25) = 16 * v30;
      }
      else
      {
        LODWORD(v25) = 0;
        v39 = (__m128i)COERCE_UNSIGNED_INT((float)v30);
        *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32 * *(float *)&v11;
        v40 = _mm_cvtsi128_si32(v39);
        v41 = (unsigned __int8)(v40 >> 23);
        if ( v41 <= 0x9E )
        {
          v42 = v40 & 0x7FFFFF | 0x800000LL;
          v43 = v41 < 0x76 ? v42 >> (118 - (unsigned __int8)v41) : v42 << ((unsigned __int8)v41 - 118);
          v25 = (v43 + 0x80000000LL) >> 32;
          if ( v40 < 0 )
            LODWORD(v25) = -(int)v25;
        }
      }
      if ( !--v31 )
        break;
      p_y += 6;
      *p_y = v27;
      *(p_y - 1) = ((int)v25 + v26) >> 4;
    }
  }
  else
  {
    v45 = *a1;
    v46 = a6;
    while ( 1 )
    {
      ++v46;
      v47 = v29;
      v48 = v25;
      if ( (int)v25 >= v28 )
        v48 = v28;
      v28 = v48;
      v29 = v25 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      if ( v29 <= v47 )
        v29 = v47;
      v30 += *(v46 - 1);
      if ( *(float *)&v11 == 16.0 )
      {
        LODWORD(v25) = 16 * v30;
      }
      else
      {
        LODWORD(v25) = 0;
        v49 = (__m128i)COERCE_UNSIGNED_INT((float)v30);
        *(float *)v49.m128i_i32 = *(float *)v49.m128i_i32 * *(float *)&v11;
        v50 = _mm_cvtsi128_si32(v49);
        v51 = (unsigned __int8)(v50 >> 23);
        if ( v51 <= 0x9E )
        {
          v52 = v50 & 0x7FFFFF | 0x800000LL;
          v53 = v51 < 0x76 ? v52 >> (118 - (unsigned __int8)v51) : v52 << ((unsigned __int8)v51 - 118);
          v25 = (v53 + 0x80000000LL) >> 32;
          if ( v50 < 0 )
            LODWORD(v25) = -(int)v25;
        }
      }
      if ( !--v45 )
        break;
      p_y += 6;
      *p_y = v27;
      *(p_y - 1) = ((int)v25 + v26) >> 4;
    }
  }
  a1[21] = 0;
  a1[20] = v25;
  if ( (int)v25 <= v29 )
    LODWORD(v25) = v29;
  a1[24] = v28;
  a1[26] = v25;
  v36 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v57 + 976LL) + 340LL) & 0x40) != 0 )
  {
    a1[25] = -*(_DWORD *)(v36 + 312);
    result = *(_QWORD *)a3;
    v38 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
  }
  else
  {
    a1[25] = *(_DWORD *)(v36 + 308);
    result = *(_QWORD *)a3;
    v38 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  }
  a1[27] = v38;
  a1[58] |= 4u;
  return result;
}
