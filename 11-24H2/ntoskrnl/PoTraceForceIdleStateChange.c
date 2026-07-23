/*
 * XREFs of PoTraceForceIdleStateChange @ 0x140484EA0
 * Callers:
 *     KiSetForceIdleState @ 0x140484E74 (KiSetForceIdleState.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PoTraceForceIdleStateChange(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]
  int v6; // [rsp+80h] [rbp+8h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_FORCEIDLE_STATE_CHANGE) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 4;
      v3 = &v7;
      v4 = 4;
      EtwWriteEx(PopDiagHandle, &POP_ETW_FORCEIDLE_STATE_CHANGE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
