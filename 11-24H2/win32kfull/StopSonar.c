/*
 * XREFs of StopSonar @ 0x140285608
 * Callers:
 *     EditionStopSonar @ 0x14018ADE0 (EditionStopSonar.c)
 *     EditionHandleSonarKeyEvent @ 0x1401BC5E0 (EditionHandleSonarKeyEvent.c)
 *     zzzStartSonar @ 0x14028572C (zzzStartSonar.c)
 * Callees:
 *     StopFade @ 0x1401EE440 (StopFade.c)
 *     ?SonarStop@Mouse@InputTraceLogging@@SAXXZ @ 0x1402853E0 (-SonarStop@Mouse@InputTraceLogging@@SAXXZ.c)
 */

__int64 StopSonar()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  InputTraceLogging::Mouse::SonarStop();
  StopFade(v1, v0);
  result = W32GetUserSessionState(v3, v2);
  *(_DWORD *)(result + 16324) = -1;
  return result;
}
