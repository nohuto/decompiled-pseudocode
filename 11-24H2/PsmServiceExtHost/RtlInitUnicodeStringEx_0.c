/*
 * XREFs of RtlInitUnicodeStringEx_0 @ 0x180073220
 * Callers:
 *     CompatCacheLookupPackage @ 0x18003FF3C (CompatCacheLookupPackage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInitUnicodeStringEx_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  return RtlInitUnicodeStringEx(DestinationString, SourceString);
}
