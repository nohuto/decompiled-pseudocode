/*
 * XREFs of ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02A4EA0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00B84B0 (EngStretchBlt.c)
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

__int64 __fastcall RedirStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode)
{
  __int64 v15; // rcx
  __int64 HDEV; // rbx
  __int64 v17; // rdx
  Gre::Base *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  struct _DISPSURF *i; // rdi
  __int64 v23; // rsi
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v25; // rax
  __int64 v26; // r11
  unsigned int v27; // ebx
  __int64 v29; // [rsp+68h] [rbp-89h] BYREF
  struct SURFACE *v30; // [rsp+70h] [rbp-81h] BYREF
  struct SURFACE *v31; // [rsp+78h] [rbp-79h] BYREF
  struct SURFACE *v32; // [rsp+80h] [rbp-71h] BYREF
  __int128 v33; // [rsp+88h] [rbp-69h] BYREF
  __int64 v34; // [rsp+98h] [rbp-59h]
  int v35; // [rsp+A0h] [rbp-51h]
  _QWORD v36[2]; // [rsp+A8h] [rbp-49h] BYREF
  _BYTE v37[40]; // [rsp+B8h] [rbp-39h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-11h]
  __int64 v39; // [rsp+E8h] [rbp-9h]
  __int64 v40; // [rsp+128h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v32, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v31, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a3);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v15);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v36);
        v39 = 0LL;
        v38 = 0LL;
        v36[0] = 0LL;
        v21 = *(_DWORD *)(HDEV + 40);
        v33 = 0LL;
        v35 = 1;
        if ( (v21 & 1) != 0 )
        {
          Gre::Base::Globals(v18);
          *(_QWORD *)&v33 = *(_QWORD *)(HDEV + 48);
          v34 = HDEV;
          GreAcquireSemaphore(v33);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v33, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v23 = *((_QWORD *)i + 6);
            v40 = v23;
            if ( v23 )
            {
              if ( (*(_DWORD *)(v23 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v23 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v23 + 1760) + 224LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v29,
                    (struct PDEVOBJ *)&v40,
                    a1);
                  DevBitmap = GetDevBitmap(i, a3);
                  GetDevBitmap(i, a2);
                  v25 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v23 + 1760) + 224LL))(
                    v25,
                    v26,
                    DevBitmap,
                    pco,
                    pxlo,
                    pca,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode);
                  if ( v29 )
                    *(_WORD *)(v29 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v33, v17, v19, v20);
        if ( v36[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v36);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v37);
      }
    }
  }
  v27 = EngStretchBlt(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  if ( v30 )
    bMakeOpaque(v30);
  if ( v31 )
    bMakeOpaque(v31);
  if ( v32 )
    bMakeOpaque(v32);
  return v27;
}
