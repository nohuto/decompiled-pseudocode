/*
 * XREFs of ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1402FD680
 * Callers:
 *     <none>
 * Callees:
 *     EngLineTo @ 0x140007EE0 (EngLineTo.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401D5CDC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401D9928 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FCA7C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FCAC4 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG a7,
        RECTL *a8,
        MIX a9)
{
  MIX mix; // r15d
  RECTL *prclBounds; // r12
  LONG y2; // r13d
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v21; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-D0h] BYREF
  struct SURFACE *v23[2]; // [rsp+60h] [rbp-C8h] BYREF
  HDC v24[18]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 HDEV; // [rsp+130h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)v23, a1);
  mix = a9;
  prclBounds = a8;
  y2 = a7;
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
              && *(_QWORD *)(*(_QWORD *)(v17 + 1776) + 320LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v22,
                (struct PDEVOBJ *)&v21,
                a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v18 + 1776) + 320LL))(
                a1,
                pco,
                pbo,
                x1,
                y1,
                x2,
                y2,
                prclBounds,
                mix);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v22);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ(v24);
      }
    }
  }
  v19 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  REDIROPEN::~REDIROPEN(v23);
  return v19;
}
