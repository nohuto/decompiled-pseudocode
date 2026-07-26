/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x14004DD70
 * Callers:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x14004DC90 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x14015EEF0 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
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
