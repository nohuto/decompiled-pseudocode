/*
 * XREFs of SepPotentialGlobalTableAttribute @ 0x1403B86D8
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepShouldSetDelinkFlags @ 0x140A380C4 (SepShouldSetDelinkFlags.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 */

char __fastcall SepPotentialGlobalTableAttribute(PCUNICODE_STRING String2)
{
  int i; // ebx
  char v4; // al

  for ( i = 0; ; i = 1 )
  {
    if ( i )
      return 0;
    if ( KeGetCurrentIrql() < 2u )
      v4 = RtlPrefixUnicodeString((PCUNICODE_STRING)&PotentialGlobalAttributePrefixes, String2, 1u);
    else
      v4 = PotentialGlobalAttributePrefixes <= String2->Length
        && memcmp(
             *((const void **)&PotentialGlobalAttributePrefixes + 1),
             String2->Buffer,
             PotentialGlobalAttributePrefixes) == 0;
    if ( v4 )
      break;
  }
  return 1;
}
