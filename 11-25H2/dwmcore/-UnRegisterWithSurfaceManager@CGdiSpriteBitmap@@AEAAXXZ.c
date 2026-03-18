/*
 * XREFs of ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104A30
 * Callers:
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1801030FC (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801040AC (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1801042B8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801044C0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18010407C (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGdiSpriteBitmap::UnRegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  char *v2; // rax
  __int64 v3; // rdx
  char **v4; // rcx
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 150) )
  {
    v2 = (char *)this + 160;
    v3 = *((_QWORD *)this + 20);
    if ( *(CGdiSpriteBitmap **)(v3 + 8) != (CGdiSpriteBitmap *)((char *)this + 160)
      || (v4 = (char **)*((_QWORD *)this + 21), *v4 != v2) )
    {
      __fastfail(3u);
    }
    *v4 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *((_BYTE *)this + 150) = 0;
  }
  VtrSurfaceManager = TryGetVtrSurfaceManager();
  if ( VtrSurfaceManager )
  {
    v6 = *((_QWORD *)this + 10);
    (*(void (__fastcall **)(struct IVtrSurfaceManager *, __int64 *))(*(_QWORD *)VtrSurfaceManager + 24LL))(
      VtrSurfaceManager,
      &v6);
  }
}
