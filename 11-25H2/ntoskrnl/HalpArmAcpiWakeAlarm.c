/*
 * XREFs of HalpArmAcpiWakeAlarm @ 0x140A7DB70
 * Callers:
 *     HaliSetWakeAlarm @ 0x140B5E690 (HaliSetWakeAlarm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     HalpGetDynamicDevicePointer @ 0x140A7DEF0 (HalpGetDynamicDevicePointer.c)
 *     HalpCallWakeAlarmDriver @ 0x140A933D0 (HalpCallWakeAlarmDriver.c)
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
