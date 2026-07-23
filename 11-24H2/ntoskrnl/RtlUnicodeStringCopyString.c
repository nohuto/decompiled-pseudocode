/*
 * XREFs of RtlUnicodeStringCopyString @ 0x14045D760
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x1409B9634 (PnpAllocateAndEnableEventWatchdog.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140A7C204 (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int16 Length; // r9
  unsigned __int16 MaximumLength; // r8
  NTSTATUS result; // eax
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  wchar_t *Buffer; // rbx
  __int16 v9; // cx
  signed __int64 v10; // rbx

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
  v6 = 0x7FFFLL;
  v7 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  Buffer = DestinationString->Buffer;
  v9 = 0;
  if ( v7 )
  {
    v10 = (char *)Buffer - (char *)pszSrc;
    while ( v6 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v10) = *pszSrc;
        --v6;
        ++pszSrc;
        ++v9;
        if ( --v7 )
          continue;
      }
      if ( v7 || !v6 )
        break;
      goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    if ( *pszSrc )
      result = -2147483643;
  }
  DestinationString->Length = 2 * v9;
  return result;
}
