/*
 * XREFs of ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02A3890
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C00B72C0 (EngAlphaBlend.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C015A4DE (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02A25FC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3844 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5DE8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *a7)
{
  __int64 v11; // rcx
  BLENDOBJ *pBlendObj; // r13
  __int64 HDEV; // rbx
  __int64 v14; // rdx
  Gre::Base *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  struct _DISPSURF *i; // rbx
  __int64 v20; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v22; // r11
  unsigned int v23; // ebx
  __int64 v25; // [rsp+48h] [rbp-71h] BYREF
  struct SURFACE *v26; // [rsp+50h] [rbp-69h] BYREF
  struct SURFACE *v27; // [rsp+58h] [rbp-61h] BYREF
  __int128 v28; // [rsp+68h] [rbp-51h] BYREF
  __int64 v29; // [rsp+78h] [rbp-41h]
  int v30; // [rsp+80h] [rbp-39h]
  _QWORD v31[2]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v32[40]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+7h]
  __int64 v34; // [rsp+C8h] [rbp+Fh]
  __int64 v35; // [rsp+108h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a2);
  pBlendObj = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v11);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v31);
        v34 = 0LL;
        v33 = 0LL;
        v31[0] = 0LL;
        v18 = *(_DWORD *)(HDEV + 40);
        v28 = 0LL;
        v30 = 1;
        if ( (v18 & 1) != 0 )
        {
          Gre::Base::Globals(v15);
          *(_QWORD *)&v28 = *(_QWORD *)(HDEV + 48);
          v29 = HDEV;
          GreAcquireSemaphore(v28);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v28, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v20 = *((_QWORD *)i + 6);
            v35 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1760) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v35,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(v20 + 1760) + 632LL))(
                    DevBitmap,
                    v22,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28, v14, v16, v17);
        if ( v31[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v31);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v32);
      }
    }
  }
  v23 = EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  if ( v26 )
    bMakeOpaque(v26);
  if ( v27 )
    bMakeOpaque(v27);
  return v23;
}
