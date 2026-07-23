/*
 * XREFs of FsRtlGetSectorSizeInformation @ 0x14094E860
 * Callers:
 *     RawQueryVolumeInformation @ 0x1408ADF94 (RawQueryVolumeInformation.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     FsRtlIssueDeviceIoControl @ 0x14094EE70 (FsRtlIssueDeviceIoControl.c)
 */

__int64 __fastcall FsRtlGetSectorSizeInformation(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 result; // rax
  PIRP v5; // rax
  NTSTATUS Status; // eax
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  PIRP v10; // rax
  NTSTATUS v11; // eax
  PIRP v12; // rax
  NTSTATUS v13; // eax
  PIRP v14; // rax
  NTSTATUS v15; // eax
  int v16; // esi
  PIRP v17; // rax
  NTSTATUS v18; // eax
  unsigned int v19; // r8d
  int v20; // edx
  unsigned int v21; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[4]; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+84h] [rbp-7Ch]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int InputBuffer; // [rsp+110h] [rbp+10h] BYREF
  __int64 v28; // [rsp+114h] [rbp+14h]
  __int64 OutputBuffer; // [rsp+120h] [rbp+20h] BYREF
  __int128 v30; // [rsp+128h] [rbp+28h]
  unsigned int v31; // [rsp+138h] [rbp+38h]
  __int64 v32; // [rsp+140h] [rbp+40h] BYREF
  int v33; // [rsp+148h] [rbp+48h]
  __int64 v34; // [rsp+150h] [rbp+50h] BYREF
  int v35; // [rsp+158h] [rbp+58h]
  __int128 v36; // [rsp+160h] [rbp+60h] BYREF
  __int64 v37; // [rsp+170h] [rbp+70h]
  __int128 v38; // [rsp+178h] [rbp+78h] BYREF

  v37 = 0LL;
  v25 = 0;
  HIDWORD(v28) = 0;
  v31 = 0;
  v36 = 0LL;
  v30 = 0LL;
  memset_0(v24, 0, 0x8CuLL);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  result = FsRtlIssueDeviceIoControl(DeviceObject, 0x70000u, 0, &v36, 0x18u, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( !HIDWORD(v37) || ((HIDWORD(v37) - 1) & HIDWORD(v37)) != 0 )
    return 3221225675LL;
  v28 = 0LL;
  InputBuffer = 6;
  v31 = 0;
  OutputBuffer = 0x100000002LL;
  v30 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(
         0x2D1400u,
         DeviceObject,
         &InputBuffer,
         0xCu,
         &OutputBuffer,
         0x1Cu,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v5 )
    goto LABEL_19;
  v5->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  Status = IofCallDriver(DeviceObject, v5);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0
    && IoStatusBlock.Information >= 0x1C
    && (unsigned int)OutputBuffer >= 0x1C
    && HIDWORD(OutputBuffer) >= IoStatusBlock.Information
    && DWORD2(v30) )
  {
    v7 = HIDWORD(v37);
    if ( DWORD2(v30) == HIDWORD(v37) )
    {
      v8 = HIDWORD(v30);
      if ( HIDWORD(v30) >= DWORD2(v30) )
      {
        if ( HIDWORD(v30) )
        {
          if ( ((HIDWORD(v30) - 1) & HIDWORD(v30)) == 0 && !(HIDWORD(v30) % DWORD2(v30)) )
          {
            v9 = v31;
            if ( !(v31 % DWORD2(v30)) )
              goto LABEL_21;
          }
        }
      }
    }
  }
  else
  {
LABEL_19:
    v7 = HIDWORD(v37);
  }
  v8 = v7;
  OutputBuffer = 0LL;
  HIDWORD(v30) = v7;
  v9 = -1;
  *(_QWORD *)&v30 = 0LL;
  DWORD2(v30) = v7;
  v31 = -1;
LABEL_21:
  *(_DWORD *)a2 = v7;
  *(_DWORD *)(a2 + 4) = v8;
  *(_DWORD *)(a2 + 8) = v8;
  *(_DWORD *)(a2 + 16) = 3;
  *(_DWORD *)(a2 + 20) = v9;
  *(_DWORD *)(a2 + 24) = -1;
  *(_DWORD *)(a2 + 12) = v7;
  if ( v9 != -1 )
  {
    *(_DWORD *)(a2 + 20) = v9;
    v16 = v9 % v8;
    if ( v9 % v8 )
      *(_DWORD *)(a2 + 16) = 2;
    memset_0(v24, 0, 0x90uLL);
    memset(&Event, 0, sizeof(Event));
    IoStatusBlock = 0LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v17 = IoBuildDeviceIoControlRequest(0x70048u, DeviceObject, 0LL, 0, v24, 0x90u, 0, &Event, &IoStatusBlock);
    if ( v17 )
    {
      v17->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
      v18 = IofCallDriver(DeviceObject, v17);
      if ( v18 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v18 = IoStatusBlock.Status;
      }
      if ( v18 >= 0 )
      {
        v19 = HIDWORD(v30);
        v20 = v26 % HIDWORD(v30);
        v21 = HIDWORD(v30) - v20;
        *(_DWORD *)(a2 + 24) = v20;
        if ( v21 % v19 != v16 )
          *(_DWORD *)(a2 + 16) &= ~2u;
      }
    }
  }
  v28 = 0LL;
  v32 = 0LL;
  v33 = 0;
  InputBuffer = 7;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(
          0x2D1400u,
          DeviceObject,
          &InputBuffer,
          0xCu,
          &v32,
          0xCu,
          0,
          &Event,
          &IoStatusBlock);
  if ( v10 )
  {
    v10->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v11 = IofCallDriver(DeviceObject, v10);
    if ( v11 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v11 = IoStatusBlock.Status;
    }
    if ( v11 >= 0
      && (unsigned int)v32 >= 0xC
      && IoStatusBlock.Information >= 0xC
      && HIDWORD(v32) >= IoStatusBlock.Information
      && !(_BYTE)v33 )
    {
      *(_DWORD *)(a2 + 16) |= 4u;
    }
  }
  v28 = 0LL;
  v34 = 0LL;
  v35 = 0;
  InputBuffer = 8;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12 = IoBuildDeviceIoControlRequest(
          0x2D1400u,
          DeviceObject,
          &InputBuffer,
          0xCu,
          &v34,
          0xCu,
          0,
          &Event,
          &IoStatusBlock);
  if ( v12 )
  {
    v12->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v13 = IofCallDriver(DeviceObject, v12);
    if ( v13 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v13 = IoStatusBlock.Status;
    }
    if ( v13 >= 0
      && IoStatusBlock.Information >= 0xC
      && (unsigned int)v34 >= 0xC
      && HIDWORD(v34) >= IoStatusBlock.Information
      && (_BYTE)v35 )
    {
      *(_DWORD *)(a2 + 16) |= 8u;
    }
  }
  v28 = 0LL;
  InputBuffer = 55;
  v38 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(
          0x2D1400u,
          DeviceObject,
          &InputBuffer,
          0xCu,
          &v38,
          0x10u,
          0,
          &Event,
          &IoStatusBlock);
  if ( v14 )
  {
    v14->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v15 = IofCallDriver(DeviceObject, v14);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = IoStatusBlock.Status;
    }
    if ( v15 >= 0 && IoStatusBlock.Information == 16 && (BYTE8(v38) & 1) != 0 )
      *(_DWORD *)(a2 + 16) |= 0x10u;
  }
  return 0LL;
}
