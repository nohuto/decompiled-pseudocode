/*
 * XREFs of NtGdiEngStrokePath @ 0x1C02CB1B0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C000D340 (EngStrokePath.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013D8D8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C013FCD0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C013FCEC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
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

__int64 __fastcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        POINTL *a6,
        LINEATTRS *a7,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v11; // r15
  _DWORD *v12; // rdi
  SURFOBJ *v14; // r13
  struct _BRUSHOBJ *v15; // rax
  PATHOBJ *v16; // r9
  BRUSHOBJ *pbo; // r14
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  LINEATTRS *plineattrs; // rsi
  struct _CLIPOBJ *v22; // rdx
  XFORMOBJ *v23; // rax
  struct _CLIPOBJ *v24; // r9
  PATHOBJ *v25; // r15
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *v28; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-1C8h]
  PATHOBJ *ppo; // [rsp+58h] [rbp-1C0h]
  POINTL *pptlBrushOrg; // [rsp+60h] [rbp-1B8h] BYREF
  XFORMOBJ *pxo; // [rsp+68h] [rbp-1B0h]
  struct _CLIPOBJ *DDIOBJ; // [rsp+70h] [rbp-1A8h]
  XFORMOBJ *v34; // [rsp+78h] [rbp-1A0h]
  struct _POINTL v35; // [rsp+80h] [rbp-198h] BYREF
  struct UMPDOBJ *v36; // [rsp+88h] [rbp-190h]
  SURFOBJ *v37; // [rsp+90h] [rbp-188h]
  struct _CLIPOBJ *v38; // [rsp+98h] [rbp-180h]
  struct _BRUSHOBJ v39; // [rsp+A0h] [rbp-178h] BYREF
  struct _LINEATTRS v40; // [rsp+B8h] [rbp-160h] BYREF
  SURFOBJ *pso[8]; // [rsp+E0h] [rbp-138h] BYREF
  _BYTE v42[160]; // [rsp+120h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+1C0h] [rbp-58h]

  v34 = a4;
  v29 = a2;
  v38 = a3;
  pxo = a4;
  pptlBrushOrg = a6;
  v28 = a7;
  v35 = 0LL;
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  v36 = ThreadCurrentObj;
  v12 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( ThreadCurrentObj )
    ++*v12;
  DDIOBJ = (struct _CLIPOBJ *)((char *)ThreadCurrentObj + 436);
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v14 = pso[0];
  v37 = pso[0];
  ppo = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v11, v29);
  v15 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v11, (__int64)a5);
  pbo = v15;
  if ( !v15 )
  {
    v15 = CaptureAndFakeBRUSHOBJ(a5, &v39);
    pbo = v15;
    v16 = ppo;
  }
  v29 = (__int64)v15;
  if ( v14 && pbo && v16 && v28 && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v35);
    v20 = bCaptureLINEATTRS(&v28, &v40, v18, v19);
    plineattrs = v28;
    if ( v20 )
    {
      v22 = a3;
      if ( (*((_DWORD *)v11 + 107) & 0x100) != 0 && (v28->fl & 1) != 0 )
        v20 &= -(a3 != 0LL);
    }
    else
    {
      v22 = a3;
    }
    if ( v20 )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v11, v22, &v14->sizlBitmap);
      v23 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v11, (__int64)v34);
      pxo = v23;
      if ( (plineattrs->fl & 1) != 0 )
        v20 &= -(v23 != 0LL);
      v25 = ppo;
      v20 = v20
         && (unsigned int)bCheckSurfacePath(v14, ppo, v24)
         && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1);
      if ( v20 )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v42, v14, DDIOBJ, 0LL);
        v20 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v42)
           && EngStrokePath(v14, v25, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v42);
      }
      pstyle = plineattrs->pstyle;
      if ( pstyle )
        Win32FreePool(pstyle);
    }
  }
  else
  {
    v20 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v12;
  return v20;
}
