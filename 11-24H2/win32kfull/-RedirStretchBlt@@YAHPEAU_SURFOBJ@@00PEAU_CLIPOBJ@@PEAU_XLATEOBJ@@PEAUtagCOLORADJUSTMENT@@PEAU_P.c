/*
 * XREFs of ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1402FDCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     EngStretchBlt @ 0x140136200 (EngStretchBlt.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401D5CDC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401D9928 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1402FC494 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FCA7C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FCAC4 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
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
  struct _DISPSURF *i; // rdi
  __int64 v16; // rsi
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v18; // rax
  __int64 v19; // r11
  unsigned int v20; // ebx
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-98h] BYREF
  struct SURFACE *v24; // [rsp+78h] [rbp-90h] BYREF
  struct SURFACE *v25; // [rsp+80h] [rbp-88h] BYREF
  struct SURFACE *v26[2]; // [rsp+88h] [rbp-80h] BYREF
  HDC v27[18]; // [rsp+98h] [rbp-70h] BYREF
  __int64 HDEV; // [rsp+158h] [rbp+50h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)v26, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a3);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v27, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1784); i; i = *(struct _DISPSURF **)i )
          {
            v16 = *((_QWORD *)i + 6);
            v22 = v16;
            if ( v16
              && (*(_DWORD *)(v16 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v16 + 2112) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v16 + 1776) + 232LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v23,
                (struct PDEVOBJ *)&v22,
                a1);
              DevBitmap = GetDevBitmap(i, a3);
              GetDevBitmap(i, a2);
              v18 = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v16 + 1776) + 232LL))(
                v18,
                v19,
                DevBitmap,
                pco,
                pxlo,
                pca,
                pptlHTOrg,
                prclDest,
                prclSrc,
                pptlMask,
                iMode);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v23);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ(v27);
      }
    }
  }
  v20 = EngStretchBlt(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  REDIROPEN::~REDIROPEN(&v24);
  REDIROPEN::~REDIROPEN(&v25);
  REDIROPEN::~REDIROPEN(v26);
  return v20;
}
