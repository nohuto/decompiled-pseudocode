/*
 * XREFs of ?ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlayInfo@@@Z @ 0x14009CB6C
 * Callers:
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14004E9F8 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ??$FindProperty@UPresentedContentOverlayInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentOverlayInfo@@@Z @ 0x14009C584 (--$FindProperty@UPresentedContentOverlayInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedConten.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerPostMessage(
        CFlipManager *this,
        struct CFlipConsumerMessage *a2,
        struct PresentedContentOverlayInfo **a3)
{
  if ( !(unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline()
    || *((_QWORD *)this + 6) != 1LL
    || (CFlipPropertySetBase::FindProperty<PresentedContentOverlayInfo>((__int64)a2, a3), !*a3) )
  {
    (*(void (__fastcall **)(_QWORD, struct CFlipConsumerMessage *))(**((_QWORD **)this + 28) + 8LL))(
      *((_QWORD *)this + 28),
      a2);
  }
}
