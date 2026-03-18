/*
 * XREFs of ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A56F0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C000D340 (EngStrokePath.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C015A4DE (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3844 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5DE8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *a7,
        MIX a8)
{
  __int64 v12; // rcx
  MIX mix; // r12d
  LINEATTRS *plineattrs; // r13
  __int64 HDEV; // rbx
  __int64 v16; // rdx
  Gre::Base *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  _QWORD *i; // rbx
  __int64 v22; // r9
  unsigned int v23; // ebx
  __int64 v25; // [rsp+58h] [rbp-69h] BYREF
  struct SURFACE *v26; // [rsp+60h] [rbp-61h] BYREF
  __int128 v27; // [rsp+68h] [rbp-59h] BYREF
  __int64 v28; // [rsp+78h] [rbp-49h]
  int v29; // [rsp+80h] [rbp-41h]
  _QWORD v30[2]; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v31[40]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-1h]
  __int64 v33; // [rsp+C8h] [rbp+7h]
  __int64 v34; // [rsp+108h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a1);
  mix = a8;
  plineattrs = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v12);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v30);
        v33 = 0LL;
        v32 = 0LL;
        v30[0] = 0LL;
        v20 = *(_DWORD *)(HDEV + 40);
        v27 = 0LL;
        v29 = 1;
        if ( (v20 & 1) != 0 )
        {
          Gre::Base::Globals(v17);
          *(_QWORD *)&v27 = *(_QWORD *)(HDEV + 48);
          v28 = HDEV;
          GreAcquireSemaphore(v27);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v27, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
          {
            v19 = i[6];
            v34 = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1760) + 176LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v34,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v22 + 1760) + 176LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v27, v16, v18, v19);
        if ( v30[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v30);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v31);
      }
    }
  }
  v23 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  if ( v26 )
    bMakeOpaque(v26);
  return v23;
}
