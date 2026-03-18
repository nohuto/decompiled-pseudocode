/*
 * XREFs of NtGdiEngStretchBlt @ 0x140261C70
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
 *     EngStretchBlt @ 0x140136200 (EngStretchBlt.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401ECCC0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1401FE608 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140218570 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x14021BAE0 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x140221E18 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FA688 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1403388E0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x140338BA4 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x140338C90 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  unsigned int v14; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v16; // r9
  struct _SURFOBJ **v17; // r12
  __int64 v19; // r9
  __int64 v20; // r9
  SURFOBJ *v21; // rsi
  SURFOBJ *v22; // r14
  SURFOBJ *v23; // r13
  RECTL *prclSrc; // r12
  struct _XLATEOBJ *v25; // rdx
  struct _CLIPOBJ *v26; // r10
  unsigned int v27; // edi
  struct _RECTL *v28; // rax
  RECTL *v29; // r9
  RECTL *prclDest; // rdi
  BOOL v31; // eax
  unsigned int v32[2]; // [rsp+60h] [rbp-2F8h] BYREF
  struct _CLIPOBJ *v33; // [rsp+68h] [rbp-2F0h] BYREF
  struct _CLIPOBJ *DDIOBJ; // [rsp+70h] [rbp-2E8h]
  RECTL *v35; // [rsp+78h] [rbp-2E0h] BYREF
  POINTL *pptlMask; // [rsp+80h] [rbp-2D8h] BYREF
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-2D0h]
  RECTL *v38; // [rsp+90h] [rbp-2C8h] BYREF
  POINTL *pptlHTOrg; // [rsp+98h] [rbp-2C0h] BYREF
  COLORADJUSTMENT *pca; // [rsp+A0h] [rbp-2B8h] BYREF
  RECTL *v41; // [rsp+A8h] [rbp-2B0h]
  RECTL *v42; // [rsp+B0h] [rbp-2A8h]
  struct _POINTL v43; // [rsp+B8h] [rbp-2A0h] BYREF
  struct _POINTL v44; // [rsp+C0h] [rbp-298h] BYREF
  UMPDOBJ *v45; // [rsp+C8h] [rbp-290h]
  SURFOBJ *v46; // [rsp+D0h] [rbp-288h]
  SURFOBJ *v47; // [rsp+D8h] [rbp-280h]
  SURFOBJ *psoMask[8]; // [rsp+E0h] [rbp-278h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-238h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+160h] [rbp-1F8h] BYREF
  struct W32_PUSH_LOCK *v51[4]; // [rsp+1A0h] [rbp-1B8h] BYREF
  UMPDOBJ *v52; // [rsp+1C0h] [rbp-198h]
  struct _RECTL v53; // [rsp+210h] [rbp-148h] BYREF
  struct _RECTL v54; // [rsp+220h] [rbp-138h] BYREF
  struct _RECTL v55; // [rsp+230h] [rbp-128h] BYREF
  tagCOLORADJUSTMENT v56; // [rsp+240h] [rbp-118h] BYREF
  _BYTE v57[160]; // [rsp+260h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+300h] [rbp-58h]

  v33 = a4;
  v41 = a8;
  DDIOBJ = (struct _CLIPOBJ *)a7;
  pxlo = (XLATEOBJ *)a4;
  *(_QWORD *)v32 = a5;
  pca = a6;
  pptlHTOrg = a7;
  v35 = a8;
  v42 = a9;
  v38 = a9;
  pptlMask = a10;
  v54 = 0LL;
  v55 = 0LL;
  v14 = 0;
  v43 = 0LL;
  v44 = 0LL;
  memset(&v56, 0, sizeof(v56));
  CurrentThread = GreGetCurrentThread((__int64)a8, (__int64)a7);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v51, CurrentThread);
  v17 = (struct _SURFOBJ **)v52;
  v45 = v52;
  if ( !v52 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v51);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v52, v16);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v17, v19);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, v17, v20);
  v21 = psoDest[0];
  v46 = psoDest[0];
  v22 = psoSrc[0];
  v47 = psoSrc[0];
  v23 = psoMask[0];
  *(SURFOBJ **)&v53.left = psoMask[0];
  if ( !DDIOBJ && iMode == 4 )
    goto LABEL_11;
  if ( psoDest[0] && psoSrc[0] && v41 && v42 )
  {
    CaptureRECTL(&v35, &v54);
    CapturePOINTL(&pptlMask, &v43);
    CaptureRECTL(&v38, &v55);
    CaptureCOLORADJUSTMENT(&pca, &v56);
    CapturePOINTL(&pptlHTOrg, &v44);
    if ( !bCheckDestSurfaceOverlap(v21, v35) )
    {
      v14 = 1;
LABEL_11:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v51);
      return v14;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, v33, &v21->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v17, *(__int64 *)v32);
    prclSrc = v38;
    if ( !bOrder(v38) || (v27 = 1, !(unsigned int)bCheckXlate(v22, v25)) )
      v27 = 0;
    if ( v27 )
    {
      if ( v23 )
      {
        v53 = 0LL;
        LODWORD(v33) = 0;
        v32[0] = 0;
        v27 = bCheckSurfaceRectSize(v22, prclSrc, 0LL, (unsigned int *)&v33, v32);
        if ( v27 )
        {
          v28 = pRect(pptlMask, &v53, (unsigned int)v33, v32[0]);
          v27 = bCheckMask(v23, v28);
        }
        v26 = DDIOBJ;
      }
      if ( v27 )
      {
        v29 = 0LL;
        prclDest = v35;
        if ( iMode == 4 )
          v29 = v35;
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v57, v21, v26, v29);
        if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v57)
          || (v31 = EngStretchBlt(v21, v22, v23, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode),
              v27 = 1,
              !v31) )
        {
          v27 = 0;
        }
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v57);
      }
    }
  }
  else
  {
    v27 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v51);
  return v27;
}
