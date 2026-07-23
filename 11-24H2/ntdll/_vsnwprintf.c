/*
 * XREFs of _vsnwprintf @ 0x180120D90
 * Callers:
 *     RtlStringCbPrintfExW @ 0x1800092E0 (RtlStringCbPrintfExW.c)
 *     RtlStringCchPrintfExW @ 0x180040C70 (RtlStringCchPrintfExW.c)
 *     StringCbPrintfW @ 0x1800813B8 (StringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x180081F4C (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x1800A9408 (StringCchPrintfW.c)
 *     RtlStringCbPrintfW @ 0x18011B88C (RtlStringCbPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x180120DAC (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
