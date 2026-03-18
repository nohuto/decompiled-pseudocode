/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x1407D6518
 * Callers:
 *     CmpAddRemoveRMLogContainer @ 0x1407D0AF8 (CmpAddRemoveRMLogContainer.c)
 *     CmpStartCLFSLog @ 0x140AD5500 (CmpStartCLFSLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     sprintf_s @ 0x1405019F0 (sprintf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     PsRestoreImpersonation @ 0x1409D7040 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x1409DFD30 (PsDisableImpersonation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v15; // rdx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS v18; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+70h] [rbp-90h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+B0h] [rbp-50h] BYREF
  char *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  NTSTATUS *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  _DWORD *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  wchar_t *Buffer; // [rsp+100h] [rbp+0h]
  _DWORD v31[2]; // [rsp+108h] [rbp+8h] BYREF
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
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
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
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    if ( v14 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  if ( (unsigned int)dword_140E09E08 > 5 && tlgKeywordOn((__int64)&dword_140E09E08, 1LL) )
  {
    v25 = v15;
    v24 = &v16;
    v16 = 1;
    v26 = &v18;
    v18 = v13;
    v28 = v31;
    Buffer = Destination.Buffer;
    v31[0] = Destination.Length;
    v27 = 4LL;
    v29 = 2LL;
    v31[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09E08, (unsigned __int8 *)byte_140054AA9, 0LL, 0LL, 6u, &v23);
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v13;
}
