/*
 * XREFs of ?Initialize@LastWokenThread@@YAJXZ @ 0x1401A72C0
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LastWokenThread::Initialize(LastWokenThread *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 UserSessionState; // rdi

  v1 = Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x776C7355u);
  v3 = v1;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_WORD *)(v1 + 16) = 0;
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)v1 = 0LL;
    UserSessionState = W32GetUserSessionState(v2);
    if ( *(_QWORD *)(UserSessionState + 3056) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 287);
    *(_QWORD *)(UserSessionState + 3056) = v3;
  }
  else
  {
    v3 = 0LL;
  }
  return v3 == 0 ? 0xC0000017 : 0;
}
