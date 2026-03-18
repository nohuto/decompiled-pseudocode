/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00F5020
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C006B9CC (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C01377F4 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C027E500 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C006AA40 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C006B47C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C006C5C0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C006CA58 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C009E49C (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00BC430 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F4F84 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F6288 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00F73B0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C00F76F4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C011452C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C7F4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011D240 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C01364A0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0137328 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0137A10 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C013DDEC (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C027921C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027CC2C (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x1C027CD5C (-bIsCursorSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C027E1EC (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C027EE38 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C027F5D0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027F634 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C027F750 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0280240 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0280CE0 (-vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0282E04 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall bSpUpdateSprite(
        struct SPRITE *a1,
        HDC a2,
        struct _POINTL *a3,
        PRTL_BITMAP *p_BitMapHeader,
        HDC a5,
        struct _POINTL *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct _RECTL *a10)
{
  struct _BLENDFUNCTION *v13; // rdi
  struct _RECTL *v14; // r15
  __int64 result; // rax
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rsi
  LONG v19; // eax
  LONG v20; // ecx
  DC *v21; // rcx
  LONG v22; // ecx
  LONG v23; // eax
  LONG v24; // ecx
  DC *v25; // rcx
  __int64 v26; // rsi
  unsigned int v27; // edx
  struct _POINTL v28; // r8
  unsigned int v29; // esi
  int v30; // ecx
  unsigned int v31; // edx
  struct _POINTL v32; // rsi
  struct _BLENDFUNCTION updated; // eax
  int v34; // r12d
  LONG right; // ebx
  LONG top; // r14d
  LONG bottom; // r13d
  int v38; // ecx
  LONG v39; // edx
  LONG v40; // r15d
  LONG v41; // ebx
  int v42; // ecx
  LONG v43; // eax
  LONG v44; // r14d
  LONG v45; // r13d
  LONG v46; // eax
  struct _RECTL v47; // xmm6
  LONG left; // r10d
  struct _SPRITESTATE *v49; // rdi
  __int64 v50; // rbx
  LONG v51; // edx
  LONG v52; // r8d
  LONG v53; // r9d
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct SPRITE *i; // rbx
  __int64 v57; // rdi
  struct _SPRITESTATE *v58; // r12
  __int64 v59; // rax
  __int64 v60; // rcx
  signed int v61; // edi
  __int64 v62; // rdx
  __int64 v63; // r8
  LONG v64; // ecx
  LONG v65; // eax
  __int64 v66; // rbx
  LONG v67; // ecx
  LONG v68; // eax
  unsigned int v69; // eax
  __int64 v70; // rcx
  _DWORD *v71; // r11
  struct _POINTL *v72; // r15
  __int64 v73; // r12
  _DWORD *v74; // rdi
  unsigned __int64 v75; // r14
  _DWORD *v76; // rbx
  unsigned __int64 v77; // rsi
  __int64 v78; // rcx
  _DWORD *v79; // rcx
  struct _SPRITESTATE *v80; // r15
  __int64 v81; // r13
  char *v82; // rsi
  signed int ClearBits; // eax
  __int64 v84; // rdi
  struct _SURFOBJ *v85; // rcx
  __int64 v86; // rbx
  struct _SURFOBJ *Surface; // r15
  __int64 v88; // r10
  signed int v89; // r8d
  signed int v90; // r9d
  signed int v91; // edx
  int v92; // ecx
  PVOID *p_pvScan0; // rbx
  __int64 v94; // rdi
  __int64 v95; // rax
  int v96; // ecx
  int hsurf; // eax
  int v98; // ebx
  int v99; // edx
  _DWORD *v100; // rcx
  struct _SPRITESTATE *v101; // r12
  struct _CLIPOBJ *v102; // r14
  struct REGION *v103; // rbx
  int v104; // eax
  int v105; // eax
  PVOID *v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rdi
  int v109; // ecx
  struct _SURFOBJ *v110; // rdx
  ULONG v111; // ebx
  struct _SPRITESTATE *v112; // rdi
  __int64 v113; // rbx
  LONG v114; // esi
  signed int v115; // r14d
  LONG v116; // r15d
  LONG v117; // r12d
  __int64 v118; // rbx
  __int64 v119; // rcx
  int v120; // r8d
  int v121; // r9d
  int v122; // r10d
  int v123; // r11d
  __int64 v124; // rcx
  struct _SURFOBJ *v125; // rdx
  unsigned int v126; // [rsp+20h] [rbp-E0h]
  struct _BLENDFUNCTION v127; // [rsp+50h] [rbp-B0h] BYREF
  struct _POINTL v128; // [rsp+58h] [rbp-A8h] BYREF
  int v129; // [rsp+60h] [rbp-A0h]
  unsigned int v130; // [rsp+68h] [rbp-98h]
  struct _SPRITESTATE *v131; // [rsp+70h] [rbp-90h]
  struct _POINTL *v132; // [rsp+78h] [rbp-88h] BYREF
  ULONG StartingIndex[2]; // [rsp+80h] [rbp-80h] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+88h] [rbp-78h] BYREF
  __int64 v135; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v136; // [rsp+98h] [rbp-68h] BYREF
  struct _RECTL v137; // [rsp+A0h] [rbp-60h] BYREF
  DC *v138; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v139; // [rsp+B8h] [rbp-48h]
  _BYTE v140[32]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v141[5]; // [rsp+E0h] [rbp-20h] BYREF
  LONG v142; // [rsp+F4h] [rbp-Ch]
  LONG v143; // [rsp+F8h] [rbp-8h]
  unsigned int v144; // [rsp+FCh] [rbp-4h]
  LONG v145; // [rsp+100h] [rbp+0h]
  LONG v146; // [rsp+104h] [rbp+4h]
  LONG j; // [rsp+108h] [rbp+8h]
  __int64 v148; // [rsp+110h] [rbp+10h]
  __int64 v149; // [rsp+118h] [rbp+18h]
  __int64 v150; // [rsp+120h] [rbp+20h]
  _DWORD *v151; // [rsp+128h] [rbp+28h]
  int v152; // [rsp+130h] [rbp+30h]
  struct _SPRITESTATE *v153; // [rsp+138h] [rbp+38h]
  _BYTE v154[192]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v155[2]; // [rsp+200h] [rbp+100h] BYREF
  struct _RECTL v156; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v157[4]; // [rsp+230h] [rbp+130h] BYREF
  char v158[52]; // [rsp+234h] [rbp+134h] BYREF
  REGION *v159; // [rsp+268h] [rbp+168h]
  __int64 v160; // [rsp+280h] [rbp+180h]
  int v161; // [rsp+288h] [rbp+188h]
  int v162; // [rsp+2B0h] [rbp+1B0h]
  __int64 v163; // [rsp+2C0h] [rbp+1C0h]
  int v164; // [rsp+2C8h] [rbp+1C8h]

  v13 = a8;
  v14 = a10;
  v132 = a6;
  result = 0LL;
  v136 = (struct _POINTL)a2;
  v128 = (struct _POINTL)a1;
  v127 = 0;
  if ( !a1 )
    return result;
  v131 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v135 = *(_QWORD *)v131;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v154, (struct PDEVOBJ *)&v135);
  BitMapHeader = 0LL;
  v130 = a9 & 0x10000000;
  v16 = a9 & 0xEFFFFFFF;
  v156 = 0LL;
  if ( (a9 & 0x10000000) == 0 )
    v16 = a9;
  v17 = v16 & 0xFFDFFFFF;
  v129 = v16 & 0x200000;
  if ( (v16 & 0x200000) == 0 )
    v17 = v16;
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v131 + 15));
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_QWORD *)v131 + 15));
  v18 = *((_QWORD *)a1 + 16);
  if ( v18 && (*(_QWORD *)(v18 + 224) || (*(_DWORD *)(v18 + 92) & 1) != 0) )
  {
    *(_QWORD *)StartingIndex = v18 + 248;
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 248));
    if ( (*(_DWORD *)v128.x & 0x200) != 0 )
    {
      v19 = *(_DWORD *)(v18 + 32);
      v20 = *(_DWORD *)(v18 + 36);
      *(_QWORD *)&v137.left = 0LL;
      *(_QWORD *)&v137.right = __PAIR64__(v20, v19);
      if ( a10 )
      {
        v156 = *a10;
        ERECTL::operator*=(&v156.left, &v137.left);
      }
      else
      {
        *(_QWORD *)&v156.left = 0LL;
        v156.right = v19;
        v156.bottom = v20;
      }
      v14 = &v156;
    }
    v138 = 0LL;
    v139 = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v140);
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v138, a5);
    v21 = v138;
    if ( !v138 )
      goto LABEL_28;
    if ( (*((_DWORD *)v138 + 11) & 2) == 0 )
    {
      if ( !(unsigned int)XDCOBJ::SaveAttributesHelper((XDCOBJ *)&v138) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v138 + 3);
        v138 = 0LL;
LABEL_28:
        W32PIDLOCK::vUnlockSingleThread(*(W32PIDLOCK **)StartingIndex);
        v25 = v138;
        if ( v138 )
        {
          if ( (_DWORD)v139 && (*((_DWORD *)v138 + 11) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v138);
            *((_DWORD *)v138 + 11) &= ~2u;
            v25 = v138;
            LODWORD(v139) = 0;
          }
          StartingIndex[0] = 0;
          v26 = *(_QWORD *)v25;
          HmgDecrementExclusiveReferenceCountEx(v25, HIDWORD(v139), StartingIndex);
          if ( StartingIndex[0] )
            GrepDeleteDC(v26, 0x2000000LL);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v140);
        goto LABEL_35;
      }
      *((_DWORD *)v138 + 11) |= 2u;
      v21 = v138;
      LODWORD(v139) = 1;
    }
    if ( (*((_DWORD *)v21 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v21);
      v21 = v138;
    }
    if ( v21 && p_BitMapHeader )
    {
      v22 = *(_DWORD *)(v18 + 32);
      if ( *(_DWORD *)p_BitMapHeader < v22 )
        v22 = *(_DWORD *)p_BitMapHeader;
      v23 = *(_DWORD *)(v18 + 36);
      LODWORD(BitMapHeader) = v22;
      v24 = *((_DWORD *)p_BitMapHeader + 1);
      p_BitMapHeader = &BitMapHeader;
      if ( v24 < v23 )
        v23 = v24;
      HIDWORD(BitMapHeader) = v23;
    }
    goto LABEL_28;
  }
LABEL_35:
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*((_QWORD *)v131 + 15));
  if ( (v17 & 0x20000000) != 0 )
  {
    v27 = v130;
    v17 &= ~0x20000000u;
    v28 = v128;
    *(_DWORD *)(*(_QWORD *)&v128 + 224LL) = v17 | (v130 != 0 ? 0x10000000 : 0);
    if ( (v17 & 2) != 0 && a8 )
      *(struct _BLENDFUNCTION *)(*(_QWORD *)&v28 + 228LL) = *a8;
    v29 = a7;
    *(_DWORD *)(*(_QWORD *)&v28 + 232LL) = a7;
    if ( v27 )
    {
      vSpCreateExMirror(**(HDEV **)(*(_QWORD *)&v28 + 16LL));
      v28 = v128;
      *(_DWORD *)v128.x |= 0x100u;
    }
    if ( !a5 )
    {
      v30 = *(_DWORD *)(*(_QWORD *)&v28 + 224LL);
      v31 = *(_DWORD *)(*(_QWORD *)&v28 + 204LL);
      v127 = *(struct _BLENDFUNCTION *)(*(_QWORD *)&v28 + 200LL);
      if ( v30 == 3 && !a8->AlphaFormat )
      {
        v31 = a7;
        v127 = *a8;
        v13 = &v127;
        v127.AlphaFormat = 1;
        v30 = 2;
      }
      *(_DWORD *)(*(_QWORD *)&v28 + 4LL) = v30;
      *(_DWORD *)(*(_QWORD *)&v28 + 204LL) = v31;
      *(struct _BLENDFUNCTION *)(*(_QWORD *)&v28 + 200LL) = *v13;
      goto LABEL_46;
    }
  }
  else if ( v17 == 0x40000000 )
  {
    v17 = *(_DWORD *)(*(_QWORD *)&v128 + 224LL) & 0xEFFFFFFF;
    if ( (*(_DWORD *)(*(_QWORD *)&v128 + 224LL) & 0x10000000) == 0 )
      v17 = *(_DWORD *)(*(_QWORD *)&v128 + 224LL);
    if ( (*(_DWORD *)v128.x & 0x40) != 0 && !v17 )
      v17 = *(_DWORD *)(*(_QWORD *)&v128 + 4LL);
    v13 = &v127;
    v29 = *(_DWORD *)(*(_QWORD *)&v128 + 232LL);
    v127 = *(struct _BLENDFUNCTION *)(*(_QWORD *)&v128 + 228LL);
  }
  else
  {
    v29 = a7;
  }
  if ( (*(_DWORD *)(v135 + 40) & 0x400) != 0 )
  {
LABEL_46:
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v154);
    return 1LL;
  }
  if ( !*(_QWORD *)&v136 && !p_BitMapHeader && !a5 && !v132 && !v29 )
  {
    if ( v17 - 2 > 1 || !v13 || a3 )
    {
      if ( (v17 & 0x7FFFFFFF) != 0 || v13 )
      {
        v32 = v128;
        v127 = (struct _BLENDFUNCTION)1;
        goto LABEL_66;
      }
      v32 = v128;
      updated = (struct _BLENDFUNCTION)bSpUpdatePosition(*(struct SPRITE **)&v128, a3, v17 & 0x80000000, 0);
    }
    else
    {
      v32 = v128;
      updated = (struct _BLENDFUNCTION)bSpUpdateAlpha(*(struct SPRITE **)&v128, v13, (int)v132 + 1);
    }
    v127 = updated;
LABEL_66:
    v34 = v129;
    goto LABEL_67;
  }
  v126 = v29;
  v32 = v128;
  v127 = (struct _BLENDFUNCTION)bSpUpdateShape(
                                  *(struct SPRITE **)&v128,
                                  v17,
                                  *(HDC *)&v136,
                                  a5,
                                  v126,
                                  v13,
                                  v132,
                                  (struct tagSIZE *)p_BitMapHeader,
                                  v14);
  if ( !*(_DWORD *)&v127 )
    goto LABEL_66;
  v34 = v129;
  if ( !v129 )
  {
    if ( !a3 )
      a3 = (struct _POINTL *)(*(_QWORD *)&v32 + 112LL);
    v127 = (struct _BLENDFUNCTION)bSpUpdatePosition(*(struct SPRITE **)&v32, a3, 0, 0);
  }
LABEL_67:
  if ( !v14 )
  {
    memset(v155, 0, 24);
    if ( v34 )
      PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v155, v131, (struct _RECTL *)(*(_QWORD *)&v32 + 80LL));
    if ( !*(_QWORD *)&v155[0].left && v34 || (vSpRedrawSprite(*(struct SPRITE **)&v32), v34) )
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v155);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v155);
    if ( (*(_DWORD *)(v135 + 40) & 0x400) == 0 )
    {
      v124 = *(_QWORD *)(v135 + 2528);
      v125 = (struct _SURFOBJ *)(v124 + 24);
      if ( !v124 )
        v125 = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&v135, v125, 0LL, 0);
    }
    goto LABEL_278;
  }
  right = v14->right;
  top = v14->top;
  bottom = v14->bottom;
  v38 = *(_DWORD *)(*(_QWORD *)&v32 + 112LL);
  v39 = v38 + v14->left;
  v40 = *(_DWORD *)(*(_QWORD *)&v32 + 80LL);
  v41 = v38 + right;
  v42 = *(_DWORD *)(*(_QWORD *)&v32 + 116LL);
  v43 = v39;
  v44 = v42 + top;
  v45 = v42 + bottom;
  if ( v40 <= v39 )
    v40 = v39;
  else
    v43 = *(_DWORD *)(*(_QWORD *)&v32 + 80LL);
  v156.left = v43;
  if ( *(_DWORD *)(*(_QWORD *)&v32 + 84LL) > v44 )
    v44 = *(_DWORD *)(*(_QWORD *)&v32 + 84LL);
  if ( *(_DWORD *)(*(_QWORD *)&v32 + 88LL) < v41 )
    v41 = *(_DWORD *)(*(_QWORD *)&v32 + 88LL);
  v46 = *(_DWORD *)(*(_QWORD *)&v32 + 92LL);
  v130 = v41;
  v156.right = v41;
  if ( v46 < v45 )
    v45 = v46;
  v156.bottom = v45;
  if ( v41 < v40 )
    goto LABEL_278;
  v156.left = v40;
  if ( v45 < v44 )
    v44 = v45;
  v156.top = v44;
  if ( v40 == v41 )
    goto LABEL_278;
  v156.left = v40;
  if ( v44 == v45 )
    goto LABEL_278;
  v156.left = v40;
  v47 = v156;
  v137 = v156;
  ((void (__fastcall *)(_QWORD, _QWORD))vSpAddAndCompactDirtyRect)(v32, &v137);
  left = 0;
  memset(v155, 0, 24);
  if ( v34 )
  {
    if ( v40 == v41 || v44 == v45 )
    {
      v51 = v155[1].top;
      v52 = v155[0].bottom;
      v53 = v155[0].right;
      v57 = *(_QWORD *)&v155[0].left;
      goto LABEL_126;
    }
    v49 = v131;
    *(_QWORD *)&v155[0].left = v131;
    *(struct _RECTL *)&v155[0].right = v47;
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v131 + 15));
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_QWORD *)v49 + 15));
    v50 = *((_QWORD *)v49 + 1);
    v51 = v155[1].top;
    left = v155[1].left;
    v52 = v155[0].bottom;
    v53 = v155[0].right;
    if ( v50 )
    {
      while ( 1 )
      {
        v54 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 1120LL);
        if ( v54 )
        {
          while ( v54 != v50 )
          {
            v54 = *(_QWORD *)(v54 + 24);
            if ( !v54 )
              goto LABEL_89;
          }
          goto LABEL_125;
        }
LABEL_89:
        if ( *(_QWORD *)(v50 + 128)
          && (*(_DWORD *)v50 & 0x400) == 0
          && *(_DWORD *)(v50 + 80) <= v155[1].left
          && *(_DWORD *)(v50 + 84) <= v155[1].top
          && *(_DWORD *)(v50 + 88) >= v155[0].right
          && *(_DWORD *)(v50 + 92) >= v155[0].bottom )
        {
          break;
        }
        v50 = *(_QWORD *)(v50 + 24);
        if ( !v50 )
          goto LABEL_125;
      }
LABEL_106:
      if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v50 + 128) - 24LL, v155) == 2 )
      {
        for ( i = pSpReverseFindInZForPidLock(*(struct SPRITE **)(v50 + 32), (struct _RECTL *)&v155[0].right);
              i;
              i = pSpReverseFindInZForPidLock(*((struct SPRITE **)i + 4), (struct _RECTL *)&v155[0].right) )
        {
          SURFACE::bUnMap((SURFACE *)(*((_QWORD *)i + 16) - 24LL), v155, 0LL);
        }
        EtwTraceGreLockReleaseSemaphore(L"hsem");
        GreReleaseSemaphoreInternal(*((_QWORD *)v49 + 15));
        v51 = v155[1].top;
        v57 = 0LL;
        left = v155[1].left;
        v52 = v155[0].bottom;
        v53 = v155[0].right;
        *(_QWORD *)&v155[0].left = 0LL;
        goto LABEL_126;
      }
      v50 = *(_QWORD *)(v50 + 24);
      v51 = v155[1].top;
      left = v155[1].left;
      v52 = v155[0].bottom;
      v53 = v155[0].right;
      if ( v50 )
      {
        while ( 1 )
        {
          v55 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 1120LL);
          if ( v55 )
            break;
LABEL_111:
          if ( *(_QWORD *)(v50 + 128)
            && (*(_DWORD *)v50 & 0x400) == 0
            && *(_DWORD *)(v50 + 80) <= v155[1].left
            && *(_DWORD *)(v50 + 84) <= v155[1].top
            && *(_DWORD *)(v50 + 88) >= v155[0].right
            && *(_DWORD *)(v50 + 92) >= v155[0].bottom )
          {
            goto LABEL_106;
          }
          v50 = *(_QWORD *)(v50 + 24);
          if ( !v50 )
            goto LABEL_125;
        }
        while ( v55 != v50 )
        {
          v55 = *(_QWORD *)(v55 + 24);
          if ( !v55 )
            goto LABEL_111;
        }
      }
    }
  }
  else
  {
    v51 = v155[1].top;
    v52 = v155[0].bottom;
    v53 = v155[0].right;
  }
LABEL_125:
  v57 = *(_QWORD *)&v155[0].left;
  if ( !*(_QWORD *)&v155[0].left )
  {
LABEL_126:
    if ( v34 )
      goto LABEL_241;
  }
  v58 = *(struct _SPRITESTATE **)(*(_QWORD *)&v32 + 16LL);
  v128 = 0LL;
  v132 = 0LL;
  v156 = 0LL;
  v59 = *(_QWORD *)v58;
  v131 = v58;
  if ( (*(_DWORD *)(v59 + 40) & 0x400) != 0 )
    goto LABEL_235;
  v60 = *((_QWORD *)v58 + 15);
  v153 = v58;
  GreAcquireSemaphoreSharedInternal(v60);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_QWORD *)v58 + 15));
  v61 = v130;
  v62 = *((_QWORD *)v58 + 17);
  v152 = *((_DWORD *)v58 + 29);
  v141[0] = 0;
  v142 = v40;
  v141[1] = v40;
  v144 = v130;
  v141[3] = v130;
  v143 = v44;
  v141[2] = v44;
  v145 = v45;
  for ( v141[4] = v45; *(_DWORD *)(v62 + 4) <= v44; v62 += *(_QWORD *)(v62 + 8) )
    ;
  v63 = v62 + 24;
  if ( *(_DWORD *)(v62 + 28) <= v40 )
  {
    do
      v63 += 16LL;
    while ( *(_DWORD *)(v63 + 4) <= v40 );
  }
  v64 = *(_DWORD *)v62;
  v65 = v44;
  v66 = *((_QWORD *)v58 + 140);
  v148 = v62;
  if ( v64 > v44 )
    v65 = v64;
  v149 = v63;
  v67 = *(_DWORD *)(v62 + 4);
  v146 = v65;
  v68 = v45;
  if ( v67 < v45 )
    v68 = v67;
  for ( j = v68; v66; v66 = *(_QWORD *)(v66 + 24) )
  {
    if ( *(_DWORD *)(v66 + 80) < v61
      && *(_DWORD *)(v66 + 84) < v45
      && *(_DWORD *)(v66 + 88) > v40
      && *(_DWORD *)(v66 + 92) > v44 )
    {
      SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v66 + 248));
    }
  }
  do
  {
    v69 = ENUMAREAS::bEnum((ENUMAREAS *)v141, (struct SPRITE **)&v132, &v156);
    v72 = v132;
    v130 = v69;
    if ( !v132 )
      continue;
    v73 = v150;
    v74 = v71;
    v75 = (unsigned __int64)v151;
    v76 = v151;
    v77 = v150 + *(_QWORD *)(v150 + 8) - 16LL;
    if ( *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v70) + 32) + 23664LL) )
    {
      while ( 1 )
      {
        v78 = *((_QWORD *)v76 + 1);
        if ( (*(_DWORD *)v78 & 8) != 0 )
        {
          v79 = *(_DWORD **)(v78 + 184);
          if ( !v79 || v79[12] <= 0x38u && v79[14] <= *v76 && v79[16] >= v76[1] && v79[15] <= v146 && v79[17] >= j )
            v74 = v76;
        }
        if ( (unsigned __int64)v76 >= v77 || v76[4] != *v76 )
          break;
        v76 += 4;
      }
      if ( v74 && v72 != *((struct _POINTL **)v74 + 1) )
      {
        v132 = (struct _POINTL *)*((_QWORD *)v74 + 1);
        v151 = v74;
        continue;
      }
    }
    v80 = v131;
    v81 = *(_QWORD *)(v75 + 8);
    StartingIndex[0] = -1;
    v82 = (char *)v131 + 688;
    if ( v131 != (struct _SPRITESTATE *)-688LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v82, 0LL);
    }
    BitMapHeader = (PRTL_BITMAP)((char *)v80 + 664);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)((char *)v80 + 664), 1u, 0);
    v84 = ClearBits;
    if ( ClearBits == -1 )
    {
      vSpDeleteSurface(0LL);
      v86 = -1LL;
LABEL_167:
      v88 = *((_QWORD *)v80 + 1);
      v89 = -1;
      v90 = -1;
      while ( v88 )
      {
        v91 = v90;
        v92 = *(_DWORD *)(v88 + 88) - *(_DWORD *)(v88 + 80);
        if ( v92 <= v89 )
          v92 = v89;
        v90 = *(_DWORD *)(v88 + 92) - *(_DWORD *)(v88 + 84);
        v88 = *(_QWORD *)(v88 + 24);
        v89 = v92;
        if ( v90 <= v91 )
          v90 = v91;
      }
      Surface = psoSpCreateSurface(v80, 0, v89, v90);
      if ( !Surface )
        goto LABEL_178;
      if ( (_DWORD)v84 != -1 )
        *((_QWORD *)v131 + v86 + 19) = Surface;
      Surface->fjBitmap |= 4u;
      if ( (_DWORD)v84 == -1 )
        goto LABEL_178;
      goto LABEL_177;
    }
    v85 = (struct _SURFOBJ *)*((_QWORD *)v80 + ClearBits + 19);
    v86 = ClearBits;
    Surface = v85;
    if ( !v85 || v85->sizlBitmap.cx < v156.right - v156.left || v85->sizlBitmap.cy < v156.bottom - v156.top )
    {
      vSpDeleteSurface(v85);
      v80 = v131;
      *((_QWORD *)v131 + v84 + 19) = 0LL;
      goto LABEL_167;
    }
LABEL_177:
    StartingIndex[0] = v84;
    RtlSetBits(BitMapHeader, v84, 1u);
LABEL_178:
    if ( v82 )
    {
      ExReleasePushLockExclusiveEx(v82, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( !Surface )
    {
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v141);
      goto LABEL_234;
    }
    p_pvScan0 = 0LL;
    v94 = 0LL;
    v128.x = -v156.left;
    v128.y = -v156.top;
    v95 = *(_QWORD *)(v81 + 160);
    if ( v95 )
    {
      v96 = *(_DWORD *)(v95 + 88);
      if ( (v96 & 0x80004000) != 0 && (v96 & 0x200) == 0 )
      {
        v94 = v95 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v95 + 24));
      }
    }
    hsurf = (int)Surface[1].hsurf;
    if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
    {
      p_pvScan0 = &Surface[-1].pvScan0;
      GreLockDisplayDevice(Surface->hdev);
    }
    INVOKEOFFCOPYBITS(
      &v128,
      Surface,
      (struct _POINTL *)(v81 + 168),
      *(struct _SURFOBJ **)(v81 + 160),
      0LL,
      0LL,
      &v156,
      (struct _POINTL *)&v156);
    if ( p_pvScan0 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
    if ( v94 )
      GreUnlockDisplayDevice(*(_QWORD *)(v94 + 48));
    v98 = v141[0] & 1;
    do
    {
      vSpComposite((struct SPRITE *)v81, &v128, Surface, &v156);
      v99 = 0;
      if ( v98 )
      {
        if ( v75 <= v73 + 24 )
          goto LABEL_200;
        v100 = (_DWORD *)(v75 - 16);
      }
      else
      {
        if ( v75 >= v73 + *(_QWORD *)(v73 + 8) - 16LL )
          goto LABEL_200;
        v100 = (_DWORD *)(v75 + 16);
      }
      if ( *v100 == *(_DWORD *)v75 )
      {
        v99 = 1;
        v151 = v100;
        v75 = (unsigned __int64)v100;
      }
LABEL_200:
      v81 = *(_QWORD *)(v75 + 8);
    }
    while ( v99 );
    v101 = v131;
    v132 = *(struct _POINTL **)(v75 + 8);
    v160 = 0LL;
    v102 = 0LL;
    v161 = 0;
    v103 = (struct REGION *)*((_QWORD *)v131 + 129);
    v162 = 1;
    v163 = 0LL;
    v159 = 0LL;
    v164 = 0;
    if ( v103 )
    {
      v104 = bConcurrent(v131);
      ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v157, v104, v103, (struct ERECTL *)&v156, 0);
      if ( ERECTL::bEmpty((ERECTL *)v158) )
      {
        ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v157);
        goto LABEL_218;
      }
      v102 = (struct _CLIPOBJ *)v157;
    }
    v105 = (int)Surface[1].hsurf;
    v106 = 0LL;
    Surface->iUniq = 0;
    if ( (v105 & 0x80004000) != 0 && (v105 & 0x200) == 0 )
    {
      v106 = &Surface[-1].pvScan0;
      GreLockDisplayDevice(Surface->hdev);
    }
    v107 = *((_QWORD *)v101 + 4);
    v108 = 0LL;
    if ( v107 )
    {
      v109 = *(_DWORD *)(v107 + 88);
      if ( (v109 & 0x80004000) != 0 && (v109 & 0x200) == 0 )
      {
        v108 = v107 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v107 + 24));
      }
    }
    v110 = (struct _SURFOBJ *)*((_QWORD *)v101 + 4);
    v136 = 0LL;
    INVOKEOFFCOPYBITS(&v136, v110, &v128, Surface, v102, 0LL, &v156, (struct _POINTL *)&v156);
    if ( v108 )
      GreUnlockDisplayDevice(*(_QWORD *)(v108 + 48));
    if ( v106 )
      GreUnlockDisplayDevice(v106[6]);
    if ( v164 )
      REGION::vDeleteREGION(v159);
LABEL_218:
    v111 = StartingIndex[0];
    if ( StartingIndex[0] == -1 )
    {
      vSpDeleteSurface(Surface);
    }
    else if ( v82 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v82, 0LL);
      RtlClearBits(BitMapHeader, v111, 1u);
      ExReleasePushLockExclusiveEx(v82, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      RtlClearBits(BitMapHeader, StartingIndex[0], 1u);
    }
  }
  while ( v130 );
  v112 = v153;
  v113 = *((_QWORD *)v153 + 139);
  if ( v113 )
  {
    v114 = v145;
    v115 = v144;
    v116 = v143;
    v117 = v142;
    do
    {
      if ( *(_DWORD *)(v113 + 80) < v115
        && *(_DWORD *)(v113 + 84) < v114
        && *(_DWORD *)(v113 + 88) > v117
        && *(_DWORD *)(v113 + 92) > v116 )
      {
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v113 + 248));
      }
      if ( v113 == *((_QWORD *)v112 + 140) )
        break;
      v113 = *(_QWORD *)(v113 + 32);
    }
    while ( v113 );
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*((_QWORD *)v112 + 15));
LABEL_234:
  v57 = *(_QWORD *)&v155[0].left;
  v53 = v155[0].right;
  v52 = v155[0].bottom;
  left = v155[1].left;
  v51 = v155[1].top;
LABEL_235:
  if ( !v129 )
  {
    if ( v57 && v53 != left && v52 != v51 )
      vSpPIDUnlockSpriteArea((struct _SPRITESTATE *)v57, (struct _RECTL *)&v155[0].right, v155);
    goto LABEL_278;
  }
LABEL_241:
  if ( !v57 || v53 == left || v52 == v51 )
    goto LABEL_278;
  v118 = *(_QWORD *)(v57 + 16);
  if ( !v118 )
    goto LABEL_267;
  while ( 2 )
  {
    v119 = *(_QWORD *)(*(_QWORD *)(v118 + 16) + 1120LL);
    if ( v119 )
    {
      while ( v119 != v118 )
      {
        v119 = *(_QWORD *)(v119 + 24);
        if ( !v119 )
          goto LABEL_248;
      }
LABEL_254:
      v118 = *(_QWORD *)(v118 + 32);
      if ( !v118 )
        goto LABEL_267;
      continue;
    }
    break;
  }
LABEL_248:
  if ( !*(_QWORD *)(v118 + 128)
    || (*(_DWORD *)v118 & 0x400) != 0
    || *(_DWORD *)(v118 + 80) > left
    || *(_DWORD *)(v118 + 84) > v51
    || *(_DWORD *)(v118 + 88) < v53
    || *(_DWORD *)(v118 + 92) < v52 )
  {
    goto LABEL_254;
  }
  while ( 1 )
  {
    SURFACE::bUnMap((SURFACE *)(*(_QWORD *)(v118 + 128) - 24LL), v155, 0LL);
    v118 = *(_QWORD *)(v118 + 32);
    if ( !v118 )
      break;
    while ( (unsigned int)bIsCursorSprite((struct SPRITE *)v118)
         || !*(_QWORD *)(v118 + 128)
         || (*(_DWORD *)v118 & 0x400) != 0
         || *(_DWORD *)(v118 + 80) > v121
         || *(_DWORD *)(v118 + 84) > v120
         || *(_DWORD *)(v118 + 88) < v123
         || *(_DWORD *)(v118 + 92) < v122 )
    {
      v118 = *(_QWORD *)(v118 + 32);
      if ( !v118 )
        goto LABEL_267;
    }
  }
LABEL_267:
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v57 + 120));
LABEL_278:
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v154);
  return *(unsigned int *)&v127;
}
