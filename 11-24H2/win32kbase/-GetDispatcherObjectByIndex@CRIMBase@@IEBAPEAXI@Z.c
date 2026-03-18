/*
 * XREFs of ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x14020C3BC
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E46B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x14020D340 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1400DACE0 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall CRIMBase::GetDispatcherObjectByIndex(CRIMBase *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdi

  v2 = a2;
  if ( a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 377);
  v4 = 56 * v2;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + v4 + 168)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 378);
  return *(void **)((char *)this + v4 + 208);
}
