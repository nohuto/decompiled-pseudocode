/*
 * XREFs of UsbhQueryParentHubConfig @ 0x1C005A8D8
 * Callers:
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhFreeID @ 0x1C00503BC (UsbhFreeID.c)
 *     UsbhPropagateUxdState @ 0x1C005A7DC (UsbhPropagateUxdState.c)
 */

__int64 __fastcall UsbhQueryParentHubConfig(__int64 a1)
{
  PDEVICE_OBJECT *v2; // rbx
  _DWORD *Pool2; // rax
  _DWORD *v4; // rdi
  PIRP v6; // rax
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v2 = (PDEVICE_OBJECT *)FdoExt(a1);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 204LL, 1112885333LL);
  v4 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 1;
  Pool2[1] = 204;
  v6 = IoBuildDeviceIoControlRequest(0x22044Fu, v2[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v6 )
  {
    v6->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4;
    v8 = IofCallDriver(v2[151], v6);
    v7 = v8;
    if ( v8 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v7 = 0;
    }
    else if ( v8 < 0 )
    {
LABEL_11:
      UsbhFreeID((__int64)(v4 + 7));
      UsbhFreeID((__int64)(v4 + 3));
      UsbhFreeID((__int64)(v4 + 11));
      goto LABEL_12;
    }
    if ( IoStatusBlock.Status >= 0 && (v4[33] & 1) != 0 )
      UsbhPropagateUxdState(a1, v4 + 34);
    goto LABEL_11;
  }
  v7 = -1073741670;
LABEL_12:
  ExFreePoolWithTag(v4, 0);
  return v7;
}
