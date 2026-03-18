/*
 * XREFs of NtGdiEngPaint @ 0x1C02C9D40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngPaint @ 0x1C028E0F0 (EngPaint.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C652C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C66B8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6870 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C68CC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C6A40 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C6AEC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02C7340 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngPaint(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _BRUSHOBJ *a3, POINTL *a4, MIX a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  UMPDOBJ *v10; // r15
  _DWORD *v11; // rsi
  SURFOBJ *v13; // r14
  struct _CLIPOBJ *DDIOBJ; // rbx
  BRUSHOBJ *v15; // r15
  MIX mix; // r12d
  unsigned int v17; // edi
  struct _POINTL v18; // [rsp+30h] [rbp-A8h] BYREF
  char *v19; // [rsp+38h] [rbp-A0h]
  struct _BRUSHOBJ v20; // [rsp+40h] [rbp-98h] BYREF
  SURFOBJ *pso[15]; // [rsp+60h] [rbp-78h] BYREF
  POINTL *pptlBrushOrg; // [rsp+F8h] [rbp+20h] BYREF

  pptlBrushOrg = a4;
  v18 = 0LL;
  memset(&v20, 0, sizeof(v20));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = (UMPDOBJ *)ThreadCurrentObj;
  v11 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v11;
  v19 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v13 = pso[0];
  if ( pso[0] )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a2, &pso[0]->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v15 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v10, (__int64)a3);
  if ( !v15 )
    v15 = CaptureAndFakeBRUSHOBJ(a3, &v20);
  if ( v13 && DDIOBJ && !DDIOBJ->iMode && (mix = a5, (a5 & 0xFF00) != 0) )
  {
    CapturePOINTL(&pptlBrushOrg, &v18);
    v17 = bCheckSurfaceRect(v13, 0LL, DDIOBJ);
    if ( v17 )
      v17 = EngPaint(v13, DDIOBJ, v15, pptlBrushOrg, mix);
  }
  else
  {
    v17 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v11;
  return v17;
}
