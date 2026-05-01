/*
 * XREFs of wil::details::lambda_call__lambda_dca440f115cf5346cc67ffa75a0e5732___::_lambda_call__lambda_dca440f115cf5346cc67ffa75a0e5732___ @ 0x1802CDA18
 * Callers:
 *     _TouchEdgeGripperWindow::GetMonitorDisplayInfo_::_1_::dtor$0 @ 0x1806DC229 (_TouchEdgeGripperWindow--GetMonitorDisplayInfo_--_1_--dtor$0.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_dca440f115cf5346cc67ffa75a0e5732___::_lambda_call__lambda_dca440f115cf5346cc67ffa75a0e5732___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return MicrosoftTelemetryAssertTriggeredNoArgs(a1, a2);
  }
  return result;
}
