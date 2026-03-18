/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140229114
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AD5F0 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1400AB4C8 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AEEE0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1400C10A0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

void __fastcall ESTROBJ::vCharPos_G3(
        ESTROBJ *this,
        struct UDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        unsigned int a8,
        const int *a9,
        int *a10)
{
  __int64 v14; // rax
  float v15; // xmm8_4
  float v16; // xmm9_4
  int v17; // r14d
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  _DWORD *v22; // rsi
  int v23; // ecx
  __int64 v24; // rax
  double v25; // xmm0_8
  int v26; // edx
  struct _GLYPHPOS *v27; // r8
  int v28; // esi
  unsigned __int16 *v29; // r9
  signed int v30; // r14d
  POINTL *p_ptl; // r13
  int v32; // r12d
  __int64 v33; // rax
  struct RFONTOBJ *v34; // rdx
  int v35; // edx
  int *v36; // r15
  int v37; // ecx
  int v38; // ebx
  int v39; // r12d
  __int64 v40; // xmm0_8
  unsigned int v41; // r8d
  float v42; // xmm5_4
  int v43; // ecx
  int v44; // xmm5_4^4
  double v45; // xmm0_8
  int v46; // ecx
  int v47; // ecx
  float v48; // xmm5_4
  int v49; // xmm5_4^4
  int *v50; // rbx
  int v51; // r8d
  int v52; // edx
  int v53; // ecx
  signed int v54; // ecx
  double v55; // xmm0_8
  unsigned int v56; // r8d
  float v57; // xmm5_4
  double v58; // xmm5_8
  int v59; // eax
  int v60; // ecx
  unsigned int v61; // r8d
  int v62; // eax
  int v63; // ebx
  double v64; // xmm0_8
  int v65; // eax
  double v66; // xmm0_8
  double v67; // xmm1_8
  int v68; // r8d
  __int128 v69; // xmm0
  int v70; // r8d
  int v71; // [rsp+48h] [rbp-A9h] BYREF
  int v72; // [rsp+4Ch] [rbp-A5h] BYREF
  int v73; // [rsp+50h] [rbp-A1h] BYREF
  int v74; // [rsp+54h] [rbp-9Dh]
  int v75; // [rsp+58h] [rbp-99h]
  __int128 v76; // [rsp+60h] [rbp-91h]
  float v77; // [rsp+70h] [rbp-81h] BYREF
  float v78; // [rsp+74h] [rbp-7Dh] BYREF
  int v79; // [rsp+78h] [rbp-79h]
  int v80; // [rsp+7Ch] [rbp-75h]
  unsigned int v81; // [rsp+80h] [rbp-71h]
  int v82; // [rsp+84h] [rbp-6Dh]
  int *v83; // [rsp+88h] [rbp-69h]
  int v84; // [rsp+148h] [rbp+57h] BYREF
  LONG v85; // [rsp+150h] [rbp+5Fh]

  v85 = a4;
  v14 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 648LL) )
  {
    v15 = *(float *)(v14 + 448);
    v16 = *(float *)(v14 + 452);
    v17 = *(_DWORD *)(v14 + 308);
    v18 = *(float *)(v14 + 432);
    v19 = *(float *)(v14 + 436);
    v20 = *(float *)(v14 + 440);
    v21 = *(float *)(v14 + 444);
    v77 = v15;
    v78 = v16;
    v72 = 0;
    v73 = 0;
    v79 = v17;
    v75 = 0;
    if ( !a9 )
    {
      v22 = (_DWORD *)((char *)this + 120);
      *((_DWORD *)this + 29) = 0;
      v23 = a6;
      *v22 = 0;
      v75 = 0;
      if ( v23 )
      {
        v24 = *(_QWORD *)a3;
        v84 = 0;
        *(_QWORD *)&v25 = COERCE_UNSIGNED_INT((float)v23);
        *(float *)&v25 = *(float *)&v25 * *(float *)(v24 + 440);
        bFToL(v25, &v84, 0);
        *((_DWORD *)this + 29) = v84;
      }
      if ( bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)a3 + 440LL), a7, a8, (__int64)v22) )
      {
        vGenWidths(
          &v72,
          &v73,
          (struct EFLOAT *)&v78,
          (struct EFLOAT *)&v77,
          *(_DWORD *)(*(_QWORD *)a3 + 464LL),
          v17,
          0,
          v17);
        v26 = *((_DWORD *)this + 29);
        if ( v72 + v73 + v26 + *v22 < 0 )
          *v22 = -(v72 + v26 + v73);
        v75 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
      }
    }
    v27 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v28 = 0x7FFFFFFF;
    v29 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v30 = 0x80000000;
    v80 = 0;
    v27->ptl.y = a5;
    p_ptl = &v27->ptl;
    v27->ptl.x = a4;
    v32 = 0;
    v33 = *(_QWORD *)a3;
    v84 = 0;
    v34 = (struct RFONTOBJ *)*(unsigned int *)this;
    v82 = *(_DWORD *)(v33 + 312);
    v74 = 0x7FFFFFFF;
    *(_QWORD *)&v76 = 0x800000007FFFFFFFuLL;
    *((_QWORD *)&v76 + 1) = 0x7FFFFFFF80000000LL;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v34, v27, v29, &v84, a2, this) )
    {
      v35 = *((_DWORD *)this + 58);
      if ( v84 )
      {
        v35 |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) = v35;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) == 0 || (LOBYTE(v84) = 1, (v35 & 0x1400) != 0) )
        LOBYTE(v84) = 0;
      v81 = 0;
      if ( *(_DWORD *)this )
      {
        v36 = a10;
        v37 = 0x7FFFFFFF;
        while ( 1 )
        {
          v38 = v37;
          v83 = (int *)p_ptl[-1];
          vGenWidths(&v72, &v73, (struct EFLOAT *)&v78, (struct EFLOAT *)&v77, v83[3], v83[6], v83[7], v79);
          v39 = v72 + v32;
          v71 = 0;
          v40 = COERCE_UNSIGNED_INT((float)v39);
          *(float *)&v45 = *(float *)&v40 * v16;
          bFToL(v45, &v71, 0);
          v43 = v74;
          HIDWORD(v45) = v44;
          if ( v71 + v82 < v74 )
            v43 = v71 + v82;
          HIDWORD(v76) = v43;
          v46 = v71 + v82;
          if ( v71 + v82 >= v38 )
            v46 = v38;
          v74 = v46;
          v47 = DWORD1(v76);
          if ( v71 + v79 > SDWORD1(v76) )
            v47 = v71 + v79;
          v71 &= v41;
          DWORD1(v76) = v47;
          *(float *)&v45 = v42 * v15;
          bFToL(v45, &v71, v41);
          v50 = v83;
          v52 = v71 - v83[3] / 2;
          if ( (_BYTE)v84 )
          {
            if ( v52 - 4 < v28 )
              v28 = v52 - 4;
            v51 = v83[3];
            LODWORD(v76) = v28;
            if ( v52 + v51 + 4 > v30 )
            {
              v30 = v52 + v51 + 4;
              DWORD2(v76) = v30;
            }
          }
          else
          {
            if ( v52 + v83[4] - 4 < v28 )
              v28 = v52 + v83[4] - 4;
            v53 = v83[5] + 4;
            LODWORD(v76) = v28;
            v54 = v52 + v53;
            if ( v54 > v30 )
              v30 = v54;
            DWORD2(v76) = v30;
          }
          v71 = 0;
          HIDWORD(v55) = v49;
          *(float *)&v55 = v48 * v18;
          bFToL(v55, &v71, 0);
          *(float *)&v58 = v57 * v19;
          v59 = v50[13] / (int)(v56 + 2);
          v60 = v71;
          v71 &= v56;
          p_ptl->x = v85 + v60 - v59;
          bFToL(v58, &v71, v56);
          p_ptl->y = a5 + v71 - v50[15] / (int)(v61 + 2);
          if ( !a9 )
            break;
          v62 = *a9;
          v71 &= v61;
          v63 = v62 + v80;
          ++a9;
          v80 = v63;
          *(_QWORD *)&v64 = COERCE_UNSIGNED_INT((float)v63);
          *(float *)&v64 = *(float *)&v64 * v20;
          bFToL(v64, &v71, v61);
          v32 = v71;
          if ( v36 )
          {
            *v36 = v63;
LABEL_41:
            ++v36;
          }
LABEL_42:
          p_ptl += 3;
          v37 = v74;
          ++v81;
          HIDWORD(v76) = v74;
          if ( v81 >= *(_DWORD *)this )
            goto LABEL_43;
        }
        v32 = v73 + *((_DWORD *)this + 29) + v39;
        v65 = *((_DWORD *)this + 30);
        if ( v65 )
        {
          if ( p_ptl[-2].x == v75 )
            v32 += v65;
        }
        if ( !v36 )
          goto LABEL_42;
        v71 &= v61;
        *(_QWORD *)&v66 = COERCE_UNSIGNED_INT((float)v32);
        *(float *)&v66 = *(float *)&v66 * v21;
        bFToL(v66, &v71, v61);
        *v36 = v71;
        goto LABEL_41;
      }
LABEL_43:
      v84 = 0;
      *(_QWORD *)&v67 = COERCE_UNSIGNED_INT((float)v32);
      bFToL(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(*(float *)&v67 * v18)), &v84, 0);
      v68 = v84;
      v84 = 0;
      *(float *)&v67 = *(float *)&v67 * v19;
      *((_DWORD *)this + 20) = v68;
      bFToL(v67, &v84, 0);
      v69 = v76;
      v70 = v84;
      *((_DWORD *)this + 58) |= 4u;
      *((_OWORD *)this + 6) = v69;
      *((_DWORD *)this + 21) = v70;
    }
  }
}
