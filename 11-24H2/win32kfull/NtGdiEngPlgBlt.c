/*
 * XREFs of NtGdiEngPlgBlt @ 0x140339C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400DBF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400DBF58 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400DC380 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400DC3B0 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401ECCC0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1401FE608 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x140221E18 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1403388FC (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x140338C90 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        struct _POINTL *a7,
        char *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v16; // r9
  struct _SURFOBJ **v17; // rdi
  __int64 v19; // r9
  __int64 v20; // r9
  SURFOBJ *v21; // r15
  SURFOBJ *v22; // rsi
  SURFOBJ *v23; // r14
  __int64 v24; // r12
  CLIPOBJ *DDIOBJ; // r13
  XLATEOBJ *pxlo; // r12
  int v27; // ecx
  RECTL *prcl; // rdi
  unsigned int v29; // ebx
  struct _RECTL *v30; // rax
  RECTL *v31; // [rsp+60h] [rbp-238h] BYREF
  unsigned int v32[2]; // [rsp+68h] [rbp-230h] BYREF
  POINTL *pptl; // [rsp+70h] [rbp-228h] BYREF
  POINTL pptlBrushOrg; // [rsp+78h] [rbp-220h] BYREF
  COLORADJUSTMENT *pca; // [rsp+80h] [rbp-218h] BYREF
  struct _POINTL v36; // [rsp+88h] [rbp-210h] BYREF
  struct _POINTL *v37; // [rsp+90h] [rbp-208h] BYREF
  __int64 v38; // [rsp+98h] [rbp-200h]
  UMPDOBJ *v39; // [rsp+A0h] [rbp-1F8h]
  SURFOBJ *v40; // [rsp+A8h] [rbp-1F0h]
  SURFOBJ *v41; // [rsp+B0h] [rbp-1E8h]
  SURFOBJ *v42; // [rsp+B8h] [rbp-1E0h]
  struct _CLIPOBJ *v43; // [rsp+C0h] [rbp-1D8h]
  SURFOBJ *psoMsk[8]; // [rsp+D0h] [rbp-1C8h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+110h] [rbp-188h] BYREF
  SURFOBJ *psoTrg[8]; // [rsp+150h] [rbp-148h] BYREF
  struct W32_PUSH_LOCK *v47[4]; // [rsp+190h] [rbp-108h] BYREF
  UMPDOBJ *v48; // [rsp+1B0h] [rbp-E8h]
  struct _RECTL v49; // [rsp+200h] [rbp-98h] BYREF
  struct _RECTL v50; // [rsp+210h] [rbp-88h] BYREF
  struct tagCOLORADJUSTMENT v51; // [rsp+220h] [rbp-78h] BYREF
  POINTFIX pptfx; // [rsp+238h] [rbp-60h] BYREF

  *(_QWORD *)v32 = a9;
  v43 = a4;
  v38 = a5;
  *(_QWORD *)&v49.left = a5;
  pca = a6;
  v37 = a7;
  v31 = a9;
  pptl = a10;
  v50 = 0LL;
  v36 = 0LL;
  pptlBrushOrg = 0LL;
  memset(&v51, 0, sizeof(v51));
  CurrentThread = GreGetCurrentThread((__int64)a9, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v47, CurrentThread);
  v17 = (struct _SURFOBJ **)v48;
  v39 = v48;
  if ( v48 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg, a1, (struct _SURFOBJ **)v48, v16);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v17, v19);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk, a3, v17, v20);
    v21 = psoTrg[0];
    v40 = psoTrg[0];
    v22 = psoSrc[0];
    v41 = psoSrc[0];
    v23 = psoMsk[0];
    v42 = psoMsk[0];
    if ( psoTrg[0] && psoSrc[0] && *(_QWORD *)v32 && a8 )
    {
      CaptureRECTL(&v31, &v50);
      CaptureCOLORADJUSTMENT(&pca, &v51);
      CapturePOINTL(&pptl, &v36);
      CapturePOINTL(&v37, &pptlBrushOrg);
      CaptureBits(&pptfx, a8, 0x18u);
      v24 = v38;
      DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, a4, &v21->sizlBitmap);
      pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v17, v24);
      v27 = 1;
      prcl = v31;
      if ( v31 && (v31->left > v31->right || v31->top > v31->bottom) )
        v27 = 0;
      v29 = v27 && (unsigned int)bCheckXlate(v22, pxlo);
      if ( v29 )
      {
        if ( v23 )
        {
          v49 = 0LL;
          LODWORD(v31) = 0;
          v32[0] = 0;
          v29 = bCheckSurfaceRectSize(v22, prcl, 0LL, (unsigned int *)&v31, v32);
          if ( v29 )
          {
            v30 = pRect(pptl, &v49, (int)v31, v32[0]);
            v29 = bCheckMask(v23, v30);
          }
        }
        if ( v29 )
          v29 = EngPlgBlt(v21, v22, v23, DDIOBJ, pxlo, pca, &pptlBrushOrg, &pptfx, prcl, pptl, iMode);
      }
    }
    else
    {
      v29 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoTrg);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v47);
    return v29;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v47);
    return 0LL;
  }
}
