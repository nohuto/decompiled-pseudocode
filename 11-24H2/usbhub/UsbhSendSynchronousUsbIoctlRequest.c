/*
 * XREFs of UsbhSendSynchronousUsbIoctlRequest @ 0x140024158
 * Callers:
 *     UsbhSshPropagateResume @ 0x140023FC8 (UsbhSshPropagateResume.c)
 *     UsbhFdoSetD0Warm @ 0x140037CE4 (UsbhFdoSetD0Warm.c)
 *     UsbhPortResumeTimeout @ 0x140046FF8 (UsbhPortResumeTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhSendSynchronousUsbIoctlRequest(__int64 a1, struct _DEVICE_OBJECT *a2, unsigned int a3)
{
  __int64 v3; // rbp
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  int Status; // ebx
  IRP *v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v3 = a3;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a2);
  if ( AttachedDeviceReference )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v7 = IoBuildDeviceIoControlRequest(v3, AttachedDeviceReference, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
    if ( v7 )
    {
      v8 = IofCallDriver(AttachedDeviceReference, v7);
      Status = v8;
      if ( v8 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      else
      {
        IoStatusBlock.Status = v8;
      }
      ObfDereferenceObject(AttachedDeviceReference);
    }
    else
    {
      ObfDereferenceObject(AttachedDeviceReference);
      Status = -1073741670;
    }
  }
  else
  {
    Status = -1073741810;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_DWORD *)v10 = 1380927827;
        *(_QWORD *)(v10 + 24) = Status;
        *(_QWORD *)(v10 + 16) = v3;
      }
    }
  }
  return (unsigned int)Status;
}
