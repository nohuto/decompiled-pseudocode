/*
 * XREFs of ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x14021B600
 * Callers:
 *     <none>
 * Callees:
 *     ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x14021B24C (-OnChildNotification@CIVChannel@@AEAAJPEAX@Z.c)
 */

__int64 __fastcall CIVChannel::sOnChildNotification(unsigned int *a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return CIVChannel::OnChildNotification(*(CIVChannel **)(UserSessionState + 8LL * a1[4] + 19512), a1);
}
