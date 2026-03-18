/*
 * XREFs of NtGdiEngStretchBltROP @ 0x140262120
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400DBF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400DBF58 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400DC380 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400DC3B0 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     EngStretchBltROP @ 0x140135B60 (EngStretchBltROP.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401ECCC0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1401FE608 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140218570 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14021B100 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x14021BAE0 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x140221E18 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FA688 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1403388E0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x14033893C (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x140338BA4 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x140338C90 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
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
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  unsigned int v16; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v18; // r9
  struct _SURFOBJ **v19; // r15
  __int64 v21; // r9
  __int64 v22; // r9
  SURFOBJ *v23; // r13
  struct _SURFOBJ *v24; // rsi
  SURFOBJ *v25; // r14
  struct _XLATEOBJ *v26; // r8
  unsigned int v27; // esi
  int v28; // r15d
  unsigned int v29; // edi
  SURFOBJ *v30; // r15
  struct _RECTL *v31; // rax
  BRUSHOBJ *pbo; // rsi
  struct _BRUSHOBJ *v33; // r9
  RECTL *v34; // r9
  RECTL *prclDest; // rdi
  BOOL v36; // eax
  unsigned int v37; // [rsp+70h] [rbp-328h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-320h] BYREF
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-318h]
  POINTL *pptlMask; // [rsp+88h] [rbp-310h] BYREF
  RECTL *prclSrc; // [rsp+90h] [rbp-308h] BYREF
  struct _BRUSHOBJ *v42; // [rsp+98h] [rbp-300h]
  RECTL *v43; // [rsp+A0h] [rbp-2F8h] BYREF
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-2F0h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+B0h] [rbp-2E8h]
  struct _CLIPOBJ *v46; // [rsp+B8h] [rbp-2E0h]
  __int64 v47; // [rsp+C0h] [rbp-2D8h]
  UMPDOBJ *v48; // [rsp+C8h] [rbp-2D0h]
  POINTL *pptlHTOrg; // [rsp+D0h] [rbp-2C8h] BYREF
  COLORADJUSTMENT *pca; // [rsp+D8h] [rbp-2C0h] BYREF
  POINTL *v51; // [rsp+E0h] [rbp-2B8h]
  RECTL *v52; // [rsp+E8h] [rbp-2B0h]
  RECTL *v53; // [rsp+F0h] [rbp-2A8h]
  struct _POINTL v54; // [rsp+F8h] [rbp-2A0h] BYREF
  struct _POINTL v55; // [rsp+100h] [rbp-298h] BYREF
  struct _BRUSHOBJ v56; // [rsp+108h] [rbp-290h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+120h] [rbp-278h] BYREF
  struct _SURFOBJ *v58[8]; // [rsp+160h] [rbp-238h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+1A0h] [rbp-1F8h] BYREF
  struct W32_PUSH_LOCK *v60[4]; // [rsp+1E0h] [rbp-1B8h] BYREF
  UMPDOBJ *v61; // [rsp+200h] [rbp-198h]
  struct _RECTL v62; // [rsp+250h] [rbp-148h] BYREF
  struct _RECTL v63; // [rsp+260h] [rbp-138h] BYREF
  struct _RECTL v64; // [rsp+270h] [rbp-128h] BYREF
  struct tagCOLORADJUSTMENT v65; // [rsp+280h] [rbp-118h] BYREF
  _BYTE v66[160]; // [rsp+2A0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+340h] [rbp-58h]

  v46 = a4;
  v52 = a8;
  v51 = a7;
  DDIOBJ = a4;
  v47 = a5;
  pca = a6;
  pptlHTOrg = a7;
  v43 = a8;
  v53 = a9;
  prclSrc = a9;
  pptlMask = a10;
  v42 = a12;
  v38 = rop4;
  v37 = rop4;
  v63 = 0LL;
  v64 = 0LL;
  v16 = 0;
  v54 = 0LL;
  v55 = 0LL;
  memset(&v65, 0, sizeof(v65));
  CurrentThread = GreGetCurrentThread((__int64)a8, (__int64)a7);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v60, CurrentThread);
  v19 = (struct _SURFOBJ **)v61;
  v48 = v61;
  if ( !v61 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v60);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v61, v18);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v58, a2, v19, v21);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, v19, v22);
  v23 = psoDest[0];
  *(SURFOBJ **)&v62.left = psoDest[0];
  v24 = v58[0];
  psoSrc = v58[0];
  v25 = psoMask[0];
  pxlo = (XLATEOBJ *)psoMask[0];
  if ( !v51 && iMode == 4 )
    goto LABEL_11;
  if ( psoDest[0] && v58[0] && v52 && v53 )
  {
    CaptureRECTL(&v43, &v63);
    CaptureRECTL(&prclSrc, &v64);
    CapturePOINTL(&pptlMask, &v54);
    CapturePOINTL(&pptlHTOrg, &v55);
    CaptureCOLORADJUSTMENT(&pca, &v65);
    if ( !bCheckDestSurfaceOverlap(v23, v43) )
    {
      v16 = 1;
LABEL_11:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v58);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v60);
      return v16;
    }
    memset(&v56, 0, sizeof(v56));
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v19, v46, &v23->sizlBitmap);
    v26 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v19, v47);
    pxlo = v26;
    if ( (((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || bOrder(prclSrc))
      && (unsigned int)bCheckXlate(v24, v26)
      && ((v27 = rop4 >> 8, v28 = (unsigned __int8)rop4, (unsigned __int8)rop4 == BYTE1(rop4))
       || v25
       || (unsigned int)PROBEDISPATBRUSH(v42)) )
    {
      v29 = 1;
    }
    else
    {
      v29 = 0;
      v27 = v37 >> 8;
      v28 = (unsigned __int8)v37;
    }
    if ( v28 != (unsigned __int8)v27 && (!v25 || !pptlMask) )
      v29 = 0;
    if ( v29 && rop4 == 43724 )
    {
      v30 = psoSrc;
      if ( v25 )
      {
        v62 = 0LL;
        v38 = 0;
        v37 = 0;
        v29 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v38, &v37);
        if ( v29 )
        {
          v31 = pRect(pptlMask, &v62, v38, v37);
          v29 = bCheckMask(v25, v31);
        }
      }
    }
    else
    {
      v30 = psoSrc;
    }
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v48, (__int64)v42);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v33, &v56);
    if ( v29 )
    {
      v34 = 0LL;
      prclDest = v43;
      if ( iMode == 4 )
        v34 = v43;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v66, v23, DDIOBJ, v34);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v66)
        || (v36 = EngStretchBltROP(
                    v23,
                    v30,
                    v25,
                    pco,
                    pxlo,
                    pca,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4),
            v29 = 1,
            !v36) )
      {
        v29 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v66);
    }
  }
  else
  {
    v29 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v58);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v60);
  return v29;
}
