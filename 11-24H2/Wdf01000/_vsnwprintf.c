/*
 * XREFs of _vsnwprintf @ 0x140084514
 * Callers:
 *     RtlStringCchPrintfW @ 0x140085DE8 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x140085E64 (RtlUnicodeStringPrintf.c)
 * Callees:
 *     _vsnwprintf_l @ 0x140084534 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
