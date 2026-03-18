/*
 * XREFs of KeInitializeDeviceQueue @ 0x1404ADD00
 * Callers:
 *     HalpDmaAllocateChildAdapterV2 @ 0x140700A80 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140713DC0 (IoCreateController.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  *(_DWORD *)&DeviceQueue->Type = 2621460;
  DeviceQueue->DeviceListHead.Blink = &DeviceQueue->DeviceListHead;
  DeviceQueue->DeviceListHead.Flink = &DeviceQueue->DeviceListHead;
  DeviceQueue->Lock = 0LL;
  DeviceQueue->Busy = 0;
  DeviceQueue->1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)(unsigned __int8)*(_QWORD *)&DeviceQueue->1;
}
