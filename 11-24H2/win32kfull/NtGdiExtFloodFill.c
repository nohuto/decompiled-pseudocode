/*
 * XREFs of NtGdiExtFloodFill @ 0x14015AE80
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140014F34 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF98 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14002AFD0 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B0C8 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1400596DC (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400C71EC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400D3E50 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     EngPaint @ 0x1400E4A40 (EngPaint.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x14015BE88 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z @ 0x14015BF84 (-bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x14015C07C (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015C474 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x14015C564 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x14015C598 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x14015C5FC (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1401A19BC (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@XZ @ 0x1402646D4 (--0-$SEMOBJ@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$02@@QEAA@XZ @ 0x14026BBF8 (--0-$SEMOBJ@$02@@QEAA@XZ.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x14030FE90 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiExtFloodFill(Gre::Base *a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  BRUSHOBJ **v9; // rcx
  int v10; // edx
  char v11; // bl
  __int64 v12; // rdi
  __int64 v13; // r8
  DC *v14; // rax
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rcx
  unsigned int v18; // r14d
  DC *v19; // rax
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v29; // rdx
  ULONG v30; // r12d
  char *v31; // r13
  __int64 v32; // r8
  bool v33; // cf
  int v34; // ecx
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // r9
  int v38; // esi
  int v39; // edx
  LONG y; // ecx
  LONG x; // r8d
  int v42; // eax
  Gre::Base *v43; // rcx
  unsigned __int8 *v44; // rax
  bool v45; // zf
  int v46; // eax
  LONG v47; // esi
  int v48; // eax
  int v49; // eax
  LONG v50; // r11d
  __int64 v51; // rax
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // edi
  int v55; // ebx
  int v56; // edi
  unsigned int v57; // ebx
  __int32 v58; // edi
  __int32 v59; // r12d
  __int64 v60; // r13
  __int32 v61; // r9d
  int v62; // eax
  __int32 v63; // r9d
  BRUSHOBJ *v65; // rdi
  unsigned int v66; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v68; // rdx
  POINTL *v69; // r9
  struct ECLIPOBJ *v70; // rdx
  BRUSHOBJ *v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int8 *v74; // rbx
  struct _GRETHREAD *v75; // rax
  struct _POINTL v76; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v77; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v78; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 *v79; // [rsp+78h] [rbp-88h] BYREF
  __int64 v80; // [rsp+80h] [rbp-80h] BYREF
  struct REGION *v81; // [rsp+88h] [rbp-78h] BYREF
  __int64 v82; // [rsp+90h] [rbp-70h] BYREF
  char v83; // [rsp+98h] [rbp-68h]
  int v84; // [rsp+9Ch] [rbp-64h]
  __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h] BYREF
  struct REGION *v89; // [rsp+C0h] [rbp-40h] BYREF
  int v90; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v91; // [rsp+CCh] [rbp-34h]
  ULONG v92; // [rsp+DCh] [rbp-24h]
  unsigned __int8 *v93; // [rsp+E0h] [rbp-20h]
  int v94; // [rsp+E8h] [rbp-18h]
  int v95; // [rsp+ECh] [rbp-14h]
  BRUSHOBJ *v96; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v97[4]; // [rsp+F8h] [rbp-8h] BYREF
  int v98; // [rsp+FCh] [rbp-4h]
  __int64 v99; // [rsp+100h] [rbp+0h]
  __int64 v100; // [rsp+118h] [rbp+18h]
  _BYTE v101[4]; // [rsp+120h] [rbp+20h] BYREF
  int v102; // [rsp+124h] [rbp+24h]
  __int64 v103; // [rsp+128h] [rbp+28h]
  __int64 v104; // [rsp+140h] [rbp+40h]
  __int128 v105; // [rsp+148h] [rbp+48h] BYREF
  __int128 v106; // [rsp+158h] [rbp+58h]
  __int64 v107; // [rsp+168h] [rbp+68h] BYREF
  DC *v108[14]; // [rsp+170h] [rbp+70h] BYREF
  BRUSHOBJ pbo; // [rsp+1E0h] [rbp+E0h] BYREF
  int v110; // [rsp+1F8h] [rbp+F8h]
  int v111; // [rsp+1FCh] [rbp+FCh]
  __int64 v112; // [rsp+200h] [rbp+100h]
  __int64 v113; // [rsp+208h] [rbp+108h]
  __int64 v114; // [rsp+238h] [rbp+138h]
  __int128 v115; // [rsp+240h] [rbp+140h]
  int v116; // [rsp+258h] [rbp+158h]
  HDC v117[3]; // [rsp+270h] [rbp+170h] BYREF
  char v118; // [rsp+288h] [rbp+188h]
  __m128i v119; // [rsp+300h] [rbp+200h] BYREF
  __int64 v120; // [rsp+310h] [rbp+210h] BYREF
  __int64 v121; // [rsp+318h] [rbp+218h]
  CLIPOBJ pco; // [rsp+320h] [rbp+220h] BYREF
  CLIPOBJ v123; // [rsp+3C0h] [rbp+2C0h] BYREF

  v87 = a4;
  v8 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v108, (HDC)a1, v8);
  v9 = (BRUSHOBJ **)v108[0];
  if ( !v108[0] || (v10 = *((_DWORD *)v108[0] + 9), (v10 & 0x10000) != 0) )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v108);
    return 0LL;
  }
  if ( !*((_QWORD *)v108[0] + 62) || DC::bInFullScreen(v108[0]) )
  {
    if ( (v10 & 0xE0) != 0 )
    {
      v96 = v9[6];
      v71 = v96;
      SEMOBJ<8>::SEMOBJ<8>((HSEMAPHORE *)&v79, (__int64)&v96);
      v72 = *(_QWORD *)&v71[106].iSolidColor;
      v73 = v72 ? *(_QWORD *)(v72 + 56) : *((_QWORD *)v108[0] + 64);
      v121 = v73;
      v120 = 0LL;
      XDCOBJ::vAccumulate((XDCOBJ *)v108, (struct ERECTL *)&v120);
      v74 = v79;
      if ( v79 )
      {
        EtwTraceGreLockReleaseSemaphore(L"DevLock", v79);
        v75 = GreGetCurrentThreadCrossSessionCheck();
        if ( v75 )
        {
          v45 = (*((_BYTE *)v75 + 16))-- == 1;
          if ( v45 )
            *(_QWORD *)v75 &= ~0x100uLL;
          if ( !*(_QWORD *)v75 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)v74);
      }
    }
    v18 = 1;
    goto LABEL_158;
  }
  v11 = 0;
  v12 = *(_QWORD *)Gre::Base::Globals((Gre::Base *)v9) + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v12);
  v14 = v108[0];
  v15 = *((_QWORD *)v108[0] + 122);
  v16 = *(_DWORD *)(v15 + 152);
  if ( (v16 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v108[0], *(_QWORD *)(v15 + 160));
    v14 = v108[0];
  }
  if ( (v16 & 0x2000) != 0 )
  {
    GreDCSelectPen(v14, *(_QWORD *)(*((_QWORD *)v14 + 122) + 168LL));
    v14 = v108[0];
  }
  v17 = *((_QWORD *)v14 + 62);
  v18 = 1;
  if ( v17 && *(_WORD *)(v17 + 100) == 3 )
    v11 = 1;
  if ( v12 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v12);
  if ( v11 )
  {
    UserEnterUserCritSec(v17, v15, v13);
    SEMOBJ<1>::SEMOBJ<1>(&v79);
    v19 = v108[0];
    v20 = *((_QWORD *)v108[0] + 122);
    v21 = *(_DWORD *)(v20 + 152);
    if ( (v21 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v108[0], *(_QWORD *)(v20 + 160));
      v19 = v108[0];
    }
    if ( (v21 & 0x2000) != 0 )
    {
      GreDCSelectPen(v19, *(_QWORD *)(*((_QWORD *)v19 + 122) + 168LL));
      v19 = v108[0];
    }
    v22 = *((_QWORD *)v19 + 62);
    if ( v22 && *(_WORD *)(v22 + 100) == 3 )
    {
      SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v80, v8);
      SEMOBJ<3>::SEMOBJ<3>(&v86);
      SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v88, v8);
      SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v81, v8);
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&pbo);
      v85 = *(_QWORD *)(v22 + 48);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&pbo, (struct PDEVOBJ *)&v85);
      bConvertDfbDcToDib((struct XDCOBJ *)v108);
      DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&pbo);
      if ( v81 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          (__int64)v81);
      if ( v88 )
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v88);
      if ( v86 )
        GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v86);
      if ( v80 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v80);
    }
    if ( v79 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v79);
    UserLeaveUserCritSec();
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v117);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v117, (struct XDCOBJ *)v108, 0) )
    goto LABEL_145;
  v23 = *((_QWORD *)v108[0] + 62);
  v76.x = a2;
  v76.y = a3;
  DC::QuickInitXform(v108[0], &v107, 516LL);
  if ( (*(_BYTE *)(v107 + 32) & 0x43) != 0x43 && !(unsigned int)bCvtPts1(v107, (__int64)&v76, 1LL) )
    goto LABEL_145;
  v24 = *(_QWORD *)(v23 + 48);
  v25 = *(_QWORD *)(v23 + 128);
  v26 = *((_QWORD *)v108[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v108[0] + 6) + 40LL) & 0x80u) != 0
    || (unsigned int)DC::bIsCMYKColor(v108[0])
    || (*(_DWORD *)(v27 + 120) & 2) != 0 )
  {
    EngSetLastError(0x57u);
    DEVLOCKOBJ::~DEVLOCKOBJ(v117);
    v18 = 0;
    goto LABEL_158;
  }
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v25, v26, v87, 1LL);
  v29 = v108[0];
  v30 = NearestIndexFromColorref;
  v31 = (char *)v108[0] + 1200;
  v32 = *((_QWORD *)v108[0] + 122);
  v33 = (*((_DWORD *)v108[0] + 30) & 5) != 0;
  v96 = (BRUSHOBJ *)((char *)v108[0] + 1200);
  v34 = *(_DWORD *)(v32 + 152);
  LODWORD(v86) = v33 ? 2 : 0;
  if ( (v34 & 1) != 0 || (*((_DWORD *)v108[0] + 79) & 1) != 0 )
  {
    *(_DWORD *)(v32 + 152) = v34 & 0xFFFFFFFE;
    *((_DWORD *)v108[0] + 79) &= ~1u;
    EBRUSHOBJ::vInitBrush(v31, v108[0], *((_QWORD *)v108[0] + 17), v26, v25, v23, 1);
    v29 = v108[0];
  }
  if ( (*((_DWORD *)v31 + 30) & 0x100) != 0 )
  {
LABEL_42:
    DEVLOCKOBJ::~DEVLOCKOBJ(v117);
    goto LABEL_158;
  }
  if ( (v118 & 1) == 0 )
  {
    v18 = XDCOBJ::bFullScreen((XDCOBJ *)v108);
    goto LABEL_42;
  }
  v35 = *((_DWORD *)v29 + 10) & 1LL;
  v76.x += *((_DWORD *)v29 + 2 * v35 + 254);
  v76.y += *((_DWORD *)v29 + 2 * v35 + 255);
  v89 = XDCOBJ::prgnEffRao(v108);
  if ( RGNOBJ::bInside((RGNOBJ *)&v89, &v76) != 2 )
    goto LABEL_145;
  v82 = 0LL;
  v105 = 0LL;
  v83 = 0;
  v106 = 0LL;
  v84 = 0;
  v79 = *(unsigned __int8 **)(v23 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v79, (struct _SURFOBJ *)(v23 + 24), 0LL, 0);
  LODWORD(v80) = 0;
  v36 = *(__m128i *)((char *)v89 + 52);
  v77 = 0LL;
  v119 = v36;
  if ( !*(_WORD *)(v23 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v89) != 3 )
  {
    v37 = *(_QWORD *)(v23 + 80);
    v38 = *(_DWORD *)(v23 + 88);
    v39 = *(_DWORD *)(v23 + 96);
    y = v76.y;
    x = v76.x;
    goto LABEL_77;
  }
  LODWORD(v105) = *(_DWORD *)(v23 + 96);
  LODWORD(v88) = v105;
  DWORD1(v105) = v119.m128i_i32[2] - v119.m128i_i32[0];
  DWORD2(v105) = v119.m128i_i32[3] - v119.m128i_i32[1];
  v42 = 1;
  *(_QWORD *)&v106 = 0LL;
  DWORD2(v106) = 1;
  if ( (*(_DWORD *)(v23 + 112) & 0x40000) != 0 )
    v42 = 262145;
  DWORD2(v106) = v42;
  SURFMEM::bCreateDIB((SURFMEM *)&v82, (struct _DEVBITMAPINFO *)&v105, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v82 )
  {
    EngSetLastError(8u);
    goto LABEL_143;
  }
  v120 = 0LL;
  v121 = *(_QWORD *)((char *)&v105 + 4);
  v44 = (unsigned __int8 *)Gre::Base::Globals(v43);
  v45 = (*(_DWORD *)(v23 + 112) & 0x400) == 0;
  v79 = v44;
  if ( v45 )
    v46 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned __int8 *, __int64 *, __m128i *))EngCopyBits)(
            (v82 + 24) & -(__int64)(v82 != 0),
            v23 + 24,
            0LL,
            v44 + 4552,
            &v120,
            &v119);
  else
    v46 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int8 *, __int64 *, __m128i *))(v24 + 2832))(
            (v82 + 24) & -(__int64)(v82 != 0),
            v23 + 24,
            0LL,
            v44 + 4552,
            &v120,
            &v119);
  v47 = -v119.m128i_i32[1];
  LODWORD(v80) = v46;
  v77.x = -v119.m128i_i32[0];
  v77.y = -v119.m128i_i32[1];
  if ( !v46 )
    goto LABEL_73;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v89) != 3 )
  {
    v47 = v77.y;
LABEL_73:
    ERECTL::bOffsetAdd((ERECTL *)&v119, &v77, 0);
    goto LABEL_74;
  }
  LODWORD(v80) = 0;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v85);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v81);
  if ( !v85 )
    goto LABEL_69;
  if ( !v81 )
    goto LABEL_69;
  RGNOBJ::vSet((RGNOBJ *)&v85, (const struct _RECTL *const)&v119);
  if ( !RGNOBJ::bMerge((RGNOBJ *)&v81, (struct RGNOBJ *)&v85, (struct RGNOBJ *)&v89, 4u) )
    goto LABEL_69;
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v81, &v77) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v119, &v77, 1) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v81);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v85);
    goto LABEL_71;
  }
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v81, (struct ERECTL *)&v119);
  v111 = -1;
  pbo.flColorType = v86;
  v114 = 0LL;
  v115 = 0LL;
  pbo.pvRbrush = 0LL;
  v48 = *((_DWORD *)v79 + 768);
  v112 = 0LL;
  v113 = 0LL;
  v116 = 0;
  if ( a5 )
  {
    pbo.iSolidColor = (v30 & 1) == 0;
    if ( v48 )
    {
      v49 = ulIndexToRGB(v25, v26, (v30 & 1) == 0);
      goto LABEL_67;
    }
  }
  else
  {
    pbo.iSolidColor = v30;
    if ( v48 )
    {
      v49 = v87;
LABEL_67:
      v111 = v49;
      v110 = v49;
    }
  }
  LODWORD(v80) = EngPaint((SURFOBJ *)((v82 + 24) & -(__int64)(v82 != 0)), &pco, &pbo, 0LL, 0xD0Du);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
LABEL_69:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v81);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v85);
  v50 = v77.x;
  v47 = v77.y;
LABEL_74:
  if ( !(_DWORD)v80 )
    goto LABEL_143;
  x = v50 + v76.x;
  y = v47 + v76.y;
  v39 = v88;
  v76.x += v50;
  v77.y = -v47;
  v76.y += v47;
  v77.x = -v50;
  v38 = *(_DWORD *)(v82 + 88);
  v37 = *(_QWORD *)(v82 + 80);
  LODWORD(v80) = 1;
LABEL_77:
  v95 = -1;
  v86 = v37;
  v90 = v39;
  v91 = v119;
  v92 = v30;
  v94 = a5;
  v79 = (unsigned __int8 *)(v37 + v38 * y);
  v93 = v79;
  v51 = *(_QWORD *)(v23 + 128);
  if ( v51 )
  {
    v52 = *(_DWORD *)(v51 + 24);
    if ( (v52 & 0xC) != 0 )
    {
      v95 = 0xFFFFFF;
    }
    else if ( (v52 & 2) != 0 )
    {
      v95 = **(_DWORD **)(v51 + 112) | *(_DWORD *)(*(_QWORD *)(v51 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v51 + 112)
                                                                                             + 8LL);
    }
  }
  v53 = FLOODBM::iColorGet((FLOODBM *)&v90, x);
  if ( !a5 && v53 == v30 || a5 == 1 && v53 != v30 )
    goto LABEL_143;
  v54 = v76.x - 1;
  v55 = v76.x + 1;
  if ( a5 )
  {
    while ( v54 >= v91.m128i_i32[0] && FLOODBM::iColorGet((FLOODBM *)&v90, v54) == v30 )
      --v54;
    while ( v55 < v91.m128i_i32[2] && FLOODBM::iColorGet((FLOODBM *)&v90, v55) == v30 )
      ++v55;
  }
  else
  {
    while ( v54 >= v91.m128i_i32[0] && FLOODBM::iColorGet((FLOODBM *)&v90, v54) != v30 )
      --v54;
    while ( v55 < v91.m128i_i32[2] && FLOODBM::iColorGet((FLOODBM *)&v90, v55) != v30 )
      ++v55;
  }
  v56 = v54 + 1;
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v101, 0x1E0u, 1u, v76.y, v56, v55);
  if ( !v104 )
  {
    EngSetLastError(8u);
    goto LABEL_141;
  }
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v97, 0x100u, 0, v76.y, v56, v55);
  if ( !v100 )
  {
    EngSetLastError(8u);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
LABEL_141:
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v101);
    SURFMEM::~SURFMEM((SURFMEM *)&v82);
    DEVLOCKOBJ::~DEVLOCKOBJ(v117);
    v18 = 0;
    goto LABEL_158;
  }
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v78);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v78, 0x12E0u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v78);
  if ( !v78 )
  {
    EngSetLastError(8u);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v101);
LABEL_143:
    SURFMEM::~SURFMEM((SURFMEM *)&v82);
    DEVLOCKOBJ::~DEVLOCKOBJ(v117);
    v18 = 0;
    goto LABEL_158;
  }
  v57 = 1;
  v58 = v119.m128i_i32[3] - 1;
  v59 = v119.m128i_i32[1];
  if ( v76.y >= v119.m128i_i32[3] - 1 )
  {
    v98 -= *(_DWORD *)v99;
    v99 = *(_QWORD *)(v99 + 8);
  }
  else
  {
    v57 = FLOODBM::bExtendScanline(
            (FLOODBM *)&v90,
            (struct STACKOBJ *)v97,
            (struct STACKOBJ *)v101,
            v76.y + 1,
            v79,
            &v79[v38]) & 1;
    if ( !v57 )
    {
LABEL_125:
      EngSetLastError(8u);
LABEL_126:
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v78);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v78);
      STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
      STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v101);
      SURFMEM::~SURFMEM((SURFMEM *)&v82);
      DEVLOCKOBJ::~DEVLOCKOBJ(v117);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v108);
      return v57;
    }
  }
  v60 = v86;
  while ( 1 )
  {
    while ( v98 )
    {
      if ( !STACKMEMOBJ::bMergeScanline((STACKMEMOBJ *)v97, (struct RGNOBJ *)&v78) )
        goto LABEL_124;
      v61 = *(_DWORD *)(v99 + 20);
      if ( v61 >= v58 )
      {
        v98 -= *(_DWORD *)v99;
        v99 = *(_QWORD *)(v99 + 8);
      }
      else
      {
        v62 = FLOODBM::bExtendScanline(
                (FLOODBM *)&v90,
                (struct STACKOBJ *)v97,
                (struct STACKOBJ *)v101,
                v61 + 1,
                (unsigned __int8 *)(v60 + v38 * v61),
                (unsigned __int8 *)(v60 + v38 * v61 + v38));
LABEL_123:
        if ( !v62 )
        {
LABEL_124:
          v57 = 0;
          goto LABEL_125;
        }
      }
    }
    if ( !v102 )
      break;
    if ( !v57 || (v57 = 1, !STACKMEMOBJ::bMergeScanline((STACKMEMOBJ *)v101, (struct RGNOBJ *)&v78)) )
      v57 = 0;
    v63 = *(_DWORD *)(v103 + 20);
    if ( v63 > v59 )
    {
      v62 = FLOODBM::bExtendScanline(
              (FLOODBM *)&v90,
              (struct STACKOBJ *)v101,
              (struct STACKOBJ *)v97,
              v63 - 1,
              (unsigned __int8 *)(v60 + v38 * v63),
              (unsigned __int8 *)(v60 + v38 * v63 - v38));
      goto LABEL_123;
    }
    v102 -= *(_DWORD *)v103;
    v103 = *(_QWORD *)(v103 + 8);
  }
  if ( !v57 )
    goto LABEL_125;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v78) == 1 )
    goto LABEL_126;
  if ( !(_DWORD)v80
    || RGNOBJ::bOffset((RGNOBJ *)&v78, &v77) && (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v119, &v77, 1) )
  {
    v65 = v96;
    v66 = EBRUSHOBJ::mixBest(
            (EBRUSHOBJ *)v96,
            *(_BYTE *)(*((_QWORD *)v108[0] + 122) + 212LL),
            *(_BYTE *)(*((_QWORD *)v108[0] + 122) + 213LL));
    ++*(_DWORD *)(v23 + 92);
    mix = v66;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v123, v78, (struct ERECTL *)&v119);
    v69 = (POINTL *)v108[0];
    if ( (*((_DWORD *)v108[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v108, v68, &v119);
      XDCOBJ::vAccumulateTight((XDCOBJ *)v108, v70, &v119);
      v69 = (POINTL *)v108[0];
    }
    v57 = EngPaint((SURFOBJ *)(v23 + 24), &v123, v65, v69 + 149, mix);
    if ( v57 )
      goto LABEL_126;
    goto LABEL_125;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
  STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
  STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v101);
LABEL_71:
  SURFMEM::~SURFMEM((SURFMEM *)&v82);
LABEL_145:
  DEVLOCKOBJ::~DEVLOCKOBJ(v117);
  v18 = 0;
LABEL_158:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v108);
  return v18;
}
