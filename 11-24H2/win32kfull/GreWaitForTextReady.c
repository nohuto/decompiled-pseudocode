/*
 * XREFs of GreWaitForTextReady @ 0x14019D710
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

NTSTATUS __fastcall GreWaitForTextReady(__int64 a1, __int64 a2, __int64 a3)
{
  return UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(a1, a2, a3);
}
