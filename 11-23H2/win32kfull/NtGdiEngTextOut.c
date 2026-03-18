/*
 * XREFs of NtGdiEngTextOut @ 0x1C02CB520
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C001E590 (EngTextOut.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013D8D8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C013DE94 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C013DEA4 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C013FCD0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C013FCEC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C029827C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02BF54C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02BF820 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C652C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02C65E4 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C66B8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6870 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C68CC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C6A40 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C6A6C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C6AEC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02C7340 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v13; // rsi
  _DWORD *v14; // r14
  SURFOBJ *v16; // r13
  struct _BRUSHOBJ *pboFore; // r15
  BRUSHOBJ *pboOpaque; // r12
  RECTL *v19; // rax
  struct _CLIPOBJ *DDIOBJ; // rax
  unsigned int v21; // edi
  FONTOBJ *pfoa; // [rsp+58h] [rbp-200h]
  STROBJ *pstroa; // [rsp+60h] [rbp-1F8h]
  POINTL *pptlOrg; // [rsp+68h] [rbp-1F0h] BYREF
  RECTL *prclOpaque; // [rsp+70h] [rbp-1E8h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-1E0h] BYREF
  RECTL *prclExtra; // [rsp+80h] [rbp-1D8h]
  struct _CLIPOBJ *v30; // [rsp+88h] [rbp-1D0h]
  struct _BRUSHOBJ *v31; // [rsp+90h] [rbp-1C8h]
  struct _RECTL *v32; // [rsp+98h] [rbp-1C0h] BYREF
  struct _BRUSHOBJ *v33; // [rsp+A0h] [rbp-1B8h]
  struct _POINTL v34; // [rsp+A8h] [rbp-1B0h] BYREF
  struct _CLIPOBJ *v35; // [rsp+B0h] [rbp-1A8h]
  struct _SURFOBJ **v36; // [rsp+B8h] [rbp-1A0h]
  char *v37; // [rsp+C0h] [rbp-198h]
  struct _BRUSHOBJ v38; // [rsp+C8h] [rbp-190h] BYREF
  struct _BRUSHOBJ v39; // [rsp+E0h] [rbp-178h] BYREF
  SURFOBJ *pso[8]; // [rsp+100h] [rbp-158h] BYREF
  struct _RECTL v41; // [rsp+140h] [rbp-118h] BYREF
  struct _RECTL v42; // [rsp+150h] [rbp-108h] BYREF
  _BYTE v43[160]; // [rsp+160h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+200h] [rbp-58h]

  v35 = a4;
  v30 = a4;
  v32 = a5;
  prclOpaque = a6;
  v33 = a8;
  pptlOrg = a9;
  v41 = 0LL;
  v42 = 0LL;
  v34 = 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v39, 0, sizeof(v39));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v36 = ThreadCurrentObj;
  v14 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v14;
  v37 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v16 = pso[0];
  prclExtra = (RECTL *)pso[0];
  pstroa = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v13, a2);
  pfoa = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v13, a3);
  pboFore = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(a7, &v38);
  v31 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(v33, &v39);
  if ( v16 && pstroa && pfoa && pboFore && pptlOrg )
  {
    CaptureRECTL(&v32, &v41);
    CaptureRECTL(&prclOpaque, &v42);
    CapturePOINTL(&pptlOrg, &v34);
    v19 = v32;
    if ( (*((_DWORD *)v13 + 107) & 0x100) != 0 )
      v19 = 0LL;
    prclExtra = v19;
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v13, v35, &v16->sizlBitmap);
    v30 = DDIOBJ;
    if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) != 0 && pboFore->iSolidColor != -1
      || (v21 = 1, !(unsigned int)bCheckSurfaceRect(v16, prclOpaque, DDIOBJ)) )
    {
      v21 = 0;
    }
    if ( v21 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, (struct PFT *)pfoa);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)v28, (struct UMPDOBJ *)v13, 0, 0, 0LL);
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43, v16, v30, 0LL);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v43)
        || (v21 = 1, !EngTextOut(v16, pstroa, pfoa, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix)) )
      {
        v21 = 0;
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)v28, (struct UMPDOBJ *)v13, 0LL, 0LL, 0LL);
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
    }
  }
  else
  {
    v21 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v14;
  return v21;
}
