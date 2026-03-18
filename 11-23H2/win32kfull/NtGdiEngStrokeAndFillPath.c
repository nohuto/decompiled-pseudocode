/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x1C02CADE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013D8D8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C013FCD0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C013FCEC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     EngStrokeAndFillPath @ 0x1C0288ED0 (EngStrokeAndFillPath.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C652C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02C6580 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02C6624 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C66B8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6870 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C68CC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C6A40 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C6AEC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02C7008 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02C720C (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        LINEATTRS *a6,
        __int64 a7,
        POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  UMPDOBJ *v15; // rsi
  _DWORD *v16; // r14
  SURFOBJ *v18; // r13
  PATHOBJ *v19; // rbx
  struct _CLIPOBJ *DDIOBJ; // r15
  BRUSHOBJ *pboStroke; // r12
  struct _BRUSHOBJ *pboFill; // rdi
  struct _BRUSHOBJ *v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  XFORMOBJ *v27; // rax
  LINEATTRS *plineattrs; // rsi
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v30; // [rsp+60h] [rbp-1E8h] BYREF
  POINTL *pptlBrushOrg; // [rsp+68h] [rbp-1E0h] BYREF
  XFORMOBJ *pxo; // [rsp+70h] [rbp-1D8h]
  struct _CLIPOBJ *v33; // [rsp+78h] [rbp-1D0h]
  BRUSHOBJ *v34; // [rsp+80h] [rbp-1C8h]
  XFORMOBJ *v35; // [rsp+88h] [rbp-1C0h]
  PATHOBJ *ppo; // [rsp+90h] [rbp-1B8h]
  struct _POINTL v37; // [rsp+98h] [rbp-1B0h] BYREF
  struct _SURFOBJ **v38; // [rsp+A0h] [rbp-1A8h]
  SURFOBJ *v39; // [rsp+A8h] [rbp-1A0h]
  char *v40; // [rsp+B0h] [rbp-198h]
  struct _BRUSHOBJ v41; // [rsp+B8h] [rbp-190h] BYREF
  struct _BRUSHOBJ v42; // [rsp+D0h] [rbp-178h] BYREF
  _LINEATTRS v43; // [rsp+E8h] [rbp-160h] BYREF
  SURFOBJ *pso[8]; // [rsp+110h] [rbp-138h] BYREF
  _BYTE v45[160]; // [rsp+150h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+1F0h] [rbp-58h]

  v35 = a4;
  pxo = a4;
  v30 = a6;
  pptlBrushOrg = a8;
  v37 = 0LL;
  memset(&v43, 0, sizeof(v43));
  memset(&v41, 0, sizeof(v41));
  memset(&v42, 0, sizeof(v42));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = (UMPDOBJ *)ThreadCurrentObj;
  v38 = ThreadCurrentObj;
  v16 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v16;
  v40 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v18 = pso[0];
  v39 = pso[0];
  v19 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v15, a2);
  ppo = v19;
  if ( v18 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v15, a3, &v18->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v33 = DDIOBJ;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v41);
  v34 = pboStroke;
  pboFill = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, a7);
  if ( !pboFill )
    pboFill = CaptureAndFakeBRUSHOBJ(v23, &v42);
  if ( v18 && pboStroke && pboFill && v19 && v30 && DDIOBJ && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v37);
    v26 = bCaptureLINEATTRS(&v30, &v43, v24, v25);
    if ( v26 )
    {
      v27 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v15, (__int64)v35);
      pxo = v27;
      plineattrs = v30;
      if ( (v30->fl & 1) != 0 )
        v26 &= -(v27 != 0LL);
      v26 = v26
         && (unsigned int)bCheckSurfacePath(v18, ppo, DDIOBJ)
         && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1);
      if ( v26 )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45, v18, DDIOBJ, 0LL);
        v26 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v45)
           && EngStrokeAndFillPath(v18, ppo, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45);
      }
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v26 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v16;
  return v26;
}
