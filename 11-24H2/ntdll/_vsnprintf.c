/*
 * XREFs of _vsnprintf @ 0x180120CB0
 * Callers:
 *     RtlStringCbPrintfA @ 0x18000BF40 (RtlStringCbPrintfA.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x180040400 (LdrpGenerateSnapsUnicodeStrings.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlStringCbVPrintfA @ 0x1800E7048 (RtlStringCbVPrintfA.c)
 *     StringCbPrintfA @ 0x18011BA04 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x180120CCC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
