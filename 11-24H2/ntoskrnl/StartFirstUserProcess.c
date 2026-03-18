/*
 * XREFs of StartFirstUserProcess @ 0x140C5FF68
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     InbvIsBootDriverInstalled @ 0x1404FA650 (InbvIsBootDriverInstalled.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     FinalizeBootLogo @ 0x14058F72C (FinalizeBootLogo.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1406A6790 (ZwSetInformationProcess.c)
 *     ZwResumeThread @ 0x1406A6E50 (ZwResumeThread.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     RegistryOverwriteCentralProcessor @ 0x140C0D46C (RegistryOverwriteCentralProcessor.c)
 *     RtlNormalizeProcessParams @ 0x140C36A04 (RtlNormalizeProcessParams.c)
 *     RtlpCreateUserProcess @ 0x140C36AD8 (RtlpCreateUserProcess.c)
 *     QueryRegistryHideMachine @ 0x140C5F3A4 (QueryRegistryHideMachine.c)
 */

void StartFirstUserProcess()
{
  int v0; // eax
  __int64 MaximumLength; // r14
  UNICODE_STRING *p_UnicodeString; // rsi
  __int64 v3; // rbx
  ULONG_PTR Pool2; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // r10d
  unsigned int v14; // edx
  __int64 v15; // r9
  char v16; // r8
  int UserProcess; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-39h] BYREF
  HANDLE v28; // [rsp+58h] [rbp-31h]
  HANDLE Handle; // [rsp+60h] [rbp-29h]
  LARGE_INTEGER Interval; // [rsp+F8h] [rbp+6Fh] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  UnicodeString = 0LL;
  v27[1] = 0;
  memset_0(v27, 0, 0x64uLL);
  if ( QueryRegistryHideMachine() )
    RegistryOverwriteCentralProcessor();
  v0 = ExpInitializeRunLevel0(&UnicodeString);
  if ( (int)(v0 + 0x80000000) >= 0 && v0 != -1073741637 )
    KeBugCheckEx(0x6Du, v0, 0LL, 4uLL, 0LL);
  MaximumLength = stru_140FCED18.MaximumLength;
  p_UnicodeString = &UnicodeString;
  if ( v0 < 0 )
    p_UnicodeString = (UNICODE_STRING *)&NtInitialUserProcess;
  v3 = p_UnicodeString->MaximumLength + stru_140FCED08.MaximumLength + 1096LL;
  Pool2 = ExAllocatePool2(0x40uLL, v3 + stru_140FCED18.MaximumLength, 0x62537350uLL);
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
  *(_WORD *)(Pool2 + 58) = stru_140FCED08.MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(Pool2 + 56), &stru_140FCED08);
  *(_QWORD *)(v5 + 104) = v6 + *(unsigned __int16 *)(v5 + 58);
  *(_WORD *)(v5 + 98) = p_UnicodeString->MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v5 + 96), p_UnicodeString);
  v7 = *(_OWORD *)(v5 + 96);
  DestinationString.Buffer = *(wchar_t **)(v5 + 128);
  *(_OWORD *)(v5 + 112) = v7;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = MaximumLength;
  RtlCopyUnicodeString(&DestinationString, &stru_140FCED18);
  if ( v5 == -96 || (v12 = RtlNormalizeProcessParams(v5), (v9 = v12) == 0) )
  {
    UserProcess = -1073741811;
  }
  else
  {
    v13 = *(_DWORD *)(v12 + 8);
    v14 = (v13 >> 11) & 0x80;
    *(_QWORD *)(v12 + 72) = 0LL;
    v15 = v14 | 0x40;
    if ( (v13 & 0x400000) == 0 )
      v15 = v14;
    v16 = v15;
    if ( (v13 & 0x800000) == 0 )
      v16 = v15;
    UserProcess = RtlpCreateUserProcess((unsigned __int16 *)(v5 + 96), v12, v16, v15, BugCheckParameter4, v27);
  }
  if ( InbvIsBootDriverInstalled(v9, v8, v10, v11) )
    FinalizeBootLogo(v19, v18, v20, v21);
  if ( UserProcess < 0 )
    KeBugCheckEx(0x6Du, UserProcess, 0LL, 1uLL, 0LL);
  v22 = ZwSetInformationProcess((__int64)v28, 29LL);
  if ( v22 < 0 )
    KeBugCheckEx(0x6Du, v22, 0LL, 2uLL, 0LL);
  v23 = ZwResumeThread((__int64)Handle, 0LL);
  if ( v23 < 0 )
    KeBugCheckEx(0x6Du, v23, 0LL, 3uLL, 0LL);
  byte_140E65D3C = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(Handle);
  ZwClose(v28);
  ExFreePoolWithTag((PVOID)v5, 0);
  RtlFreeAnsiString(&UnicodeString);
}
