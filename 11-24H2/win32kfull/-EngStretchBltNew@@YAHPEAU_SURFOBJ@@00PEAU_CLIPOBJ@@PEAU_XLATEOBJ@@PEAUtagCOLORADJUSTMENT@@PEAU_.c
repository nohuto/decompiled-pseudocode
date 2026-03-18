/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140136784
 * Callers:
 *     EngStretchBlt @ 0x140136200 (EngStretchBlt.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x140051074 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1400596DC (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pxrlStrRead01AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x140138860 (-pxrlStrRead01AND@stretch@@YAPEAU_XRUNLEN@1@PEAU_STRDDA@1@PEAU_STRRUN@1@PEAE2PEAU_XLATEOBJ@@JJJ@.c)
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1401389C8 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ?vInitStrDDAClip@stretch@@YAXPEAU_RECTL@@0000@Z @ 0x1401390A0 (-vInitStrDDAClip@stretch@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@stretch@@YAXPEAU_STRDDA@1@PEAU_RECTL@@11@Z @ 0x140139560 (-vInitStrDDA@stretch@@YAXPEAU_STRDDA@1@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@stretch@@YAXPEAU_XRUNLEN@1@PEAU_RECTL@@K@Z @ 0x1401397F4 (-vInitBuffer@stretch@@YAXPEAU_XRUNLEN@1@PEAU_RECTL@@K@Z.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x140147E70 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x140178E70 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140313080 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403132A0 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x140313320 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403133B0 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EngStretchBltNew(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _SURFOBJ *v12; // r10
  struct _SURFOBJ *v13; // r11
  struct tagCOLORADJUSTMENT *v14; // r8
  __int64 *v15; // r9
  struct _RECTL *v16; // r12
  struct _RECTL *v17; // r13
  PVOID *p_pvScan0; // rdx
  __int64 v19; // r15
  int v20; // ecx
  int v21; // eax
  BOOL (__stdcall **v22)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  __int64 v23; // rdi
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  int v28; // r11d
  LONG bottom; // eax
  LONG top; // r10d
  LONG v31; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v34; // edx
  int v35; // eax
  int v36; // ecx
  LONG v37; // ecx
  LONG v38; // eax
  __int16 v39; // r11
  LONG v40; // r9d
  LONG v41; // ecx
  LONG v42; // r8d
  LONG v43; // edx
  int v44; // eax
  unsigned __int8 *v45; // rax
  PVOID *v46; // rdi
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  struct _RECTL *v50; // rax
  LONG v51; // eax
  LONG v52; // ecx
  LONG v53; // edx
  LONG v54; // edi
  PVOID *v55; // r15
  struct _SURFOBJ *v57; // rax
  __int64 v58; // rax
  char *v59; // rdx
  int v60; // edi
  XCLIPOBJ *v61; // r10
  struct _RECTL v62; // xmm0
  __int64 i; // rax
  int v64; // eax
  int v65; // edx
  int v66; // eax
  int v67; // edi
  int v68; // ecx
  LONG v69; // eax
  LONG v70; // ecx
  LONG v71; // edx
  unsigned int v72; // eax
  unsigned int v73; // edx
  unsigned int v74; // edx
  __int64 v75; // rdi
  __m128i v76; // xmm6
  unsigned __int8 *v77; // rcx
  unsigned int v78; // r8d
  unsigned int v79; // eax
  __int64 v80; // rcx
  unsigned int v81; // r9d
  __int64 v82; // r11
  int v83; // edx
  XCLIPOBJ *v84; // rcx
  LONG v85; // r8d
  int v86; // r9d
  struct stretch::_STRDDA *v87; // rcx
  int v88; // edx
  struct stretch::_STRDDA *v89; // rax
  unsigned __int64 v90; // rdi
  __int64 v91; // rax
  unsigned __int64 v92; // r9
  struct stretch::_STRDDA *v93; // rdi
  unsigned int v94; // r10d
  LONG v95; // ecx
  unsigned int *v96; // r8
  unsigned __int64 v97; // r9
  LONG v98; // ecx
  LONG v99; // edx
  LONG v100; // eax
  XCLIPOBJ *v101; // rdi
  XCLIPOBJ *v102; // rbx
  int v103; // eax
  LONG v104; // ecx
  LONG v105; // edx
  LONG v106; // eax
  int v107; // eax
  BOOL (__stdcall *v108)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v109; // r9
  stretch *v110; // rdi
  int v111; // eax
  unsigned int v112; // ecx
  int v113; // eax
  __int64 v114; // r8
  int v115; // r8d
  LONG v116; // r9d
  int v117; // ecx
  LONG v118; // r8d
  LONG v119; // edx
  LONG v120; // edx
  SURFOBJ *v121; // rax
  int v122; // eax
  __m128i si128; // xmm2
  int v124; // ecx
  __int64 v125; // rcx
  LONG v126; // r9d
  LONG v127; // r8d
  LONG v128; // ecx
  LONG v129; // eax
  LONG v130; // r10d
  LONG v131; // edx
  int v132; // eax
  BOOL (__stdcall *v133)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  PVOID *v134; // r12
  int v135; // eax
  Gre::Base *v136; // rcx
  struct Gre::Base::SESSION_GLOBALS *v137; // r9
  BOOL (__stdcall *v138)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  struct _RECTL *pvBits; // [rsp+20h] [rbp-548h]
  struct _RECTL *v140; // [rsp+28h] [rbp-540h]
  void *v141; // [rsp+30h] [rbp-538h]
  int v142; // [rsp+40h] [rbp-528h]
  struct _RECTL *v143; // [rsp+60h] [rbp-508h]
  unsigned int v144; // [rsp+68h] [rbp-500h]
  int v145; // [rsp+70h] [rbp-4F8h]
  int v146; // [rsp+70h] [rbp-4F8h]
  unsigned int v147; // [rsp+78h] [rbp-4F0h]
  LONG v148; // [rsp+80h] [rbp-4E8h]
  int v149; // [rsp+84h] [rbp-4E4h]
  int v150; // [rsp+88h] [rbp-4E0h]
  int v151; // [rsp+88h] [rbp-4E0h]
  int v152; // [rsp+8Ch] [rbp-4DCh]
  LONG v153; // [rsp+90h] [rbp-4D8h]
  int v154; // [rsp+90h] [rbp-4D8h]
  int v155; // [rsp+98h] [rbp-4D0h]
  LONG v156; // [rsp+9Ch] [rbp-4CCh]
  LONG v157; // [rsp+9Ch] [rbp-4CCh]
  __int64 v158; // [rsp+A0h] [rbp-4C8h] BYREF
  int v159; // [rsp+A8h] [rbp-4C0h]
  struct _SURFOBJ *v160; // [rsp+B0h] [rbp-4B8h]
  SIZEL sizl; // [rsp+B8h] [rbp-4B0h]
  struct REGION *v162; // [rsp+C0h] [rbp-4A8h] BYREF
  PVOID *v163; // [rsp+C8h] [rbp-4A0h] BYREF
  unsigned int v164; // [rsp+D0h] [rbp-498h]
  LONG v165; // [rsp+E0h] [rbp-488h]
  unsigned __int8 *v166; // [rsp+F0h] [rbp-478h]
  PVOID *v167; // [rsp+F8h] [rbp-470h]
  unsigned __int64 v168; // [rsp+100h] [rbp-468h]
  struct REGION *v169; // [rsp+108h] [rbp-460h] BYREF
  struct _SURFOBJ *v170; // [rsp+110h] [rbp-458h]
  __int64 v171; // [rsp+118h] [rbp-450h]
  XCLIPOBJ *v172; // [rsp+120h] [rbp-448h]
  XCLIPOBJ *v173; // [rsp+128h] [rbp-440h]
  BOOL (__stdcall *v174)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+130h] [rbp-438h]
  PVOID *v175; // [rsp+138h] [rbp-430h] BYREF
  char v176; // [rsp+140h] [rbp-428h]
  int v177; // [rsp+144h] [rbp-424h]
  int v178; // [rsp+148h] [rbp-420h]
  struct _SURFOBJ *v179; // [rsp+150h] [rbp-418h]
  struct stretch::_STRRUN *v180; // [rsp+158h] [rbp-410h]
  struct stretch::_STRDDA *v181; // [rsp+160h] [rbp-408h]
  PVOID *v182; // [rsp+168h] [rbp-400h]
  stretch *v183; // [rsp+170h] [rbp-3F8h] BYREF
  char v184; // [rsp+178h] [rbp-3F0h]
  int v185; // [rsp+17Ch] [rbp-3ECh]
  stretch *v186; // [rsp+180h] [rbp-3E8h]
  struct _POINTL *v187; // [rsp+188h] [rbp-3E0h]
  unsigned int v188; // [rsp+190h] [rbp-3D8h]
  int v189; // [rsp+194h] [rbp-3D4h]
  __int64 *v190; // [rsp+198h] [rbp-3D0h]
  struct REGION *v191[2]; // [rsp+1A0h] [rbp-3C8h] BYREF
  __m128i v192; // [rsp+1B0h] [rbp-3B8h] BYREF
  BOOL (__stdcall **v193)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+1C0h] [rbp-3A8h]
  HSURF hsurf; // [rsp+1C8h] [rbp-3A0h]
  struct _RECTL *v195; // [rsp+1D0h] [rbp-398h]
  int v196; // [rsp+1D8h] [rbp-390h]
  __int64 v197; // [rsp+1E0h] [rbp-388h] BYREF
  char v198; // [rsp+1E8h] [rbp-380h]
  int v199; // [rsp+1ECh] [rbp-37Ch]
  char *v200; // [rsp+1F0h] [rbp-378h]
  BOOL (__stdcall **v201)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+1F8h] [rbp-370h]
  struct _SURFOBJ *v202; // [rsp+200h] [rbp-368h]
  struct _CLIPOBJ *v203; // [rsp+208h] [rbp-360h]
  _DWORD v204[4]; // [rsp+210h] [rbp-358h] BYREF
  __int64 v205; // [rsp+220h] [rbp-348h]
  int v206; // [rsp+228h] [rbp-340h]
  int v207; // [rsp+22Ch] [rbp-33Ch]
  _DWORD v208[4]; // [rsp+230h] [rbp-338h] BYREF
  __int64 v209; // [rsp+240h] [rbp-328h]
  int v210; // [rsp+248h] [rbp-320h]
  int v211; // [rsp+24Ch] [rbp-31Ch]
  PVOID v212; // [rsp+250h] [rbp-318h] BYREF
  __int64 v213; // [rsp+258h] [rbp-310h] BYREF
  PVOID v214; // [rsp+260h] [rbp-308h] BYREF
  void (*const near *v215)(struct stretch::_STRRUN *, struct stretch::_XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+268h] [rbp-300h]
  struct _RECTL v216; // [rsp+270h] [rbp-2F8h] BYREF
  struct _RECTL v217; // [rsp+280h] [rbp-2E8h] BYREF
  unsigned __int128 v218; // [rsp+290h] [rbp-2D8h] BYREF
  struct _RECTL v219; // [rsp+2A0h] [rbp-2C8h] BYREF
  struct _RECTL v220; // [rsp+2B0h] [rbp-2B8h] BYREF
  __m128i v221; // [rsp+2C0h] [rbp-2A8h] BYREF
  __int128 v222; // [rsp+2D0h] [rbp-298h] BYREF
  __int128 v223; // [rsp+2E0h] [rbp-288h] BYREF
  struct _RECTL v224; // [rsp+2F0h] [rbp-278h] BYREF
  struct _RECTL v225; // [rsp+300h] [rbp-268h] BYREF
  int v226; // [rsp+310h] [rbp-258h]
  struct _RECTL v227; // [rsp+318h] [rbp-250h] BYREF
  _BYTE v228[160]; // [rsp+330h] [rbp-238h] BYREF
  _BYTE v229[160]; // [rsp+3D0h] [rbp-198h] BYREF
  _BYTE v230[4]; // [rsp+470h] [rbp-F8h] BYREF
  char v231[156]; // [rsp+474h] [rbp-F4h] BYREF

  v173 = (XCLIPOBJ *)a4;
  v179 = a3;
  v12 = a2;
  v160 = a2;
  v13 = a1;
  v170 = a1;
  v168 = (unsigned __int64)a5;
  v202 = a3;
  v203 = a4;
  v14 = a6;
  v186 = (stretch *)a6;
  v15 = (__int64 *)a7;
  v187 = a7;
  v16 = a8;
  v17 = a9;
  v190 = (__int64 *)a10;
  v147 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  p_pvScan0 = &a1[-1].pvScan0;
  if ( !a1 )
    p_pvScan0 = 0LL;
  v167 = p_pvScan0;
  v19 = (__int64)&v12[-1].pvScan0;
  if ( !v12 )
    v19 = 0LL;
  v163 = a3 ? &a3[-1].pvScan0 : 0LL;
  if ( !p_pvScan0 )
    return 0LL;
  if ( !v19 )
    return 0LL;
  v20 = *((_DWORD *)p_pvScan0 + 24);
  if ( (unsigned int)(v20 - 7) <= 2 )
    return 0LL;
  v21 = *(_DWORD *)(v19 + 96);
  if ( v21 == 9 || v20 == 10 || v21 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v22 = (BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))p_pvScan0[6];
    v193 = v22;
    v201 = v22;
    v23 = *(_QWORD *)(v19 + 48);
    v197 = 0LL;
    v198 = 0;
    v199 = 0;
    v227 = *a9;
    v24 = 1;
    if ( v12->iType == 1 && v23 && (*(_DWORD *)(v23 + 40) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v12, (struct SURFMEM *)&v197, &v227) )
        goto LABEL_175;
      if ( !v197 )
        goto LABEL_78;
      v17 = &v227;
      v12 = (struct _SURFOBJ *)((v197 + 24) & -(__int64)(v197 != 0));
      v160 = v12;
      v19 = (unsigned __int64)&v12[-1].pvScan0 & -(__int64)(v12 != 0LL);
      v23 = *(_QWORD *)(v19 + 0x30);
      v13 = v170;
      v14 = (struct tagCOLORADJUSTMENT *)v186;
      v15 = (__int64 *)v187;
    }
    if ( !v168 || (v25 = 1, (*(_DWORD *)(v168 + 4) & 8) == 0) )
      v25 = 0;
    v145 = v25;
    v196 = v25;
    if ( v25 )
    {
      if ( v12->iType )
        goto LABEL_175;
      if ( v13->iType != 1 )
        goto LABEL_175;
      v26 = (__int64)v179;
      if ( v179 )
        goto LABEL_175;
    }
    else
    {
      v26 = (__int64)v179;
    }
    v27 = a11;
    if ( a11 == 4 )
    {
      if ( v25 )
        goto LABEL_175;
      v113 = EngHTBlt(v13, v12, v26, (CLIPOBJ *)v173, (struct XLATE *)v168, v14, v15, a8, &v17->left, v190, 0, 0LL);
      if ( v113 == -1 )
        goto LABEL_175;
      if ( v113 )
      {
        if ( v113 == 1 )
          goto LABEL_78;
        v27 = 4;
      }
      else
      {
        v27 = 3;
        v147 = 3;
      }
    }
    v28 = 0;
    v150 = 0;
    bottom = a8->bottom;
    top = a8->top;
    v31 = bottom;
    if ( bottom < top )
    {
      v31 = a8->top;
      a8->top = bottom;
      a8->bottom = top;
      v28 = 2;
      v150 = 2;
      top = bottom;
    }
    right = a8->right;
    left = a8->left;
    v34 = right;
    if ( right < a8->left )
    {
      v34 = a8->left;
      a8->left = right;
      a8->right = left;
      v28 |= 1u;
      v150 = v28;
      left = right;
    }
    if ( v27 >= 3 || (v35 = 1, v163) )
      v35 = 0;
    v149 = v35;
    if ( v35 )
    {
      if ( v34 - left >= v17->right - v17->left )
      {
        if ( v31 - top >= v17->bottom - v17->top )
          v35 = 0;
        v149 = v35;
      }
      v27 = v147;
    }
    v189 = v35;
    if ( !v35 )
    {
      if ( v27 < 3 )
        v27 = 3;
      v147 = v27;
    }
    v188 = v27;
    v36 = *((_DWORD *)v167 + 28);
    if ( (v36 & 0x40000) == 0 )
    {
      if ( v168 && (*(_DWORD *)(v168 + 4) & 1) == 0 )
      {
        v57 = v160;
      }
      else
      {
        v57 = v160;
        if ( !v160->iType )
          goto LABEL_33;
      }
      if ( *((_WORD *)v167 + 50) )
      {
        if ( (v36 & 2) != 0 && !v28 && !v179 )
        {
          v116 = v17->left;
          if ( v17->left >= 0 )
          {
            v117 = v17->top;
            if ( v117 >= 0 )
            {
              v118 = v17->right;
              if ( v118 <= v57->sizlBitmap.cx )
              {
                v119 = v17->bottom;
                if ( v119 <= v57->sizlBitmap.cy )
                {
                  v223 = 0LL;
                  v159 = v118 - v116;
                  sizl.cx = v118 - v116;
                  v120 = v119 - v117;
                  v156 = v120;
                  sizl.cy = v120;
                  if ( v118 - v116 <= a8->right - a8->left && v120 <= a8->bottom - a8->top )
                  {
                    hsurf = (HSURF)EngCreateBitmap(sizl, 0, v170->iBitmapFormat, 0, 0LL);
                    v121 = EngLockSurface(hsurf);
                    sizl = (SIZEL)v121;
                    if ( v121 )
                    {
                      v121->iUniq = 0;
                      *((_QWORD *)&v223 + 1) = __PAIR64__(v156, v159);
                      if ( (*(_DWORD *)(v19 + 112) & 0x400) != 0 )
                        v122 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(v23 + 2832))(
                                 v121,
                                 v160,
                                 0LL,
                                 v168,
                                 &v223,
                                 v17);
                      else
                        v122 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
                                 v121,
                                 v160,
                                 0LL,
                                 v168,
                                 &v223,
                                 v17);
                      if ( !v122
                        || (v133 = v22[355]) == 0LL
                        || !((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v133)(
                              v170,
                              sizl,
                              0LL,
                              v173,
                              0LL,
                              v186,
                              v187,
                              a8,
                              &v223,
                              v190,
                              v147) )
                      {
                        v24 = 0;
                      }
                      EngUnlockSurface(*(SURFOBJ **)&sizl);
                      EngDeleteSurface(hsurf);
                      goto LABEL_78;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_33:
    v175 = 0LL;
    v176 = 0;
    v177 = 0;
    v221 = 0LL;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v228);
    v219 = 0LL;
    v158 = 0LL;
    v37 = *(_DWORD *)(v19 + 60);
    v38 = *(_DWORD *)(v19 + 56);
    *(_QWORD *)&v216.left = 0LL;
    v216.right = v38;
    v216.bottom = v37;
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v162);
    v39 = *((_WORD *)v167 + 50);
    if ( v39 || v167[4] == *(PVOID *)(v19 + 32) )
    {
      v221 = *(__m128i *)a8;
      v159 = _mm_cvtsi128_si32(v221);
      v157 = a8->right;
      v126 = v157 + 1;
      v127 = HIDWORD(*(_QWORD *)&a8->right) + 1;
      v128 = *((_DWORD *)v167 + 15);
      v129 = *((_DWORD *)v167 + 14);
      v130 = v159 - 1;
      if ( v159 - 1 < 0 )
        v130 = 0;
      v219.left = v130;
      v131 = v221.m128i_i32[1] - 1;
      if ( v221.m128i_i32[1] - 1 < 0 )
        v131 = 0;
      v219.top = v131;
      if ( v129 < v126 )
        v126 = v129;
      v219.right = v126;
      if ( v128 < v127 )
        v127 = v128;
      v219.bottom = v127;
      if ( v126 < v130 )
      {
        v130 = v126;
        v219.left = v126;
      }
      else
      {
        if ( v127 < v131 )
          v131 = v127;
        v219.top = v131;
      }
      if ( v130 == v126 || (v132 = 0, v131 == v127) )
        v132 = 1;
      if ( v132 )
        goto LABEL_77;
      if ( v39 || v130 <= v17->right && v126 >= v17->left && v131 <= v17->bottom && v127 >= v17->top )
      {
        v221.m128i_i32[0] = v159 - v130;
        v221.m128i_i32[1] -= v131;
        v221.m128i_i32[2] = v157 - v130;
        v221.m128i_i32[3] -= v131;
        v204[3] = 0;
        v207 = 0;
        v204[1] = v126 - v130 + 1;
        v204[2] = v127 - v131 + 1;
        v205 = 0LL;
        v134 = v167;
        if ( v145 )
          v135 = *(_DWORD *)(v19 + 96);
        else
          v135 = *((_DWORD *)v167 + 24);
        v204[0] = v135;
        v206 = (_DWORD)v167[14] & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v175, (struct _DEVBITMAPINFO *)v204, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v175 )
          goto LABEL_174;
        v158 = *(_QWORD *)&v219.left;
        if ( !v162 )
          goto LABEL_174;
        *(_QWORD *)&v219.left = 0LL;
        v219.right -= v158;
        v219.bottom -= HIDWORD(v158);
        RGNOBJ::vSet((RGNOBJ *)&v162, &v219);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v228, v162, (const struct ERECTL *)&v219, 1);
        v212 = v134[6];
        PDEVOBJ::vSync((PDEVOBJ *)&v212, (struct _SURFOBJ *)(v134 + 3), 0LL, 0);
        v137 = Gre::Base::Globals(v136);
        if ( v163 )
        {
          if ( ((_DWORD)v167[14] & 0x400) != 0 )
            v138 = v22[354];
          else
            v138 = EngCopyBits;
          v174 = EngCopyBits;
          v140 = (struct _RECTL *)&v158;
          ((void (__fastcall *)(unsigned __int64, PVOID *, _QWORD, char *, struct _RECTL *))v138)(
            (unsigned __int64)(v175 + 3) & -(__int64)(v175 != 0LL),
            v134 + 3,
            0LL,
            (char *)v137 + 4552,
            &v219);
        }
        else
        {
          v174 = EngCopyBits;
        }
        v182 = v175;
        v16 = (struct _RECTL *)&v221;
        v172 = (XCLIPOBJ *)v228;
LABEL_37:
        v170 = (struct _SURFOBJ *)v16;
        v213 = *(_QWORD *)(v19 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v213, v160, 0LL, 0);
        v40 = v216.left;
        if ( v17->left > v216.left )
          v40 = v17->left;
        v216.left = v40;
        v41 = v216.top;
        if ( v17->top > v216.top )
          v41 = v17->top;
        v216.top = v41;
        v42 = v216.right;
        if ( v17->right < v216.right )
          v42 = v17->right;
        v216.right = v42;
        v43 = v216.bottom;
        if ( v17->bottom < v216.bottom )
          v43 = v17->bottom;
        v216.bottom = v43;
        if ( v42 < v40 )
        {
          v40 = v42;
          v216.left = v42;
        }
        else
        {
          if ( v43 < v41 )
            v41 = v43;
          v216.top = v41;
        }
        if ( v40 == v42 || (v44 = 0, v41 == v43) )
          v44 = 1;
        if ( v44 )
          goto LABEL_77;
        v183 = 0LL;
        v184 = 0;
        v185 = 0;
        v222 = 0LL;
        if ( v150 || *(_WORD *)(v19 + 100) || (unsigned int)(*(_DWORD *)(v19 + 96) - 7) <= 1 )
        {
          v208[3] = 0;
          v211 = 0;
          v208[1] = v42 - v40;
          v208[2] = v43 - v41;
          v209 = 0LL;
          if ( v145 )
            v107 = *(_DWORD *)(v19 + 96);
          else
            v107 = *((_DWORD *)v182 + 24);
          v208[0] = v107;
          v210 = *(_DWORD *)(v19 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v183, (struct _DEVBITMAPINFO *)v208, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v183 )
            goto LABEL_173;
          DWORD2(v222) = v216.right - v216.left;
          HIDWORD(v222) = v216.bottom - v216.top;
          if ( (*(_DWORD *)(v19 + 112) & 0x400) != 0 )
            v108 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v23 + 2832);
          else
            v108 = EngCopyBits;
          v109 = 0LL;
          if ( !v145 )
            v109 = v168;
          v140 = &v216;
          ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, unsigned __int64, __int128 *))v108)(
            ((unsigned __int64)v183 + 24) & -(__int64)(v183 != 0LL),
            v19 + 24,
            0LL,
            v109,
            &v222);
          LODWORD(v222) = v17->left - v216.left;
          DWORD1(v222) = v17->top - v216.top;
          DWORD2(v222) = v17->right - v216.left;
          HIDWORD(v222) = v17->bottom - v216.top;
          v110 = v183;
          v19 = (__int64)v183;
          v186 = v183;
          v17 = (struct _RECTL *)&v222;
          v187 = (struct _POINTL *)&v222;
          v166 = 0LL;
          v216.right -= v216.left;
          v111 = v216.bottom - v216.top;
          v216.bottom -= v216.top;
          *(_QWORD *)&v216.left = 0LL;
          if ( (v150 & 2) != 0 )
          {
            v124 = *((_DWORD *)v183 + 22);
            if ( v124 > 0 )
              v125 = *((_QWORD *)v183 + 9) + v124 * (v111 - 1);
            else
              v125 = *((_QWORD *)v183 + 9);
            *((_QWORD *)v183 + 10) = v125;
            *((_DWORD *)v183 + 22) = -*((_DWORD *)v183 + 22);
            v110 = v183;
          }
          if ( (v150 & 1) != 0 )
          {
            v112 = *((_DWORD *)v110 + 24);
            if ( v112 - 1 > 5 )
              goto LABEL_173;
            ((void (__fastcall *)(stretch *))funcs_1400126D4[v112 - 1])(v110);
          }
        }
        else
        {
          v186 = (stretch *)v19;
          v187 = (struct _POINTL *)v17;
          v45 = 0LL;
          if ( !v145 )
            v45 = (unsigned __int8 *)v168;
          v166 = v45;
        }
        v46 = v182;
        v214 = v182[6];
        PDEVOBJ::vSync((PDEVOBJ *)&v214, (struct _SURFOBJ *)(v182 + 3), 0LL, 0);
        if ( v17->right - v17->left >= 128000000 )
          goto LABEL_173;
        if ( v17->bottom - v17->top >= 128000000 )
          goto LABEL_173;
        v47 = v16->right - v16->left;
        if ( v47 >= 128000000 )
          goto LABEL_173;
        v48 = v16->bottom - v16->top;
        if ( v48 >= 128000000 || v47 <= -128000000 || v48 <= -128000000 )
          goto LABEL_173;
        if ( v147 == 3 && !v179 && (!v166 || (*((_DWORD *)v166 + 1) & 1) != 0) )
        {
          v49 = *(_DWORD *)(v19 + 96);
          if ( *((_DWORD *)v46 + 24) == v49 && ((v49 - 3) & 0xFFFFFFFC) == 0 && v49 != 5 )
          {
            if ( v172 && *((_BYTE *)v172 + 20) == 3 )
            {
              v220 = 0LL;
              *(_QWORD *)&v216.right = 0LL;
              *(_QWORD *)&v216.left = 0LL;
              v225 = 0LL;
              v226 = 0;
              v102 = v173;
              XCLIPOBJ::cEnumStart(v173, 0, 0, 4u, 0);
              do
              {
                v103 = XCLIPOBJ::bEnum(v102, 0x14u, (char *)&v225, 0LL);
                v154 = v103;
                if ( v225.left )
                {
                  LODWORD(v143) = *((_DWORD *)v46 + 24);
                  LODWORD(v141) = *(_DWORD *)(v19 + 88);
                  stretch::StretchDIBDirect(
                    (stretch *)v46[10],
                    (void *)*((unsigned int *)v46 + 22),
                    *((_DWORD *)v46 + 14),
                    *((_DWORD *)v46 + 15),
                    (unsigned int)v16,
                    *(struct _RECTL **)(v19 + 80),
                    v141,
                    *(_DWORD *)(v19 + 56),
                    *(_DWORD *)(v19 + 60),
                    (unsigned int)v17,
                    &v220,
                    (struct _RECTL *)&v225.top,
                    v143,
                    v144);
                  v104 = v216.left;
                  v105 = v216.right;
                  if ( v216.left == v216.right || (v106 = v216.top, v216.top == v216.bottom) )
                  {
                    si128 = _mm_load_si128((const __m128i *)&v220);
                    v216.bottom = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
                    v216.right = _mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
                    v216.top = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                    v216.left = _mm_cvtsi128_si32(si128);
                  }
                  else
                  {
                    if ( v220.left < v216.left )
                      v104 = v220.left;
                    v216.left = v104;
                    if ( v220.top < v216.top )
                      v106 = v220.top;
                    v216.top = v106;
                    if ( v220.right > v216.right )
                      v105 = v220.right;
                    v216.right = v105;
                    if ( v220.bottom > v216.bottom )
                      v216.bottom = v220.bottom;
                  }
                  v103 = v154;
                }
              }
              while ( v103 );
              v22 = v193;
            }
            else
            {
              v50 = v16;
              if ( v172 && *((_BYTE *)v172 + 20) == 1 )
                v50 = (struct _RECTL *)((char *)v172 + 4);
              LODWORD(v143) = *((_DWORD *)v46 + 24);
              LODWORD(v141) = *(_DWORD *)(v19 + 88);
              stretch::StretchDIBDirect(
                (stretch *)v46[10],
                (void *)*((unsigned int *)v46 + 22),
                *((_DWORD *)v46 + 14),
                *((_DWORD *)v46 + 15),
                (unsigned int)v16,
                *(struct _RECTL **)(v19 + 80),
                v141,
                *(_DWORD *)(v19 + 56),
                *(_DWORD *)(v19 + 60),
                (unsigned int)v17,
                &v216,
                v50,
                v143,
                v144);
            }
            v51 = v216.left;
            v218 = (unsigned __int128)v216;
            v52 = v216.right;
            v53 = v216.top;
            v54 = v216.bottom;
LABEL_75:
            v55 = v167;
            if ( v182 == v167 )
            {
LABEL_76:
              SURFMEM::~SURFMEM((SURFMEM *)&v183);
LABEL_77:
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v162);
              SURFMEM::~SURFMEM((SURFMEM *)&v175);
LABEL_78:
              SURFMEM::~SURFMEM((SURFMEM *)&v197);
              return v24;
            }
            LODWORD(v218) = v158 + v51;
            DWORD1(v218) = HIDWORD(v158) + v53;
            DWORD2(v218) = v158 + v52;
            HIDWORD(v218) = HIDWORD(v158) + v54;
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v169);
            if ( !v169 )
              goto LABEL_172;
            v101 = v173;
            if ( v173 )
            {
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v163);
              if ( !v163
                || (RGNOBJ::vSet((RGNOBJ *)&v163, (const struct _RECTL *const)&v218),
                    !RGNOBJ::bMerge((RGNOBJ *)&v169, (struct RGNOBJ *)&v163, (XCLIPOBJ *)((char *)v101 + 56), 8u)) )
              {
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v163);
LABEL_172:
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v169);
                goto LABEL_173;
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v163);
            }
            else
            {
              RGNOBJ::vSet((RGNOBJ *)&v169, (const struct _RECTL *const)&v218);
            }
            v224 = *(struct _RECTL *)((char *)v169 + 52);
            if ( !v101 || bIntersect(&v224, (const struct _RECTL *)((char *)v101 + 4), &v224) )
            {
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v230, v169, (struct ERECTL *)&v224);
              if ( !ERECTL::bEmpty((ERECTL *)v231) )
              {
                v219.left += v158;
                v219.top += HIDWORD(v158);
                v219.right += v158;
                v219.bottom += HIDWORD(v158);
                v158 = 0LL;
                if ( ((_DWORD)v55[14] & 0x400) != 0 )
                  v174 = v22[354];
                ((void (__fastcall *)(PVOID *, unsigned __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v174)(
                  v55 + 3,
                  (unsigned __int64)(v175 + 3) & -(__int64)(v175 != 0LL),
                  v230,
                  v168 & -(__int64)(v196 != 0),
                  &v219,
                  &v158);
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v169);
            goto LABEL_76;
          }
        }
        v58 = AllocFreeTmpBuffer(324LL);
        v59 = (char *)v58;
        v200 = (char *)v58;
        if ( !v58 )
        {
LABEL_173:
          SURFMEM::~SURFMEM((SURFMEM *)&v183);
LABEL_174:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v162);
          SURFMEM::~SURFMEM((SURFMEM *)&v175);
LABEL_175:
          v24 = 0;
          goto LABEL_78;
        }
        v60 = 0;
        v146 = 0;
        v61 = v172;
        if ( v172 && *((_BYTE *)v172 + 20) )
        {
          if ( *((_BYTE *)v172 + 20) != 1 )
          {
            if ( *((_BYTE *)v172 + 20) == 3 )
            {
              v60 = 1;
              v146 = 1;
              XCLIPOBJ::cEnumStart(v172, 0, 0, 4u, 0x14u);
              v61 = v172;
              v59 = v200;
            }
LABEL_91:
            v218 = 0uLL;
            if ( v60 )
              goto LABEL_253;
            while ( 1 )
            {
              for ( i = 0LL; ; i = (unsigned int)(v159 + 1) )
              {
                v159 = i;
                v59 = v200;
                if ( (unsigned int)i >= *(_DWORD *)v200 )
                  break;
                v195 = (struct _RECTL *)&v200[16 * i + 4];
                v217 = 0LL;
                stretch::vInitStrDDAClip((stretch *)&v216, v17, v16, v195, &v217, v140);
                if ( v217.left == v217.right || (v64 = 0, v217.top == v217.bottom) )
                  v64 = 1;
                if ( v64 )
                  continue;
                v65 = v217.left - 1;
                v66 = v217.top - 1;
                v67 = v217.right + 1;
                v68 = v217.bottom + 1;
                if ( v216.left > v217.left - 1 )
                  v65 = v216.left;
                v155 = v65;
                v217.left = v65;
                if ( v216.top > v66 )
                  v66 = v216.top;
                v148 = v66;
                v217.top = v66;
                if ( v216.right < v67 )
                  v67 = v216.right;
                v151 = v67;
                v217.right = v67;
                if ( v216.bottom < v68 )
                  v68 = v216.bottom;
                v217.bottom = v68;
                if ( v67 < v65 )
                {
                  v155 = v67;
                  v217.left = v67;
                }
                else
                {
                  if ( v68 < v66 )
                    v66 = v68;
                  v148 = v66;
                  v217.top = v66;
                }
                v69 = v17->right;
                if ( v69 < v17->left )
                  continue;
                v70 = v17->bottom;
                v71 = v17->top;
                if ( v70 < v71 )
                  continue;
                v72 = v69 - v17->left;
                v73 = v70 - v71 + v72;
                if ( v73 >= 0x3FFFFFF5 || v73 < v72 )
                  continue;
                v74 = 4 * v73 + 40;
                v75 = v74 ? Win32AllocPool(v74, 1752462151LL) : 0LL;
                v171 = v75;
                if ( !v75 )
                  continue;
                stretch::vInitStrDDA((stretch *)v75, (struct stretch::_STRDDA *)&v217, v17, v16, pvBits);
                v76 = *(__m128i *)v75;
                v192 = *(__m128i *)v75;
                v77 = v166;
                if ( v166 )
                {
                  if ( (v166[4] & 1) != 0 )
                    v77 = 0LL;
                  v166 = v77;
                }
                v215 = (&stretch::apfnWrite)[*((unsigned int *)v182 + 24)];
                if ( v149 )
                  *(_DWORD *)(v75 + 20) = (v188 != 1) - 1;
                sizl = (SIZEL)*(&stretch::apfnRead + 3 * *(unsigned int *)(v19 + 96) + v147 - 1);
                hsurf = (HSURF)sizl;
                v153 = _mm_cvtsi128_si32(_mm_srli_si128(v76, 8));
                v165 = _mm_cvtsi128_si32(v76);
                v78 = v153 - v165;
                if ( v17->right - v17->left > v16->right - v16->left )
                {
                  if ( v78 >= 0x15555553 )
                    goto LABEL_220;
                  v79 = v153 - v165;
                }
                else if ( v78 + 3 < v78 || (v79 = (v78 + 3) >> 1, v79 >= 0x15555553) )
                {
LABEL_220:
                  Win32FreePool((void *)v75);
                  continue;
                }
                v80 = 12 * (v79 + 2);
                if ( v78 > 0x5F5E100 )
                  goto LABEL_220;
                if ( (unsigned int)v80 > 0x2710000 )
                  goto LABEL_220;
                v82 = AllocFreeTmpBuffer(v80);
                v181 = (struct stretch::_STRDDA *)v82;
                if ( !v82 )
                  goto LABEL_220;
                v180 = (struct stretch::_STRRUN *)(*(_QWORD *)(v19 + 80) + *(_DWORD *)(v19 + 88) * v148);
                v193 = 0LL;
                if ( v179 )
                {
                  LODWORD(v193) = *(_DWORD *)v190 + v155 - v17->left;
                  v160 = (struct _SURFOBJ *)((char *)v163[10]
                                           + *((_DWORD *)v163 + 22) * (v148 + *((_DWORD *)v190 + 1) - v17->top));
                }
                else
                {
                  v160 = 0LL;
                }
                v164 = 0;
                v178 = 0;
                if ( v149 )
                {
                  v114 = 0xFFFFFFFFLL;
                  if ( v188 != 1 )
                    v114 = 0LL;
                  v164 = v114;
                  stretch::vInitBuffer(
                    (stretch *)(v82 + 8),
                    (struct stretch::_XRUNLEN *)&v192,
                    (struct _RECTL *)v114,
                    v81);
                  v178 = v115;
                }
                *(_DWORD *)v82 = *(_DWORD *)(v75 + 4);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v191);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v229);
                v83 = 0;
                v84 = v172;
                if ( v172 && v191[0] )
                {
                  RGNOBJ::vSet((RGNOBJ *)v191, v195);
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v229, v191[0], (const struct ERECTL *)v195, 1);
                  v83 = 1;
                  v84 = v172;
                }
                LODWORD(v195) = v83;
                if ( !v84 || v191[0] )
                {
                  v85 = v148;
                  v86 = 0;
                  v152 = 0;
                  v87 = v181;
                  while ( 1 )
                  {
                    if ( v85 >= v217.bottom )
                      goto LABEL_153;
                    v88 = *(_DWORD *)(*(_QWORD *)(v75 + 24) + 4LL * v86);
                    v89 = v181;
                    *((_DWORD *)v181 + 1) = v88;
                    if ( v88 )
                      break;
                    if ( v149 )
                    {
                      LODWORD(v140) = v155;
                      if ( *(struct stretch::_XRUNLEN *(__fastcall **)(stretch *__hidden, struct stretch::_STRDDA *, struct stretch::_STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))&sizl == stretch::pxrlStrRead01AND )
                        stretch::pxrlStrRead01AND(
                          (stretch *)v75,
                          v89,
                          v180,
                          0LL,
                          v166,
                          (struct _XLATEOBJ *)v140,
                          v151,
                          0,
                          v142);
                      else
                        (*(void (__fastcall **)(__int64, struct stretch::_STRDDA *, struct stretch::_STRRUN *, _QWORD, unsigned __int8 *, int, int, _DWORD))&sizl)(
                          v75,
                          v89,
                          v180,
                          0LL,
                          v166,
                          v155,
                          v151,
                          0);
                      v85 = v148;
                      v86 = v152;
                    }
LABEL_140:
                    v180 = (struct stretch::_STRRUN *)((char *)v180 + *(int *)(v19 + 88));
                    v87 = v181;
                    *(_DWORD *)v181 += *((_DWORD *)v181 + 1);
                    if ( v160 )
                      v160 = (struct _SURFOBJ *)((char *)v160 + *((int *)v163 + 22));
                    v148 = ++v85;
                    v152 = ++v86;
                  }
                  v90 = (unsigned __int64)v229 & -(__int64)((_DWORD)v195 != 0);
                  LODWORD(v140) = v155;
                  v91 = (*(__int64 (__fastcall **)(__int64, struct stretch::_STRDDA *, struct stretch::_STRRUN *, struct _SURFOBJ *, unsigned __int8 *))&sizl)(
                          v171,
                          v181,
                          v180,
                          v160,
                          v166);
                  v92 = v90;
                  v93 = v181;
                  ((void (__fastcall *)(struct stretch::_STRDDA *, __int64, PVOID *, unsigned __int64))v215)(
                    v181,
                    v91,
                    v182,
                    v92);
                  v85 = v148;
                  v94 = v164;
                  v95 = v165;
                  if ( v149 )
                  {
                    *((_DWORD *)v93 + 2) = v165;
                    *((_DWORD *)v93 + 3) = v153 - v95;
                    v96 = (unsigned int *)((char *)v93 + 16);
                    v97 = (v153 - v95) & 0x3FFFFFFFFFFFFFFFLL;
                    if ( v97 )
                    {
                      if ( ((unsigned __int8)v96 & 4) == 0 )
                      {
LABEL_136:
                        memset64(v96, v94 | ((unsigned __int64)v94 << 32), v97 >> 1);
                        v75 = v171;
                        if ( (v97 & 1) != 0 )
                          v96[v97 - 1] = v94;
LABEL_138:
                        v85 = v148;
LABEL_139:
                        v86 = v152;
                        goto LABEL_140;
                      }
                      *v96 = v94;
                      if ( --v97 )
                      {
                        v96 = (unsigned int *)((char *)v93 + 20);
                        goto LABEL_136;
                      }
                    }
                    v75 = v171;
                    goto LABEL_138;
                  }
                  v75 = v171;
                  goto LABEL_139;
                }
                v87 = v181;
LABEL_153:
                FreeTmpBuffer(v87);
                Win32FreePool((void *)v75);
                v98 = v218;
                v99 = DWORD2(v218);
                if ( (_DWORD)v218 == DWORD2(v218) || (v100 = DWORD1(v218), DWORD1(v218) == HIDWORD(v218)) )
                {
                  v218 = (unsigned __int128)v76;
                }
                else
                {
                  if ( v165 < (int)v218 )
                    v98 = v165;
                  LODWORD(v218) = v98;
                  if ( v192.m128i_i32[1] < SDWORD1(v218) )
                    v100 = v192.m128i_i32[1];
                  DWORD1(v218) = v100;
                  if ( v153 > SDWORD2(v218) )
                    v99 = v153;
                  DWORD2(v218) = v99;
                  if ( v192.m128i_i32[3] > SHIDWORD(v218) )
                    HIDWORD(v218) = v192.m128i_i32[3];
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v191);
              }
              v61 = v172;
              if ( !v146 )
              {
                FreeTmpBuffer(v200);
                v54 = HIDWORD(v218);
                v52 = DWORD2(v218);
                v53 = DWORD1(v218);
                v51 = v218;
                goto LABEL_75;
              }
LABEL_253:
              v146 = XCLIPOBJ::bEnum(v61, 0x144u, v59, 0LL);
            }
          }
          *(_DWORD *)v58 = 1;
          v62 = *(struct _RECTL *)((char *)v61 + 4);
        }
        else
        {
          *(_DWORD *)v58 = 1;
          v62 = *v16;
        }
        v146 = 0;
        *(struct _RECTL *)(v58 + 4) = v62;
        goto LABEL_91;
      }
      v182 = v167;
    }
    else
    {
      v182 = v167;
    }
    v172 = v173;
    v174 = EngCopyBits;
    goto LABEL_37;
  }
  return 1LL;
}
