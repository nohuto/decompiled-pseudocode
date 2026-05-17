/*
 * XREFs of _vsnprintf @ 0x180122A80
 * Callers:
 *     LdrpGenerateSnapsUnicodeStrings @ 0x180013A00 (LdrpGenerateSnapsUnicodeStrings.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlStringCbPrintfA @ 0x1800AADB0 (RtlStringCbPrintfA.c)
 *     RtlStringCbVPrintfA @ 0x1800EBD38 (RtlStringCbVPrintfA.c)
 *     StringCbPrintfA @ 0x18011D7D4 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x180122A9C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
