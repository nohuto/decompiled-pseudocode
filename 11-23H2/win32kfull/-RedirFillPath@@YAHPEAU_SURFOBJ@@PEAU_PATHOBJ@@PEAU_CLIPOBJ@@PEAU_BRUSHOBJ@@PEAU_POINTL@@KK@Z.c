/*
 * XREFs of ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A4280
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C015A4DE (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     EngFillPath @ 0x1C0288AF0 (EngFillPath.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3844 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5DE8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX a6,
        FLONG a7)
{
  __int64 v11; // rcx
  FLONG flOptions; // r12d
  MIX mix; // r13d
  __int64 HDEV; // rbx
  __int64 v15; // rdx
  Gre::Base *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  _QWORD *i; // rbx
  __int64 v21; // r9
  unsigned int v22; // ebx
  __int64 v24; // [rsp+48h] [rbp-61h] BYREF
  struct SURFACE *v25; // [rsp+50h] [rbp-59h] BYREF
  __int128 v26; // [rsp+58h] [rbp-51h] BYREF
  __int64 v27; // [rsp+68h] [rbp-41h]
  int v28; // [rsp+70h] [rbp-39h]
  _QWORD v29[2]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v30[40]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+7h]
  __int64 v32; // [rsp+B8h] [rbp+Fh]
  __int64 v33; // [rsp+F8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  flOptions = a7;
  mix = a6;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v11);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v29);
        v32 = 0LL;
        v31 = 0LL;
        v29[0] = 0LL;
        v19 = *(_DWORD *)(HDEV + 40);
        v26 = 0LL;
        v28 = 1;
        if ( (v19 & 1) != 0 )
        {
          Gre::Base::Globals(v16);
          *(_QWORD *)&v26 = *(_QWORD *)(HDEV + 48);
          v27 = HDEV;
          GreAcquireSemaphore(v26);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v26, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
          {
            v18 = i[6];
            v33 = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1760) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v33,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v21 + 1760) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26, v15, v17, v18);
        if ( v29[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v29);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v30);
      }
    }
  }
  v22 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
  if ( v25 )
    bMakeOpaque(v25);
  return v22;
}
