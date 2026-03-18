/*
 * XREFs of ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x180042C10
 * Callers:
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x180042B30 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180042BC0 (-IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@WEI@EBA_NXZ @ 0x1802D6820 (-IsHardwareProtected@CD2DBitmap@@WEI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@WFI@EBA_NXZ @ 0x1802D6830 (-IsHardwareProtected@CD2DBitmap@@WFI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DBitmap::IsHardwareProtected(CD2DBitmap *this)
{
  return (*((_DWORD *)this + 46) & 0x80000) != 0;
}
