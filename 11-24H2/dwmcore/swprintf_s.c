/*
 * XREFs of swprintf_s @ 0x180251B58
 * Callers:
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x18025DB0C (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180250874 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s_0 @ 0x18025284C (__stdio_common_vswprintf_s_0.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s_0(*v6, Buffer, BufferCount, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
