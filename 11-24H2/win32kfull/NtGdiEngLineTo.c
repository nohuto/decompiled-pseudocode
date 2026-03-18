/*
 * XREFs of NtGdiEngLineTo @ 0x140339840
 * Callers:
 *     <none>
 * Callees:
 *     EngLineTo @ 0x140007EE0 (EngLineTo.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400DC2AC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1401FE608 (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14021B100 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FA688 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1403388E0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x140338BA4 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        RECTL *a2,
        struct _BRUSHOBJ *a3,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v14; // r9
  UMPDOBJ *v15; // r14
  SURFOBJ *v17; // rsi
  BRUSHOBJ *v18; // rdi
  struct _CLIPOBJ *DDIOBJ; // rax
  unsigned int v20; // ebx
  struct _CLIPOBJ *v21; // r8
  RECTL *prclBounds[4]; // [rsp+60h] [rbp-208h] BYREF
  struct _BRUSHOBJ v23; // [rsp+80h] [rbp-1E8h] BYREF
  SURFOBJ *pso[8]; // [rsp+A0h] [rbp-1C8h] BYREF
  struct W32_PUSH_LOCK *v25[4]; // [rsp+E0h] [rbp-188h] BYREF
  UMPDOBJ *v26; // [rsp+100h] [rbp-168h]
  struct _RECTL v27; // [rsp+150h] [rbp-118h] BYREF
  struct _RECTL v28; // [rsp+160h] [rbp-108h] BYREF
  _BYTE v29[160]; // [rsp+170h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+210h] [rbp-58h]

  prclBounds[3] = a2;
  prclBounds[0] = a8;
  v28 = 0LL;
  v27.left = x1;
  v27.top = y1;
  v27.right = x2;
  v27.bottom = y2;
  memset(&v23, 0, sizeof(v23));
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v25, CurrentThread);
  v15 = v26;
  prclBounds[1] = (RECTL *)v26;
  if ( v26 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v26, v14);
    v17 = pso[0];
    prclBounds[2] = (RECTL *)pso[0];
    v18 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v15, (__int64)a3);
    if ( !v18 )
      v18 = CaptureAndFakeBRUSHOBJ(a3, &v23);
    if ( v17 && v18 )
    {
      CaptureRECTL(prclBounds, &v28);
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v15, (struct _CLIPOBJ *)a2, &v17->sizlBitmap);
      v20 = bCheckSurfaceRect(v17, &v27, DDIOBJ);
      if ( v20 )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v29, v17, v21, 0LL);
        v20 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v29)
           && EngLineTo(v17, pco, v18, x1, y1, x2, y2, prclBounds[0], mix);
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v29);
      }
    }
    else
    {
      v20 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v25);
    return v20;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v25);
    return 0LL;
  }
}
