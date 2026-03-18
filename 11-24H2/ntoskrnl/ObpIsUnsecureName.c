/*
 * XREFs of ObpIsUnsecureName @ 0x140A5AAF0
 * Callers:
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 */

char __fastcall ObpIsUnsecureName(PCUNICODE_STRING String2, BOOLEAN a2)
{
  const WCHAR *v4; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !ObpUnsecureGlobalNamesBuffer )
    return 0;
  v4 = &ObpUnsecureGlobalNamesBuffer;
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, v4);
    if ( DestinationString.Length )
    {
      if ( RtlPrefixUnicodeString(&DestinationString, String2, a2) )
        break;
    }
    v4 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
    if ( !DestinationString.Length )
      return 0;
  }
  return 1;
}
