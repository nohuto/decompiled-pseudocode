/*
 * XREFs of NtGdiEngStrokePath @ 0x140262710
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x140009AE0 (EngStrokePath.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D90F4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400DAA6C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401ECCC0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x140212A20 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14021B100 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FA688 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1403388E0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1403389B8 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x140338BA4 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _BRUSHOBJ *a5,
        POINTL *a6,
        LINEATTRS *a7,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v11; // r9
  UMPDOBJ *v12; // r15
  SURFOBJ *v14; // r14
  PATHOBJ *v15; // r13
  BRUSHOBJ *pbo; // rdi
  unsigned int v17; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *v19; // rdx
  unsigned __int64 v20; // rax
  struct _CLIPOBJ *v21; // r9
  XFORMOBJ *v22; // r15
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v25; // [rsp+50h] [rbp-238h] BYREF
  struct _CLIPOBJ *DDIOBJ; // [rsp+58h] [rbp-230h]
  struct _CLIPOBJ *v27; // [rsp+60h] [rbp-228h]
  POINTL *pptlBrushOrg; // [rsp+68h] [rbp-220h] BYREF
  POINTL *v29; // [rsp+70h] [rbp-218h]
  struct _POINTL v30; // [rsp+78h] [rbp-210h] BYREF
  UMPDOBJ *v31; // [rsp+80h] [rbp-208h]
  SURFOBJ *v32; // [rsp+88h] [rbp-200h]
  PATHOBJ *v33; // [rsp+90h] [rbp-1F8h]
  struct _CLIPOBJ *v34; // [rsp+98h] [rbp-1F0h]
  struct _BRUSHOBJ v35; // [rsp+A0h] [rbp-1E8h] BYREF
  struct _LINEATTRS v36; // [rsp+B8h] [rbp-1D0h] BYREF
  SURFOBJ *pso[8]; // [rsp+E0h] [rbp-1A8h] BYREF
  struct W32_PUSH_LOCK *v38[4]; // [rsp+120h] [rbp-168h] BYREF
  UMPDOBJ *v39; // [rsp+140h] [rbp-148h]
  _BYTE v40[160]; // [rsp+190h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+230h] [rbp-58h]

  v27 = a4;
  v34 = a3;
  DDIOBJ = a4;
  v29 = a6;
  pptlBrushOrg = a6;
  v25 = a7;
  v30 = 0LL;
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v38, CurrentThread);
  v12 = v39;
  v31 = v39;
  if ( v39 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v39, v11);
    v14 = pso[0];
    v32 = pso[0];
    v15 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v12, a2);
    v33 = v15;
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a5);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(a5, &v35);
    if ( v14 && pbo && v15 && a7 && v29 )
    {
      CapturePOINTL(&pptlBrushOrg, &v30);
      v17 = bCaptureLINEATTRS(&v25, &v36);
      plineattrs = v25;
      if ( v17 )
      {
        v19 = a3;
        if ( (*((_DWORD *)v12 + 111) & 0x100) != 0 && (v25->fl & 1) != 0 )
          v17 &= -(a3 != 0LL);
      }
      else
      {
        v19 = a3;
      }
      if ( v17 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v12, v19, &v14->sizlBitmap);
        v20 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v12, (__int64)v27);
        v22 = (XFORMOBJ *)v20;
        if ( (plineattrs->fl & 1) != 0 )
          v17 &= -(v20 != 0);
        v17 = v17
           && (unsigned int)bCheckSurfacePath(v14, v15, v21)
           && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1);
        if ( v17 )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v40, v14, DDIOBJ, 0LL);
          v17 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v40)
             && EngStrokePath(v14, v15, pco, v22, pbo, pptlBrushOrg, plineattrs, mix);
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v40);
        }
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
    else
    {
      v17 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v38);
    return v17;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v38);
    return 0LL;
  }
}
