/*
 * XREFs of RtlUnicodeStringCopy @ 0x1403DF480
 * Callers:
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1403DF3A0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     KasaniGetModuleFromAddress @ 0x1405A6640 (KasaniGetModuleFromAddress.c)
 *     KiAllocatePrcbThread @ 0x1405B3DF0 (KiAllocatePrcbThread.c)
 *     SshpCopyDataEntry @ 0x1405D8548 (SshpCopyDataEntry.c)
 *     ExpAcquirePrmInterface @ 0x1407AFAD8 (ExpAcquirePrmInterface.c)
 *     ExpPrivatePoolCreate @ 0x1407B6770 (ExpPrivatePoolCreate.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407E0990 (MiConstructNonRetpolineImageLoadRecord.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407FB620 (AslpPathWildcardAllocMatchNode.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140863F7C (CmpLogTransactionAbortedWithChildName.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 *     CmpDoWritethroughReparse @ 0x14098A930 (CmpDoWritethroughReparse.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140A196C0 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     PopUnicodeStringDeepCopy @ 0x140A4D10C (PopUnicodeStringDeepCopy.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5D438 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopCloneUnicodeString @ 0x140A87120 (PopCloneUnicodeString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1403DF568 (RtlUnicodeStringValidateWorker.c)
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
