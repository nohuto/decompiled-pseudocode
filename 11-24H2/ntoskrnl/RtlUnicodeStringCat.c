/*
 * XREFs of RtlUnicodeStringCat @ 0x1403DA240
 * Callers:
 *     CmpIsFileInSystemConfig @ 0x1407E2160 (CmpIsFileInSystemConfig.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x14087F420 (CmpDoWritethroughReparse.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1409634D8 (CmpLogTransactionAbortedWithChildName.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A195D4 (SshpGenerateDeviceFriendlyName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A57370 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopPowerRequestStatsIdConcat @ 0x140A61F78 (PopPowerRequestStatsIdConcat.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140A7C204 (PopIdleWakeGenerateInterruptDescriptionString.c)
 *     PopGenerateDeviceFriendlyName @ 0x140A7C424 (PopGenerateDeviceFriendlyName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned __int64 Length; // r9
  unsigned __int16 MaximumLength; // ax
  unsigned __int64 v5; // r8
  wchar_t *Buffer; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int16 v10; // ax
  wchar_t *v11; // rax
  NTSTATUS v12; // ebx
  __int16 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  char *v16; // r10
  NTSTATUS result; // eax

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && ((_WORD)Length || MaximumLength) )
  {
    return -1073741811;
  }
  v5 = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  v7 = SourceString->Length;
  v8 = v5 >> 1;
  v9 = Length >> 1;
  if ( (v7 & 1) != 0 )
    return -1073741811;
  v10 = SourceString->MaximumLength;
  if ( (v10 & 1) != 0 || v10 == 0xFFFF || (unsigned __int16)v7 > v10 || !SourceString->Buffer && ((_WORD)v7 || v10) )
    return -1073741811;
  v11 = SourceString->Buffer;
  v12 = 0;
  v13 = 0;
  v14 = v7 >> 1;
  v15 = v8 - v9;
  if ( v15 )
  {
    v16 = (char *)Buffer + 2 * v9 - (_QWORD)v11;
    while ( v14 )
    {
      --v14;
      *(wchar_t *)((char *)v11 + (_QWORD)v16) = *v11;
      ++v13;
      ++v11;
      if ( !--v15 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( v14 )
      v12 = -2147483643;
  }
  result = v12;
  DestinationString->Length = 2 * (v13 + v9);
  return result;
}
