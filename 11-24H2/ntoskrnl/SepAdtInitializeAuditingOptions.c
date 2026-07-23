/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140C3D2A8
 * Callers:
 *     SeRmInitPhase1 @ 0x140C6239C (SeRmInitPhase1.c)
 * Callees:
 *     SepAdtInitializeBounds @ 0x1407963CC (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140796450 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407964B0 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140796510 (SepAdtOpenRegAndSetupNotification.c)
 *     AdtpInitializeAuditingCommon @ 0x1408120E0 (AdtpInitializeAuditingCommon.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtSetEvent @ 0x140973E50 (NtSetEvent.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AA732C (SepAdtOpenEtwReadyEvent.c)
 */

NTSTATUS SepAdtInitializeAuditingOptions()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  HANDLE EventHandle; // [rsp+30h] [rbp+8h] BYREF

  EventHandle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent(&EventHandle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(EventHandle, 0LL);
      NtClose(EventHandle);
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
