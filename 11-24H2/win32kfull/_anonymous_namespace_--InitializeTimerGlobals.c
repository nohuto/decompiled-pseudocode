/*
 * XREFs of _anonymous_namespace_::InitializeTimerGlobals @ 0x140282374
 * Callers:
 *     EditionDriverInitialize @ 0x140238F20 (EditionDriverInitialize.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall anonymous_namespace_::InitializeTimerGlobals(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  memset_0((void *)(UserSessionState + 57628), 0, 0xFE0uLL);
  *(_DWORD *)(UserSessionState + 62720) = 32511;
  *(_DWORD *)(UserSessionState + 62724) = 43200000;
  *(_DWORD *)(UserSessionState + 62728) = 43200000;
  result = 0LL;
  *(_OWORD *)(UserSessionState + 62788) = xmmword_1403591D0;
  *(_OWORD *)(UserSessionState + 62804) = xmmword_1403591E0;
  return result;
}
