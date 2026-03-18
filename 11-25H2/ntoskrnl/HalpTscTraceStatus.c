/*
 * XREFs of HalpTscTraceStatus @ 0x140547348
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140546670 (HalpTscAdvSynchLeader.c)
 *     HalpTscFallbackToPlatformSource @ 0x140546CF4 (HalpTscFallbackToPlatformSource.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall HalpTscTraceStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  if ( HalpDiagnosticEventsRegistered )
  {
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      EtwWriteEx(HalpDiagnosticEventHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
