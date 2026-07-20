/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x14001DAF0
 * Callers:
 *     RtlStringCbCopyUnicodeString @ 0x14001D92C (RtlStringCbCopyUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateSrcWorker(
        PCUNICODE_STRING SourceString,
        wchar_t **ppszSrc,
        size_t *pcchSrcLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS v5; // r9d
  bool v7; // zf
  USHORT MaximumLength; // r8

  v5 = 0;
  v7 = (SourceString->Length & 1) == 0;
  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  if ( !v7 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || SourceString->Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !SourceString->Buffer && (SourceString->Length || MaximumLength) )
  {
    return -1073741811;
  }
  *ppszSrc = SourceString->Buffer;
  *pcchSrcLength = (unsigned __int64)SourceString->Length >> 1;
  return v5;
}
