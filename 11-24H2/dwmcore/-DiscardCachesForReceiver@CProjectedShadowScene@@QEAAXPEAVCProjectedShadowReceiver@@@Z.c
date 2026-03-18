/*
 * XREFs of ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18024FFC4
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180168028 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180250644 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1802A1FEC (-OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ.c)
 * Callees:
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180168000 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 */

void __fastcall CProjectedShadowScene::DiscardCachesForReceiver(
        CProjectedShadowScene *this,
        struct CProjectedShadowReceiver *a2)
{
  __int64 **ReceiverEntry; // rax

  ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, a2);
  ReceiverEntry[3] = 0LL;
  std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(ReceiverEntry + 1);
}
