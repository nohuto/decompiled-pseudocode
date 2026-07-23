/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1800E9DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     strlen @ 0x180169260 (strlen.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  size_t v3; // rax
  ANSI_STRING SourceStringa; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&SourceStringa.Length = 0LL;
  SourceStringa.Buffer = (char *)SourceString;
  if ( !SourceString )
    return RtlAnsiStringToUnicodeString(DestinationString, &SourceStringa, 1u) >= 0;
  v3 = strlen(SourceString);
  if ( v3 <= 0xFFFE )
  {
    SourceStringa.Length = v3;
    SourceStringa.MaximumLength = v3 + 1;
    return RtlAnsiStringToUnicodeString(DestinationString, &SourceStringa, 1u) >= 0;
  }
  return 0;
}
