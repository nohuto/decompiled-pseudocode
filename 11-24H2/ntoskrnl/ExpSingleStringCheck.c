/*
 * XREFs of ExpSingleStringCheck @ 0x140C40DF8
 * Callers:
 *     ExpStringCheck @ 0x140C40E30 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     crc32 @ 0x140460AF8 (crc32.c)
 */

__int64 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return crc32(0LL, (__int64)DestinationString.Buffer, DestinationString.Length);
}
