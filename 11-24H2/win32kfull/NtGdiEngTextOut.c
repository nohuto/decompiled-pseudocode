/*
 * XREFs of NtGdiEngTextOut @ 0x140262A80
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x140058790 (EngTextOut.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x14005CC40 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400AB814 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D7450 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400DA304 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400DB6B8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400DC2AC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401ECCC0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1401FE608 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14021B100 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FA688 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1403388E0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x140338BA4 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        STROBJ *a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v12; // r9
  UMPDOBJ *v13; // r14
  SURFOBJ *v15; // r13
  FONTOBJ *v16; // r12
  BRUSHOBJ *pboFore; // rsi
  BRUSHOBJ *pboOpaque; // r15
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rdx
  unsigned int v21; // edi
  FONTOBJ *v22; // rdi
  BOOL v23; // eax
  struct _BRUSHOBJ *v24; // [rsp+50h] [rbp-268h] BYREF
  __int64 v25; // [rsp+58h] [rbp-260h]
  STROBJ *pstro; // [rsp+60h] [rbp-258h]
  RECTL *prclOpaque; // [rsp+68h] [rbp-250h] BYREF
  struct _CLIPOBJ *v28; // [rsp+70h] [rbp-248h]
  struct _RECTL *v29; // [rsp+78h] [rbp-240h] BYREF
  POINTL *pptlOrg; // [rsp+80h] [rbp-238h] BYREF
  struct _BRUSHOBJ *v31; // [rsp+88h] [rbp-230h]
  POINTL *v32; // [rsp+90h] [rbp-228h]
  struct _POINTL v33; // [rsp+98h] [rbp-220h] BYREF
  struct _CLIPOBJ *v34; // [rsp+A0h] [rbp-218h]
  UMPDOBJ *v35; // [rsp+A8h] [rbp-210h]
  SURFOBJ *v36; // [rsp+B0h] [rbp-208h]
  FONTOBJ *pfo; // [rsp+B8h] [rbp-200h]
  struct _BRUSHOBJ v38; // [rsp+C0h] [rbp-1F8h] BYREF
  struct _BRUSHOBJ v39; // [rsp+D8h] [rbp-1E0h] BYREF
  SURFOBJ *pso[8]; // [rsp+F0h] [rbp-1C8h] BYREF
  struct W32_PUSH_LOCK *v41[4]; // [rsp+130h] [rbp-188h] BYREF
  UMPDOBJ *v42; // [rsp+150h] [rbp-168h]
  struct _RECTL v43; // [rsp+1A0h] [rbp-118h] BYREF
  struct _RECTL v44; // [rsp+1B0h] [rbp-108h] BYREF
  _BYTE v45[160]; // [rsp+1C0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+260h] [rbp-58h]

  v34 = a4;
  v25 = a3;
  pstro = a2;
  v28 = a4;
  v29 = a5;
  prclOpaque = a6;
  v24 = a7;
  v31 = a8;
  v32 = a9;
  pptlOrg = a9;
  v43 = 0LL;
  v44 = 0LL;
  v33 = 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v39, 0, sizeof(v39));
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v41, CurrentThread);
  v13 = v42;
  v35 = v42;
  if ( v42 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v42, v12);
    v15 = pso[0];
    v36 = pso[0];
    pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v13, (__int64)pstro);
    v16 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v13, v25);
    pfo = v16;
    pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a7);
    if ( !pboFore )
      pboFore = CaptureAndFakeBRUSHOBJ(v24, &v38);
    v24 = pboFore;
    pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a8);
    if ( !pboOpaque )
      pboOpaque = CaptureAndFakeBRUSHOBJ(v31, &v39);
    v25 = (__int64)pboOpaque;
    if ( v15 && pstro && v16 && pboFore && v32 )
    {
      CaptureRECTL(&v29, &v43);
      CaptureRECTL(&prclOpaque, &v44);
      CapturePOINTL(&pptlOrg, &v33);
      prclExtra = v29;
      if ( (*((_DWORD *)v13 + 111) & 0x100) != 0 )
        prclExtra = 0LL;
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v34, &v15->sizlBitmap);
      v28 = DDIOBJ;
      if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) != 0 && pboFore->iSolidColor != -1
        || (v21 = 1, !(unsigned int)bCheckSurfaceRect(v15, prclOpaque, DDIOBJ)) )
      {
        v21 = 0;
      }
      if ( v21 )
      {
        v22 = pfo;
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v24, (struct PFT *)pfo);
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v24, v13, 0, 0, 0LL);
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45, v15, v28, 0LL);
        if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v45)
          || (v23 = EngTextOut(v15, pstro, v22, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix),
              v21 = 1,
              !v23) )
        {
          v21 = 0;
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v24, v13, 0LL, 0LL, 0LL);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v24);
      }
    }
    else
    {
      v21 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v41);
    return v21;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v41);
    return 0LL;
  }
}
