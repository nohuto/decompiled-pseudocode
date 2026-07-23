/*
 * XREFs of RawQueryFsSizeInfo @ 0x140A86008
 * Callers:
 *     RawQueryVolumeInformation @ 0x1408ADF94 (RawQueryVolumeInformation.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RawBeginOperation @ 0x1404052F0 (RawBeginOperation.c)
 *     RawEndOperation @ 0x14047ED8C (RawEndOperation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall RawQueryFsSizeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v5; // cf
  struct _DEVICE_OBJECT *v9; // rdi
  IRP *v10; // rax
  NTSTATUS Status; // ebx
  bool v12; // al
  LARGE_INTEGER v13; // r8
  unsigned __int64 v14; // rcx
  LONGLONG v15; // rax
  IRP *v17; // rax
  NTSTATUS v18; // eax
  IRP *v19; // rax
  NTSTATUS v20; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-31h] BYREF
  LARGE_INTEGER OutputBuffer; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v25; // [rsp+90h] [rbp-9h]
  LARGE_INTEGER v26; // [rsp+98h] [rbp-1h] BYREF
  LARGE_INTEGER v27; // [rsp+A0h] [rbp+7h]
  __int128 v28; // [rsp+A8h] [rbp+Fh]

  v26.QuadPart = 0LL;
  OutputBuffer.QuadPart = 0LL;
  v5 = *a4 < 0x18u;
  v25 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v28 = 0LL;
  if ( v5 )
    return 2147483653LL;
  if ( RawBeginOperation(a1, a2) )
  {
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v9 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(a1 + 200) + 16LL);
    v10 = IoBuildDeviceIoControlRequest(0x70000u, v9, 0LL, 0, Timeout, 0x18u, 0, &Event, &IoStatusBlock);
    if ( v10 )
    {
      Status = IofCallDriver(v9, v10);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        *a4 = 0;
LABEL_12:
        RawEndOperation(a1, a2);
        return (unsigned int)Status;
      }
      if ( (v9->Characteristics & 4) != 0 )
      {
        v12 = 0;
        v13.QuadPart = 0LL;
        v27.QuadPart = 0LL;
LABEL_9:
        v14 = HIDWORD(v25);
        *(_DWORD *)(a3 + 20) = HIDWORD(v25);
        *(_DWORD *)(a3 + 16) = 1;
        if ( v12 )
          v15 = v13.QuadPart / v14;
        else
          v15 = Timeout[0].QuadPart * Timeout[1].HighPart * (int)v25;
        *(_QWORD *)(a3 + 8) = v15;
        *(_QWORD *)a3 = v15;
        *a4 -= 24;
        Status = 0;
        goto LABEL_12;
      }
      KeResetEvent(&Event);
      v17 = IoBuildDeviceIoControlRequest(0x7405Cu, v9, 0LL, 0, &OutputBuffer, 8u, 0, &Event, &IoStatusBlock);
      if ( v17 )
      {
        v18 = IofCallDriver(v9, v17);
        if ( v18 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v18 = IoStatusBlock.Status;
        }
        v13 = OutputBuffer;
        v27 = OutputBuffer;
        if ( v18 >= 0 )
        {
          v12 = 1;
          goto LABEL_9;
        }
        KeResetEvent(&Event);
        v19 = IoBuildDeviceIoControlRequest(0x74004u, v9, 0LL, 0, &v26, 0x20u, 0, &Event, &IoStatusBlock);
        if ( v19 )
        {
          v20 = IofCallDriver(v9, v19);
          if ( v20 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v20 = IoStatusBlock.Status;
          }
          v13 = v27;
          v12 = v20 >= 0;
          goto LABEL_9;
        }
      }
    }
    Status = -1073741670;
    goto LABEL_12;
  }
  return 3221226094LL;
}
