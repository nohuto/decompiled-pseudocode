/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C01364A0
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00F5020 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00067CC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C0064740 (XLATEOBJ_iXlate.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C006C9E4 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0075DF4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00BC430 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00F7920 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FF6A0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C7F4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011D240 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01361D4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C013DDEC (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C02823E0 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02D4874 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C02D4A00 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C02DBD8C (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        unsigned int a2,
        HDC a3,
        HDC a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  unsigned int v11; // r14d
  struct PALETTE *v13; // rax
  struct _POINTL v14; // rdi
  struct _BLENDFUNCTION *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  DC *v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // r13
  int x; // edx
  LONG v29; // r9d
  LONG y; // r8d
  LONG v31; // r10d
  LONG v32; // eax
  LONG v33; // edx
  struct _RECTL *v34; // r10
  LONG left; // r9d
  int top; // r8d
  LONG right; // ecx
  int bottom; // eax
  __int64 v39; // rbx
  struct _POINTL *v40; // rcx
  struct PALETTE *v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rbx
  struct _BLENDFUNCTION v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rcx
  ULONG v47; // edx
  __int64 v48; // r11
  struct PALETTE *v49; // r10
  __int64 v50; // rdi
  ULONG NearestIndexFromColorref; // r13d
  int v52; // ebx
  __int64 v53; // r8
  Gre::Base *v54; // rcx
  struct _XLATEOBJ *v55; // rbx
  __int64 v56; // rax
  struct Gre::Base::SESSION_GLOBALS *v57; // rax
  int v58; // edi
  struct _POINTL *v59; // rax
  LONG v60; // edx
  __int64 v61; // rax
  struct _XLATEOBJ *XlateObject; // rax
  int v63; // r9d
  struct SURFACE *v64; // r15
  struct _POINTL v65; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v67; // rbx
  __int64 v68; // rbx
  int v69; // r14d
  __int64 *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  int v73; // r14d
  __int64 *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbx
  int v80; // r14d
  __int64 *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbx
  int v87; // r14d
  __int64 *v88; // rax
  __int64 v89; // rbx
  __int64 *v90; // rax
  ULONG v91; // eax
  int v92; // r14d
  __int64 v93; // rax
  char v94; // r8
  int v95; // eax
  HSURF v96; // rcx
  Gre::Base *v97; // rcx
  struct _SURFOBJ *v98; // r8
  unsigned int v99; // eax
  struct _RECTL *v100; // r15
  __int64 *v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rbx
  int v104; // r14d
  __int64 *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rbx
  int v108; // r14d
  __int64 *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rbx
  __int64 *v112; // rax
  __int64 v113; // rax
  __int64 v114; // rbx
  int v115; // r14d
  __int64 *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rbx
  int v122; // r14d
  __int64 *v123; // rax
  __int64 v124; // rbx
  __int64 *v125; // rax
  Gre::Base *v126; // rcx
  struct _SURFOBJ *v127; // rcx
  Gre::Base *v128; // rcx
  int cEntries; // eax
  __int64 v130; // rbx
  __int64 v131; // [rsp+30h] [rbp-D0h]
  __int64 v132; // [rsp+38h] [rbp-C8h]
  struct _RECTL *v133; // [rsp+40h] [rbp-C0h]
  int v134; // [rsp+50h] [rbp-B0h]
  int v135; // [rsp+54h] [rbp-ACh]
  unsigned int v136; // [rsp+58h] [rbp-A8h]
  int v137; // [rsp+5Ch] [rbp-A4h]
  int v138; // [rsp+5Ch] [rbp-A4h]
  unsigned int v139; // [rsp+60h] [rbp-A0h]
  struct _XLATEOBJ *v140; // [rsp+68h] [rbp-98h] BYREF
  int v141; // [rsp+70h] [rbp-90h]
  unsigned int v142; // [rsp+74h] [rbp-8Ch] BYREF
  struct _BLENDFUNCTION v143; // [rsp+78h] [rbp-88h] BYREF
  int v144; // [rsp+7Ch] [rbp-84h]
  int v145; // [rsp+80h] [rbp-80h]
  __int64 v146; // [rsp+88h] [rbp-78h] BYREF
  struct _BLENDFUNCTION *v147; // [rsp+90h] [rbp-70h]
  struct SURFACE *v148; // [rsp+98h] [rbp-68h] BYREF
  struct PALETTE *v149; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v150; // [rsp+A8h] [rbp-58h] BYREF
  int v151; // [rsp+B0h] [rbp-50h]
  __int64 v152; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v153; // [rsp+C0h] [rbp-40h] BYREF
  DC *v154; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v155; // [rsp+D0h] [rbp-30h]
  _BYTE v156[32]; // [rsp+D8h] [rbp-28h] BYREF
  struct _POINTL v157; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v158; // [rsp+100h] [rbp+0h] BYREF
  int v159; // [rsp+108h] [rbp+8h]
  int v160; // [rsp+10Ch] [rbp+Ch]
  _QWORD v161[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v162[32]; // [rsp+120h] [rbp+20h] BYREF
  struct _RECTL v163; // [rsp+140h] [rbp+40h] BYREF

  v11 = a2;
  v150 = a7;
  v153 = a9;
  v137 = a2;
  v13 = Gre::Base::Globals(a1);
  v14 = (struct _POINTL)*((_QWORD *)a1 + 2);
  v149 = v13;
  v139 = 0;
  v163.bottom = 0;
  v146 = **(_QWORD **)&v14;
  v135 = 0;
  v143 = 0;
  v157 = v14;
  if ( v11 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *(_DWORD *)(*(_QWORD *)&v14 + 108LL);
    *((_DWORD *)a1 + 39) = *(_DWORD *)(*(_QWORD *)&v14 + 112LL);
    return 1LL;
  }
  if ( v11 )
  {
    v16 = a6;
  }
  else
  {
    v11 = *((_DWORD *)a1 + 1);
    v16 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
    v137 = v11;
  }
  v147 = v16;
  if ( !v150 || !a8 || !v16 && (v11 & 2) != 0 )
    return 0LL;
  v154 = 0LL;
  v155 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v156);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v154, a4);
  v19 = v154;
  if ( !v154 )
    goto LABEL_209;
  if ( (*((_DWORD *)v154 + 11) & 2) == 0 )
  {
    if ( !(unsigned int)XDCOBJ::SaveAttributesHelper((XDCOBJ *)&v154) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v154 + 3);
      v154 = 0LL;
      goto LABEL_209;
    }
    *((_DWORD *)v154 + 11) |= 2u;
    v19 = v154;
    LODWORD(v155) = 1;
  }
  if ( (*((_DWORD *)v19 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v19);
    v19 = v154;
  }
  if ( !v19 )
    goto LABEL_209;
  v20 = *((_QWORD *)v19 + 62);
  if ( !v20 || (*((_DWORD *)v19 + 9) & 0x5000) == 0x1000 )
    goto LABEL_209;
  if ( *(_DWORD *)(v20 + 656) )
  {
    if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v20 + 656) )
      goto LABEL_209;
    v19 = v154;
  }
  v21 = *(_DWORD *)(v20 + 112);
  if ( (v21 & 0x800) != 0 )
  {
    v22 = UserSurfaceAccessCheck(*(_QWORD *)(v20 + 648));
    goto LABEL_27;
  }
  if ( (v21 & 0x10000000) != 0 )
  {
    v22 = UserScreenAccessCheck(v19, v17, v18);
LABEL_27:
    if ( v22 )
    {
      v19 = v154;
      goto LABEL_29;
    }
LABEL_209:
    DCOBJ::~DCOBJ((DCOBJ *)&v154);
    return 0LL;
  }
LABEL_29:
  v23 = *((_QWORD *)v19 + 6);
  if ( v23 != **(_QWORD **)&v14 && v23 != *(_QWORD *)(v146 + 24) )
    goto LABEL_209;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v161, a3);
    if ( v161[0] )
    {
      v24 = *(_QWORD *)(v161[0] + 48LL);
      if ( v24 == *((_QWORD *)v154 + 6) && (v24 == **(_QWORD **)&v14 || v24 == *(_QWORD *)(v146 + 24)) )
      {
        v152 = *(_QWORD *)(v161[0] + 88LL);
        v25 = *(_QWORD *)(v161[0] + 976LL);
        v26 = *(_DWORD *)(v25 + 184);
        v144 = *(_DWORD *)(v25 + 176);
        LODWORD(v25) = *(_DWORD *)(v161[0] + 120LL);
        v145 = v26;
        v151 = v25;
        XDCOBJ::vUnlockFast((XDCOBJ *)v161);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v162);
        v19 = v154;
        goto LABEL_38;
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)v161);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v162);
    goto LABEL_209;
  }
  v145 = 0xFFFFFF;
  v144 = 0;
  v151 = 0;
  v152 = *((_QWORD *)v149 + 750);
LABEL_38:
  v27 = *((_QWORD *)v19 + 62);
  x = v150->x;
  v29 = v150->x + a8->cx;
  y = v150->y;
  v31 = y + a8->cy;
  v163.left = v150->x;
  v163.right = v29;
  v163.top = y;
  v163.bottom = v31;
  v148 = (struct SURFACE *)v27;
  if ( v27 )
  {
    if ( x >= 0 && y >= 0 && x < v29 && y < v31 )
    {
      v32 = *(_DWORD *)(v27 + 56);
      if ( v29 <= v32 )
      {
        v33 = *(_DWORD *)(v27 + 60);
        if ( v31 <= v33 )
        {
          v34 = v153;
          if ( v153 )
          {
            left = v153->left;
            if ( v153->left < 0 )
            {
              v153->left = 0;
              left = 0;
            }
            top = v34->top;
            if ( top < 0 )
            {
              v34->top = 0;
              top = 0;
            }
            right = v34->right;
            if ( v32 < right )
            {
              v34->right = v32;
              right = v32;
            }
            bottom = v34->bottom;
            if ( v33 < bottom )
            {
              v34->bottom = v33;
              bottom = v33;
            }
            if ( right >= left )
            {
              if ( bottom < top )
                v34->top = bottom;
            }
            else
            {
              v34->left = right;
            }
          }
          GreAcquireSemaphoreSharedInternal(*(_QWORD *)(*(_QWORD *)&v14 + 120LL));
          EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)(*(_QWORD *)&v14 + 120LL));
          v39 = *((_QWORD *)a1 + 16);
          if ( v39 && (*(_QWORD *)(v39 + 224) || (*(_DWORD *)(v39 + 92) & 1) != 0) )
          {
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v39 + 248));
            if ( (*(_DWORD *)a1 & 0x200) != 0 )
            {
              v158 = 0LL;
              v159 = *(_DWORD *)(v39 + 32);
              v160 = *(_DWORD *)(v39 + 36);
              ERECTL::operator*=(&v163.left, (int *)&v158);
            }
            W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v39 + 248));
          }
          v40 = *(struct _POINTL **)(v27 + 128);
          v41 = v149;
          v140 = 0LL;
          v42 = *((_QWORD *)v154 + 11);
          v43 = *((_QWORD *)v149 + 751);
          v150 = v40;
          if ( v40 )
            INC_SHARE_REF_CNT(v40);
          EtwTraceGreLockReleaseSemaphore(L"hsem");
          GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)&v14 + 120LL));
          if ( v11 != 3 || v16->AlphaFormat )
          {
            v46 = 0LL;
            v47 = 0;
            v141 = 0;
            v136 = 0;
            if ( v11 != 2 )
              goto LABEL_72;
          }
          else
          {
            v44 = *v16;
            v11 = 2;
            v16 = &v143;
            v143 = v44;
            v147 = &v143;
            v143.AlphaFormat = 1;
            v137 = 2;
            v141 = 1;
            v45 = rgbFromColorref(v43, v42);
            v46 = 1LL;
            v47 = v45;
            v136 = v45;
          }
          if ( (v16->AlphaFormat & 1) != 0 )
          {
            v48 = *((_QWORD *)v41 + 750);
            v49 = (struct PALETTE *)*((_QWORD *)v41 + 751);
            v152 = v48;
            v142 = 6;
            goto LABEL_73;
          }
LABEL_72:
          v48 = v152;
          v142 = 0;
          v49 = *(struct PALETTE **)(v146 + 1776);
LABEL_73:
          v50 = (__int64)v150;
          NearestIndexFromColorref = v47;
          v149 = v49;
          v134 = v46;
          if ( v150 )
          {
            v52 = v46;
            if ( !v49 )
            {
              v16 = v147;
              v134 = v46;
              v11 = v137;
              if ( (v150[3].x & 0x800) != 0 )
              {
                v56 = *(_QWORD *)(v48 + 80);
                if ( !v56 || (v134 = v46, v56 == *(_QWORD *)(v48 + 72)) )
                {
                  v57 = Gre::Base::Globals((Gre::Base *)v46);
                  v58 = v141;
                  NearestIndexFromColorref = v136;
                  v16 = v147;
                  v11 = v137;
                  v55 = (struct _XLATEOBJ *)((char *)v57 + 6896);
                  v140 = (struct _XLATEOBJ *)((char *)v57 + 6896);
                  goto LABEL_105;
                }
              }
            }
          }
          else if ( !v49
                 || (v52 = v46, (*((_DWORD *)v49 + 6) & 0x800) != 0)
                 && ((v53 = *(_QWORD *)(v48 + 80), v16 = v147, v134 = v46, v11 = v137, !v53)
                  || (v134 = v46, v53 == *(_QWORD *)(v48 + 72))) )
          {
LABEL_78:
            v55 = (struct _XLATEOBJ *)((char *)Gre::Base::Globals((Gre::Base *)v46) + 6896);
            v140 = v55;
            goto LABEL_104;
          }
          if ( v150 )
          {
            v134 = v52;
            if ( v49 )
            {
              v59 = (struct _POINTL *)v150[15];
              v60 = v59 == v150 ? v150[4].x : v59[4].x;
              v61 = *((_QWORD *)v49 + 15);
              v46 = (struct PALETTE *)v61 == v49 ? *((unsigned int *)v49 + 8) : *(unsigned int *)(v61 + 32);
              if ( v60 == (_DWORD)v46 )
                goto LABEL_78;
            }
            v134 = v52;
            if ( v49 )
            {
              if ( (unsigned int)EXLATEOBJ::bSearchCache(&v140, v150, v49, v42, v48, v145, v144, 0, 0) )
              {
                v58 = v52;
                v55 = v140;
                goto LABEL_105;
              }
              v49 = v149;
            }
            else
            {
              v134 = v52;
            }
          }
          LODWORD(v133) = 0;
          LODWORD(v132) = v144;
          LODWORD(v131) = v145;
          v138 = v52;
          XlateObject = (struct _XLATEOBJ *)CreateXlateObject(0LL, v151, v50, v49, v42, v152, v131, v132, v133, 0);
          v140 = XlateObject;
          v55 = XlateObject;
          if ( !XlateObject )
          {
LABEL_194:
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v150);
            if ( v55 )
            {
              cEntries = v55[1].cEntries;
              if ( cEntries < 0 )
              {
                if ( cEntries == -1 )
                  FreeThreadBufferWithTag(v55);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v128) + 8 * (int)v55[1].cEntries
                                                                                          + 1658);
              }
            }
            v19 = v154;
            goto LABEL_200;
          }
          if ( v50 )
          {
            v54 = (Gre::Base *)v11;
            v134 = v138;
            if ( !v149 || (XlateObject[3].flXlate & 0x200) != 0 )
            {
              v58 = v138;
              goto LABEL_105;
            }
            EXLATEOBJ::vAddToCache((Gre::Base *)&v140, v50, (__int64)v149, v42, v152);
          }
LABEL_104:
          v58 = v134;
LABEL_105:
          *((_DWORD *)a1 + 1) = v11;
          v63 = 1;
          v139 = 1;
          *((struct _RECTL *)a1 + 6) = v163;
          if ( v11 == 4 )
          {
            *(_DWORD *)a1 |= 8u;
            v135 = 1;
            goto LABEL_107;
          }
          if ( v11 == 1 )
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v150, v42, a5, 1LL);
            v91 = XLATEOBJ_iXlate(v55, NearestIndexFromColorref);
            *(_DWORD *)a1 &= ~8u;
            v54 = (Gre::Base *)v146;
            *((_DWORD *)a1 + 51) = v91;
            v92 = *((_DWORD *)v54 + 11) & 4;
            v135 = v92;
            goto LABEL_144;
          }
          if ( v11 != 2 )
            goto LABEL_193;
          if ( v16->BlendOp || v16->BlendFlags || (v16->AlphaFormat & 0xFE) != 0 )
            goto LABEL_142;
          *((struct _BLENDFUNCTION *)a1 + 50) = *v16;
          v93 = *((_QWORD *)a1 + 2);
          *((_DWORD *)a1 + 1) = v11 & 0xFFFFFFF9 | 2;
          if ( *(_DWORD *)(v93 + 108) <= 3u || (v16->AlphaFormat & 1) == 0 && v16->SourceConstantAlpha == 0xFF )
            *(_DWORD *)a1 |= 8u;
          else
            *(_DWORD *)a1 &= ~8u;
          v94 = v16->AlphaFormat & 1;
          if ( !v94 || (unsigned int)bIsSourceBGRA(v148) )
          {
            if ( !v58 )
            {
              if ( v94 )
                v92 = *(_DWORD *)(v146 + 44) & 2;
              else
                v92 = v63 & *(_DWORD *)(v146 + 44);
              v135 = v92;
LABEL_143:
              v139 = v63;
              if ( !v63 )
                goto LABEL_193;
LABEL_144:
              if ( !v92 )
              {
                v64 = v148;
                if ( *((_WORD *)v148 + 50) || (*((_BYTE *)v148 + 102) & 0x20) != 0 )
                {
                  Gre::Base::Globals(v54);
                  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v146) )
                  {
                    v95 = *((_DWORD *)v64 + 29);
                    if ( (v95 & 0x20) == 0 )
                    {
                      v96 = (HSURF)*((_QWORD *)v64 + 4);
                      *((_DWORD *)v64 + 29) = v95 | 0x20;
                      pConvertDfbSurfaceToDibPostNKAPC(v96);
                    }
                  }
                  else
                  {
                    bConvertDfbDcToDib((struct XDCOBJ *)&v154);
                  }
                  v135 = 0;
                  v64 = (struct SURFACE *)*((_QWORD *)v154 + 62);
                }
                goto LABEL_108;
              }
LABEL_107:
              v64 = v148;
LABEL_108:
              v65 = v157;
              v148 = **(struct SURFACE ***)&v157;
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( ThreadWin32Thread
                && (v67 = *ThreadWin32Thread) != 0
                && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v148)
                && (*(_DWORD *)(v67 + 104) || *(_DWORD *)(v67 + 108)) )
              {
                v68 = 0LL;
                v69 = *(_DWORD *)(*(_QWORD *)&v65 + 100LL);
                v70 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v70 )
                  v68 = *v70;
                v71 = *(_QWORD *)(v68 + 280);
                v72 = 0LL;
                *(_DWORD *)(v71 + 12) = v69;
                v73 = *(_DWORD *)(*(_QWORD *)&v65 + 104LL);
                v74 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v74 )
                  v72 = *v74;
                v75 = *(_QWORD *)(v72 + 280);
                v76 = 0LL;
                *(_DWORD *)(v75 + 16) = v73;
                v77 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v77 )
                  v76 = *v77;
                v78 = *(_QWORD *)(v76 + 280);
                v79 = 0LL;
                v80 = *(_DWORD *)(v78 + 12);
                v81 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v81 )
                  v79 = *v81;
                v82 = *(_QWORD *)(v79 + 280);
                v83 = 0LL;
                *(_DWORD *)(v82 + 20) = v80;
                v84 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v84 )
                  v83 = *v84;
                v85 = *(_QWORD *)(v83 + 280);
                v86 = 0LL;
                v87 = *(_DWORD *)(v85 + 16);
                v88 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v88 )
                  v86 = *v88;
                *(_DWORD *)(*(_QWORD *)(v86 + 280) + 24LL) = v87;
                vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)&v65, 0);
                v89 = 0LL;
                v90 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v90 )
                  v89 = *v90;
                **(_DWORD **)(v89 + 280) = 0;
              }
              else
              {
                if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v148) )
                  Gre::Base::Globals(v97);
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 32LL) + 88LL) = *(_DWORD *)(*(_QWORD *)&v65 + 100LL);
                *(_WORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 32LL) + 76LL) = *(_WORD *)(*(_QWORD *)&v65 + 104LL);
                *(_DWORD *)(*(_QWORD *)&v65 + 88LL) = 0;
              }
              v98 = (struct _SURFOBJ *)((char *)v64 + 24);
              v99 = 0;
              v157 = 0LL;
              if ( !v64 )
                v98 = 0LL;
              v100 = v153;
              LOBYTE(v99) = v135 == 0;
              bSpCreateShape(a1, &v157, v98, v140, &v163, v149, v142, v99, v153);
              v153 = **(struct _RECTL ***)&v65;
              v101 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v101
                && (v102 = *v101) != 0
                && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v153)
                && (*(_DWORD *)(v102 + 104) || *(_DWORD *)(v102 + 108)) )
              {
                v103 = 0LL;
                v104 = *(_DWORD *)(*(_QWORD *)&v65 + 92LL);
                v105 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v105 )
                  v103 = *v105;
                v106 = *(_QWORD *)(v103 + 280);
                v107 = 0LL;
                *(_DWORD *)(v106 + 4) = v104;
                v108 = *(_DWORD *)(*(_QWORD *)&v65 + 96LL);
                v109 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v109 )
                  v107 = *v109;
                v110 = *(_QWORD *)(v107 + 280);
                v111 = 0LL;
                *(_DWORD *)(v110 + 8) = v108;
                v112 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v112 )
                  v111 = *v112;
                v113 = *(_QWORD *)(v111 + 280);
                v114 = 0LL;
                v115 = *(_DWORD *)(v113 + 4);
                v116 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v116 )
                  v114 = *v116;
                v117 = *(_QWORD *)(v114 + 280);
                v118 = 0LL;
                *(_DWORD *)(v117 + 20) = v115;
                v119 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v119 )
                  v118 = *v119;
                v120 = *(_QWORD *)(v118 + 280);
                v121 = 0LL;
                v122 = *(_DWORD *)(v120 + 8);
                v123 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v123 )
                  v121 = *v123;
                *(_DWORD *)(*(_QWORD *)(v121 + 280) + 24LL) = v122;
                vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)&v65, 1);
                v124 = 0LL;
                v125 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v125 )
                  v124 = *v125;
                **(_DWORD **)(v124 + 280) = 1;
              }
              else
              {
                if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v153) )
                  Gre::Base::Globals(v126);
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 32LL) + 88LL) = *(_DWORD *)(*(_QWORD *)&v65 + 92LL);
                *(_WORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 32LL) + 76LL) = *(_WORD *)(*(_QWORD *)&v65 + 96LL);
                *(_DWORD *)(*(_QWORD *)&v65 + 88LL) = 1;
              }
              v127 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
              if ( v127 )
              {
                if ( v58 )
                {
                  if ( (*(_DWORD *)a1 & 0x40) == 0 )
                  {
                    vSpUpdatePerPixelAlphaFromColorKey(v127, NearestIndexFromColorref, v100, 0LL);
                    v55 = v140;
                    goto LABEL_194;
                  }
                  *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
                }
                v55 = v140;
                goto LABEL_194;
              }
              v55 = v140;
LABEL_193:
              vSpDeleteShape(a1);
              *((_DWORD *)a1 + 1) = 4;
              v139 = 0;
              goto LABEL_194;
            }
          }
          else if ( !v58 )
          {
LABEL_142:
            v63 = 0;
            v92 = 0;
            goto LABEL_143;
          }
          v92 = 0;
          v135 = 0;
          goto LABEL_143;
        }
      }
    }
  }
LABEL_200:
  if ( v19 )
  {
    if ( (_DWORD)v155 && (*((_DWORD *)v19 + 11) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v154);
      *((_DWORD *)v154 + 11) &= ~2u;
      v19 = v154;
      LODWORD(v155) = 0;
    }
    v142 = 0;
    v130 = *(_QWORD *)v19;
    HmgDecrementExclusiveReferenceCountEx(v19, HIDWORD(v155), &v142);
    if ( v142 )
      GrepDeleteDC(v130, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v156);
  return v139;
}
