/*
 * XREFs of NtGdiEngPaint @ 0x140339AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400DC2AC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     EngPaint @ 0x1400E4A40 (EngPaint.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401ECCC0 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14021B100 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 */

__int64 __fastcall NtGdiEngPaint(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _BRUSHOBJ *a3, POINTL *a4, MIX a5)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v9; // r9
  UMPDOBJ *v10; // rsi
  SURFOBJ *v12; // r14
  struct _CLIPOBJ *DDIOBJ; // rbx
  BRUSHOBJ *v14; // rsi
  MIX mix; // r15d
  unsigned int v16; // edi
  struct _POINTL v17; // [rsp+30h] [rbp-108h] BYREF
  struct _BRUSHOBJ v18; // [rsp+38h] [rbp-100h] BYREF
  SURFOBJ *pso[8]; // [rsp+50h] [rbp-E8h] BYREF
  struct W32_PUSH_LOCK *v20[4]; // [rsp+90h] [rbp-A8h] BYREF
  UMPDOBJ *v21; // [rsp+B0h] [rbp-88h]
  POINTL *pptlBrushOrg; // [rsp+158h] [rbp+20h] BYREF

  pptlBrushOrg = a4;
  v17 = 0LL;
  memset(&v18, 0, sizeof(v18));
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v20, CurrentThread);
  v10 = v21;
  if ( v21 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v21, v9);
    v12 = pso[0];
    if ( pso[0] )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a2, &pso[0]->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v14 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v10, (__int64)a3);
    if ( !v14 )
      v14 = CaptureAndFakeBRUSHOBJ(a3, &v18);
    if ( v12 && DDIOBJ && !DDIOBJ->iMode && (mix = a5, (a5 & 0xFF00) != 0) )
    {
      CapturePOINTL(&pptlBrushOrg, &v17);
      v16 = bCheckSurfaceRect(v12, 0LL, DDIOBJ);
      if ( v16 )
        v16 = EngPaint(v12, DDIOBJ, v14, pptlBrushOrg, mix);
    }
    else
    {
      v16 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v20);
    return v16;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v20);
    return 0LL;
  }
}
