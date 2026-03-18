/*
 * XREFs of ??_GCInputThreadBase@@UEAAPEAXI@Z @ 0x1C01FC4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CInputThreadBase *__fastcall CInputThreadBase::`scalar deleting destructor'(CInputThreadBase *this, char a2)
{
  *(_QWORD *)this = &CInputThreadBase::`vftable';
  if ( *((_QWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 28);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
