/*
 * XREFs of ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1401D31C0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x140009AE0 (EngStrokePath.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140053C44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140054418 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1400546F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140054BCC (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140054C64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140054F2C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14005527C (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     OffStrokePath @ 0x140055738 (OffStrokePath.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1401E8F68 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall MulStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  unsigned int v10; // edi
  DHPDEV dhpdev; // rsi
  FLOAT_LONG v12; // ebx
  int i; // eax
  struct _DISPSURF *v14; // rdx
  struct SURFACE *p_pvScan0; // r8
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  _DWORD v20[14]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v21[56]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DISPSURF *v22; // [rsp+D8h] [rbp-28h]
  SURFOBJ *v23; // [rsp+E0h] [rbp-20h]
  CLIPOBJ *v24; // [rsp+E8h] [rbp-18h]
  int *v25; // [rsp+F0h] [rbp-10h]
  _BYTE v26[88]; // [rsp+100h] [rbp+0h] BYREF
  SURFOBJ *pso; // [rsp+158h] [rbp+58h]
  struct _RECTFX prectfx; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v29; // [rsp+180h] [rbp+80h] BYREF

  v10 = 1;
  dhpdev = a1->dhpdev;
  LODWORD(v12.e) = plineattrs->elStyleState;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v26, a1);
    v10 = EngStrokePath(pso, ppo, a3, a4, pbo, pptlBrushOrg, plineattrs, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v26);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v20,
    pbo,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v20[0] )
    return 0LL;
  prectfx = 0LL;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v29.left = prectfx.xLeft >> 4;
  v29.top = prectfx.yTop >> 4;
  v29.right = (prectfx.xRight >> 4) + 2;
  v29.bottom = (prectfx.yBottom >> 4) + 2;
  for ( i = MSURF::bFindSurface((MSURF *)v21, a1, a3, &v29); i; i = MSURF::bNextSurface((MSURF *)v21) )
  {
    PATHOBJ_vEnumStart(ppo);
    v14 = v22;
    p_pvScan0 = (struct SURFACE *)&v23[-1].pvScan0;
    plineattrs->elStyleState = v12;
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v20, v14, p_pvScan0);
    if ( ((__int64)v23[1].hsurf & 0x20) != 0 )
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*((_QWORD *)v22 + 7) + 2792LL);
    else
      v16 = EngStrokePath;
    v10 &= OffStrokePath(
             (__int64 (__fastcall *)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))v16,
             v25,
             v23,
             ppo,
             v24,
             a4,
             pbo,
             pptlBrushOrg,
             plineattrs,
             mix);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v20, *((_DWORD *)v22 + 4));
  }
  return v10;
}
