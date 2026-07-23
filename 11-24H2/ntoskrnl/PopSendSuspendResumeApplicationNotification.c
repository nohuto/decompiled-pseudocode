/*
 * XREFs of PopSendSuspendResumeApplicationNotification @ 0x140751E54
 * Callers:
 *     PopSendSuspendResumeNotifications @ 0x140AB644C (PopSendSuspendResumeNotifications.c)
 * Callees:
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x140756660 (PopDiagTraceSuspendResumeNotification.c)
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
 *     PopSuspendResumeInvocation @ 0x140A92D20 (PopSuspendResumeInvocation.c)
 *     PsGetNextSession @ 0x140A9F8E0 (PsGetNextSession.c)
 */

__int64 __fastcall PopSendSuspendResumeApplicationNotification(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned int v3; // ebx
  void *i; // rcx
  int SessionId; // eax
  __int64 NextSession; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rdi
  int v11; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+28h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp-10h]

  v11 = 0;
  v16 = 0;
  v14 = 0LL;
  LOBYTE(a2) = 1;
  v2 = a1;
  v3 = 0;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  PopDiagTraceSuspendResumeNotification(a1, a2);
  for ( i = 0LL; ; i = v9 )
  {
    NextSession = PsGetNextSession(i);
    v9 = (void *)NextSession;
    if ( !NextSession )
      break;
    SessionId = PsGetSessionId(NextSession);
    DWORD2(v15) = 0;
    v11 = SessionId;
    v16 = SessionId;
    HIDWORD(v15) = v2 == 0;
    v3 = PopSuspendResumeInvocation(&v15);
    if ( !v2 )
    {
      HIDWORD(v15) = 2;
      v3 = PopSuspendResumeInvocation(&v15);
    }
    if ( !v3 )
    {
      LOBYTE(v13) = 0;
      DWORD1(v13) = 2;
      HIDWORD(v13) = 0x80000000;
      v14 = 0x140000000ELL;
      DWORD2(v13) = v2 != 0 ? 5 : 1;
      v3 = PopDispatchStateCallout(&v12, &v11);
    }
  }
  LOBYTE(v7) = 1;
  LOBYTE(v8) = v2;
  PopDiagTraceSuspendResumeNotification(v8, v7);
  return v3;
}
