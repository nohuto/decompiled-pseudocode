/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140C29E70
 * Callers:
 *     SeRmInitPhase1 @ 0x140C4EBE4 (SeRmInitPhase1.c)
 * Callees:
 *     SepAdtInitializeBounds @ 0x140786EEC (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140786F70 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140786FD0 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140787030 (SepAdtOpenRegAndSetupNotification.c)
 *     AdtpInitializeAuditingCommon @ 0x140801E28 (AdtpInitializeAuditingCommon.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtSetEvent @ 0x140995330 (NtSetEvent.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AA6D34 (SepAdtOpenEtwReadyEvent.c)
 */

int SepAdtInitializeAuditingOptions()
{
  int result; // eax
  int v1; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent((unsigned __int64)&Handle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(Handle);
      NtClose(Handle);
      if ( v1 >= 0 )
      {
        result = SepAdtOpenRegAndSetupNotification();
        v1 = result;
        if ( result < 0 )
          return result;
        SepAdtInitializeCrashOnFail();
        SepAdtInitializePrivilegeAuditing();
        SepAdtInitializeBounds();
      }
      return v1;
    }
  }
  return result;
}
