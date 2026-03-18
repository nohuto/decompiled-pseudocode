/*
 * XREFs of CmVirtualKCBToRealPath @ 0x140A5D600
 * Callers:
 *     CmpDoQueryKeyName @ 0x140206830 (CmpDoQueryKeyName.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407CE0A8 (CmpReportAuditVirtualizationEvent.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteOpenLogic @ 0x140878260 (CmpVEExecuteOpenLogic.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5D438 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmVirtualKCBToRealPath(__int64 a1, UNICODE_STRING *a2, __int64 a3, __int64 a4)
{
  NTSTATUS appended; // ebx
  UNICODE_STRING *v6; // rsi
  unsigned int v8; // edi
  int v9; // edx
  unsigned __int16 v10; // r15
  __int64 Pool2; // rax
  UNICODE_STRING Source; // [rsp+20h] [rbp-28h] BYREF

  appended = -1073741670;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v6 = (UNICODE_STRING *)CmpConstructName(a1, (__int64)a2, a3, a4);
  if ( v6 )
  {
    v8 = 0;
    v9 = 5;
    while ( v6->Buffer[v8] != 92 || --v9 )
    {
      if ( 2 * (unsigned __int64)++v8 >= v6->Length )
      {
        appended = -1073741811;
        goto LABEL_8;
      }
    }
    v10 = v6->Length + 2 * (9 - v8);
    Pool2 = ExAllocatePool2(0x100uLL);
    a2->Buffer = (wchar_t *)Pool2;
    if ( Pool2 )
    {
      a2->MaximumLength = v10;
      a2->Length = 0;
      Source = *v6;
      Source.Length = 18;
      appended = RtlAppendUnicodeStringToString(a2, &Source);
      if ( appended < 0
        || (Source.Length = v6->Length - 2 * v8,
            Source.Buffer += v8,
            appended = RtlAppendUnicodeStringToString(a2, &Source),
            appended < 0) )
      {
        RtlFreeAnsiString(a2);
      }
    }
LABEL_8:
    CmpFreeTransientPoolWithTag(v6, 0x624E4D43u);
  }
  return (unsigned int)appended;
}
