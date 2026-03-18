/*
 * XREFs of ?BmpDevTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1402FC290
 * Callers:
 *     <none>
 * Callees:
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401D5CDC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401D9928 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FA930 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1402FA978 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1402FC494 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BmpDevTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v12; // ebp
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rbx
  __int64 v16; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v18; // r11
  __int64 v20; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v21[8]; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v22; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v23; // [rsp+68h] [rbp-30h] BYREF

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v23, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v22, a2);
  if ( a1 )
  {
    v13 = ((__int64)a1[1].hsurf & 0x8000) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a1->hdev + 409)
        : EngTransparentBlt;
    v12 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))v13)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1784); i; i = *(struct _DISPSURF **)i )
        {
          v16 = *((_QWORD *)i + 6);
          v20 = v16;
          if ( v16
            && (*(_DWORD *)(v16 + 1808) & 0x8000000) != 0
            && (*(_DWORD *)(v16 + 2112) & 0x9000) == 0x9000
            && *(_QWORD *)(*(_QWORD *)(v16 + 1776) + 664LL) )
          {
            MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
              (MARK_ACCDRV_NOTIFICATION *)v21,
              (struct PDEVOBJ *)&v20,
              a1);
            GetDevBitmap(i, a2);
            DevBitmap = GetDevBitmap(i, a1);
            (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))(*(_QWORD *)(v16 + 1776) + 664LL))(
              DevBitmap,
              v18,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8);
            MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v21);
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v22);
  BMPDEVOPEN::~BMPDEVOPEN(&v23);
  return v12;
}
