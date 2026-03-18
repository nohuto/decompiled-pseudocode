/*
 * XREFs of ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1801C1A6C
 * Callers:
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801C07C0 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1748 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1984 (-EnsureIndependentFlipState@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x180287CAC (-DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDirectFlipInfo::IsIndependentFlip(CDirectFlipInfo *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 352LL))(*((_QWORD *)this + 2));
}
