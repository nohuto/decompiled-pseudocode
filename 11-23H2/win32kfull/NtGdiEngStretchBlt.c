/*
 * XREFs of NtGdiEngStretchBlt @ 0x1C02CA300
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00B84B0 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013D8D8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C013FCD0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C013FCEC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6678 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C66B8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6870 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02C6A08 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C6A40 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C6A6C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C6AEC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C7140 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C71E0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02C7410 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02C75B4 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x1C02C7618 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x1C02C7848 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
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
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v15; // r15
  _DWORD *v16; // rsi
  SURFOBJ *v17; // r14
  SURFOBJ *v18; // r12
  struct _XLATEOBJ *v20; // rdx
  struct _RECTL *v21; // r10
  struct _CLIPOBJ *v22; // r11
  unsigned int v23; // edi
  SURFOBJ *v24; // r15
  struct _RECTL *v25; // rax
  RECTL *v26; // r9
  RECTL *prclDest; // rdi
  SURFOBJ *psoMask; // [rsp+60h] [rbp-278h] BYREF
  struct _SURFOBJ *DDIOBJ; // [rsp+68h] [rbp-270h]
  struct _CLIPOBJ *v30; // [rsp+70h] [rbp-268h] BYREF
  RECTL *v31; // [rsp+78h] [rbp-260h] BYREF
  RECTL *prclSrc; // [rsp+80h] [rbp-258h] BYREF
  POINTL *pptlMask; // [rsp+88h] [rbp-250h] BYREF
  XLATEOBJ *pxlo; // [rsp+90h] [rbp-248h]
  __int64 v35; // [rsp+98h] [rbp-240h]
  POINTL *pptlHTOrg; // [rsp+A0h] [rbp-238h] BYREF
  COLORADJUSTMENT *pca; // [rsp+A8h] [rbp-230h] BYREF
  POINTL *v38; // [rsp+B0h] [rbp-228h]
  struct _POINTL v39; // [rsp+B8h] [rbp-220h] BYREF
  struct _POINTL v40; // [rsp+C0h] [rbp-218h] BYREF
  struct _SURFOBJ **v41; // [rsp+C8h] [rbp-210h]
  char *v42; // [rsp+D0h] [rbp-208h]
  _QWORD v43[8]; // [rsp+E0h] [rbp-1F8h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-1B8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+160h] [rbp-178h] BYREF
  struct _RECTL v46; // [rsp+1A0h] [rbp-138h] BYREF
  struct _RECTL v47; // [rsp+1B0h] [rbp-128h] BYREF
  struct _RECTL v48; // [rsp+1C0h] [rbp-118h] BYREF
  struct tagCOLORADJUSTMENT v49; // [rsp+1D0h] [rbp-108h] BYREF
  _BYTE v50[160]; // [rsp+1F0h] [rbp-E8h] BYREF
  CLIPOBJ *pco; // [rsp+290h] [rbp-48h]

  v30 = a4;
  DDIOBJ = a3;
  v38 = a7;
  pxlo = (XLATEOBJ *)a4;
  v35 = a5;
  pca = a6;
  pptlHTOrg = a7;
  v31 = a8;
  prclSrc = a9;
  pptlMask = a10;
  v47 = 0LL;
  v48 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memset(&v49, 0, sizeof(v49));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v41 = ThreadCurrentObj;
  v16 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v16;
  v42 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v15);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v43, DDIOBJ, v15);
  v17 = psoDest[0];
  DDIOBJ = psoDest[0];
  v18 = psoSrc[0];
  *(SURFOBJ **)&v46.left = psoSrc[0];
  psoMask = (SURFOBJ *)v43[0];
  if ( !v38 && iMode == 4 )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    --*v16;
    return 0LL;
  }
  if ( psoDest[0] && psoSrc[0] && v31 && prclSrc )
  {
    CaptureRECTL(&v31, &v47);
    CapturePOINTL(&pptlMask, &v39);
    CaptureRECTL(&prclSrc, &v48);
    CaptureCOLORADJUSTMENT(&pca, &v49);
    CapturePOINTL(&pptlHTOrg, &v40);
    if ( !bCheckDestSurfaceOverlap(v17, v31) )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      --*v16;
      return 1LL;
    }
    DDIOBJ = (struct _SURFOBJ *)UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v15, v30, &v17->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v15, v35);
    v23 = bOrder(prclSrc) && (unsigned int)bCheckXlate(v18, v20);
    v24 = psoMask;
    if ( v23 )
    {
      if ( psoMask )
      {
        v46 = 0LL;
        LODWORD(psoMask) = 0;
        LODWORD(v30) = 0;
        v23 = bCheckSurfaceRectSize(v18, v21, 0LL, (unsigned int *)&psoMask, (unsigned int *)&v30);
        if ( v23 )
        {
          v25 = pRect(pptlMask, &v46, (int)psoMask, (int)v30);
          v23 = bCheckMask(v24, v25);
        }
        v22 = (struct _CLIPOBJ *)DDIOBJ;
      }
      if ( v23 )
      {
        v26 = 0LL;
        prclDest = v31;
        if ( iMode == 4 )
          v26 = v31;
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v50, v17, v22, v26);
        v23 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v50)
           && EngStretchBlt(v17, v18, v24, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v50);
      }
    }
  }
  else
  {
    v23 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  --*v16;
  return v23;
}
