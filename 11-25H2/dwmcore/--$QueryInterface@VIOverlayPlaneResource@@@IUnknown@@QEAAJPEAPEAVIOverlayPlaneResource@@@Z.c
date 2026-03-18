/*
 * XREFs of ??$QueryInterface@VIOverlayPlaneResource@@@IUnknown@@QEAAJPEAPEAVIOverlayPlaneResource@@@Z @ 0x18020D694
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18002CF40 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1801BFBDC (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknown::QueryInterface<IOverlayPlaneResource>(CGDISectionBitmapRealization *a1, void **a2)
{
  __int64 (__fastcall *v2)(CGDISectionBitmapRealization *, const struct _GUID *, void **); // rax

  v2 = **(__int64 (__fastcall ***)(CGDISectionBitmapRealization *, const struct _GUID *, void **))a1;
  if ( v2 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface )
    return CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(
             a1,
             &GUID_462c710f_5601_454b_b804_03effd995c26,
             a2);
  else
    return v2(a1, &GUID_462c710f_5601_454b_b804_03effd995c26, a2);
}
