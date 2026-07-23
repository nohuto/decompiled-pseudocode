/*
 * XREFs of PnpHardwareConfigCreateBootDriverFlags @ 0x140718298
 * Callers:
 *     IopMarkBootPartition @ 0x140C1EDB0 (IopMarkBootPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1406A7430 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateEvent @ 0x1406A7CB0 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x1406AA490 (ZwResetEvent.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     PipHardwareConfigOpenKey @ 0x140ABA270 (PipHardwareConfigOpenKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpHardwareConfigCreateBootDriverFlags(__int64 a1, void *a2)
{
  unsigned int *Pool2; // rdi
  NTSTATUS Status; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rcx
  int v9; // edx
  unsigned int v11; // [rsp+50h] [rbp-49h] BYREF
  int v12; // [rsp+54h] [rbp-45h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-41h] BYREF
  int v14; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v15; // [rsp+64h] [rbp-35h] BYREF
  HANDLE v16; // [rsp+68h] [rbp-31h] BYREF
  int v17; // [rsp+70h] [rbp-29h] BYREF
  ULONG OutputBuffer[2]; // [rsp+78h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1h] BYREF
  __int64 InputBuffer; // [rsp+C8h] [rbp+2Fh] BYREF
  int v23; // [rsp+D0h] [rbp+37h]

  *(_QWORD *)OutputBuffer = 0LL;
  v11 = 0;
  Pool2 = 0LL;
  InputBuffer = 0LL;
  v23 = 0;
  v14 = 0;
  v17 = 0;
  EventHandle = 0LL;
  v15 = 0;
  Handle = 0LL;
  v16 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a2 )
    return (unsigned int)-1073741811;
  Status = PipHardwareConfigOpenKey(a1, 131097LL, &v16);
  if ( Status >= 0 )
  {
    v12 = 4;
    Status = PnpCtxRegQueryValue(v5, v16, L"BootDriverFlags", &v14, &v17, &v12);
    if ( Status == -1073741772 )
    {
      v23 = 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( Status >= 0 )
      {
        Status = ZwDeviceIoControlFile(
                   a2,
                   EventHandle,
                   0LL,
                   0LL,
                   &IoStatusBlock,
                   0x2D1400u,
                   &InputBuffer,
                   0xCu,
                   OutputBuffer,
                   8u);
        if ( Status == 259 )
        {
          Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
          if ( Status < 0 )
            goto LABEL_39;
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 )
        {
          Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, OutputBuffer[1], 0x6E697050u);
          if ( !Pool2 )
          {
            Status = -1073741670;
            goto LABEL_39;
          }
          ZwResetEvent(EventHandle, 0LL);
          Status = ZwDeviceIoControlFile(
                     a2,
                     EventHandle,
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     0x2D1400u,
                     &InputBuffer,
                     0xCu,
                     Pool2,
                     OutputBuffer[1]);
          if ( Status == 259 )
          {
            Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            if ( Status < 0 )
              goto LABEL_39;
            Status = IoStatusBlock.Status;
          }
          if ( Status < 0 )
            goto LABEL_39;
          Status = PnpCtxRegOpenKey(
                     PiPnpRtlCtx,
                     -2147483646,
                     (unsigned int)L"System\\CurrentControlSet\\Control",
                     0,
                     1,
                     (__int64)&Handle);
          if ( Status < 0 )
            goto LABEL_39;
          v12 = 4;
          Status = PnpCtxRegQueryValue(v6, Handle, L"BootDriverFlags", &v14, &v15, &v12);
          if ( Status < 0 )
            goto LABEL_39;
          v7 = v15 & 0xFFFFFFE3;
          v11 = v15 & 0xFFFFFFE3;
          v8 = Pool2[7];
          if ( (int)v8 > 11 )
          {
            v8 = (unsigned int)(v8 - 12);
            if ( (_DWORD)v8 )
            {
              v8 = (unsigned int)(v8 - 1);
              if ( (_DWORD)v8 )
              {
                v8 = (unsigned int)(v8 - 1);
                if ( !(_DWORD)v8
                  || (v8 = (unsigned int)(v8 - 1), !(_DWORD)v8)
                  || (v8 = (unsigned int)(v8 - 1), !(_DWORD)v8) )
                {
LABEL_34:
                  v11 = v15;
                  goto LABEL_38;
                }
LABEL_31:
                v8 = (unsigned int)(v8 - 1);
                if ( (_DWORD)v8 )
                  goto LABEL_32;
LABEL_38:
                Status = PnpCtxRegSetValue(v8, v16, L"BootDriverFlags", 4LL, &v11, 4);
                goto LABEL_39;
              }
              v9 = v7 | 0x1C;
            }
            else
            {
              v9 = v7 | 8;
            }
          }
          else
          {
            if ( (_DWORD)v8 == 11 )
              goto LABEL_38;
            if ( (int)v8 <= 6 )
            {
              if ( (_DWORD)v8 == 6 )
                goto LABEL_38;
              v8 = (unsigned int)(v8 - 1);
              if ( !(_DWORD)v8 )
                goto LABEL_38;
              goto LABEL_31;
            }
            v8 = (unsigned int)(v8 - 7);
            if ( (_DWORD)v8 )
            {
LABEL_32:
              v8 = (unsigned int)(v8 - 1);
              if ( !(_DWORD)v8 )
                goto LABEL_38;
              v8 = (unsigned int)(v8 - 1);
              if ( (unsigned int)v8 < 2 )
                goto LABEL_38;
              goto LABEL_34;
            }
            v9 = v7 | 0x14;
          }
          v11 = v9;
          goto LABEL_38;
        }
      }
    }
  }
LABEL_39:
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ZwClose(v16);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)Status;
}
