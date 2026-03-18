/*
 * XREFs of ?QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802123B0
 * Callers:
 *     ?QueryInterface@CGlobalCompositionSurfaceInfo@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802915C0 (-QueryInterface@CGlobalCompositionSurfaceInfo@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD3DDevice@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802BD6B0 (-QueryInterface@CD3DDevice@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicFrameProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D66D0 (-QueryInterface@CHolographicFrameProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicFrameProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D66E0 (-QueryInterface@CHolographicFrameProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSectionBitmapRealization@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6E10 (-QueryInterface@CSectionBitmapRealization@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWICBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6E20 (-QueryInterface@CWICBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6E30 (-QueryInterface@CGDIBitmapRealization@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6E50 (-QueryInterface@CGDIBitmapRealization@@WBFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6E70 (-QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D8100 (-QueryInterface@CGDIBitmapRealization@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D8120 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStereoRenderTargetBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802DAA40 (-QueryInterface@CStereoRenderTargetBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHolographicFrameProcessor::QueryInterface(
        CGDISectionBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
