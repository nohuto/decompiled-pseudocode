/*
 * XREFs of ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x18005B850
 * Callers:
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18005B770 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18005B800 (-IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@WEI@EBA_NXZ @ 0x1802CD5B0 (-IsHardwareProtected@CD2DBitmap@@WEI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@WFI@EBA_NXZ @ 0x1802CD5C0 (-IsHardwareProtected@CD2DBitmap@@WFI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DBitmap::IsHardwareProtected(CD2DBitmap *this)
{
  return (*((_DWORD *)this + 46) & 0x80000) != 0;
}
