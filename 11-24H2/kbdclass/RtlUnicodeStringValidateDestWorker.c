/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1C0005900
 * Callers:
 *     RtlUnicodeStringCopyString @ 0x1C000612C (RtlUnicodeStringCopyString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  USHORT Length; // ax
  USHORT MaximumLength; // r9
  NTSTATUS result; // eax

  Length = DestinationString->Length;
  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  result = 0;
  *ppszDest = DestinationString->Buffer;
  *pcchDest = (unsigned __int64)DestinationString->MaximumLength >> 1;
  return result;
}
