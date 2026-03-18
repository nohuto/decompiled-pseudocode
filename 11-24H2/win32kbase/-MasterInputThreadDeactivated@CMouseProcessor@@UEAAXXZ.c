/*
 * XREFs of ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x14021DAD0
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x14019CE14 (-DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x14021C8F4 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 */

void __fastcall CMouseProcessor::MasterInputThreadDeactivated(CMouseProcessor *this)
{
  __int64 v2; // rcx

  if ( !IsInputThread((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 805);
  if ( !IsInputThread(v2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6364);
  CMouseProcessor::MouseInterceptState::Disable((__int64)this + 3912);
  CMouseProcessor::BufferedMouseInputList::DropAllMouseInput((CMouseProcessor *)((char *)this + 4040));
  *((_DWORD *)this + 2) = 1;
}
