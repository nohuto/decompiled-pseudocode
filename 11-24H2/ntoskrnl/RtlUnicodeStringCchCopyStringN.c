/*
 * XREFs of RtlUnicodeStringCchCopyStringN @ 0x1405DA1C0
 * Callers:
 *     PopPlInitWString @ 0x1407650DC (PopPlInitWString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCchCopyStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  unsigned __int16 Length; // dx
  unsigned __int16 MaximumLength; // r9
  NTSTATUS result; // eax
  unsigned __int64 v8; // rdx
  wchar_t *Buffer; // rdi
  __int16 v10; // cx
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rdi

  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  result = 0;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
    return -1073741811;
  v8 = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  v10 = 0;
  v11 = v8 >> 1;
  if ( cchToCopy <= 0x7FFF )
  {
    if ( v11 )
    {
      v12 = (char *)Buffer - (char *)pszSrc;
      while ( cchToCopy )
      {
        if ( *pszSrc )
        {
          *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v12) = *pszSrc;
          --cchToCopy;
          ++pszSrc;
          ++v10;
          if ( --v11 )
            continue;
        }
        if ( v11 )
          break;
        goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( cchToCopy )
      {
        if ( *pszSrc )
          result = -2147483643;
      }
    }
  }
  else
  {
    result = -1073741811;
  }
  DestinationString->Length = 2 * v10;
  return result;
}
