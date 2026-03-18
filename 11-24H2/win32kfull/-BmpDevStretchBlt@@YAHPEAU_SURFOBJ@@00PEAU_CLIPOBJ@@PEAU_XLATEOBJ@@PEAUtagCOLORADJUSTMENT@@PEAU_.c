/*
 * XREFs of ?BmpDevStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1402FBA70
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

__int64 __fastcall BmpDevStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // r14d
  unsigned int v16; // eax
  __int64 HDEV; // rax
  struct _DISPSURF *v18; // rdi
  __int64 v19; // rbp
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v21; // rax
  __int64 v22; // r11
  __int64 v24; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v25[8]; // [rsp+68h] [rbp-50h] BYREF
  struct SURFACE *v26; // [rsp+70h] [rbp-48h] BYREF
  struct SURFACE *v27; // [rsp+78h] [rbp-40h] BYREF
  struct SURFACE *v28[2]; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+8h]

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v28, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a3);
  if ( a1 )
  {
    v16 = ((__int64)a1[1].hsurf & 2) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))a1->hdev
           + 355))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))EngStretchBlt)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11);
    v15 = v16;
    v29 = v16;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        v18 = **(struct _DISPSURF ***)(HDEV + 1784);
        if ( v18 )
        {
          do
          {
            v19 = *((_QWORD *)v18 + 6);
            v24 = v19;
            if ( v19
              && (*(_DWORD *)(v19 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v19 + 2112) & 0x9000) == 0x9000
              && *(_QWORD *)(*(_QWORD *)(v19 + 1776) + 232LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v25,
                (struct PDEVOBJ *)&v24,
                a1);
              DevBitmap = GetDevBitmap(v18, a3);
              GetDevBitmap(v18, a2);
              v21 = GetDevBitmap(v18, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, struct _RECTL *, struct _POINTL *, unsigned int))(*(_QWORD *)(v19 + 1776) + 232LL))(
                v21,
                v22,
                DevBitmap,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v25);
            }
            v18 = *(struct _DISPSURF **)v18;
          }
          while ( v18 );
          v15 = v29;
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v26);
  BMPDEVOPEN::~BMPDEVOPEN(&v27);
  BMPDEVOPEN::~BMPDEVOPEN(v28);
  return v15;
}
