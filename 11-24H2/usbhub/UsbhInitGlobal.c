/*
 * XREFs of UsbhInitGlobal @ 0x140050618
 * Callers:
 *     DriverEntry @ 0x14004E588 (DriverEntry.c)
 * Callees:
 *     memset @ 0x140061340 (memset.c)
 */

__int64 UsbhInitGlobal()
{
  __int64 result; // rax

  memset(&HubG, 0, 0x1B8uLL);
  KeInitializeSpinLock(&HubG);
  KeInitializeSpinLock(&SpinLock);
  KeInitializeEvent(&Event, SynchronizationEvent, 1u);
  KeInitializeEvent(&stru_14006F6F0, SynchronizationEvent, 0);
  dword_14006F5E8 = 2017613128;
  dword_14006F658 = 1734964085;
  dword_14006F628 = 1734964085;
  dword_14006F618 = 1734964085;
  dword_14006F608 = 1734964085;
  dword_14006F634 = 1734964085;
  dword_14006F640 = 1734964085;
  dword_14006F64C = 1734964085;
  dword_14006F660 = 1734964085;
  qword_14006F6A0 = (__int64)&qword_14006F698;
  qword_14006F698 = (__int64)&qword_14006F698;
  qword_14006F588 = (__int64)&qword_14006F580;
  qword_14006F580 = (__int64)&qword_14006F580;
  qword_14006F6E8 = (__int64)&qword_14006F6E0;
  qword_14006F6E0 = (__int64)&qword_14006F6E0;
  result = 2LL;
  dword_14006F59C = 2;
  dword_14006F5C8 = 2;
  qword_14006F5F8 = (__int64)&HubG;
  dword_14006F5EC = 3;
  qword_14006F5F0 = 0LL;
  dword_14006F590 = 500;
  dword_14006F594 = 8;
  qword_14006F5A8 = 32LL;
  dword_14006F5B0 = 1;
  dword_14006F5B8 = 0;
  qword_14006F5BC = 10LL;
  dword_14006F5D4 = 300;
  dword_14006F6A8 = 3;
  dword_14006F5C4 = 2000;
  dword_14006F6B8 = 1;
  dword_14006F710 = 25;
  return result;
}
