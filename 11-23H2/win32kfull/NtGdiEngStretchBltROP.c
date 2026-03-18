/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1C02CA7D0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBltROP @ 0x1C0046A80 (EngStretchBltROP.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013D8D8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C013FCD0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C013FCEC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C652C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6678 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C66B8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6870 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C68CC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02C6A08 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C6A40 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C6A6C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C6AEC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C02C6CD8 (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C7140 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C71E0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02C7410 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02C75B4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02C7618 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02C7848 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
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
        unsigned int rop4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v18; // r14
  _DWORD *v19; // rsi
  SURFOBJ *v20; // r13
  struct _SURFOBJ *v21; // r12
  SURFOBJ *v22; // r15
  struct _XLATEOBJ *v24; // r10
  unsigned int v25; // r9d
  unsigned int v26; // r14d
  int v27; // r12d
  int v28; // eax
  unsigned int v29; // edi
  SURFOBJ *v30; // r12
  struct _RECTL *v31; // rax
  struct _BRUSHOBJ *v32; // r9
  BRUSHOBJ *pbo; // r14
  RECTL *v34; // r9
  RECTL *prclDest; // rdi
  unsigned int v36; // [rsp+74h] [rbp-2B4h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-2B0h] BYREF
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-2A8h]
  RECTL *prclSrc; // [rsp+88h] [rbp-2A0h] BYREF
  RECTL *v40; // [rsp+90h] [rbp-298h] BYREF
  POINTL *pptlMask; // [rsp+98h] [rbp-290h] BYREF
  struct _BRUSHOBJ *v42; // [rsp+A0h] [rbp-288h]
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-280h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+B0h] [rbp-278h]
  struct _CLIPOBJ *v45; // [rsp+B8h] [rbp-270h]
  __int64 v46; // [rsp+C0h] [rbp-268h]
  struct _SURFOBJ **v47; // [rsp+C8h] [rbp-260h]
  POINTL *pptlHTOrg; // [rsp+D0h] [rbp-258h] BYREF
  COLORADJUSTMENT *pca; // [rsp+D8h] [rbp-250h] BYREF
  POINTL *v50; // [rsp+E0h] [rbp-248h]
  struct _POINTL v51; // [rsp+E8h] [rbp-240h] BYREF
  struct _POINTL v52; // [rsp+F0h] [rbp-238h] BYREF
  char *v53; // [rsp+F8h] [rbp-230h]
  struct _BRUSHOBJ v54; // [rsp+100h] [rbp-228h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+120h] [rbp-208h] BYREF
  struct _SURFOBJ *v56[8]; // [rsp+160h] [rbp-1C8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+1A0h] [rbp-188h] BYREF
  struct _RECTL v58; // [rsp+1E0h] [rbp-148h] BYREF
  struct _RECTL v59; // [rsp+1F0h] [rbp-138h] BYREF
  struct _RECTL v60; // [rsp+200h] [rbp-128h] BYREF
  struct tagCOLORADJUSTMENT v61; // [rsp+210h] [rbp-118h] BYREF
  _BYTE v62[160]; // [rsp+230h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+2D0h] [rbp-58h]

  v45 = a4;
  v50 = a7;
  DDIOBJ = a4;
  v46 = a5;
  pca = a6;
  pptlHTOrg = a7;
  v40 = a8;
  prclSrc = a9;
  pptlMask = a10;
  v42 = a12;
  v37 = rop4;
  v36 = rop4;
  v59 = 0LL;
  v60 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  memset(&v61, 0, sizeof(v61));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v18 = ThreadCurrentObj;
  v47 = ThreadCurrentObj;
  v19 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v19;
  v53 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v56, a2, v18);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, v18);
  v20 = psoDest[0];
  *(SURFOBJ **)&v58.left = psoDest[0];
  v21 = v56[0];
  psoSrc = v56[0];
  v22 = psoMask[0];
  pxlo = (XLATEOBJ *)psoMask[0];
  if ( !v50 && iMode == 4 )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v56);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    --*v19;
    return 0LL;
  }
  if ( psoDest[0] && v56[0] && v40 && prclSrc )
  {
    CaptureRECTL(&v40, &v59);
    CaptureRECTL(&prclSrc, &v60);
    CapturePOINTL(&pptlMask, &v51);
    CapturePOINTL(&pptlHTOrg, &v52);
    CaptureCOLORADJUSTMENT(&pca, &v61);
    if ( !bCheckDestSurfaceOverlap(v20, v40) )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v56);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      --*v19;
      return 1LL;
    }
    memset(&v54, 0, sizeof(v54));
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v18, v45, &v20->sizlBitmap);
    v24 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v18, v46);
    pxlo = v24;
    if ( (((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) == 0 || bOrder(prclSrc))
      && (unsigned int)bCheckXlate(v21, v24)
      && ((v26 = v25 >> 8, v27 = (unsigned __int8)v25, (unsigned __int8)v25 == BYTE1(v25))
       || v22
       || (v28 = PROBEDISPATBRUSH(v42), v25 = rop4, v28)) )
    {
      v29 = 1;
    }
    else
    {
      v29 = 0;
      v26 = v36 >> 8;
      v27 = (unsigned __int8)v36;
    }
    if ( v27 != (unsigned __int8)v26 && (!v22 || !pptlMask) )
      v29 = 0;
    if ( v29 && v25 == 43724 )
    {
      v30 = psoSrc;
      if ( v22 )
      {
        v58 = 0LL;
        v37 = 0;
        v36 = 0;
        v29 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v37, &v36);
        if ( v29 )
        {
          v31 = pRect(pptlMask, &v58, v37, v36);
          v29 = bCheckMask(v22, v31);
        }
      }
    }
    else
    {
      v30 = psoSrc;
    }
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v47, (__int64)v42);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v32, &v54);
    if ( v29 )
    {
      v34 = 0LL;
      prclDest = v40;
      if ( iMode == 4 )
        v34 = v40;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v62, v20, DDIOBJ, v34);
      v29 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v62)
         && EngStretchBltROP(v20, v30, v22, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v62);
    }
  }
  else
  {
    v29 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v56);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  --*v19;
  return v29;
}
