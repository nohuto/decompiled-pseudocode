/*
 * XREFs of ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C02C6F10
 * Callers:
 *     NtGdiEngCreateBitmap @ 0x1C02C8B30 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x1C02C8DA0 (NtGdiEngCreateDeviceBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C02C8DF0 (NtGdiEngCreateDeviceSurface.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidUmpdSizl(struct tagSIZE a1, char a2)
{
  return a1.cx > 0 && a1.cy > 0 && (!a2 || (unsigned __int64)(a1.cx * (__int64)a1.cy) <= 0xFFFFFFFF);
}
