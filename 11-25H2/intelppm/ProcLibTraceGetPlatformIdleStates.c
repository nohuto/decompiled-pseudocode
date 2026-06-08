/*
 * XREFs of ProcLibTraceGetPlatformIdleStates @ 0x140043B08
 * Callers:
 *     QueryPepCapabilites @ 0x14003C608 (QueryPepCapabilites.c)
 *     ProcLibTraceControlCallback @ 0x140041B80 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTraceGetPlatformIdleStates(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  v1 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATES;
  if ( a1 )
    v1 = &PPM_ETW_GET_PLATFORM_IDLE_STATES_RUNDOWN;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v1);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (unsigned __int64)&dword_14001981C;
    UserData.Size = 4;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v1, 0LL, (ULONG)1, &UserData);
  }
  return result;
}
