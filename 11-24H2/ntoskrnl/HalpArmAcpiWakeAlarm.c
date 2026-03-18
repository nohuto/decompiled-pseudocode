/*
 * XREFs of HalpArmAcpiWakeAlarm @ 0x140A811F0
 * Callers:
 *     HaliSetWakeAlarm @ 0x140B6D740 (HaliSetWakeAlarm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     HalpGetDynamicDevicePointer @ 0x140A81570 (HalpGetDynamicDevicePointer.c)
 *     HalpCallWakeAlarmDriver @ 0x140A97700 (HalpCallWakeAlarmDriver.c)
 */

__int64 __fastcall HalpArmAcpiWakeAlarm(__int64 a1)
{
  int DynamicDevicePointer; // ebx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  DynamicDevicePointer = HalpGetDynamicDevicePointer(a1, &Object);
  if ( DynamicDevicePointer >= 0 )
  {
    if ( (int)HalpCallWakeAlarmDriver((PDEVICE_OBJECT)Object) < 0
      || (int)HalpCallWakeAlarmDriver((PDEVICE_OBJECT)Object) < 0
      || (int)HalpCallWakeAlarmDriver((PDEVICE_OBJECT)Object) < 0
      || (int)HalpCallWakeAlarmDriver((PDEVICE_OBJECT)Object) < 0 )
    {
      DynamicDevicePointer = -1073741823;
    }
    else
    {
      DynamicDevicePointer = 0;
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)DynamicDevicePointer;
}
