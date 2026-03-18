/*
 * XREFs of DpiAcpiEvalAcpiMethodEx @ 0x140395EF4
 * Callers:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x14024ACA4 (DpiAcpiPrepareAcpiChildNameList.c)
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x14024B2CC (DpiAcpiPrepareDisplayMuxSupport.c)
 *     DpEvalAcpiMethod @ 0x140395A00 (DpEvalAcpiMethod.c)
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiAcpiEvalAcpiMethodEx(
        __int64 a1,
        const void **a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  NTSTATUS Status; // ebx
  unsigned int v12; // eax
  unsigned int v13; // ebp
  ULONG v14; // r12d
  size_t v15; // r14
  _DWORD *Pool2; // rax
  _DWORD *v17; // rdi
  size_t v18; // rsi
  unsigned int v19; // ecx
  int v20; // eax
  struct _DEVICE_OBJECT *v21; // rsi
  IRP *v22; // rax
  NTSTATUS v23; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( a2 && *(_WORD *)a2 > 0xFAu )
  {
    Status = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 278;
    return (unsigned int)Status;
  }
  v12 = a3[2];
  v13 = 4;
  if ( v12 < 4 )
    v12 = 4;
  v14 = v12 + 268;
  v15 = v12 + 268;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v15, 1953656900LL, a4);
  v17 = Pool2;
  if ( !Pool2 )
  {
    Status = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 302;
    return (unsigned int)Status;
  }
  memset(Pool2, 0, v15);
  *v17 = 1181312321;
  if ( a2 )
  {
    v18 = *(unsigned __int16 *)a2;
    memmove(v17 + 1, a2[1], v18);
    *((_BYTE *)v17 + v18 + 4) = 46;
    v8 = (unsigned int)(v18 + 1);
  }
  v19 = a3[2];
  *(_DWORD *)((char *)v17 + v8 + 4) = a3[1];
  *((_BYTE *)v17 + (unsigned int)(v8 + 4) + 4) = 0;
  if ( a7 )
    v13 = v19;
  v20 = a3[3];
  v17[65] = v19;
  v17[66] = v20;
  memmove(v17 + 67, a3 + 4, v13);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v21 = *(struct _DEVICE_OBJECT **)(v7 + 160);
  ObfReferenceObject(v21);
  v22 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          v21,
          v17,
          v14,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( v22 )
  {
    Status = IofCallDriver(v21, v22);
    if ( Status == 259 )
    {
      v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v23;
      if ( v23 )
      {
        WdLogSingleEntry1(2LL, v23);
        WdLogGlobalForLineNumber = 427;
        goto LABEL_24;
      }
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      if ( OutputBufferLength && (*OutputBuffer != 1114596673 || !OutputBuffer[2]) )
      {
        Status = -1072431089;
        WdLogSingleEntry1(2LL, -1072431089LL);
        WdLogGlobalForLineNumber = 463;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, Status);
      WdLogGlobalForLineNumber = 443;
    }
    goto LABEL_24;
  }
  Status = -1073741670;
  WdLogSingleEntry1(6LL, -1073741670LL);
  WdLogGlobalForLineNumber = 404;
LABEL_24:
  if ( v21 )
    ObfDereferenceObject(v21);
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)Status;
}
