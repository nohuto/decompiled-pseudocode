/*
 * XREFs of ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x140146AA4
 * Callers:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x140146A10 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 *     CKeyboardSensor_Destroy @ 0x140146A40 (CKeyboardSensor_Destroy.c)
 *     ??_GCTouchpadAcceleration@@UEAAPEAXI@Z @ 0x14014DBB0 (--_GCTouchpadAcceleration@@UEAAPEAXI@Z.c)
 *     ??_GCMasterInputThread@@UEAAPEAXI@Z @ 0x14021FAD0 (--_GCMasterInputThread@@UEAAPEAXI@Z.c)
 *     ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x14021FB00 (--_GCKernelSensorThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall CDeviceAcceleration::operator delete(char *a1)
{
  if ( a1 )
    GreDeleteFastMutex(a1);
}
