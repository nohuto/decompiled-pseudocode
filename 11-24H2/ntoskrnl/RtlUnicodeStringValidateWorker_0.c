/*
 * XREFs of RtlUnicodeStringValidateWorker_0 @ 0x140410AA0
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1404105C0 (RtlUnicodeStringCatString.c)
 *     RtlStringCbCopyUnicodeString @ 0x1404109F4 (RtlStringCbCopyUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker_0(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  unsigned __int16 Length; // dx
  unsigned __int16 MaximumLength; // r8

  Length = SourceString->Length;
  if ( (SourceString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !SourceString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  else
  {
    return 0;
  }
}
