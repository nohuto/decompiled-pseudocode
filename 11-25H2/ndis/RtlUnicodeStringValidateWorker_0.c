/*
 * XREFs of RtlUnicodeStringValidateWorker_0 @ 0x140072180
 * Callers:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1400720B0 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker_0(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // dx

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
