/*
 * XREFs of ?CleanupWinlogonRpcHandle@@YAXXZ @ 0x1401B3210
 * Callers:
 *     CleanupLogonProcess @ 0x140167AA0 (CleanupLogonProcess.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CleanupWinlogonRpcHandle(__int64 a1)
{
  __int64 UserGdiSessionState; // rax
  int v2; // r8d
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+98h] [rbp+28h] BYREF
  void *ThreadHandle; // [rsp+A0h] [rbp+30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ProcessHandle = 0LL;
  ThreadHandle = 0LL;
  UserGdiSessionState = W32GetUserGdiSessionState(a1);
  if ( ObOpenObjectByPointer(*(PVOID *)(UserGdiSessionState + 40), 0, 0LL, 2u, 0LL, 0, &ProcessHandle) >= 0 )
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
    v2 = 246;
  }
  else
  {
    v2 = 216;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v2);
LABEL_6:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
}
