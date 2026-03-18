/*
 * XREFs of ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x14019F27C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x140152030 (-ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 */

void __fastcall vReleaseDwmHitTestWaiters(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 18824) )
  {
    *(_DWORD *)(W32GetUserSessionState(v1) + 18784) = 0;
    EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(v2);
    *(_DWORD *)(W32GetUserSessionState(v3) + 18824) = 1;
  }
}
