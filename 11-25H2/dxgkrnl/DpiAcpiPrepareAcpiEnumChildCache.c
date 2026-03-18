/*
 * XREFs of DpiAcpiPrepareAcpiEnumChildCache @ 0x14024AF24
 * Callers:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x14024ACA4 (DpiAcpiPrepareAcpiChildNameList.c)
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x14024B2CC (DpiAcpiPrepareDisplayMuxSupport.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiEnumChildCache(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // rsi
  IRP *v4; // rax
  NTSTATUS v5; // ebx
  NTSTATUS Status; // eax
  __int64 v7; // r9
  NTSTATUS v8; // eax
  unsigned int OutputBufferLength; // ebx
  __int64 HighPart; // r14
  void *Pool2; // rax
  IRP *v12; // rax
  NTSTATUS v13; // eax
  _DWORD *v14; // rax
  void *v15; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-9h] BYREF
  _DWORD InputBuffer[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+80h] [rbp+17h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+88h] [rbp+1Fh] BYREF
  int v21; // [rsp+98h] [rbp+2Fh]

  v19 = 0LL;
  result = 0LL;
  v21 = 0;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( *(_QWORD *)(a1 + 3424) )
    return result;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  InputBuffer[0] = 1214866753;
  InputBuffer[1] = 1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0x32C020u, v3, InputBuffer, 0x10u, Timeout, 0x14u, 0, &Event, &IoStatusBlock);
  if ( !v4 )
  {
    v5 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 710;
    goto LABEL_27;
  }
  Status = IofCallDriver(v3, v4);
  if ( Status == 259 )
  {
    v8 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v5 = v8;
    if ( v8 )
    {
      WdLogSingleEntry1(2LL, v8);
      WdLogGlobalForLineNumber = 733;
      goto LABEL_24;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    WdLogSingleEntry1(2LL, Status);
    WdLogGlobalForLineNumber = 750;
LABEL_10:
    v5 = -1072431089;
    goto LABEL_27;
  }
  if ( Timeout[0].LowPart != 1198089537 || (OutputBufferLength = Timeout[0].HighPart, Timeout[0].HighPart < 0x14u) )
  {
    v5 = -1072431089;
    WdLogSingleEntry1(2LL, -1072431089LL);
    WdLogGlobalForLineNumber = 773;
    goto LABEL_27;
  }
  HighPart = (unsigned int)Timeout[0].HighPart;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Timeout[0].HighPart, 1953656900LL, v7);
  *(_QWORD *)(a1 + 3424) = Pool2;
  if ( !Pool2 )
  {
    v5 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 793;
    goto LABEL_27;
  }
  memset(Pool2, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v12 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 3424),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v12 )
  {
    v5 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 826;
    goto LABEL_27;
  }
  v5 = IofCallDriver(v3, v12);
  if ( v5 == 259 )
  {
    v13 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v5 = v13;
    if ( v13 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 849;
      goto LABEL_24;
    }
    v5 = IoStatusBlock.Status;
  }
  v14 = *(_DWORD **)(a1 + 3424);
  if ( *v14 != 1198089537 || !v14[1] || IoStatusBlock.Information != HighPart )
    goto LABEL_10;
LABEL_24:
  if ( v5 < 0 )
  {
LABEL_27:
    v15 = *(void **)(a1 + 3424);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *(_QWORD *)(a1 + 3424) = 0LL;
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v5;
}
