/*
 * XREFs of PopPowerAggregatorDiagTraceHandlerInvoke @ 0x1409A06E0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x1409A0628 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopPowerAggregatorDiagTraceHandlerInvoke(ULONGLONG a1, __int64 a2)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  UserData.Reserved = 0;
  result = 4;
  v6 = 0;
  UserData.Ptr = a1;
  UserData.Size = 4;
  v4 = a2;
  v5 = 4;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE);
    if ( result )
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 0LL, 2u, &UserData);
  }
  return result;
}
