/*
 * XREFs of NtGdiEngGradientFill @ 0x140339420
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
 *     EngGradientFill @ 0x1401200C0 (EngGradientFill.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401ECCC0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1401FE608 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FA688 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1403388E0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x1403388FC (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x140338BA4 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x140338BC4 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        char *a4,
        ULONG nVertex,
        char *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v12; // r9
  SURFOBJ *v13; // r13
  int v14; // ebx
  unsigned int nMesh; // edi
  bool v16; // cc
  unsigned int v17; // ebx
  TRIVERTEX *v18; // r14
  __int64 v19; // rax
  void *pMesh; // rsi
  BOOL v21; // ebx
  struct _CLIPOBJ *DDIOBJ; // rax
  XLATEOBJ *v23; // rax
  UMPDOBJ *v27; // [rsp+78h] [rbp-220h]
  POINTL *pptlDitherOrg; // [rsp+88h] [rbp-210h] BYREF
  RECTL *prclExtents; // [rsp+90h] [rbp-208h] BYREF
  RECTL *v31; // [rsp+98h] [rbp-200h]
  POINTL *v32; // [rsp+A0h] [rbp-1F8h]
  struct _POINTL v33; // [rsp+A8h] [rbp-1F0h] BYREF
  TRIVERTEX *v34; // [rsp+B0h] [rbp-1E8h]
  __int64 v35; // [rsp+B8h] [rbp-1E0h]
  SURFOBJ *v36; // [rsp+C0h] [rbp-1D8h]
  struct _CLIPOBJ *v37; // [rsp+C8h] [rbp-1D0h]
  __int64 v38; // [rsp+D0h] [rbp-1C8h]
  SURFOBJ *psoDest[8]; // [rsp+E0h] [rbp-1B8h] BYREF
  struct W32_PUSH_LOCK *v40[4]; // [rsp+120h] [rbp-178h] BYREF
  struct UMPDOBJ *v41; // [rsp+140h] [rbp-158h]
  struct _RECTL v42; // [rsp+190h] [rbp-108h] BYREF
  _BYTE v43[160]; // [rsp+1A0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+240h] [rbp-58h]

  v37 = a2;
  v38 = a3;
  v31 = a8;
  prclExtents = a8;
  v32 = a9;
  pptlDitherOrg = a9;
  v42 = 0LL;
  v33 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v40, CurrentThread);
  v27 = v41;
  if ( !v41 )
    goto LABEL_31;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v41, v12);
  v13 = psoDest[0];
  v36 = psoDest[0];
  if ( ulMode < 2 )
  {
    v14 = 8;
    nMesh = a7;
    v16 = a7 <= 0x4E2000;
  }
  else
  {
    if ( ulMode != 2 )
    {
LABEL_30:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
LABEL_31:
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v40);
      return 0LL;
    }
    v14 = 12;
    nMesh = a7;
    v16 = a7 <= 0x341555;
  }
  if ( !v16 )
    goto LABEL_30;
  if ( !nMesh || !nVertex )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v40);
    return 1LL;
  }
  v17 = nMesh * v14;
  if ( nVertex > 0x271000 )
    goto LABEL_30;
  v18 = (TRIVERTEX *)PALLOCNOZ(16 * nVertex, 1886221639LL);
  v34 = v18;
  v19 = PALLOCNOZ(v17, 1886221639LL);
  pMesh = (void *)v19;
  v35 = v19;
  if ( v13 && a4 && a6 && v18 && v19 && v31 && v32 )
  {
    CaptureRECTL(&prclExtents, &v42);
    CapturePOINTL(&pptlDitherOrg, &v33);
    CaptureBits(v18, a4, 16 * nVertex);
    CaptureBits(pMesh, a6, v17);
    v21 = bValidVertexMeshData(v18, (unsigned int *)pMesh, nVertex, nMesh, ulMode) != 0;
    if ( v21 )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v27, a2, &v13->sizlBitmap);
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43, v13, DDIOBJ, 0LL);
      v21 = 0;
      if ( ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v43) )
      {
        v23 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v27, a3);
        if ( EngGradientFill(v13, pco, v23, v18, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode) )
          v21 = 1;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v43);
    }
  }
  else
  {
    v21 = 0;
  }
  if ( v18 )
    Win32FreePool(v18);
  if ( pMesh )
    Win32FreePool(pMesh);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v40);
  return v21;
}
