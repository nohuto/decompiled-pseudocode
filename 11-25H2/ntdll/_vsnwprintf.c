/*
 * XREFs of _vsnwprintf @ 0x180124640
 * Callers:
 *     RtlStringCchPrintfExW @ 0x18007B880 (RtlStringCchPrintfExW.c)
 *     StringCbPrintfW @ 0x180083268 (StringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x180084A7C (RtlStringCchPrintfW.c)
 *     RtlStringCbPrintfExW @ 0x1800AF7C0 (RtlStringCbPrintfExW.c)
 *     StringCchPrintfW @ 0x1800B67F4 (StringCchPrintfW.c)
 *     RtlStringCbPrintfW @ 0x18011EF2C (RtlStringCbPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x18012465C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
