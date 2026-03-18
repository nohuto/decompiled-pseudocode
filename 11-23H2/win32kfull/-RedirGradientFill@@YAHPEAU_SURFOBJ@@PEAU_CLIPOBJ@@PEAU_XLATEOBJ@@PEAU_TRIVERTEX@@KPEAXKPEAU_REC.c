/*
 * XREFs of ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A44A0
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C0002BB0 (EngGradientFill.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C015A4DE (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3844 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5DE8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
  __int64 v14; // rcx
  ULONG ulMode; // r12d
  POINTL *pptlDitherOrg; // r13
  __int64 HDEV; // rbx
  __int64 v18; // rdx
  Gre::Base *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  _QWORD *i; // rbx
  __int64 v24; // r9
  unsigned int v25; // ebx
  __int64 v27; // [rsp+68h] [rbp-79h] BYREF
  struct SURFACE *v28; // [rsp+70h] [rbp-71h] BYREF
  __int128 v29; // [rsp+78h] [rbp-69h] BYREF
  __int64 v30; // [rsp+88h] [rbp-59h]
  int v31; // [rsp+90h] [rbp-51h]
  _QWORD v32[2]; // [rsp+98h] [rbp-49h] BYREF
  _BYTE v33[40]; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-11h]
  __int64 v35; // [rsp+D8h] [rbp-9h]
  __int64 v36; // [rsp+118h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a1);
  ulMode = a10;
  pptlDitherOrg = a9;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v14);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v32);
        v35 = 0LL;
        v34 = 0LL;
        v32[0] = 0LL;
        v22 = *(_DWORD *)(HDEV + 40);
        v29 = 0LL;
        v31 = 1;
        if ( (v22 & 1) != 0 )
        {
          Gre::Base::Globals(v19);
          *(_QWORD *)&v29 = *(_QWORD *)(HDEV + 48);
          v30 = HDEV;
          GreAcquireSemaphore(v29);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v29, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
          {
            v21 = i[6];
            v36 = v21;
            if ( v21 )
            {
              if ( (*(_DWORD *)(v21 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v21 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v21 + 1760) + 608LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v27,
                    (struct PDEVOBJ *)&v36,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v24 + 1760) + 608LL))(
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
                  if ( v27 )
                    *(_WORD *)(v27 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v29, v18, v20, v21);
        if ( v32[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v32);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v33);
      }
    }
  }
  v25 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
  if ( v28 )
    bMakeOpaque(v28);
  return v25;
}
