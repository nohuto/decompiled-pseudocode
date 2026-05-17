/*
 * XREFs of _vsnwprintf @ 0x180122B60
 * Callers:
 *     RtlStringCchPrintfExW @ 0x180014270 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x180087430 (RtlStringCbPrintfExW.c)
 *     StringCchPrintfW @ 0x18008D948 (StringCchPrintfW.c)
 *     StringCbPrintfW @ 0x1800B4B18 (StringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x1800B56AC (RtlStringCchPrintfW.c)
 *     RtlStringCbPrintfW @ 0x18011D65C (RtlStringCbPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x180122B7C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
