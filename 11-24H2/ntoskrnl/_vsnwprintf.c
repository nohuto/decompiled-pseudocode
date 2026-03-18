/*
 * XREFs of _vsnwprintf @ 0x1404FD260
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140356698 (RtlStringCbPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x140424CB0 (RtlStringCchPrintfExW.c)
 *     StringCchPrintfW @ 0x14046FE5C (StringCchPrintfW.c)
 *     RtlStringCchPrintfW @ 0x140476998 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x140480894 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14049EF80 (RtlUnicodeStringPrintfEx.c)
 *     StringCchPrintfExW @ 0x140697558 (StringCchPrintfExW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1404FD280 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
