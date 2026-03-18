/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140C3B150
 * Callers:
 *     SeRmInitPhase1 @ 0x140C6024C (SeRmInitPhase1.c)
 * Callees:
 *     SepAdtInitializeBounds @ 0x1407962BC (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140796340 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407963A0 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140796400 (SepAdtOpenRegAndSetupNotification.c)
 *     AdtpInitializeAuditingCommon @ 0x1408119A0 (AdtpInitializeAuditingCommon.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     NtSetEvent @ 0x14098A760 (NtSetEvent.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AAC2F4 (SepAdtOpenEtwReadyEvent.c)
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
