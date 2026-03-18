/*
 * XREFs of RtlUnicodeStringCopy @ 0x1403E4550
 * Callers:
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1403E4470 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     KasaniGetModuleFromAddress @ 0x1405A9FD0 (KasaniGetModuleFromAddress.c)
 *     KiAllocatePrcbThread @ 0x1405B7CE0 (KiAllocatePrcbThread.c)
 *     SshpCopyDataEntry @ 0x1405E44A0 (SshpCopyDataEntry.c)
 *     ExpAcquirePrmInterface @ 0x1407BF2A8 (ExpAcquirePrmInterface.c)
 *     ExpPrivatePoolCreate @ 0x1407C5F40 (ExpPrivatePoolCreate.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407F0830 (MiConstructNonRetpolineImageLoadRecord.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B190 (AslpPathWildcardAllocMatchNode.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x14087B570 (CmpDoWritethroughReparse.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14097ACC8 (CmpLogTransactionAbortedWithChildName.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140A249D0 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     PopUnicodeStringDeepCopy @ 0x140A50628 (PopUnicodeStringDeepCopy.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5F1F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopCloneUnicodeString @ 0x140A8C164 (PopCloneUnicodeString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1403E4638 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  __int64 v4; // rbx
  NTSTATUS result; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  wchar_t *v9; // r11
  unsigned __int64 Length; // rcx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rax
  unsigned __int64 v13; // rdx
  NTSTATUS v14; // r8d
  __int64 v15; // rbx

  v4 = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)SourceString, v2);
  if ( result >= 0 )
  {
    if ( v7 )
    {
      v4 = *(_QWORD *)(v7 + 8);
      v8 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
    }
    Length = SourceString->Length;
    if ( (Length & 1) != 0
      || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
      || (unsigned __int16)Length > MaximumLength
      || MaximumLength == 0xFFFF
      || SourceString->Buffer == v9 && ((_WORD)Length || MaximumLength) )
    {
      v14 = -1073741811;
    }
    else
    {
      Buffer = SourceString->Buffer;
      v13 = Length >> 1;
      v14 = (int)v9;
      if ( v8 )
      {
        v15 = v4 - (_QWORD)Buffer;
        while ( v13 )
        {
          --v13;
          *(wchar_t *)((char *)Buffer + v15) = *Buffer;
          LOWORD(v9) = (_WORD)v9 + 1;
          ++Buffer;
          if ( !--v8 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        if ( v13 )
          v14 = -2147483643;
      }
    }
    result = v14;
    DestinationString->Length = 2 * (_WORD)v9;
  }
  return result;
}
