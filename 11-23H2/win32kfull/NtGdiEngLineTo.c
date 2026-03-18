/*
 * XREFs of NtGdiEngLineTo @ 0x1C02C9990
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013D8D8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C013FCD0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C013FCEC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     EngLineTo @ 0x1C028CCA0 (EngLineTo.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C652C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C66B8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6870 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C68CC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C6A6C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C6AEC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02C7340 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG a4,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  UMPDOBJ *v14; // r15
  _DWORD *v15; // rdi
  SURFOBJ *v17; // r14
  BRUSHOBJ *v18; // rsi
  struct _CLIPOBJ *DDIOBJ; // rax
  unsigned int v20; // ebx
  struct _CLIPOBJ *v21; // r8
  RECTL *prclBounds; // [rsp+60h] [rbp-1A8h] BYREF
  struct _CLIPOBJ *v23; // [rsp+68h] [rbp-1A0h]
  struct _SURFOBJ **v24; // [rsp+70h] [rbp-198h]
  char *v25; // [rsp+78h] [rbp-190h]
  SURFOBJ *v26; // [rsp+80h] [rbp-188h]
  struct _CLIPOBJ *v27; // [rsp+88h] [rbp-180h]
  struct _BRUSHOBJ v28; // [rsp+90h] [rbp-178h] BYREF
  SURFOBJ *pso[8]; // [rsp+B0h] [rbp-158h] BYREF
  struct _RECTL v30; // [rsp+F0h] [rbp-118h] BYREF
  struct _RECTL v31; // [rsp+100h] [rbp-108h] BYREF
  _BYTE v32[160]; // [rsp+110h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+1B0h] [rbp-58h]

  v23 = a2;
  v27 = a2;
  prclBounds = a8;
  v31 = 0LL;
  v30.left = a4;
  v30.top = y1;
  v30.right = x2;
  v30.bottom = y2;
  memset(&v28, 0, sizeof(v28));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = (UMPDOBJ *)ThreadCurrentObj;
  v24 = ThreadCurrentObj;
  v15 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v15;
  v25 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v17 = pso[0];
  v26 = pso[0];
  v18 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a3);
  if ( !v18 )
    v18 = CaptureAndFakeBRUSHOBJ(a3, &v28);
  if ( v17 && v18 )
  {
    CaptureRECTL(&prclBounds, &v31);
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v23, &v17->sizlBitmap);
    v20 = bCheckSurfaceRect(v17, &v30, DDIOBJ);
    if ( v20 )
    {
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v32, v17, v21, 0LL);
      v20 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v32)
         && EngLineTo(v17, pco, v18, a4, y1, x2, y2, prclBounds, mix);
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v32);
    }
  }
  else
  {
    v20 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v15;
  return v20;
}
