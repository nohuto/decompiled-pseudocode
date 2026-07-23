/*
 * XREFs of RtlValidateUnicodeString @ 0x1800DBE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlValidateUnicodeString(ULONG Flags, PUNICODE_STRING String)
{
  NTSTATUS v2; // r8d
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax

  if ( Flags )
    return -1073741811;
  v2 = 0;
  if ( String )
  {
    Length = String->Length;
    if ( (String->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0
      || Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !String->Buffer && (Length || MaximumLength) )
    {
      return -1073741811;
    }
  }
  return v2;
}
