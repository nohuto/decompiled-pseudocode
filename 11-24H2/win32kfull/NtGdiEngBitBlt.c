/*
 * XREFs of NtGdiEngBitBlt @ 0x1400DB6D0
 * Callers:
 *     <none>
 * Callees:
 *     EngBitBlt @ 0x1400179A0 (EngBitBlt.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400DBF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400DBF58 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400DC2AC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400DC380 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400DC3B0 (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14021B100 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x140338C90 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiEngBitBlt(
        XLATEOBJ *a1,
        SURFOBJ *a2,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 a11)
{
  POINTL *pptlSrc; // r14
  POINTL *pptlMask; // r12
  POINTL *pptlBrush; // r15
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v15; // r13
  __int64 v16; // r13
  struct _BRUSHOBJ *v17; // rax
  BRUSHOBJ *pbo; // rsi
  __int64 v19; // r10
  __int64 v20; // r11
  const void *v21; // r9
  char v22; // al
  SURFOBJ *v23; // r13
  UMPDOBJ *v24; // rcx
  unsigned int v25; // edi
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  struct _RECTL *v28; // r11
  struct _RECTL *v29; // rdi
  int prclTrg; // [rsp+28h] [rbp-290h]
  struct _BRUSHOBJ *v32; // [rsp+60h] [rbp-258h] BYREF
  unsigned int v33[2]; // [rsp+68h] [rbp-250h] BYREF
  ROP4 rop4; // [rsp+70h] [rbp-248h]
  SURFOBJ *psoMask; // [rsp+78h] [rbp-240h]
  SURFOBJ *psoTrg; // [rsp+80h] [rbp-238h]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-230h]
  RECTL *v38; // [rsp+90h] [rbp-228h]
  CLIPOBJ *pco; // [rsp+98h] [rbp-220h]
  __int64 v40; // [rsp+A0h] [rbp-218h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-210h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-208h] BYREF
  POINTL *v43; // [rsp+B8h] [rbp-200h]
  POINTL *v44; // [rsp+C0h] [rbp-1F8h]
  POINTL *v45; // [rsp+C8h] [rbp-1F0h]
  __int64 v46; // [rsp+D0h] [rbp-1E8h]
  RECTL *v47; // [rsp+D8h] [rbp-1E0h]
  SURFOBJ *psoSrc; // [rsp+E0h] [rbp-1D8h]
  struct _CLIPOBJ *v49; // [rsp+E8h] [rbp-1D0h]
  struct _BRUSHOBJ v50; // [rsp+F0h] [rbp-1C8h] BYREF
  _QWORD v51[8]; // [rsp+110h] [rbp-1A8h] BYREF
  _QWORD v52[8]; // [rsp+150h] [rbp-168h] BYREF
  _QWORD v53[8]; // [rsp+190h] [rbp-128h] BYREF
  struct W32_PUSH_LOCK *v54[4]; // [rsp+1D0h] [rbp-E8h] BYREF
  struct UMPDOBJ *v55; // [rsp+1F0h] [rbp-C8h]
  struct _RECTL v56; // [rsp+240h] [rbp-78h] BYREF
  struct _RECTL v57; // [rsp+250h] [rbp-68h] BYREF
  __int128 v58; // [rsp+260h] [rbp-58h] BYREF

  v49 = a4;
  psoMask = a3;
  psoTrg = a2;
  pxlo = a1;
  pco = a4;
  v46 = a5;
  v47 = a6;
  v38 = a6;
  pptlSrc = a7;
  v43 = a7;
  pptlMask = a8;
  v44 = a8;
  v32 = a9;
  pptlBrush = a10;
  v45 = a10;
  rop4 = a11;
  v58 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  memset(&v50, 0, sizeof(v50));
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v54, CurrentThread);
  v15 = v55;
  *(_QWORD *)v33 = v55;
  *(_QWORD *)&v56.left = v55;
  if ( !v55 )
    goto LABEL_42;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v53, (struct _SURFOBJ *)pxlo, v55);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v52, psoTrg, v15);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v51, psoMask, v15);
  psoTrg = (SURFOBJ *)v53[0];
  v16 = v52[0];
  psoSrc = (SURFOBJ *)v52[0];
  *(_QWORD *)&v57.left = v52[0];
  psoMask = (SURFOBJ *)v51[0];
  v17 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(*(__int64 *)v33, (__int64)a9);
  pbo = v17;
  if ( !v17 )
  {
    v17 = CaptureAndFakeBRUSHOBJ(v32, &v50);
    pbo = v17;
  }
  v32 = v17;
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(*(_QWORD *)v33, v46);
  if ( (rop4 & 0xFFFF0000) != 0
    || (v21 = v47) == 0LL
    || (v22 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)], (v22 & 0xE8) != 0)
    && (!pbo || pbo->iSolidColor == -1 && !a10)
    || (v22 & 0xD4) != 0 && (!a7 || !v16)
    || (unsigned __int8)rop4 != BYTE1(rop4) && !v19 && (!pbo || pbo->iSolidColor != -1) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v51);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v52);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v53);
LABEL_42:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v54);
    return 0LL;
  }
  if ( v20 )
  {
    if ( (unsigned __int64)v47 >= MmUserProbeAddress )
      v21 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v58, v21, 0x10uLL);
    v38 = (RECTL *)&v58;
    if ( a7 )
    {
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        pptlSrc = (POINTL *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v40, pptlSrc, 8uLL);
      pptlSrc = (POINTL *)&v40;
      v43 = (POINTL *)&v40;
    }
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= MmUserProbeAddress )
        pptlMask = (POINTL *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v41, pptlMask, 8uLL);
      pptlMask = (POINTL *)&v41;
      v44 = (POINTL *)&v41;
    }
    if ( a10 )
    {
      if ( (unsigned __int64)a10 >= MmUserProbeAddress )
        pptlBrush = (POINTL *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v42, pptlBrush, 8uLL);
      pptlBrush = (POINTL *)&v42;
      v45 = (POINTL *)&v42;
    }
    v23 = psoSrc;
    v24 = *(UMPDOBJ **)v33;
    LODWORD(v32) = 0;
    v33[0] = 0;
    pco = UMPDOBJ::GetDDIOBJ(v24, v49, &psoTrg->sizlBitmap);
    v25 = (unsigned int)bCheckSurfaceRectSize(psoTrg, v38, pco, (unsigned int *)&v32, v33, prclTrg)
       && (unsigned int)bCheckXlate(v23, pxlo);
    if ( v25 )
    {
      v57 = 0LL;
      v56 = 0LL;
      v26 = v33[0];
      v27 = (unsigned int)v32;
      if ( v23 )
        v28 = pRect(pptlSrc, &v57, (unsigned int)v32, v33[0]);
      else
        v28 = 0LL;
      if ( psoMask )
        v29 = pRect(pptlMask, &v56, v27, v26);
      else
        v29 = 0LL;
      v25 = (unsigned int)bCheckSurfaceRect(v23, v28, 0LL) && (unsigned int)bCheckMask(psoMask, v29);
      if ( v25 )
        v25 = EngBitBlt(psoTrg, v23, psoMask, pco, pxlo, v38, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    }
  }
  else
  {
    v25 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v51);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v52);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v53);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v54);
  return v25;
}
