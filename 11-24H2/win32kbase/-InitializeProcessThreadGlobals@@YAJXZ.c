/*
 * XREFs of ?InitializeProcessThreadGlobals@@YAJXZ @ 0x140173E3C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Initialize@QualityOfService@@YAJXZ @ 0x1401A5348 (-Initialize@QualityOfService@@YAJXZ.c)
 */

__int64 __fastcall InitializeProcessThreadGlobals(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  *(_QWORD *)(UserSessionState + 36476) = 0x20000000CLL;
  *(_DWORD *)(UserSessionState + 36484) = 256;
  *(_DWORD *)(UserSessionState + 36472) = 5000;
  return QualityOfService::Initialize((QualityOfService *)0x100);
}
