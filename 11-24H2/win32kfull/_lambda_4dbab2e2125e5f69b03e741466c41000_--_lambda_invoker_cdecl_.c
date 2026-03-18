/*
 * XREFs of _lambda_4dbab2e2125e5f69b03e741466c41000_::_lambda_invoker_cdecl_ @ 0x140285EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientEnableMMCSS @ 0x140217CA0 (xxxClientEnableMMCSS.c)
 *     ?WakeDTForMMCSS@Win32k@InputTraceLogging@@SAXXZ @ 0x14021EF8C (-WakeDTForMMCSS@Win32k@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall lambda_4dbab2e2125e5f69b03e741466c41000_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  v2 = PtiCurrent(a1, a2);
  if ( v2 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v4, v3) + 68736) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 954);
  InputTraceLogging::Win32k::WakeDTForMMCSS();
  UserSessionState = W32GetUserSessionState(v6, v5);
  return xxxClientEnableMMCSS((**(_DWORD **)(UserSessionState + 19928) >> 12) & 1);
}
