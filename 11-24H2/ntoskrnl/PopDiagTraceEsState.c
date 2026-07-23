/*
 * XREFs of PopDiagTraceEsState @ 0x1405D2488
 * Callers:
 *     PopEsUpdateState @ 0x1404E43DC (PopEsUpdateState.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceEsState(__int64 a1)
{
  BOOLEAN result; // al
  int v3; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  result = PopEsReason;
  v3 = PopEsReason;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ENERGY_SAVER_STATE_V2);
    if ( result )
    {
      UserData.Reserved = 0;
      v7 = 0;
      UserData.Ptr = a1 + 4;
      UserData.Size = 4;
      v5 = &v3;
      v6 = 4;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ENERGY_SAVER_STATE_V2, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
