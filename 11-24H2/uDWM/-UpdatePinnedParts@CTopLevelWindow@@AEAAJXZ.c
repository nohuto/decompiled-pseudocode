/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18002A410
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180029F90 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180022968 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800239C8 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x18002BF44 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 *     ?GetShadowMargins@CWindowBorder@@QEAA?AU_MARGINS@@XZ @ 0x180035B58 (-GetShadowMargins@CWindowBorder@@QEAA-AU_MARGINS@@XZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v2; // eax
  int v4; // ecx
  __m128i v5; // xmm6
  int v6; // esi
  int v7; // edi
  unsigned int v8; // edx
  int v9; // ecx
  struct CTopLevelWindow::WindowFrame *v10; // rax
  int v11; // r13d
  int v12; // r9d
  int v13; // ebx
  double v14; // xmm1_8
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // esi
  int v19; // eax
  int v20; // r14d
  int v21; // eax
  int v22; // eax
  int v23; // r12d
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r11d
  __int64 v32; // r10
  CWindowBorder *v33; // rcx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r8d
  struct _MARGINS **v38; // rbx
  LONG *v39; // rdi
  struct _MARGINS *v40; // rsi
  __int64 v41; // r14
  struct _MARGINS *ShadowMargins; // rax
  struct _MARGINS *v44; // rcx
  struct _MARGINS *v45; // rcx
  int v46; // [rsp+28h] [rbp-E0h]
  int cxLeftWidth; // [rsp+28h] [rbp-E0h]
  int v48; // [rsp+2Ch] [rbp-DCh]
  int cxRightWidth; // [rsp+2Ch] [rbp-DCh]
  int v50; // [rsp+30h] [rbp-D8h]
  struct tagSIZE v51; // [rsp+38h] [rbp-D0h] BYREF
  int v52; // [rsp+40h] [rbp-C8h]
  int v53; // [rsp+44h] [rbp-C4h]
  struct tagSIZE v54; // [rsp+48h] [rbp-C0h] BYREF
  struct tagSIZE v55[2]; // [rsp+50h] [rbp-B8h]
  struct _MARGINS v56; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+70h] [rbp-98h]
  struct _MARGINS v58; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v59[17]; // [rsp+88h] [rbp-80h] BYREF
  int v60; // [rsp+CCh] [rbp-3Ch]
  int v61; // [rsp+D0h] [rbp-38h]
  int v62; // [rsp+D4h] [rbp-34h]
  int v63; // [rsp+D8h] [rbp-30h]
  int v64; // [rsp+DCh] [rbp-2Ch]
  int v65; // [rsp+E0h] [rbp-28h]
  int v66; // [rsp+E4h] [rbp-24h]
  int v67; // [rsp+E8h] [rbp-20h]
  int v68; // [rsp+ECh] [rbp-1Ch]
  int v69; // [rsp+F0h] [rbp-18h]
  int v70; // [rsp+F4h] [rbp-14h]
  int v71; // [rsp+F8h] [rbp-10h]
  int v72; // [rsp+FCh] [rbp-Ch]
  int v73; // [rsp+100h] [rbp-8h]
  int v74; // [rsp+104h] [rbp-4h]
  int v75; // [rsp+108h] [rbp+0h]
  int v76; // [rsp+10Ch] [rbp+4h]
  int v77; // [rsp+110h] [rbp+8h]
  int v78; // [rsp+114h] [rbp+Ch]
  int v79; // [rsp+118h] [rbp+10h]
  int v80; // [rsp+11Ch] [rbp+14h]
  int v81; // [rsp+120h] [rbp+18h]
  int v82; // [rsp+124h] [rbp+1Ch]
  int v83; // [rsp+128h] [rbp+20h]
  int v84; // [rsp+12Ch] [rbp+24h]
  int v85; // [rsp+130h] [rbp+28h]
  int v86; // [rsp+134h] [rbp+2Ch]
  int v87; // [rsp+138h] [rbp+30h]
  int v88; // [rsp+13Ch] [rbp+34h]
  int v89; // [rsp+140h] [rbp+38h]
  int v90; // [rsp+144h] [rbp+3Ch]
  int v91; // [rsp+148h] [rbp+40h]
  LONG cx; // [rsp+14Ch] [rbp+44h]
  int v93; // [rsp+150h] [rbp+48h]
  int v94; // [rsp+154h] [rbp+4Ch]
  int v95; // [rsp+158h] [rbp+50h]
  int v96; // [rsp+15Ch] [rbp+54h]
  int v97; // [rsp+160h] [rbp+58h]
  int v98; // [rsp+164h] [rbp+5Ch]
  int v99; // [rsp+168h] [rbp+60h]
  int v100; // [rsp+16Ch] [rbp+64h]
  int v101; // [rsp+170h] [rbp+68h]
  int v102; // [rsp+174h] [rbp+6Ch]
  int v103; // [rsp+178h] [rbp+70h]
  int v104; // [rsp+17Ch] [rbp+74h]
  int v105; // [rsp+180h] [rbp+78h]
  int v106; // [rsp+184h] [rbp+7Ch]
  int v107; // [rsp+188h] [rbp+80h]
  int v108; // [rsp+18Ch] [rbp+84h]
  int v109; // [rsp+190h] [rbp+88h]
  int v110; // [rsp+194h] [rbp+8Ch]
  int v111; // [rsp+198h] [rbp+90h]
  int v112; // [rsp+19Ch] [rbp+94h]
  int v113; // [rsp+1A0h] [rbp+98h]
  LONG v114; // [rsp+1A4h] [rbp+9Ch]
  int v115; // [rsp+1A8h] [rbp+A0h]
  int v116; // [rsp+1ACh] [rbp+A4h]
  int v117; // [rsp+1B0h] [rbp+A8h]
  int v118; // [rsp+1B4h] [rbp+ACh]
  int v119; // [rsp+1B8h] [rbp+B0h]
  LONG v120; // [rsp+1BCh] [rbp+B4h]
  int v121; // [rsp+1C0h] [rbp+B8h]
  int v122; // [rsp+1C4h] [rbp+BCh]
  int v123; // [rsp+1C8h] [rbp+C0h]
  int v124; // [rsp+1CCh] [rbp+C4h]
  int v125; // [rsp+1D0h] [rbp+C8h]
  int v126; // [rsp+1D4h] [rbp+CCh]
  int v127; // [rsp+1D8h] [rbp+D0h]
  int v128; // [rsp+1DCh] [rbp+D4h]
  int v129; // [rsp+1E0h] [rbp+D8h]
  int v130; // [rsp+1E4h] [rbp+DCh]
  int v131; // [rsp+1E8h] [rbp+E0h]
  int v132; // [rsp+1ECh] [rbp+E4h]
  int v133; // [rsp+1F0h] [rbp+E8h]
  int v134; // [rsp+1F4h] [rbp+ECh]
  int v135; // [rsp+1F8h] [rbp+F0h]
  int v136; // [rsp+1FCh] [rbp+F4h]
  int v137; // [rsp+200h] [rbp+F8h]
  int v138; // [rsp+204h] [rbp+FCh]
  int v139; // [rsp+208h] [rbp+100h]
  int v140; // [rsp+20Ch] [rbp+104h]
  int v141; // [rsp+210h] [rbp+108h]
  int v142; // [rsp+214h] [rbp+10Ch]
  int v143; // [rsp+218h] [rbp+110h]
  LONG v144; // [rsp+21Ch] [rbp+114h]
  int v145; // [rsp+220h] [rbp+118h]
  int v146; // [rsp+224h] [rbp+11Ch]
  int v147; // [rsp+228h] [rbp+120h]
  int v148; // [rsp+22Ch] [rbp+124h]
  int v149; // [rsp+230h] [rbp+128h]
  int v150; // [rsp+234h] [rbp+12Ch]
  int v151; // [rsp+238h] [rbp+130h]
  int v152; // [rsp+23Ch] [rbp+134h]
  int v153; // [rsp+240h] [rbp+138h]
  int v154; // [rsp+244h] [rbp+13Ch]
  int v155; // [rsp+248h] [rbp+140h]
  int v156; // [rsp+24Ch] [rbp+144h]
  int v157; // [rsp+250h] [rbp+148h]
  int v158; // [rsp+254h] [rbp+14Ch]
  int v159; // [rsp+258h] [rbp+150h]
  int v160; // [rsp+25Ch] [rbp+154h]
  int v161; // [rsp+260h] [rbp+158h]
  int v162; // [rsp+264h] [rbp+15Ch]
  int v163; // [rsp+268h] [rbp+160h]
  int v164; // [rsp+26Ch] [rbp+164h]
  int v165; // [rsp+270h] [rbp+168h]
  int v166; // [rsp+274h] [rbp+16Ch]
  int v167; // [rsp+278h] [rbp+170h]
  int v168; // [rsp+27Ch] [rbp+174h]
  int v169; // [rsp+280h] [rbp+178h]
  LONG v170; // [rsp+284h] [rbp+17Ch]

  v1 = *(__m128i *)((char *)this + 620);
  v2 = *((_DWORD *)this + 151);
  v4 = *((_DWORD *)this + 152);
  v5 = 0LL;
  v6 = _mm_cvtsi128_si32(v1);
  *(__m128i *)&v55[0].cx = v1;
  v7 = *((_DWORD *)this + 157);
  v8 = *((_DWORD *)this + 146);
  v51.cx = v2 - v6;
  v48 = v4 - v1.m128i_i32[1];
  v9 = *((_DWORD *)this + 154);
  v54.cx = *((_DWORD *)this + 153) - v7;
  v46 = v9 - HIDWORD(*(_QWORD *)((char *)this + 628));
  v56 = 0LL;
  v10 = CTopLevelWindow::ChooseWindowFrame(this, v8, 1);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( v10 )
  {
    v14 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 52);
    v12 = (int)((double)(*(_DWORD *)(*((_QWORD *)v10 + 185) + 24LL) - 1) * v14);
    v13 = (int)((double)(*(_DWORD *)(*((_QWORD *)v10 + 203) + 24LL) - 1) * v14);
  }
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *((_DWORD *)this + 147) - v12 >= 0 )
    v16 = *((_DWORD *)this + 147) - v12;
  v18 = v16 + v6;
  v19 = *((_DWORD *)this + 148) - v12;
  v55[0].cx = v18;
  if ( v19 >= 0 )
    v17 = v19;
  v20 = v17 + v55[0].cy;
  v21 = *((_DWORD *)this + 150) - v12;
  v55[0].cy += v17;
  if ( v21 >= 0 )
    v15 = v21;
  v22 = v51.cx - v16;
  v23 = v15 + v55[1].cy;
  v24 = v48 - v17;
  v55[1].cy += v15;
  v25 = v46 - v15;
  v26 = 0;
  if ( v22 >= 0 )
    v26 = v22;
  v27 = 0;
  v50 = v26;
  if ( v24 >= 0 )
    v27 = v24;
  v53 = v27;
  if ( v25 >= 0 )
    v11 = v25;
  v57 = (unsigned int)(v13 + v55[0].cy);
  v28 = *((_QWORD *)this + 56);
  v55[0] = (struct tagSIZE)(unsigned int)(v13 + v55[1].cy);
  if ( v28 )
  {
    v56.cxLeftWidth = *(_DWORD *)(v28 + 24);
    v5 = _mm_loadu_si128((const __m128i *)&v56);
    cxLeftWidth = v56.cxLeftWidth;
  }
  else
  {
    cxLeftWidth = _mm_cvtsi128_si32((__m128i)0LL);
  }
  v29 = *((_QWORD *)this + 57);
  if ( v29 )
  {
    v56.cxRightWidth = *(_DWORD *)(v29 + 24);
    v5 = _mm_loadu_si128((const __m128i *)&v56);
    cxRightWidth = v56.cxRightWidth;
  }
  else
  {
    cxRightWidth = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
  }
  v30 = *((_QWORD *)this + 58);
  if ( v30 )
  {
    v31 = *(_DWORD *)(v30 + 28);
    v56.cyTopHeight = v31;
    v5 = _mm_loadu_si128((const __m128i *)&v56);
  }
  else
  {
    v31 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
  }
  v32 = *((_QWORD *)this + 59);
  v52 = v31;
  if ( v32 )
  {
    v56.cyBottomHeight = *(_DWORD *)(v32 + 28);
    v5 = _mm_loadu_si128((const __m128i *)&v56);
    v51.cx = v56.cyBottomHeight;
  }
  else
  {
    v51.cx = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
  }
  v33 = (CWindowBorder *)*((_QWORD *)this + 28);
  if ( *((_QWORD *)v33 + 25) )
  {
    ShadowMargins = CWindowBorder::GetShadowMargins(v33, &v56);
    v31 = v52;
    *(struct _MARGINS *)((char *)this + 652) = *ShadowMargins;
  }
  else
  {
    *(__m128i *)((char *)this + 652) = v5;
  }
  v34 = *((_DWORD *)this + 152);
  v35 = *((_DWORD *)this + 153);
  v36 = *((_DWORD *)this + 151);
  v59[0] = v50;
  v59[12] = v53;
  v60 = *((_DWORD *)this + 154);
  v66 = v60;
  v73 = v50;
  v59[3] = v34;
  v76 = v34;
  v88 = v34;
  v59[16] = v35;
  v65 = v35;
  v100 = v57;
  v58.cxLeftWidth = v18;
  v58.cxRightWidth = 0x7FFFFFFF;
  v58.cyTopHeight = v7;
  v58.cyBottomHeight = 0x7FFFFFFF;
  v59[1] = v54.cx;
  v59[2] = v36;
  v59[4] = v7;
  v59[5] = 0x7FFFFFFF;
  v59[6] = 0x7FFFFFFF;
  v59[7] = v54.cx;
  v59[8] = 0x7FFFFFFF;
  v59[9] = v20;
  v59[10] = v7;
  v59[11] = 0x7FFFFFFF;
  v59[13] = v54.cx;
  v59[14] = v18;
  v59[15] = 0x7FFFFFFF;
  v61 = v50;
  v62 = 0x7FFFFFFF;
  v63 = 0x7FFFFFFF;
  v64 = v20;
  v67 = v53;
  v68 = 0x7FFFFFFF;
  v69 = v18;
  v70 = 0x7FFFFFFF;
  v71 = 0x7FFFFFFF;
  v72 = v23;
  v74 = v11;
  v75 = v36;
  v77 = 0x7FFFFFFF;
  v78 = v23;
  v79 = 0x7FFFFFFF;
  v80 = v11;
  v81 = 0x7FFFFFFF;
  v82 = v20;
  v83 = 0x7FFFFFFF;
  v84 = v23;
  v85 = v53;
  v86 = v11;
  v87 = v36;
  v89 = v7;
  v90 = 0x7FFFFFFF;
  v91 = 0x7FFFFFFF;
  cx = v54.cx;
  v93 = v18;
  v94 = 0x7FFFFFFF;
  v95 = v7;
  v96 = 0x7FFFFFFF;
  v97 = v13;
  v98 = v13;
  v99 = v13 + v18;
  v101 = v7;
  v102 = 0x7FFFFFFF;
  v103 = 0x7FFFFFFF;
  v104 = v13;
  v105 = 0x7FFFFFFF;
  v106 = v20;
  v107 = v7;
  v37 = v13 + v7;
  v130 = v57;
  v142 = v57;
  v111 = v18;
  v123 = v18;
  v118 = v20;
  v136 = v20;
  v149 = v7;
  v155 = v7;
  v151 = cxLeftWidth;
  v126 = v23;
  v132 = v23;
  v138 = v23;
  v150 = v23;
  v156 = v23;
  v109 = v13;
  v110 = v13;
  v115 = v13;
  v121 = v13;
  v127 = v13;
  v128 = v13;
  v134 = v13;
  v139 = v13;
  v140 = v13;
  v38 = (struct _MARGINS **)((char *)this + 304);
  v147 = v18 - cxLeftWidth;
  v154 = v20 - cxRightWidth;
  v159 = v18 - cxLeftWidth;
  v160 = v20 - cxRightWidth;
  v161 = v7 - v31;
  v39 = v59;
  v165 = v18 - cxLeftWidth;
  v40 = &v58;
  v166 = v20 - cxRightWidth;
  v41 = 22LL;
  v168 = v23 - v51.cx;
  v108 = 0x7FFFFFFF;
  v112 = 0x7FFFFFFF;
  v113 = v37;
  v114 = v55[0].cx;
  v116 = 0x7FFFFFFF;
  v117 = 0x7FFFFFFF;
  v119 = v37;
  v120 = v55[0].cx;
  v122 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v125 = 0x7FFFFFFF;
  v129 = v99;
  v131 = 0x7FFFFFFF;
  v133 = 0x7FFFFFFF;
  v135 = 0x7FFFFFFF;
  v137 = 0x7FFFFFFF;
  v141 = v99;
  v143 = v37;
  v144 = v55[0].cx;
  v145 = 0x7FFFFFFF;
  v146 = 0x7FFFFFFF;
  v148 = 0x7FFFFFFF;
  v152 = 0x7FFFFFFF;
  v153 = 0x7FFFFFFF;
  v157 = cxRightWidth;
  v158 = 0x7FFFFFFF;
  v162 = 0x7FFFFFFF;
  v163 = 0x7FFFFFFF;
  v164 = v31;
  v167 = 0x7FFFFFFF;
  v169 = 0x7FFFFFFF;
  v170 = v51.cx;
  do
  {
    if ( *v38 )
    {
      CAtlasedImage::SetInsetFromParent(*v38, v40);
      if ( *v39 != 0x7FFFFFFF )
      {
        v44 = *v38;
        v54.cx = *v39;
        v54.cy = v44[1].cyBottomHeight;
        CAtlasedImage::SetSize((struct tagSIZE *)v44, &v54);
      }
      if ( v39[1] != 0x7FFFFFFF )
      {
        v45 = *v38;
        v51.cy = v39[1];
        v51.cx = v45[1].cyTopHeight;
        CAtlasedImage::SetSize((struct tagSIZE *)v45, &v51);
      }
    }
    v40 = (struct _MARGINS *)((char *)v40 + 24);
    ++v38;
    v39 += 6;
    --v41;
  }
  while ( v41 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33), 4096LL);
  return 0LL;
}
