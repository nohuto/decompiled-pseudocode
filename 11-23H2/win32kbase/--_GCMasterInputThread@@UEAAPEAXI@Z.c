/*
 * XREFs of ??_GCMasterInputThread@@UEAAPEAXI@Z @ 0x1C0080BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CMasterInputThread *__fastcall CMasterInputThread::`scalar deleting destructor'(CMasterInputThread *this, char a2)
{
  *(_QWORD *)this = &CInputThreadBase::`vftable';
  if ( *((_QWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
