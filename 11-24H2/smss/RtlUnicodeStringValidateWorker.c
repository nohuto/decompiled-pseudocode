/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x140013658
 * Callers:
 *     RtlUnicodeStringCat @ 0x140013454 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1400135EC (RtlUnicodeStringValidateDestWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  NTSTATUS result; // eax
  USHORT MaximumLength; // dx

  result = 0;
  if ( (SourceString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || SourceString->Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !SourceString->Buffer && (SourceString->Length || MaximumLength) )
  {
    return -1073741811;
  }
  return result;
}
