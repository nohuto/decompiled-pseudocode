/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x140337100
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x140330848 (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(HSURF a1)
{
  return GreGetBitmapDpiScaleValue(a1);
}
