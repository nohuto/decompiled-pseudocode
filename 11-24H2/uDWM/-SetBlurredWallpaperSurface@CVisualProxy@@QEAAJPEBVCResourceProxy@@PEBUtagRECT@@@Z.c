/*
 * XREFs of ?SetBlurredWallpaperSurface@CVisualProxy@@QEAAJPEBVCResourceProxy@@PEBUtagRECT@@@Z @ 0x180080D0C
 * Callers:
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x180077090 (-SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::SetBlurredWallpaperSurface(
        CVisualProxy *this,
        const struct CResourceProxy *a2,
        const struct tagRECT *a3)
{
  __int64 v4; // r8

  v4 = 0LL;
  if ( a2 )
    v4 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct tagRECT *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                                  + 16LL)
                                                                                    + 256LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v4,
           a3);
}
