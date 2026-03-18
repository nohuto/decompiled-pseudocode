/*
 * XREFs of ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A5B80
 * Callers:
 *     <none>
 * Callees:
 *     EngTransparentBlt @ 0x1C009B650 (EngTransparentBlt.c)
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

__int64 __fastcall RedirTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG a8)
{
  __int64 v12; // rcx
  ULONG ulReserved; // r13d
  __int64 HDEV; // rbx
  __int64 v15; // rdx
  Gre::Base *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  struct _DISPSURF *i; // rbx
  __int64 v21; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v23; // r11
  unsigned int v24; // ebx
  __int64 v26; // [rsp+58h] [rbp-79h] BYREF
  struct SURFACE *v27; // [rsp+60h] [rbp-71h] BYREF
  struct SURFACE *v28; // [rsp+68h] [rbp-69h] BYREF
  __int128 v29; // [rsp+78h] [rbp-59h] BYREF
  __int64 v30; // [rsp+88h] [rbp-49h]
  int v31; // [rsp+90h] [rbp-41h]
  _QWORD v32[2]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v33[40]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-1h]
  __int64 v35; // [rsp+D8h] [rbp+7h]
  __int64 v36; // [rsp+118h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a2);
  ulReserved = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v12);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v32);
        v35 = 0LL;
        v34 = 0LL;
        v32[0] = 0LL;
        v19 = *(_DWORD *)(HDEV + 40);
        v29 = 0LL;
        v31 = 1;
        if ( (v19 & 1) != 0 )
        {
          Gre::Base::Globals(v16);
          *(_QWORD *)&v29 = *(_QWORD *)(HDEV + 48);
          v30 = HDEV;
          GreAcquireSemaphore(v29);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v29, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v21 = *((_QWORD *)i + 6);
            v36 = v21;
            if ( v21 )
            {
              if ( (*(_DWORD *)(v21 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v21 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v21 + 1760) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v36,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(v21 + 1760) + 656LL))(
                    DevBitmap,
                    v23,
                    pco,
                    pxlo,
                    prclDst,
                    prclSrc,
                    iTransColor,
                    ulReserved);
                  if ( v26 )
                    *(_WORD *)(v26 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v29, v15, v17, v18);
        if ( v32[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v32);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v33);
      }
    }
  }
  v24 = EngTransparentBlt(a1, a2, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  if ( v27 )
    bMakeOpaque(v27);
  if ( v28 )
    bMakeOpaque(v28);
  return v24;
}
