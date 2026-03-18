/*
 * XREFs of ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C0076A14
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00768C0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C01DD230 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C00535B8 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall CRIMBase::GetDispatcherObjectByIndex(CRIMBase *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx

  v2 = a2;
  if ( a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 360LL);
  v4 = v2 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + v4 + 168)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 361LL);
  return *(void **)((char *)this + v4 + 216);
}
