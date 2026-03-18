/*
 * XREFs of ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401D2870
 * Callers:
 *     <none>
 * Callees:
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140053C44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140054418 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1400546F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140054BCC (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140054C64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140054F2C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14005527C (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     OffStrokeAndFillPath @ 0x1401D3000 (OffStrokeAndFillPath.c)
 *     EngStrokeAndFillPath @ 0x1401E6AC0 (EngStrokeAndFillPath.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1401E8F68 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall MulStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        struct _BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  unsigned int v12; // r14d
  DHPDEV dhpdev; // rsi
  FLOAT_LONG v14; // ebx
  struct _SURFOBJ *v15; // rcx
  struct _BRUSHOBJ *v16; // r10
  struct _SURFOBJ *v17; // rdx
  int i; // eax
  BOOL (__stdcall *v20)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  int v23; // [rsp+80h] [rbp-80h] BYREF
  ULONG iSolidColor; // [rsp+84h] [rbp-7Ch]
  BRUSHOBJ *v25; // [rsp+88h] [rbp-78h]
  PVOID *p_pvScan0; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  PVOID pvRbrush; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  _DWORD v30[12]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v31[56]; // [rsp+E0h] [rbp-20h] BYREF
  struct _DISPSURF *v32; // [rsp+118h] [rbp+18h]
  __int64 v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  __int64 v35; // [rsp+130h] [rbp+30h]
  _BYTE v36[88]; // [rsp+140h] [rbp+40h] BYREF
  SURFOBJ *pso; // [rsp+198h] [rbp+98h]
  struct _RECTFX prectfx; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _RECTL v39; // [rsp+1C0h] [rbp+C0h] BYREF

  v12 = 1;
  dhpdev = a1->dhpdev;
  LODWORD(v14.e) = plineattrs->elStyleState;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v36, v15);
    v12 = EngStrokeAndFillPath(pso, ppo, a3, a4, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v36);
    v16 = pboFill;
  }
  v17 = (struct _SURFOBJ *)*((_QWORD *)dhpdev + 6);
  v27 = 0LL;
  v23 = 1;
  v25 = pboStroke;
  if ( v17 )
    p_pvScan0 = &v17[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  pvRbrush = 0LL;
  iSolidColor = -1;
  v29 = -1LL;
  if ( pboStroke )
  {
    pvRbrush = pboStroke->pvRbrush;
    iSolidColor = pboStroke->iSolidColor;
  }
  MULTIBRUSH::MULTIBRUSH((MULTIBRUSH *)v30, v16, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev, v17, 1);
  if ( !v30[0] )
    return 0LL;
  prectfx = 0LL;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v39.left = prectfx.xLeft >> 4;
  v39.top = prectfx.yTop >> 4;
  v39.right = (prectfx.xRight >> 4) + 2;
  v39.bottom = (prectfx.yBottom >> 4) + 2;
  for ( i = MSURF::bFindSurface((MSURF *)v31, a1, a3, &v39); i; i = MSURF::bNextSurface((MSURF *)v31) )
  {
    plineattrs->elStyleState = v14;
    PATHOBJ_vEnumStart(ppo);
    MULTIBRUSH::LoadElement((MULTIBRUSH *)&v23, v32, (struct SURFACE *)(v33 - 24));
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v30, v32, (struct SURFACE *)(v33 - 24));
    if ( (*(_DWORD *)(v33 + 88) & 0x80u) == 0 )
      v20 = EngStrokeAndFillPath;
    else
      v20 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*((_QWORD *)v32 + 7) + 2808LL);
    v12 &= OffStrokeAndFillPath(
             v20,
             v35,
             v33,
             ppo,
             v34,
             a4,
             pboStroke,
             plineattrs,
             pboFill,
             pptlBrushOrg,
             mixFill,
             flOptions);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)&v23, *((_DWORD *)v32 + 4));
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v30, *((_DWORD *)v32 + 4));
  }
  return v12;
}
