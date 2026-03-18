/*
 * XREFs of DpiAcpiPrepareAcpiEnumChildCache @ 0x140251D54
 * Callers:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x140251AD4 (DpiAcpiPrepareAcpiChildNameList.c)
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x1402520FC (DpiAcpiPrepareDisplayMuxSupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiEnumChildCache(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // rsi
  IRP *v4; // rax
  NTSTATUS v5; // ebx
  NTSTATUS Status; // eax
  NTSTATUS v7; // eax
  unsigned int OutputBufferLength; // ebx
  __int64 HighPart; // r14
  void *Pool2; // rax
  IRP *v11; // rax
  NTSTATUS v12; // eax
  _DWORD *v13; // rax
  void *v14; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-9h] BYREF
  _DWORD InputBuffer[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+80h] [rbp+17h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+88h] [rbp+1Fh] BYREF
  int v20; // [rsp+98h] [rbp+2Fh]

  v18 = 0LL;
  result = 0LL;
  v20 = 0;
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
    v7 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v5 = v7;
    if ( v7 )
    {
      WdLogSingleEntry1(2LL, v7);
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
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Timeout[0].HighPart, 1953656900LL);
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
  v11 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 3424),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v11 )
  {
    v5 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 826;
    goto LABEL_27;
  }
  v5 = IofCallDriver(v3, v11);
  if ( v5 == 259 )
  {
    v12 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v5 = v12;
    if ( v12 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 849;
      goto LABEL_24;
    }
    v5 = IoStatusBlock.Status;
  }
  v13 = *(_DWORD **)(a1 + 3424);
  if ( *v13 != 1198089537 || !v13[1] || IoStatusBlock.Information != HighPart )
    goto LABEL_10;
LABEL_24:
  if ( v5 < 0 )
  {
LABEL_27:
    v14 = *(void **)(a1 + 3424);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(a1 + 3424) = 0LL;
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v5;
}
