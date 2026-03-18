/*
 * XREFs of HalpTscTraceStatus @ 0x140549C38
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140548F60 (HalpTscAdvSynchLeader.c)
 *     HalpTscFallbackToPlatformSource @ 0x1405495E4 (HalpTscFallbackToPlatformSource.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
