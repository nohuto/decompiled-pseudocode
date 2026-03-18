/*
 * XREFs of ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C02A5180
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBltROP @ 0x1C0046A80 (EngStretchBltROP.c)
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

__int64 __fastcall RedirStretchBltROP(
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
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  __int64 v17; // rcx
  __int64 HDEV; // rbx
  __int64 v19; // rdx
  Gre::Base *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  struct _DISPSURF *i; // rdi
  __int64 v25; // rsi
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v27; // rax
  __int64 v28; // r11
  unsigned int v29; // ebx
  __int64 v31; // [rsp+78h] [rbp-89h] BYREF
  struct SURFACE *v32; // [rsp+80h] [rbp-81h] BYREF
  struct SURFACE *v33; // [rsp+88h] [rbp-79h] BYREF
  struct SURFACE *v34; // [rsp+90h] [rbp-71h] BYREF
  __int128 v35; // [rsp+98h] [rbp-69h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-59h]
  int v37; // [rsp+B0h] [rbp-51h]
  _QWORD v38[2]; // [rsp+B8h] [rbp-49h] BYREF
  _BYTE v39[40]; // [rsp+C8h] [rbp-39h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-11h]
  __int64 v41; // [rsp+F8h] [rbp-9h]
  __int64 v42; // [rsp+138h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v34, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v33, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v32, a3);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v17);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v38);
        v41 = 0LL;
        v40 = 0LL;
        v38[0] = 0LL;
        v23 = *(_DWORD *)(HDEV + 40);
        v35 = 0LL;
        v37 = 1;
        if ( (v23 & 1) != 0 )
        {
          Gre::Base::Globals(v20);
          *(_QWORD *)&v35 = *(_QWORD *)(HDEV + 48);
          v36 = HDEV;
          GreAcquireSemaphore(v35);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v35, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v25 = *((_QWORD *)i + 6);
            v42 = v25;
            if ( v25 )
            {
              if ( (*(_DWORD *)(v25 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v25 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v25 + 1760) + 616LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v31,
                    (struct PDEVOBJ *)&v42,
                    a1);
                  DevBitmap = GetDevBitmap(i, a3);
                  GetDevBitmap(i, a2);
                  v27 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(v25 + 1760) + 616LL))(
                    v27,
                    v28,
                    DevBitmap,
                    pco,
                    pxlo,
                    pca,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4);
                  if ( v31 )
                    *(_WORD *)(v31 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v35, v19, v21, v22);
        if ( v38[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v38);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v39);
      }
    }
  }
  v29 = EngStretchBltROP(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  if ( v32 )
    bMakeOpaque(v32);
  if ( v33 )
    bMakeOpaque(v33);
  if ( v34 )
    bMakeOpaque(v34);
  return v29;
}
