/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x1407E696C
 * Callers:
 *     CmpAddRemoveRMLogContainer @ 0x1407E0920 (CmpAddRemoveRMLogContainer.c)
 *     CmpStartCLFSLog @ 0x140AE7708 (CmpStartCLFSLog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     sprintf_s @ 0x140501A30 (sprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     PsRestoreImpersonation @ 0x1409C74E0 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x1409D85C0 (PsDisableImpersonation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpAddRemoveContainerToCLFSLog(
        PLOG_FILE_OBJECT plfoLog,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PCUNICODE_STRING a4,
        PCUNICODE_STRING Sourcea,
        int a6,
        PULONGLONG pcbContainer)
{
  __int16 v11; // cx
  NTSTATUS v13; // edi
  BOOLEAN v14; // bl
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS v20; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+70h] [rbp-90h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+B0h] [rbp-50h] BYREF
  char *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  NTSTATUS *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  _DWORD *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  wchar_t *Buffer; // [rsp+100h] [rbp+0h]
  _DWORD v33[2]; // [rsp+108h] [rbp+8h] BYREF
  char DstBuf[16]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  ImpersonationState = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = Sourcea->Length + 34;
  Destination.Length = 0;
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + v11;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, Destination.MaximumLength, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a3);
  RtlAppendUnicodeStringToString(&Destination, a4);
  sprintf_s(DstBuf, 0x10uLL, ".%u", a6);
  RtlInitAnsiString(&SourceString, DstBuf);
  v13 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v13 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v14 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    v13 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    KiUnstackDetachProcess((__int64)&ApcState, 0, v15, v16);
    if ( v14 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 1LL) )
  {
    v27 = v17;
    v26 = &v18;
    v18 = 1;
    v28 = &v20;
    v20 = v13;
    v30 = v33;
    Buffer = Destination.Buffer;
    v33[0] = Destination.Length;
    v29 = 4LL;
    v31 = 2LL;
    v33[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)byte_1400569CD, 0LL, 0LL, 6u, &v25);
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v13;
}
