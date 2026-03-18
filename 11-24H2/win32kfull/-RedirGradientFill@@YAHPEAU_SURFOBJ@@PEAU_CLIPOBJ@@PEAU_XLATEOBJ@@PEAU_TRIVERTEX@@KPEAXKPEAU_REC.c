/*
 * XREFs of ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1402FD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     EngGradientFill @ 0x1401200C0 (EngGradientFill.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401D5CDC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401D9928 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FCA7C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FCAC4 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirGradientFill(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *a9,
        ULONG a10)
{
  ULONG ulMode; // r12d
  POINTL *pptlDitherOrg; // r13
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
  ulMode = a10;
  pptlDitherOrg = a9;
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
              && *(_QWORD *)(*(_QWORD *)(v17 + 1776) + 616LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v22,
                (struct PDEVOBJ *)&v21,
                a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v18 + 1776) + 616LL))(
                a1,
                pco,
                pxlo,
                pVertex,
                nVertex,
                pMesh,
                nMesh,
                prclExtents,
                pptlDitherOrg,
                ulMode);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v22);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ(v24);
      }
    }
  }
  v19 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
  REDIROPEN::~REDIROPEN(v23);
  return v19;
}
