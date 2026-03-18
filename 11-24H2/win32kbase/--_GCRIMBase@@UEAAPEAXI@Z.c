/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x140146A10
 * Callers:
 *     CHidInput_Destroy @ 0x14020F700 (CHidInput_Destroy.c)
 *     CMouseSensor_Destroy @ 0x140210EC0 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x140146AA4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete(this);
  return this;
}
