/*
 * XREFs of UsbhRemoveAndDeletePdo @ 0x14001579C
 * Callers:
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhDeleteOrphanPdo @ 0x1400397FC (UsbhDeleteOrphanPdo.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhFreeID @ 0x14002796C (UsbhFreeID.c)
 */

void __fastcall UsbhRemoveAndDeletePdo(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  KIRQL v3; // bl
  KIRQL v4; // bp

  v2 = PdoExt((__int64)DeviceObject);
  RtlFreeUnicodeString((PUNICODE_STRING)v2 + 167);
  v3 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5E0 = (__int64)&dword_14006F5E8;
  UsbhFreeID(v2 + 524);
  UsbhFreeID(v2 + 520);
  UsbhFreeID(v2 + 528);
  UsbhFreeID(v2 + 536);
  UsbhFreeID(v2 + 532);
  UsbhFreeID(v2 + 540);
  UsbhFreeID(v2 + 544);
  UsbhFreeID(v2 + 548);
  UsbhFreeID(v2 + 556);
  UsbhFreeID(v2 + 552);
  qword_14006F5E0 = 0LL;
  KeReleaseSpinLock(&HubG, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 351);
  if ( v2[704] == 1 )
  {
    v2[704] = 0;
    USBD_RemoveDeviceFromGlobalList(DeviceObject);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 351, v4);
  IoDeleteDevice(DeviceObject);
}
