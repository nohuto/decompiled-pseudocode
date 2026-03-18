/*
 * XREFs of ?vNextStyleEvent@STYLER@pathwide@@QEAAXXZ @ 0x1400EA778
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x1400EA4E0 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 * Callees:
 *     ?efWorldLength@STYLER@pathwide@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1400C0C10 (-efWorldLength@STYLER@pathwide@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400EABCC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?ptfxFraction@pathwide@@YA?AU_POINTFIX@@U2@PEAVLINEDATA@1@AEAVEFLOAT@@2@Z @ 0x1400EAD28 (-ptfxFraction@pathwide@@YA-AU_POINTFIX@@U2@PEAVLINEDATA@1@AEAVEFLOAT@@2@Z.c)
 *     ?vNextEvent@LINER@pathwide@@QEAAXXZ @ 0x1400EBF1C (-vNextEvent@LINER@pathwide@@QEAAXXZ.c)
 */

void __fastcall pathwide::STYLER::vNextStyleEvent(pathwide::STYLER *this)
{
  int v1; // eax
  _DWORD *v3; // rdi
  float *v4; // rsi
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int IsZero; // eax
  __int64 v9; // rdx
  float *v10; // r10
  float *v11; // r11
  int v12; // r8d
  float v13; // r9d
  float *v14; // rcx
  float v15; // xmm0_4
  __m128i v16; // xmm1
  __int64 v17; // r9
  __m128i v18; // xmm2
  int v19; // esi
  unsigned int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // edi
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  int *v27; // rax
  int v28; // xmm0_4
  struct EFLOAT *v29; // rbp
  struct pathwide::LINEDATA *v30; // r14
  float v31; // xmm0_4
  float v32; // xmm1_4
  int *v33; // rax
  int v34; // xmm0_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm2_4
  __int64 v38; // r8
  int v39; // xmm0_4
  int *v40; // rcx
  int v41; // xmm0_4
  __int64 v42; // r8
  int v43; // xmm0_4
  __int64 v44; // rax
  struct EFLOAT *v45; // [rsp+20h] [rbp-18h]
  __int64 v46; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 10);
  if ( (v1 & 2) == 0 )
  {
    pathwide::LINER::vNextEvent(this);
    return;
  }
  v3 = (_DWORD *)((char *)this + 688);
  v4 = (float *)((char *)this + 744);
  if ( (v1 & 4) != 0 )
  {
    if ( *v3 == 5 )
    {
      v29 = (pathwide::STYLER *)((char *)this + 756);
      v30 = (pathwide::STYLER *)((char *)this + 752);
      while ( 1 )
      {
        v31 = *((float *)this + 187);
        if ( v31 < *v4 )
        {
          v32 = *((float *)this + 187);
          *v4 = *v4 - v32;
          *(float *)v30 = v32 + *(float *)v30;
          *(struct _POINTFIX *)((char *)this + 692) = pathwide::ptfxFraction(
                                                        *((pathwide **)this + 95),
                                                        *(struct _POINTFIX *)((char *)this + 712),
                                                        v30,
                                                        v29,
                                                        v45);
          v33 = (int *)*((_QWORD *)this + 91);
          v34 = *v33++;
          *((_QWORD *)this + 91) = v33;
          if ( (unsigned __int64)v33 >= *((_QWORD *)this + 92) )
            *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
          *((_DWORD *)this + 187) = v34;
          *v3 = 6;
          return;
        }
        *((float *)this + 187) = v31 - *v4;
        pathwide::LINER::vNextEvent(this);
        if ( (unsigned int)(*v3 - 3) > 1 )
          break;
        v38 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 188) = FP_0_0;
        v39 = *(_DWORD *)pathwide::STYLER::efWorldLength((__int64)this, (EFLOAT *)&v46, *(_QWORD *)(v38 + 40));
        *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
        *(_DWORD *)v29 = v39;
        *(_DWORD *)v4 = v39;
      }
      if ( *v3 == 1 )
        pathwide::LINER::vNextEvent(this);
      *((_DWORD *)this + 10) &= ~4u;
      *v3 = 8;
      return;
    }
    v5 = *((float *)this + 187);
    if ( v5 <= *v4 )
    {
      v6 = *((float *)this + 187);
      *v4 = *v4 - v6;
      v7 = v6 + *((float *)this + 188);
      LODWORD(v46) = *((_DWORD *)this + 187);
      *((float *)this + 188) = v7;
      IsZero = EFLOAT::bIsZero((pathwide::STYLER *)((char *)this + 756));
      v12 = 0;
      if ( !IsZero )
      {
        v13 = *v10;
        v14 = v10 + 20;
        if ( (*(_DWORD *)v10 & 0x10) == 0 )
        {
          v35 = (float)*((int *)v10 + 10);
          v36 = (float)*((int *)v10 + 11);
          *v14 = v35;
          v10[21] = v36;
          v37 = FP_1_0 / *v11;
          *v14 = v37 * v35;
          v10[21] = v37 * v36;
          *(_DWORD *)v10 = LODWORD(v13) | 0x10;
          v10 = (float *)*((_QWORD *)this + 89);
        }
        v15 = *((float *)this + 188);
        v16 = (__m128i)*(unsigned int *)v14;
        LODWORD(v17) = 0;
        v18 = (__m128i)*((unsigned int *)v14 + 1);
        *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 * v15;
        *(float *)v18.m128i_i32 = *(float *)v18.m128i_i32 * v15;
        v19 = _mm_cvtsi128_si32(v16);
        v20 = (unsigned __int8)(v19 >> 23);
        if ( v20 <= 0x9E )
        {
          v21 = v19 & 0x7FFFFFLL | 0x800000;
          v22 = v20 < 0x76 ? v21 >> (118 - (unsigned __int8)v20) : v21 << ((unsigned __int8)v20 - 118);
          v17 = (v22 + 0x80000000LL) >> 32;
          if ( v19 < 0 )
            LODWORD(v17) = -(int)v17;
        }
        v23 = _mm_cvtsi128_si32(v18);
        v24 = (unsigned __int8)(v23 >> 23);
        if ( v24 <= 0x9E )
        {
          v25 = v23 & 0x7FFFFFLL | 0x800000;
          v26 = v24 < 0x76 ? v25 >> (118 - (unsigned __int8)v24) : v25 << ((unsigned __int8)v24 - 118);
          v12 = (unsigned __int64)(v26 + 0x80000000LL) >> 32;
          if ( v23 < 0 )
            v12 = -v12;
        }
        HIDWORD(v46) = v12 + HIDWORD(v9);
        LODWORD(v46) = v9 + v17;
        v9 = v46;
      }
      v27 = (int *)*((_QWORD *)this + 91);
      *(_QWORD *)((char *)this + 692) = v9;
      *((_QWORD *)this + 88) = v10;
      v28 = *v27++;
      *((_QWORD *)this + 91) = v27;
      if ( (unsigned __int64)v27 >= *((_QWORD *)this + 92) )
        *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
      *((_DWORD *)this + 187) = v28;
      *((_DWORD *)this + 172) = 5;
      return;
    }
    *((float *)this + 187) = v5 - *v4;
  }
  pathwide::LINER::vNextEvent(this);
  if ( *v3 )
  {
    if ( (unsigned int)(*v3 - 3) >= 2 )
    {
      *((_DWORD *)this + 10) &= ~4u;
      return;
    }
  }
  else
  {
    v40 = (int *)*((_QWORD *)this + 90);
    *((_QWORD *)this + 91) = v40;
    v41 = *v40;
    *((_QWORD *)this + 91) = v40 + 1;
    if ( (unsigned __int64)(v40 + 1) >= *((_QWORD *)this + 92) )
      *((_QWORD *)this + 91) = v40;
    *((_DWORD *)this + 187) = v41;
  }
  v42 = *((_QWORD *)this + 89);
  *((_DWORD *)this + 188) = FP_0_0;
  v43 = *(_DWORD *)pathwide::STYLER::efWorldLength((__int64)this, (EFLOAT *)&v46, *(_QWORD *)(v42 + 40));
  v44 = *(_QWORD *)((char *)this + 692);
  *((_DWORD *)this + 10) |= 4u;
  *((_QWORD *)this + 95) = v44;
  *(_DWORD *)v4 = v43;
  *((_DWORD *)this + 189) = v43;
}
