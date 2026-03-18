/*
 * XREFs of ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1402FE1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401D5CDC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401D9928 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     EngStrokeAndFillPath @ 0x1401E6AC0 (EngStrokeAndFillPath.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FCA7C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FCAC4 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX a9,
        FLONG a10)
{
  FLONG flOptions; // r12d
  MIX mixFill; // r13d
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v22[8]; // [rsp+70h] [rbp-98h] BYREF
  struct SURFACE *v23[2]; // [rsp+78h] [rbp-90h] BYREF
  HDC v24[18]; // [rsp+88h] [rbp-80h] BYREF
  __int64 HDEV; // [rsp+148h] [rbp+40h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)v23, a1);
  flOptions = a10;
  mixFill = a9;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1784); i; i = (_QWORD *)*i )
          {
            v17 = i[6];
            v21 = v17;
            if ( v17
              && (*(_DWORD *)(v17 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v17 + 2112) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v17 + 1776) + 200LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v22,
                (struct PDEVOBJ *)&v21,
                a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v18 + 1776) + 200LL))(
                a1,
                ppo,
                pco,
                pxo,
                pboStroke,
                plineattrs,
                pboFill,
                pptlBrushOrg,
                mixFill,
                flOptions);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v22);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ(v24);
      }
    }
  }
  v19 = EngStrokeAndFillPath(a1, ppo, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
  REDIROPEN::~REDIROPEN(v23);
  return v19;
}
