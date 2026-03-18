/*
 * XREFs of PopTraceNetRefreshTimerArmed @ 0x140758A40
 * Callers:
 *     PopNetArmRefreshTimer @ 0x14075C644 (PopNetArmRefreshTimer.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopTraceNetRefreshTimerArmed(unsigned __int64 a1)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED) )
    {
      UserData.Reserved = 0;
      UserData.Size = 8;
      UserData.Ptr = (ULONGLONG)&v2;
      v2 = a1 / 0xA;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_ARMED, 0LL, 1u, &UserData);
    }
  }
}
