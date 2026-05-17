/*
 * XREFs of RtlInitUTF8StringEx @ 0x18013C680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInitUTF8StringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
