/*
 * XREFs of __tailMerge_gdi32_dll @ 0x1802D8E25
 * Callers:
 *     __imp_load_CombineRgn @ 0x1802D8EA4 (__imp_load_CombineRgn.c)
 *     __imp_load_DeleteObject @ 0x1802D8EB6 (__imp_load_DeleteObject.c)
 *     __imp_load_CreateCompatibleBitmap @ 0x1802D8EC8 (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x1802D8EDA (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_CreateSolidBrush @ 0x1802D8EEC (__imp_load_CreateSolidBrush.c)
 *     __imp_load_GetStockObject @ 0x1802D8EFE (__imp_load_GetStockObject.c)
 *     __imp_load_CreateDIBSection @ 0x1802D8F10 (__imp_load_CreateDIBSection.c)
 *     __imp_load_GetObjectW @ 0x1802D8F22 (__imp_load_GetObjectW.c)
 *     __imp_load_CreateCompatibleDC @ 0x1802D8F34 (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_SelectObject @ 0x1802D8F46 (__imp_load_SelectObject.c)
 *     __imp_load_DeleteDC @ 0x1802D8F58 (__imp_load_DeleteDC.c)
 *     __imp_load_GetDIBits @ 0x1802D8F6A (__imp_load_GetDIBits.c)
 *     __imp_load_StretchDIBits @ 0x1802D8F7C (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x1802D8F8E (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_SetBkColor @ 0x1802D8FA0 (__imp_load_SetBkColor.c)
 *     __imp_load_BitBlt @ 0x1802D8FB2 (__imp_load_BitBlt.c)
 *     __imp_load_SetStretchBltMode @ 0x1802D8FC4 (__imp_load_SetStretchBltMode.c)
 *     __imp_load_StretchBlt @ 0x1802D8FD6 (__imp_load_StretchBlt.c)
 *     __imp_load_GetDeviceCaps @ 0x1802D8FE8 (__imp_load_GetDeviceCaps.c)
 *     __imp_load_SetBkMode @ 0x1802DAFF9 (__imp_load_SetBkMode.c)
 *     __imp_load_GetCurrentObject @ 0x1802DB00B (__imp_load_GetCurrentObject.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_gdi32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_gdi32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
