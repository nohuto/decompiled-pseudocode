/*
 * XREFs of PopPowerAggregatorDiagTraceInternalStateChange @ 0x140902EE4
 * Callers:
 *     PopPowerAggregatorSetCurrentState @ 0x140902BD0 (PopPowerAggregatorSetCurrentState.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopPowerAggregatorDiagTraceInternalStateChange(ULONGLONG a1, __int64 a2)
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
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_INTERNAL_STATE_CHANGE);
    if ( result )
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_INTERNAL_STATE_CHANGE, 0LL, 2u, &UserData);
  }
  return result;
}
