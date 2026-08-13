/*
 * XREFs of main @ 0x140001698
 * Callers:
 *     NtProcessStartup_AfterSecurityCookieInitialized @ 0x140001030 (NtProcessStartup_AfterSecurityCookieInitialized.c)
 * Callees:
 *     <none>
 */

int __fastcall main(int argc, const char **argv, const char **envp)
{
  NTSTATUS v5; // ebx
  int v7; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v8[4]; // [rsp+28h] [rbp-10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int ProcessInformation; // [rsp+58h] [rbp+20h] BYREF

  v9 = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleCheckingMode, &v9, 4u);
  RtlSetUnhandledExceptionFilter(CsrUnhandledExceptionFilter);
  ProcessInformation = 13;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, &ProcessInformation, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v8[0] = 2;
  v8[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessMitigationPolicy, v8, 8u);
  v5 = CsrServerInitialization((unsigned int)argc, argv);
  if ( v5 < 0 )
  {
    CsrFlushToBlackBoxRecorder();
    NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5);
  }
  v7 = 0;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &v7, 4u);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v5);
  return 0;
}
