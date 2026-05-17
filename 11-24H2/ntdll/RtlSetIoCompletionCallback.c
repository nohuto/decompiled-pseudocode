/*
 * XREFs of RtlSetIoCompletionCallback @ 0x1800BEDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpRevertCapture @ 0x18006CFA0 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 *     RtlpTpIoLookup @ 0x1800BEF1C (RtlpTpIoLookup.c)
 *     LdrRegisterDllNotification @ 0x18010AE40 (LdrRegisterDllNotification.c)
 */

__int64 __fastcall RtlSetIoCompletionCallback(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int32 **v5; // rdx
  int v6; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 || a3 )
    return 3221225485LL;
  v6 = RtlpTpRevertCapture(&v11, 0);
  if ( v6 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpTpIoRegisteredLock, v5, v7);
    if ( RtlpTpIoRegistered )
    {
      v6 = 0;
    }
    else
    {
      v6 = LdrRegisterDllNotification(0LL, RtlpTpIoDllNotification, 0LL, &RtlpTpIoDllNotificationCookie, v6);
      if ( v6 >= 0 )
        RtlpTpIoRegistered = 1;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v6 >= 0 )
    {
LABEL_6:
      v6 = RtlpTpIoLookup(&v10, a2, a1);
      if ( v6 >= 0 )
      {
        v8 = v10;
        *(_QWORD *)(v10 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v8 + 168) = NtCurrentTeb()->ActivityId;
        v6 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v11);
  return (unsigned int)v6;
}
