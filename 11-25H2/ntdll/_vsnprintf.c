/*
 * XREFs of _vsnprintf @ 0x180124560
 * Callers:
 *     RtlStringCbPrintfA @ 0x180039BF0 (RtlStringCbPrintfA.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x18007B010 (LdrpGenerateSnapsUnicodeStrings.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlStringCbVPrintfA @ 0x1800ECA58 (RtlStringCbVPrintfA.c)
 *     StringCbPrintfA @ 0x18011F0A4 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x18012457C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
