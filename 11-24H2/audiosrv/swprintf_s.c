/*
 * XREFs of swprintf_s @ 0x1800A4FDC
 * Callers:
 *     ?IsValidContainerType@@YAJU_GUID@@@Z @ 0x180016280 (-IsValidContainerType@@YAJU_GUID@@@Z.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x180049450 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800A39C4 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x1800A4D9A (__stdio_common_vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v6, Buffer, BufferCount, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
