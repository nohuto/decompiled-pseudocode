/*
 * XREFs of VhdiMountVhdFile @ 0x14082A898
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x14082A69C (VhdiAutoAttachOneVhd.c)
 *     VhdInitialize @ 0x140C5F424 (VhdInitialize.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     wcscat_s @ 0x140502000 (wcscat_s.c)
 *     wcsncat_s @ 0x140502130 (wcsncat_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateFile @ 0x1406A7E50 (ZwCreateFile.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceObjectPointer @ 0x1409504C0 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VhdiMountVhdFile(void *a1, unsigned int a2, int a3, char a4, _OWORD *a5)
{
  size_t v5; // r13
  WCHAR *v6; // r15
  WCHAR *v7; // rsi
  void *v8; // rdi
  _DWORD *OutputBuffer; // r14
  NTSTATUS DeviceObjectPointer; // ebx
  int DeviceInterfaces; // eax
  int v12; // ebx
  ULONG v13; // r12d
  __int64 Pool2; // rax
  void *v15; // rdx
  unsigned int v16; // r13d
  ULONG OutputBufferLength; // ebx
  IRP *v18; // rax
  char *v19; // rbx
  unsigned int v20; // r13d
  __int64 v21; // rax
  const wchar_t *v22; // r12
  __int128 v23; // xmm0
  NTSTATUS v24; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r12
  PIRP v26; // rax
  PIRP v27; // rax
  PCWSTR SourceString; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h]
  void *Src; // [rsp+80h] [rbp-80h]
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp-60h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v40; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v41[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v42[32]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v43; // [rsp+150h] [rbp+50h]
  __int128 v44; // [rsp+160h] [rbp+60h]
  __int128 v45; // [rsp+170h] [rbp+70h]
  int v46; // [rsp+180h] [rbp+80h]
  _OWORD InputBuffer[3]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v48; // [rsp+1C0h] [rbp+C0h]
  _DWORD EaBuffer[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v50; // [rsp+1D8h] [rbp+D8h]
  GUID v51; // [rsp+1E0h] [rbp+E0h]
  __int128 v52; // [rsp+1F0h] [rbp+F0h]
  __int128 v53; // [rsp+200h] [rbp+100h]
  __int128 v54; // [rsp+210h] [rbp+110h]
  __int128 v55; // [rsp+220h] [rbp+120h]
  int v56; // [rsp+230h] [rbp+130h]
  int v57; // [rsp+234h] [rbp+134h]

  Src = a1;
  v32 = a3;
  v5 = a2;
  FileHandle = 0LL;
  DeviceObject = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  OutputBuffer = 0LL;
  v48 = 0LL;
  SourceString = 0LL;
  FileObject = 0LL;
  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  v40 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(InputBuffer, 0, sizeof(InputBuffer));
  if ( !a1 || !a2 )
  {
    DeviceObjectPointer = -1073741811;
    goto LABEL_38;
  }
  memset_0(v42, 0, 0x54uLL);
  DeviceInterfaces = IopGetDeviceInterfaces(&GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE, 0LL, 0LL, 0LL, &SourceString, 0LL);
  v7 = (WCHAR *)SourceString;
  DeviceObjectPointer = DeviceInterfaces;
  if ( DeviceInterfaces >= 0 )
  {
    if ( !*SourceString )
    {
      DeviceObjectPointer = -1073741275;
      goto LABEL_38;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
      v12 = v5 + 2;
      v13 = v5 + 34;
      Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)(v5 + 34), 0x42646856u);
      v8 = (void *)Pool2;
      if ( !Pool2 )
        goto LABEL_9;
      v15 = Src;
      *(_QWORD *)Pool2 = 1LL;
      *(GUID *)(Pool2 + 8) = CPER_EMPTY_GUID;
      *(_DWORD *)(Pool2 + 24) = 32;
      *(_DWORD *)(Pool2 + 28) = v12;
      SourceString = (PCWSTR)v5;
      memmove((void *)(Pool2 + 32), v15, v5);
      v16 = v5 + 516;
      OutputBufferLength = v12 + 542;
      OutputBuffer = (_DWORD *)ExAllocatePool2(0x40uLL, OutputBufferLength, 0x42646856u);
      if ( !OutputBuffer )
      {
LABEL_9:
        DeviceObjectPointer = -1073741801;
        goto LABEL_38;
      }
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v18 = IoBuildDeviceIoControlRequest(
              0x2D592Cu,
              DeviceObject,
              v8,
              v13,
              OutputBuffer,
              OutputBufferLength,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v18 )
        goto LABEL_12;
      DeviceObjectPointer = IofCallDriver(DeviceObject, v18);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer >= 0 )
      {
        v19 = (char *)OutputBuffer + (unsigned int)OutputBuffer[5];
        if ( *(_WORD *)v19 == 92 && *((_WORD *)v19 + 1) == 92 && *((_WORD *)v19 + 2) == 46 && *((_WORD *)v19 + 3) == 92 )
          *(_DWORD *)(v19 + 2) = 4128831;
        v20 = v16 >> 1;
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)&v19[2 * v21] );
        v22 = (const wchar_t *)Src;
        if ( *(_WORD *)&v19[2 * v21 - 2] != 92 && *(_WORD *)Src != 92 )
          wcscat_s((wchar_t *)v19, v20, L"\\");
        wcsncat_s((wchar_t *)v19, v20, v22, (unsigned __int64)SourceString >> 1);
        RtlInitUnicodeString(&v40, (PCWSTR)v19);
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &v40;
        ObjectAttributes.Attributes = 512;
        v57 = 0;
        EaBuffer[0] = 0;
        EaBuffer[1] = 5506944;
        v50 = 0x4B534454524956LL;
        v23 = *(_OWORD *)OutputBuffer;
        DWORD1(v43) = 84;
        LODWORD(v43) = OutputBuffer[4];
        DWORD2(v43) = a4 != 0 ? 4 : 0;
        v52 = v23;
        DWORD1(v44) = 2;
        v56 = v46;
        v53 = v43;
        v51 = GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE;
        v54 = v44;
        v55 = v45;
        DeviceObjectPointer = ZwCreateFile(
                                &FileHandle,
                                0x80000000,
                                &ObjectAttributes,
                                &IoStatusBlock,
                                0LL,
                                0x80u,
                                1u,
                                2u,
                                0,
                                EaBuffer,
                                0x67u);
        if ( DeviceObjectPointer >= 0 )
        {
          SourceString = 0LL;
          v24 = ObReferenceObjectByHandle(FileHandle, 0xC0100000, 0LL, 0, (PVOID *)&SourceString, 0LL);
          v6 = (WCHAR *)SourceString;
          DeviceObjectPointer = v24;
          if ( v24 >= 0 )
          {
            RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)SourceString);
            if ( !a5 )
              goto LABEL_35;
            memset(v41, 0, sizeof(v41));
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            LODWORD(DeviceObject) = 14;
            v26 = IoBuildDeviceIoControlRequest(
                    0x2D1940u,
                    RelatedDeviceObject,
                    &DeviceObject,
                    4u,
                    v41,
                    0x20u,
                    0,
                    &Event,
                    &IoStatusBlock);
            if ( !v26 )
              goto LABEL_12;
            v26->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v6;
            DeviceObjectPointer = IofCallDriver(RelatedDeviceObject, v26);
            if ( DeviceObjectPointer == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              DeviceObjectPointer = IoStatusBlock.Status;
            }
            if ( DeviceObjectPointer >= 0 )
            {
              if ( *a5 != *(_OWORD *)((char *)v41 + 8) )
              {
                DeviceObjectPointer = -1069940684;
                goto LABEL_38;
              }
LABEL_35:
              LODWORD(InputBuffer[0]) = 1;
              DWORD1(InputBuffer[0]) = v32 | 4;
              KeInitializeEvent(&Event, SynchronizationEvent, 0);
              v27 = IoBuildDeviceIoControlRequest(
                      0x2D191Cu,
                      RelatedDeviceObject,
                      InputBuffer,
                      0x38u,
                      0LL,
                      0,
                      0,
                      &Event,
                      &IoStatusBlock);
              if ( v27 )
              {
                v27->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v6;
                DeviceObjectPointer = IofCallDriver(RelatedDeviceObject, v27);
                if ( DeviceObjectPointer == 259 )
                {
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  DeviceObjectPointer = IoStatusBlock.Status;
                }
                goto LABEL_38;
              }
LABEL_12:
              DeviceObjectPointer = -1073741670;
            }
          }
        }
      }
    }
  }
LABEL_38:
  if ( a4 )
  {
    if ( DeviceObjectPointer < 0 )
      KeBugCheckEx(0x12Fu, 5uLL, DeviceObjectPointer, 0LL, 0LL);
  }
  else
  {
    ZwClose(FileHandle);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x42646856u);
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x42646856u);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)DeviceObjectPointer;
}
