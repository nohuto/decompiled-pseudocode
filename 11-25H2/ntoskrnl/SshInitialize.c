/*
 * XREFs of SshInitialize @ 0x140C22EE0
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     SshpSetCollectionActive @ 0x1404789B4 (SshpSetCollectionActive.c)
 *     SSHSupportEtwRegister @ 0x140757F48 (SSHSupportEtwRegister.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x140757F78 (SSHSupportRegisterPowerSettingCallback.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CmSiRWLockInitialize @ 0x140ABABF0 (CmSiRWLockInitialize.c)
 *     SshpUninitialize @ 0x140C2301C (SshpUninitialize.c)
 *     SshpSessionManagerInitialize @ 0x140C230A4 (SshpSessionManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 */

__int64 __fastcall SshInitialize(int a1)
{
  _RTL_RUN_ONCE *v1; // r8
  _QWORD *v2; // r8
  __int64 v3; // r9
  unsigned int v4; // edx
  int v5; // ebx

  if ( !a1 )
  {
    CmSiRWLockInitialize(&SshpLibraryListLock);
    SshpSessionType = 0;
    SshpSessionId = 0LL;
    v1 = (_RTL_RUN_ONCE *)&unk_140E08280;
    qword_140F05E28 = (__int64)&SshpLibraryList;
    SshpLibraryList = (__int64)&SshpLibraryList;
    do
    {
      CmSiRWLockInitialize(v1 - 4);
      v2[1] = v2;
      *v2 = v2;
      v4 = *((_DWORD *)v2 - 1) & 0xFFFFFFFC | 2;
      if ( (*((_BYTE *)v2 - 6) & 1) == 0 )
        v4 = *((_DWORD *)v2 - 1) & 0xFFFFFFFC;
      *((_DWORD *)v2 - 1) = v4;
      v1 = (_RTL_RUN_ONCE *)(v2 + 6);
    }
    while ( v3 != 1 );
    qword_140F05DF8 = 0LL;
    SshpPurgeBlockersWorkItem = 0LL;
    qword_140F05DF0 = (__int64)SshpPurgeBlockersWorker;
    dword_140F05E00 = 0;
    SshpGlobalBlockerCount = 0LL;
    SshpSetCollectionActive((ULONG_PTR)&qword_140E083E0, 1u);
    SshpInitialized = 1;
    return 0;
  }
  if ( a1 == 1 )
  {
    v5 = SshpAlpcInitialize();
    if ( v5 >= 0 )
    {
      SshpSessionManagerInitialize();
      return (unsigned int)v5;
    }
LABEL_17:
    SshpUninitialize();
    return (unsigned int)v5;
  }
  if ( a1 != 3 )
  {
    v5 = -1073741811;
    goto LABEL_17;
  }
  v5 = SSHSupportEtwRegister();
  if ( v5 < 0 )
    goto LABEL_17;
  SshpTraceHandleRegistered = 1;
  v5 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E08410, 0LL, 0LL);
  if ( v5 < 0 )
    goto LABEL_17;
  SshpTelemetryHandleRegistered = 1;
  v5 = SSHSupportRegisterPowerSettingCallback();
  if ( v5 < 0 )
    goto LABEL_17;
  return 0;
}
