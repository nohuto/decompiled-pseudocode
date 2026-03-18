/*
 * XREFs of NtGdiGetDCDpiScaleValue @ 0x14026DD90
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x14018D780 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetDCDpiScaleValue(HDC a1)
{
  return GreGetDCDpiScaleValue(a1);
}
