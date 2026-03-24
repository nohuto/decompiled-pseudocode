/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C0005710
 * Callers:
 *     KbdCreateClassObject @ 0x1C000FD50 (KbdCreateClassObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  USHORT Length; // ax
  USHORT MaximumLength; // r9
  size_t v5; // rsi
  NTSTATUS v6; // edi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  v5 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v6 = 0;
  v7 = _vsnwprintf(DestinationString->Buffer, v5, pszFormat, Args);
  if ( v7 < 0 || v7 > v5 )
  {
    LOWORD(v7) = v5;
    v6 = -2147483643;
  }
  DestinationString->Length = 2 * v7;
  return v6;
}
