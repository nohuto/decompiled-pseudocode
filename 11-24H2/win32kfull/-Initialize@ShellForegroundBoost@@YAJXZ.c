/*
 * XREFs of ?Initialize@ShellForegroundBoost@@YAJXZ @ 0x1402DC78C
 * Callers:
 *     EditionDriverInitialize @ 0x140238F20 (EditionDriverInitialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ShellForegroundBoost::Initialize(ShellForegroundBoost *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 UserSessionState; // rdi

  v1 = (_QWORD *)Win32AllocPoolZInit(32LL, 1935831893LL);
  v4 = v1;
  if ( v1 )
  {
    v1[1] = 0LL;
    v1[2] = 0LL;
    v1[3] = 0LL;
    *v1 = 0LL;
    UserSessionState = W32GetUserSessionState(v3, v2);
    if ( *(_QWORD *)(UserSessionState + 18936) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 196);
    *(_QWORD *)(UserSessionState + 18936) = v4;
  }
  else
  {
    v4 = 0LL;
  }
  return v4 == 0LL ? 0xC0000017 : 0;
}
