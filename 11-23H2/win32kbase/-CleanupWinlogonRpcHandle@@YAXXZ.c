/*
 * XREFs of ?CleanupWinlogonRpcHandle@@YAXXZ @ 0x1C00D03F8
 * Callers:
 *     CleanupLogonProcess @ 0x1C00B1D00 (CleanupLogonProcess.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void CleanupWinlogonRpcHandle(void)
{
  __int64 v0; // r8
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+98h] [rbp+28h] BYREF
  void *ThreadHandle; // [rsp+A0h] [rbp+30h] BYREF

  ProcessHandle = 0LL;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( ObOpenObjectByPointer(gpepCSRSS, 0, 0LL, 2u, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           &ObjectAttributes,
           ProcessHandle,
           0LL,
           CleanupWinlogonRpcHandleWorker,
           0LL) >= 0 )
      goto LABEL_6;
    v0 = 212LL;
  }
  else
  {
    v0 = 182LL;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v0);
LABEL_6:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
}
