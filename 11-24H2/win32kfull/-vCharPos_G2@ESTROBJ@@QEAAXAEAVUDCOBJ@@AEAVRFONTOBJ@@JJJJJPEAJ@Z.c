/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1400C0CA0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AD5F0 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AEEE0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1400C10A0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1400C1100 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1403112AC (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G2(
        ESTROBJ *this,
        struct UDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int *a9)
{
  __int64 v10; // rcx
  int v11; // r13d
  int *v14; // r14
  int *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  struct _GLYPHPOS *v18; // r8
  unsigned __int16 *v19; // r9
  float v20; // xmm6_4
  int v21; // r12d
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdx
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rcx
  __m128i v34; // xmm0
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r14d
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // r11
  char *v44; // rdi
  int v45; // edx
  int v46; // ecx
  __int64 v47; // r11
  int v48; // [rsp+48h] [rbp-51h] BYREF
  float v49; // [rsp+4Ch] [rbp-4Dh] BYREF
  __int64 v50; // [rsp+50h] [rbp-49h] BYREF
  __int64 v51; // [rsp+58h] [rbp-41h]
  __int64 v52; // [rsp+60h] [rbp-39h]
  __int64 v53; // [rsp+68h] [rbp-31h]
  __int64 v54; // [rsp+70h] [rbp-29h]
  __int64 v55; // [rsp+78h] [rbp-21h]
  __int128 v56; // [rsp+80h] [rbp-19h]

  v10 = *(_QWORD *)a3;
  v11 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 648LL) )
  {
    v14 = (int *)((char *)this + 116);
    v49 = 0.0;
    if ( a6 )
    {
      v48 = 0;
      bFToL(v10, &v48, 0LL);
      *v14 = v48;
      EPOINTQF::operator=(&v50, *(_QWORD *)a3 + 392LL);
      v43 = *v14;
      v54 = v43 * v50;
      v55 = v43 * v51;
    }
    else
    {
      v55 = v51;
      v54 = v50;
    }
    v15 = (int *)((char *)this + 120);
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)a3 + 400LL), a7, a8, (char *)this + 120) )
    {
      v44 = (char *)this + 120;
      v45 = *v14;
      v46 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( *v15 + v46 + *v14 < 0 )
      {
        v14 = (int *)((char *)this + 116);
        *v15 = -(v46 + v45);
        v44 = (char *)this + 120;
      }
      EPOINTQF::operator=(&v50, *(_QWORD *)a3 + 392LL);
      v47 = *v15;
      v15 = (int *)v44;
      v52 = v47 * v50;
      v53 = v47 * v51;
      v49 = *(float *)(*(_QWORD *)a3 + 460LL);
    }
    else
    {
      v53 = v51;
      v52 = v50;
    }
    v16 = *(_QWORD *)a3;
    LODWORD(v17) = 0;
    v18 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v19 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v48 = 0;
    v20 = *(float *)(v16 + 404);
    v18->ptl.x = a4;
    v21 = 0;
    *(_QWORD *)&v56 = &v18->ptl;
    v18->ptl.y = a5;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(
                         a3,
                         (struct RFONTOBJ *)*(unsigned int *)this,
                         v18,
                         v19,
                         &v48,
                         a2,
                         this) )
    {
      if ( v48 )
      {
        v22 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v22;
      }
      v23 = *(_DWORD *)this;
      v24 = 0x80000000LL;
      v25 = (_DWORD *)v56;
      v26 = 0x80000000LL;
      v27 = v52;
      v28 = v53;
      v29 = v54;
      v48 = v23;
      while ( 1 )
      {
        v30 = *((_QWORD *)v25 - 1);
        v31 = *(_DWORD *)(v30 + 12);
        if ( v11 >= v21 + *(_DWORD *)(v30 + 16) )
          v11 = v21 + *(_DWORD *)(v30 + 16);
        if ( (int)v17 <= v21 + *(_DWORD *)(v30 + 20) )
          LODWORD(v17) = v21 + *(_DWORD *)(v30 + 20);
        v26 += *(_QWORD *)(v30 + 48);
        v24 += *(_QWORD *)(v30 + 56);
        v21 += v31;
        v32 = *v14;
        if ( *v14 && v32 + v31 > 0 )
        {
          v21 += v32;
          v26 += v29;
          v24 += v55;
        }
        if ( *v15 && *(v25 - 4) == LODWORD(v49) )
        {
          v21 += *v15;
          v26 += v27;
          v24 += v28;
        }
        if ( a9 )
        {
          LODWORD(v33) = 0;
          v34 = (__m128i)COERCE_UNSIGNED_INT((float)v21);
          *(float *)v34.m128i_i32 = *(float *)v34.m128i_i32 * v20;
          v35 = (unsigned __int8)(_mm_cvtsi128_si32(v34) >> 23);
          if ( v35 <= 0x9E )
          {
            v36 = _mm_cvtsi128_si32(v34) & 0x7FFFFF | 0x800000LL;
            v37 = v35 < 0x76 ? v36 >> (118 - (unsigned __int8)v35) : v36 << ((unsigned __int8)v35 - 118);
            v33 = (v37 + 0x80000000LL) >> 32;
            if ( _mm_cvtsi128_si32(v34) < 0 )
              LODWORD(v33) = -(int)v33;
          }
          *a9++ = v33;
        }
        if ( !--v48 )
          break;
        v25 += 6;
        *v25 = a4 + HIDWORD(v26);
        v25[1] = HIDWORD(v24) + a5;
      }
      v38 = v17 - v21;
      *((_DWORD *)this + 21) = HIDWORD(v24);
      *((_DWORD *)this + 20) = HIDWORD(v26);
      if ( (int)v17 - v21 <= 0 )
        v38 = 0;
      v49 = (float)((float)((float)SHIDWORD(v24) * 0.0625) * (float)((float)SHIDWORD(v24) * 0.0625))
          + (float)((float)((float)SHIDWORD(v26) * 0.0625) * (float)((float)SHIDWORD(v26) * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v49);
      v39 = (unsigned __int8)(SLODWORD(v49) >> 23) - 114;
      if ( v39 <= 40 )
      {
        v40 = LODWORD(v49) & 0x7FFFFF | 0x800000LL;
        v41 = v39 < 0 ? v40 >> (114 - (unsigned __int8)(SLODWORD(v49) >> 23)) : v40 << v39;
        v17 = (v41 + 0x80000000LL) >> 32;
        if ( v49 < 0.0 )
          LODWORD(v17) = -(int)v17;
      }
      *((_DWORD *)this + 28) = v17;
      *((_DWORD *)this + 26) = v38 + v17;
      if ( v21 < v11 )
        v11 = v21;
      *((_DWORD *)this + 24) = v11;
      *((_DWORD *)this + 25) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
      v42 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 27) = v42;
    }
  }
}
