/*
 * XREFs of ?QueryInterface@CHolographicFrameProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18021D900
 * Callers:
 *     ?QueryInterface@CGlobalCompositionSurfaceInfo@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029CB70 (-QueryInterface@CGlobalCompositionSurfaceInfo@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD3DDevice@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C6A40 (-QueryInterface@CD3DDevice@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicFrameProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802DF970 (-QueryInterface@CHolographicFrameProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHolographicFrameProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802DF980 (-QueryInterface@CHolographicFrameProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSectionBitmapRealization@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E00B0 (-QueryInterface@CSectionBitmapRealization@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWICBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E00C0 (-QueryInterface@CWICBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E00D0 (-QueryInterface@CGDIBitmapRealization@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E00F0 (-QueryInterface@CGDIBitmapRealization@@WBFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E0110 (-QueryInterface@CGDISectionBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGDIBitmapRealization@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E13A0 (-QueryInterface@CGDIBitmapRealization@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E13C0 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStereoRenderTargetBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E3CE0 (-QueryInterface@CStereoRenderTargetBitmap@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
