/*
 * XREFs of ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140051B60
 * Callers:
 *     <none>
 * Callees:
 *     EngLineTo @ 0x140007EE0 (EngLineTo.c)
 *     OffLineTo @ 0x140052D30 (OffLineTo.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140053C44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140054418 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1400546F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140054BCC (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140054C64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140054F2C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401F7F78 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall MulLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        struct _RECTL *a8,
        MIX mix)
{
  DHPDEV dhpdev; // r14
  unsigned int v14; // edi
  __int64 v15; // rcx
  int i; // eax
  BOOL (__stdcall *v18)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  int v19; // [rsp+60h] [rbp-A0h] BYREF
  ULONG iSolidColor; // [rsp+64h] [rbp-9Ch]
  BRUSHOBJ *v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  PVOID pvRbrush; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  _BYTE v26[56]; // [rsp+90h] [rbp-70h] BYREF
  struct _DISPSURF *v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  _BYTE v31[88]; // [rsp+F0h] [rbp-10h] BYREF
  SURFOBJ *pso; // [rsp+148h] [rbp+48h]
  RECTL *prclBounds; // [rsp+150h] [rbp+50h]

  dhpdev = a1->dhpdev;
  v14 = 1;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v31, a1, a8);
    v14 = EngLineTo(pso, a2, pbo, x1, y1, x2, y2, prclBounds, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v31);
  }
  v15 = *((_QWORD *)dhpdev + 6);
  v23 = 0LL;
  v19 = 1;
  v21 = pbo;
  if ( v15 )
    v22 = v15 - 24;
  else
    v22 = 0LL;
  pvRbrush = 0LL;
  iSolidColor = -1;
  v25 = -1LL;
  if ( pbo )
  {
    pvRbrush = pbo->pvRbrush;
    iSolidColor = pbo->iSolidColor;
  }
  for ( i = MSURF::bFindSurface((MSURF *)v26, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v26) )
  {
    MULTIBRUSH::LoadElement((MULTIBRUSH *)&v19, v27, (struct SURFACE *)(v28 - 24));
    if ( (*(_DWORD *)(v28 + 88) & 0x100) != 0 )
      v18 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v27 + 7) + 2928LL);
    else
      v18 = EngLineTo;
    v14 &= OffLineTo(v18, v30, v28, v29, pbo, x1, y1, x2, y2, a8, mix);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)&v19, *((_DWORD *)v27 + 4));
  }
  return v14;
}
