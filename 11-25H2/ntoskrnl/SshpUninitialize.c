/*
 * XREFs of SshpUninitialize @ 0x140C2301C
 * Callers:
 *     SshInitialize @ 0x140C22EE0 (SshInitialize.c)
 * Callees:
 *     SleepstudyHelperDestroyLibrary @ 0x140757CA0 (SleepstudyHelperDestroyLibrary.c)
 *     SSHSupportUnregisterPowerSettingCallback @ 0x140757FAC (SSHSupportUnregisterPowerSettingCallback.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
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
    v0 = qword_140E08430;
    qword_140E08430 = 0LL;
    dword_140E08410 = 0;
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
