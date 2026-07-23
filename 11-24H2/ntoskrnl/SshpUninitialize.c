/*
 * XREFs of SshpUninitialize @ 0x140C36428
 * Callers:
 *     SshInitialize @ 0x140C362EC (SshInitialize.c)
 * Callees:
 *     SleepstudyHelperDestroyLibrary @ 0x140767890 (SleepstudyHelperDestroyLibrary.c)
 *     SSHSupportUnregisterPowerSettingCallback @ 0x140767B9C (SSHSupportUnregisterPowerSettingCallback.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 */

__int64 *SshpUninitialize()
{
  REGHANDLE v0; // rcx
  __int64 *result; // rax

  if ( SshpPowerSettingHandleInitialized )
  {
    SSHSupportUnregisterPowerSettingCallback();
    SshpPowerSettingHandleInitialized = 0;
  }
  if ( _InterlockedExchange(&SshpTelemetryHandleRegistered, 0) )
  {
    v0 = qword_140E08580;
    qword_140E08580 = 0LL;
    dword_140E08560 = 0;
    EtwUnregister(v0);
  }
  if ( _InterlockedExchange(&SshpTraceHandleRegistered, 0) )
    EtwUnregister(SshpTraceHandle);
  while ( 1 )
  {
    result = &SshpLibraryList;
    if ( (__int64 *)SshpLibraryList == &SshpLibraryList )
      break;
    SleepstudyHelperDestroyLibrary((ULONG *)SshpLibraryList);
  }
  SshpInitialized = 0;
  return result;
}
