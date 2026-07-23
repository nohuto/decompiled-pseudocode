/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405E4A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404A3C90 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitUTF8StringEx(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
