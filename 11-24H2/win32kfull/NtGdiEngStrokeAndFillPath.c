/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x14033A020
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D90F4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400DAA6C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     EngStrokeAndFillPath @ 0x1401E6AC0 (EngStrokeAndFillPath.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401ECCC0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x140212A20 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14021B100 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FA688 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1403388E0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1403389B8 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x140338BA4 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
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
  unsigned int v12; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v14; // r9
  UMPDOBJ *v15; // r12
  SURFOBJ *v17; // r15
  struct _CLIPOBJ *DDIOBJ; // rsi
  BRUSHOBJ *pboStroke; // r14
  BRUSHOBJ *pboFill; // rdi
  struct _BRUSHOBJ *v21; // r9
  LINEATTRS *plineattrs; // r13
  XFORMOBJ *v23; // rax
  PATHOBJ *v24; // r12
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v27; // [rsp+60h] [rbp-268h] BYREF
  PATHOBJ *ppo; // [rsp+68h] [rbp-260h]
  XFORMOBJ *pxo; // [rsp+70h] [rbp-258h]
  struct _CLIPOBJ *v30; // [rsp+78h] [rbp-250h]
  BRUSHOBJ *v31; // [rsp+80h] [rbp-248h]
  XFORMOBJ *v32; // [rsp+88h] [rbp-240h]
  POINTL *pptlBrushOrg; // [rsp+90h] [rbp-238h] BYREF
  __int64 v34; // [rsp+98h] [rbp-230h]
  POINTL *v35; // [rsp+A0h] [rbp-228h]
  struct _POINTL v36; // [rsp+A8h] [rbp-220h] BYREF
  UMPDOBJ *v37; // [rsp+B0h] [rbp-218h]
  SURFOBJ *v38; // [rsp+B8h] [rbp-210h]
  struct _BRUSHOBJ v39; // [rsp+C0h] [rbp-208h] BYREF
  struct _BRUSHOBJ v40; // [rsp+D8h] [rbp-1F0h] BYREF
  struct _LINEATTRS v41; // [rsp+F0h] [rbp-1D8h] BYREF
  SURFOBJ *pso[8]; // [rsp+120h] [rbp-1A8h] BYREF
  struct W32_PUSH_LOCK *v43[4]; // [rsp+160h] [rbp-168h] BYREF
  UMPDOBJ *v44; // [rsp+180h] [rbp-148h]
  _BYTE v45[160]; // [rsp+1D0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+270h] [rbp-58h]

  v32 = a4;
  pxo = a4;
  v27 = a6;
  v34 = a7;
  v35 = a8;
  pptlBrushOrg = a8;
  v12 = 0;
  v36 = 0LL;
  memset(&v41, 0, sizeof(v41));
  memset(&v39, 0, sizeof(v39));
  memset(&v40, 0, sizeof(v40));
  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v43, CurrentThread);
  v15 = v44;
  v37 = v44;
  if ( v44 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v44, v14);
    v17 = pso[0];
    v38 = pso[0];
    ppo = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v15, a2);
    if ( v17 )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v15, a3, &v17->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v30 = DDIOBJ;
    pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a5);
    if ( !pboStroke )
      pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v39);
    v31 = pboStroke;
    pboFill = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, v34);
    if ( !pboFill )
      pboFill = CaptureAndFakeBRUSHOBJ(v21, &v40);
    if ( v17 )
    {
      if ( pboStroke )
      {
        if ( pboFill )
        {
          if ( ppo )
          {
            if ( a6 )
            {
              if ( DDIOBJ )
              {
                if ( v35 )
                {
                  CapturePOINTL(&pptlBrushOrg, &v36);
                  v12 = bCaptureLINEATTRS(&v27, &v41);
                  plineattrs = v27;
                  if ( v12 )
                  {
                    v23 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v15, (__int64)v32);
                    pxo = v23;
                    if ( (plineattrs->fl & 1) != 0 )
                      v12 &= -(v23 != 0LL);
                    v24 = ppo;
                    v12 = v12
                       && (unsigned int)bCheckSurfacePath(v17, ppo, DDIOBJ)
                       && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || pboFill->iSolidColor == -1);
                    if ( v12 )
                    {
                      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45, v17, DDIOBJ, 0LL);
                      v12 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v45)
                         && EngStrokeAndFillPath(
                              v17,
                              v24,
                              pco,
                              pxo,
                              pboStroke,
                              plineattrs,
                              pboFill,
                              pptlBrushOrg,
                              mixFill,
                              flOptions);
                      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45);
                    }
                    pstyle = plineattrs->pstyle;
                    if ( pstyle )
                      Win32FreePool(pstyle);
                  }
                }
              }
            }
          }
        }
      }
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v43);
    return v12;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v43);
    return 0LL;
  }
}
