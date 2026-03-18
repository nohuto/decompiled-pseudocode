/*
 * XREFs of ACPIInternalIsPci @ 0x1400C0C40
 * Callers:
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x14003FF48 (ACPIInternalSetFlags.c)
 *     IsPciDevice @ 0x140049380 (IsPciDevice.c)
 *     IsPciBus @ 0x1400B46A8 (IsPciBus.c)
 */

__int64 __fastcall ACPIInternalIsPci(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rsi
  void *v3; // rbx
  int v5; // r9d
  __int128 Event; // [rsp+30h] [rbp-28h] BYREF
  __int128 Event_16; // [rsp+40h] [rbp-18h]
  char v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0;
  Event = 0LL;
  Event_16 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v3 = (void *)(DeviceExtension + 8);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x102000000LL) != 0 )
    return 0LL;
  if ( (unsigned __int8)IsPciBus(a1) == 1 )
  {
    ACPIInternalSetFlags(v3, 0x2000000uLL);
    return 0LL;
  }
  DWORD2(Event_16) = -1073741275;
  KeInitializeEvent((PRKEVENT)&Event, SynchronizationEvent, 0);
  v5 = IsPciDevice(*(_QWORD *)(DeviceExtension + 760), (__int64)AmlisuppCompletePassive, (__int64)&Event, &v8);
  if ( v5 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v5 = DWORD2(Event_16);
  }
  if ( v5 >= 0 && v8 == 1 )
    ACPIInternalSetFlags(v3, 0x100000000uLL);
  return (unsigned int)v5;
}
