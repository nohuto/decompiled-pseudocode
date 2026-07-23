/*
 * XREFs of StartFirstUserProcess @ 0x140C4F72C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     InbvIsBootDriverInstalled @ 0x1404F8180 (InbvIsBootDriverInstalled.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     FinalizeBootLogo @ 0x14058BF4C (FinalizeBootLogo.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14069B4C0 (ZwSetInformationProcess.c)
 *     ZwResumeThread @ 0x14069BB80 (ZwResumeThread.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     RegistryOverwriteCentralProcessor @ 0x140BFC46C (RegistryOverwriteCentralProcessor.c)
 *     RtlNormalizeProcessParams @ 0x140C25734 (RtlNormalizeProcessParams.c)
 *     RtlpCreateUserProcess @ 0x140C25808 (RtlpCreateUserProcess.c)
 *     QueryRegistryHideMachine @ 0x140C51544 (QueryRegistryHideMachine.c)
 */

void StartFirstUserProcess()
{
  int v0; // eax
  __int64 MaximumLength; // r14
  UNICODE_STRING *p_UnicodeString; // rsi
  __int64 v3; // rbx
  ULONG_PTR Pool2; // rax
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  PRTL_USER_PROCESS_PARAMETERS v10; // rax
  unsigned int Flags; // r10d
  unsigned int v12; // edx
  __int64 v13; // r9
  ULONG v14; // r8d
  NTSTATUS UserProcess; // ebx
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v22[4]; // [rsp+50h] [rbp-39h] BYREF
  int v23; // [rsp+54h] [rbp-35h]
  HANDLE ProcessHandle; // [rsp+58h] [rbp-31h]
  HANDLE ThreadHandle; // [rsp+60h] [rbp-29h]
  int ProcessInformation; // [rsp+F0h] [rbp+67h] BYREF
  LARGE_INTEGER Interval; // [rsp+F8h] [rbp+6Fh] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  UnicodeString = 0LL;
  v23 = 0;
  memset_0(v22, 0, 0x64uLL);
  if ( (unsigned __int8)QueryRegistryHideMachine() )
    RegistryOverwriteCentralProcessor();
  v0 = ExpInitializeRunLevel0(&UnicodeString);
  if ( (int)(v0 + 0x80000000) >= 0 && v0 != -1073741637 )
    KeBugCheckEx(0x6Du, v0, 0LL, 4uLL, 0LL);
  MaximumLength = stru_140FCED98.MaximumLength;
  p_UnicodeString = &UnicodeString;
  if ( v0 < 0 )
    p_UnicodeString = (UNICODE_STRING *)&NtInitialUserProcess;
  v3 = p_UnicodeString->MaximumLength + stru_140FCED88.MaximumLength + 1096LL;
  Pool2 = ExAllocatePool2(0x40uLL, v3 + stru_140FCED98.MaximumLength, 0x62537350uLL);
  v5 = Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  *(_DWORD *)(Pool2 + 4) = v3;
  *(_DWORD *)Pool2 = v3;
  *(_DWORD *)(Pool2 + 8) = 4194305;
  *(_QWORD *)(Pool2 + 1008) = MaximumLength;
  *(_QWORD *)(Pool2 + 128) = v3 + Pool2;
  v6 = Pool2 + 1096;
  *(_OWORD *)(Pool2 + 80) = 0LL;
  *(_QWORD *)(Pool2 + 88) = 0LL;
  *(_QWORD *)(Pool2 + 64) = Pool2 + 1096;
  *(_WORD *)(Pool2 + 58) = stru_140FCED88.MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 56), &stru_140FCED88);
  *(_QWORD *)(v5 + 104) = v6 + *(unsigned __int16 *)(v5 + 58);
  *(_WORD *)(v5 + 98) = p_UnicodeString->MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v5 + 96), p_UnicodeString);
  v7 = *(_OWORD *)(v5 + 96);
  DestinationString.Buffer = *(wchar_t **)(v5 + 128);
  *(_OWORD *)(v5 + 112) = v7;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = MaximumLength;
  RtlCopyUnicodeString(&DestinationString, &stru_140FCED98);
  if ( v5 == -96LL || (v10 = RtlNormalizeProcessParams((PRTL_USER_PROCESS_PARAMETERS)v5), (v9 = (__int64)v10) == 0) )
  {
    UserProcess = -1073741811;
  }
  else
  {
    Flags = v10->Flags;
    v12 = (Flags >> 11) & 0x80;
    v10->CurrentDirectory.Handle = 0LL;
    v13 = v12 | 0x40;
    if ( (Flags & 0x400000) == 0 )
      v13 = v12;
    v14 = v13 | 0x40000;
    if ( (Flags & 0x800000) == 0 )
      v14 = v13;
    UserProcess = RtlpCreateUserProcess((unsigned __int16 *)(v5 + 96), v10, v14, v13, BugCheckParameter4, (__int64)v22);
  }
  if ( InbvIsBootDriverInstalled(v9, v8) )
    FinalizeBootLogo(v16);
  if ( UserProcess < 0 )
    KeBugCheckEx(0x6Du, UserProcess, 0LL, 1uLL, 0LL);
  ProcessInformation = 1;
  v17 = ZwSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &ProcessInformation, 4u);
  if ( v17 < 0 )
    KeBugCheckEx(0x6Du, v17, 0LL, 2uLL, 0LL);
  v18 = ZwResumeThread(ThreadHandle, 0LL);
  if ( v18 < 0 )
    KeBugCheckEx(0x6Du, v18, 0LL, 3uLL, 0LL);
  byte_140E65AF8 = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(ThreadHandle);
  ZwClose(ProcessHandle);
  ExFreePoolWithTag((PVOID)v5, 0);
  RtlFreeAnsiString(&UnicodeString);
}
