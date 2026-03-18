/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802119E0
 * Callers:
 *     ?QueryInterface@CD3DSurface@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C8D20 (-QueryInterface@CD3DSurface@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CD6B0 (-QueryInterface@CDeviceTextureTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CD6C0 (-QueryInterface@CD2DBitmap@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CD6D0 (-QueryInterface@CD2DBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CD6E0 (-QueryInterface@CD2DBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDCC0 (-QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDCE0 (-QueryInterface@CDeviceTextureTarget@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDD00 (-QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDD20 (-QueryInterface@CDeviceTextureTarget@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDeviceTextureTarget::QueryInterface(CD2DBitmap *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
