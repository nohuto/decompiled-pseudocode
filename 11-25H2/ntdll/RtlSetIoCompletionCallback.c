/*
 * XREFs of RtlSetIoCompletionCallback @ 0x1800C3CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpRevertCapture @ 0x18003B900 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18003C978 (RtlpTpResumeImpersonation.c)
 *     RtlpTpIoLookup @ 0x1800C3DFC (RtlpTpIoLookup.c)
 *     LdrRegisterDllNotification @ 0x18010D5A0 (LdrRegisterDllNotification.c)
 */

NTSTATUS __cdecl RtlSetIoCompletionCallback(HANDLE FileHandle, APC_CALLBACK_FUNCTION CompletionProc, ULONG Flags)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !FileHandle || Flags )
    return -1073741811;
  v5 = RtlpTpRevertCapture(&v9, 0);
  if ( v5 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( RtlpTpIoRegistered )
    {
      v5 = 0;
    }
    else
    {
      v5 = LdrRegisterDllNotification(0, RtlpTpIoDllNotification, 0LL, &RtlpTpIoDllNotificationCookie);
      if ( v5 >= 0 )
        RtlpTpIoRegistered = 1;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v5 >= 0 )
    {
LABEL_6:
      v5 = RtlpTpIoLookup(&v8, CompletionProc, FileHandle);
      if ( v5 >= 0 )
      {
        v6 = v8;
        *(_QWORD *)(v8 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v6 + 168) = NtCurrentTeb()->ActivityId;
        v5 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v9);
  return v5;
}
