/*
 * XREFs of _vsnwprintf @ 0x140084524
 * Callers:
 *     RtlStringCchPrintfW @ 0x140085DF8 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x140085E74 (RtlUnicodeStringPrintf.c)
 * Callees:
 *     _vsnwprintf_l @ 0x140084544 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
