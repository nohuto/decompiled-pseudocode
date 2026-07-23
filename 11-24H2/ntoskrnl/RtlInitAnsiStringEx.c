/*
 * XREFs of RtlInitAnsiStringEx @ 0x1404A3C90
 * Callers:
 *     RtlInitUTF8StringEx @ 0x1405E4A90 (RtlInitUTF8StringEx.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14077E230 (RtlCreateUnicodeStringFromAsciiz.c)
 * Callees:
 *     strlen @ 0x1406C13D0 (strlen.c)
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  size_t v4; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( !SourceString )
    return 0;
  v4 = strlen(SourceString);
  if ( v4 <= 0xFFFE )
  {
    DestinationString->Length = v4;
    DestinationString->MaximumLength = v4 + 1;
    return 0;
  }
  return -1073741562;
}
