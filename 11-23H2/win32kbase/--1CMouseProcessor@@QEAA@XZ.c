/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x1C0080B30
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0080710 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1C0083910 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor *this)
{
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  if ( *((_QWORD *)this + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  if ( *((CMouseProcessor **)this + 482) != (CMouseProcessor *)((char *)this + 3856) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7001LL);
  if ( *((_QWORD *)this + 479) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  CMouseProcessor::MouseInterceptState::~MouseInterceptState((CMouseProcessor *)((char *)this + 3704));
  CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3576));
  *(_QWORD *)this = &CBaseProcessor::`vftable';
}
