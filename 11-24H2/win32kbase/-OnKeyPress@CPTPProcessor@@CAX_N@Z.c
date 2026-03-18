/*
 * XREFs of ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x140107058
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140106EC4 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     ApiSetTraceLoggingPTPAAPKeyPress @ 0x1401070C0 (ApiSetTraceLoggingPTPAAPKeyPress.c)
 */

void __fastcall CPTPProcessor::OnKeyPress(unsigned __int8 a1)
{
  __int64 v1; // rbx
  __int64 QuadPart; // rdi
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  v1 = a1;
  ApiSetTraceLoggingPTPAAPKeyPress(a1);
  QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
  UserSessionState = W32GetUserSessionState(v3);
  _InterlockedExchange64(
    (volatile __int64 *)(W32GetUserSessionState(
                           _InterlockedExchange64(
                             (volatile __int64 *)(UserSessionState + 8 * (v1 ^ 1) + 3304),
                             QuadPart))
                       + 8 * (v1 ^ 1)
                       + 16736),
    QuadPart);
}
