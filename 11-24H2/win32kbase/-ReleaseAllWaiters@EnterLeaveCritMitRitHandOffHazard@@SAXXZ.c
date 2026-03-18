/*
 * XREFs of ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x140152030
 * Callers:
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x14019F27C (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rbx
  LONG v3; // r8d

  UserSessionState = W32GetUserSessionState(a1);
  v2 = UserSessionState;
  v3 = *(_DWORD *)(UserSessionState + 18872);
  if ( v3 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(UserSessionState + 18864), 0, v3, 0);
    *(_DWORD *)(v2 + 18872) = 0;
  }
}
