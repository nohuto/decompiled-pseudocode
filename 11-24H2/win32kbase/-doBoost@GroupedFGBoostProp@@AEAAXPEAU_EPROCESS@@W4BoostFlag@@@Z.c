/*
 * XREFs of ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x14010CBC0
 * Callers:
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x14010CA78 (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x14010CB0C (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 * Callees:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x140163FE0 (-SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4For.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A23E4 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GroupedFGBoostProp::doBoost(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD *ProcessWin32Process; // rax
  __int64 result; // rax

  v5 = 0;
  if ( !(unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a2);
    if ( !ProcessWin32Process || !*ProcessWin32Process )
    {
      LOBYTE(v5) = a3 == 1;
      return PsSetProcessPriorityByClass(a2, v5);
    }
LABEL_8:
    LOBYTE(v5) = a3 == 1;
    return ForegroundBoost::SetForegroundPriority(ProcessWin32Process, v5, 2LL);
  }
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a2);
  if ( ProcessWin32Process && *ProcessWin32Process )
    goto LABEL_8;
  result = PsGetProcessExitProcessCalled(a2);
  if ( !(_BYTE)result )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 150LL);
  return result;
}
