/*
 * XREFs of UsbhEtwRundown @ 0x14002DB8C
 * Callers:
 *     UsbhEtwEnableCallback @ 0x14002DB60 (UsbhEtwEnableCallback.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     UsbhEtwLogDeviceInformation @ 0x140024C7C (UsbhEtwLogDeviceInformation.c)
 *     UsbhAcquireFdoPnpLock @ 0x14002DD30 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x14002DDF4 (UsbhReleaseFdoPnpLock.c)
 *     UsbhEtwLogHubInformation @ 0x14002F554 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x14002F654 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x140030558 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogDeviceDescription @ 0x140039BD4 (UsbhEtwLogDeviceDescription.c)
 */

LONG UsbhEtwRundown()
{
  __int64 *i; // rdi
  __int64 *v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // eax
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 *j; // r14
  _DWORD *v7; // rax
  KIRQL v8; // dl
  _DWORD *v9; // rax

  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  for ( i = (__int64 *)qword_14006F580; i != &qword_14006F580; i = (__int64 *)*i )
  {
    v1 = i - 644;
    v2 = *(i - 494);
    v3 = (unsigned int)FdoExt(v2);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(v2, v3 + 1384, 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation(i - 644, &USBHUB_ETW_EVENT_HUB_INFORMATION);
      UsbhEtwLogHubPastExceptions(i - 644);
      UsbhEtwLogPortInformation(v2);
      v4 = FdoExt(v2);
      UsbhAcquirePdoStateLock(v5, (__int64)(v4 + 346), 25);
      for ( j = (__int64 *)v1[601]; j != v1 + 601; j = (__int64 *)*j )
      {
        UsbhEtwLogDeviceInformation((__int64)(j - 165), &USBHUB_ETW_EVENT_DEVICE_INFORMATION, 1);
        UsbhEtwLogDeviceDescription(j - 165, &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION);
      }
      v7 = FdoExt(v2);
      v7[380] = 0;
      qword_14006F5E0 = 0LL;
      v8 = *((_BYTE *)v7 + 1516);
      v7[368] = 1734964085;
      KeReleaseSpinLock(&HubG, v8);
    }
    v9 = FdoExt(v2);
    UsbhReleaseFdoPnpLock(v2, v9 + 346);
  }
  return KeSetEvent(&Event, 0, 0);
}
