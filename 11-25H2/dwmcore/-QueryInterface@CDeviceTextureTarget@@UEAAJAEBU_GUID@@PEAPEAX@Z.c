/*
 * XREFs of ?QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18021D1E0
 * Callers:
 *     ?QueryInterface@CD3DSurface@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D1FA0 (-QueryInterface@CD3DSurface@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6920 (-QueryInterface@CDeviceTextureTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6930 (-QueryInterface@CD2DBitmap@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6940 (-QueryInterface@CD2DBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6950 (-QueryInterface@CD2DBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6F30 (-QueryInterface@CDeviceTextureTarget@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6F50 (-QueryInterface@CDeviceTextureTarget@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6F70 (-QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6F90 (-QueryInterface@CDeviceTextureTarget@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDeviceTextureTarget::QueryInterface(CD2DBitmap *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
