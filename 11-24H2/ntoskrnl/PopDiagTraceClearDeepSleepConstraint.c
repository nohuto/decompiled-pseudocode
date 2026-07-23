/*
 * XREFs of PopDiagTraceClearDeepSleepConstraint @ 0x1402BA210
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceClearDeepSleepConstraint(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CLEAR_CONSTRAINT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CLEAR_CONSTRAINT, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
