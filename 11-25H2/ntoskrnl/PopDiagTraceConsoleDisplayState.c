/*
 * XREFs of PopDiagTraceConsoleDisplayState @ 0x140A1E5D8
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140A1DEFC (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceConsoleDisplayState(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CONSOLE_DISPLAY_STATE) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CONSOLE_DISPLAY_STATE, 0LL, 1u, &UserData);
    }
  }
}
