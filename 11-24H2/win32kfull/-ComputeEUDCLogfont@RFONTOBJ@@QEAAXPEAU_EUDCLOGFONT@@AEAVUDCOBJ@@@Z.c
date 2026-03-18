/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z @ 0x1400BE3D0
 * Callers:
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401DCED4 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1400BD5E4 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BEA9C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BEB94 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400EABCC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct UDCOBJ *a3)
{
  struct UDCOBJ *v4; // r15
  __int64 v6; // r8
  _DWORD *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // r12d
  __int64 SessionState; // rax
  bool v12; // zf
  __int64 v13; // r13
  __int64 v14; // r8
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  __m128i v19; // xmm0
  int v20; // r15d
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edi
  int v26; // eax
  int v27; // eax
  __m128i v28; // xmm0
  int v29; // edi
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  int v38; // esi
  unsigned int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // ecx
  __m128i v46; // xmm0
  int v47; // r15d
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // r8d
  int v55; // r9d
  int v56; // ecx
  __m128i v57; // xmm1
  int v58; // r15d
  unsigned int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  float v63; // xmm2_4
  float v64; // xmm1_4
  __int64 v65; // rdx
  unsigned int v66; // r8d
  unsigned int v67; // eax
  _DWORD *v68; // [rsp+20h] [rbp-60h]
  _DWORD *v69; // [rsp+28h] [rbp-58h] BYREF
  struct LFONT *v70; // [rsp+30h] [rbp-50h]
  __int64 v71[5]; // [rsp+40h] [rbp-40h] BYREF
  int v72; // [rsp+68h] [rbp-18h]
  __int64 v73; // [rsp+C0h] [rbp+40h] BYREF
  struct UDCOBJ *v74; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v75; // [rsp+D8h] [rbp+58h]

  v74 = a3;
  v4 = a3;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v69, *(struct HLFONT__ **)(*(_QWORD *)a3 + 1744LL), *(HDEV *)(*(_QWORD *)a3 + 48LL));
  v73 = *(_QWORD *)this;
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v71,
    *(const struct _IFIMETRICS **)(*(_QWORD *)(v73 + 120) + 32LL),
    (struct RFONTOBJ *)&v73,
    v4);
  v7 = v69;
  v68 = v69;
  if ( !v69 )
  {
    v73 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v73);
    LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v69);
    return;
  }
  v8 = v71[0];
  v75 = v71[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v71[0] + 52);
  v9 = *(unsigned int *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 1) = v9;
  *((_DWORD *)a2 + 3) = v7[63];
  *((_DWORD *)a2 + 2) = v7[64];
  *((_DWORD *)a2 + 4) = v7[65];
  *((_DWORD *)a2 + 5) = v7[66];
  *((_DWORD *)a2 + 7) = 1065353216;
  v10 = *(_DWORD *)(v8 + 48) & 0x401000;
  SessionState = W32GetSessionState(v9, v7, v6);
  v12 = (*(_DWORD *)(v8 + 48) & 0x3000010) == 0;
  v13 = *(_QWORD *)(SessionState + 96);
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v8 + 48) & 0x3000010;
  if ( v12 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) != 0x802 )
    {
      if ( v10 )
      {
        LODWORD(v74) = 0;
        bFToL(2050LL, &v74, 0LL);
        *((_DWORD *)a2 + 2) = (_DWORD)v74;
      }
      v34 = *(_QWORD *)this;
      v35 = 0;
      if ( (*(_DWORD *)(v13 + 13516) & 0x4000) != 0 )
        v36 = _mm_cvtsi32_si128(*(_DWORD *)(v34 + 316));
      else
        v36 = _mm_cvtsi32_si128(*(_DWORD *)(v34 + 308));
      v37 = (__m128i)_mm_cvtepi32_ps(v36);
      *(float *)v37.m128i_i32 = *(float *)v37.m128i_i32 * *(float *)(v34 + 692);
      v38 = _mm_cvtsi128_si32(v37);
      v39 = (unsigned __int8)(v38 >> 23);
      if ( v39 <= 0x9E )
      {
        v40 = v38 & 0x7FFFFFLL | 0x800000;
        v41 = v39 < 0x76 ? v40 >> (118 - (unsigned __int8)v39) : v40 << ((unsigned __int8)v39 - 118);
        v42 = (v41 + 0x80000000LL) >> 32;
        v35 = -(int)v42;
        if ( v38 >= 0 )
          v35 = v42;
      }
      goto LABEL_42;
    }
    if ( v10 )
      *((_DWORD *)a2 + 2) = *(__int16 *)(v8 + 76);
    v43 = _wcsicmp((const wchar_t *)(v8 + *(int *)(v8 + 16)), L"Ms Sans Serif");
    v44 = *(_QWORD *)this;
    if ( v43 )
    {
      if ( (*(_DWORD *)(v13 + 13516) & 0x4000) != 0 )
      {
        v45 = *(_DWORD *)(v44 + 316);
LABEL_52:
        v35 = (v45 + 8) >> 4;
        goto LABEL_42;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)(v44 + 316) - 193) <= 0x4E )
    {
      v35 = 12;
LABEL_42:
      *((_DWORD *)a2 + 3) = v35;
      if ( v10 )
        *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 656LL);
      goto LABEL_17;
    }
    v45 = *(_DWORD *)(v44 + 308);
    goto LABEL_52;
  }
  v14 = *(_QWORD *)this;
  v15 = *(_DWORD *)(*(_QWORD *)this + 316LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    v16 = (v15 + 8) >> 4;
  }
  else
  {
    v16 = 0;
    v28 = (__m128i)COERCE_UNSIGNED_INT((float)v15);
    *(float *)v28.m128i_i32 = *(float *)v28.m128i_i32 * *(float *)(v14 + 692);
    v29 = _mm_cvtsi128_si32(v28);
    v30 = (unsigned __int8)(v29 >> 23) - 118;
    if ( v30 <= 40 )
    {
      v31 = v29 & 0x7FFFFFLL | 0x800000;
      v32 = v30 < 0 ? v31 >> (118 - (unsigned __int8)(v29 >> 23)) : v31 << v30;
      v33 = (v32 + 0x80000000LL) >> 32;
      v16 = -(int)v33;
      if ( v29 >= 0 )
        v16 = v33;
    }
  }
  v17 = *(_DWORD *)(v14 + 376);
  if ( v17 == 0x80000000 )
  {
    v18 = 0;
    LODWORD(v73) = *(_DWORD *)(v14 + 216);
    v19 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v75 + 56));
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 * *(float *)&v73;
    v20 = _mm_cvtsi128_si32(v19);
    v21 = (unsigned __int8)(v20 >> 23);
    if ( v21 <= 0x9E )
    {
      v22 = v20 & 0x7FFFFFLL | 0x800000;
      v23 = v21 < 0x76 ? v22 >> (118 - (unsigned __int8)v21) : v22 << ((unsigned __int8)v21 - 118);
      v24 = (v23 + 0x80000000LL) >> 32;
      v18 = -(int)v24;
      if ( v20 >= 0 )
        v18 = v24;
    }
    v25 = v16 - v18;
    if ( v10 && !*(_DWORD *)(v13 + 19608) )
    {
      v56 = 0;
      v57 = (__m128i)COERCE_UNSIGNED_INT((float)v72);
      LODWORD(v73) = *(_DWORD *)(v14 + 212);
      *(float *)v57.m128i_i32 = *(float *)v57.m128i_i32 * *(float *)&v73;
      v58 = _mm_cvtsi128_si32(v57);
      v59 = (unsigned __int8)(v58 >> 23);
      if ( v59 <= 0x9E )
      {
        v60 = v58 & 0x7FFFFFLL | 0x800000;
        v61 = v59 < 0x76 ? v60 >> (118 - (unsigned __int8)v59) : v60 << ((unsigned __int8)v59 - 118);
        v62 = (v61 + 0x80000000LL) >> 32;
        v56 = -(int)v62;
        if ( v58 >= 0 )
          v56 = v62;
      }
      *((_DWORD *)a2 + 2) = v56;
    }
  }
  else
  {
    v25 = 0;
    v46 = (__m128i)COERCE_UNSIGNED_INT((float)v17);
    *(float *)v46.m128i_i32 = *(float *)v46.m128i_i32 * *(float *)(v14 + 692);
    v47 = _mm_cvtsi128_si32(v46);
    v48 = (unsigned __int8)(v47 >> 23);
    if ( (unsigned int)v48 <= 0x9E )
    {
      v49 = v47 & 0x7FFFFFLL | 0x800000;
      if ( (unsigned int)v48 < 0x76 )
      {
        LOBYTE(v48) = 118 - v48;
        v50 = v49 >> v48;
      }
      else
      {
        v48 = (unsigned int)(v48 - 118);
        v50 = v49 << v48;
      }
      v51 = (v50 + 0x80000000LL) >> 32;
      v25 = -(int)v51;
      if ( v47 >= 0 )
        v25 = v51;
    }
    if ( v10 && !*(_DWORD *)(v13 + 19608) )
    {
      LODWORD(v73) = 0;
      bFToL(v48, &v73, 0LL);
      *((_DWORD *)a2 + 2) = v73;
    }
  }
  if ( v25 < 0 )
    v26 = v16 + v25;
  else
    v26 = v16 - v25;
  *((_DWORD *)a2 + 3) = v26;
  if ( v26 <= 13 )
  {
    if ( v26 == 11 )
    {
      if ( v16 >= 12 )
        *((_DWORD *)a2 + 3) = 12;
    }
    else if ( v26 == 13 && v16 >= 15 )
    {
      *((_DWORD *)a2 + 3) = 15;
    }
  }
  if ( v68[64] && !v10 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v63 = *(float *)(*(_QWORD *)this + 152LL);
    v64 = *(float *)(*(_QWORD *)this + 136LL);
    *(float *)&v73 = v63;
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v73) )
    {
      v64 = *(float *)(v65 + 140);
      v63 = *(float *)(v65 + 156);
    }
    *((float *)a2 + 7) = v64 / v63;
  }
  v4 = v74;
LABEL_17:
  v27 = *(_DWORD *)(v75 + 48);
  if ( (v27 & 0x10) == 0 )
  {
    if ( (v27 & 0x200000) != 0 )
    {
      v52 = *((unsigned int *)a2 + 5);
      if ( (_DWORD)v52 )
      {
        v66 = lNormAngle(v52);
        v67 = 900 * (v66 / 0x384);
        *((_DWORD *)a2 + 5) = v67;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v66 != v67 )
          *((_DWORD *)a2 + 5) = lNormAngle(v67 + 900);
      }
      v53 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v53 )
      {
        v54 = lNormAngle(v53);
        v55 = 900 * (v54 / 900);
        *((_DWORD *)a2 + 4) = v55;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v54 != v55 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v55 + 900));
      }
    }
    else
    {
      *((_DWORD *)a2 + 5) = 0;
      *((_DWORD *)a2 + 4) = 0;
    }
  }
  v73 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v73);
  if ( v70 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v70);
}
