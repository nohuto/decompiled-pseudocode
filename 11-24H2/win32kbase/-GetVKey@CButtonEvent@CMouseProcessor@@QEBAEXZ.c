/*
 * XREFs of ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x14021D05C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int8 __fastcall CMouseProcessor::CButtonEvent::GetVKey(CMouseProcessor::CButtonEvent *this)
{
  if ( !*((_QWORD *)this + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7841);
  return *(_BYTE *)(*((_QWORD *)this + 5) + 12LL);
}
