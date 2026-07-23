/*
 * XREFs of RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x180105E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlGetLengthWithoutLastFullDosOrNtPathElement(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  return RtlpGetLengthWithoutLastPathElement(
           *(__int64 *)&Flags,
           (__int64)PathString,
           &PathString->Length,
           (int *)Length);
}
