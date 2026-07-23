/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405DB3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404A8810 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitUTF8StringEx(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
