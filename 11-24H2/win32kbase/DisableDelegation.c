/*
 * XREFs of DisableDelegation @ 0x140189550
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     SetInputDelegationModeImpl @ 0x14018980C (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x14020B058 (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x14020B190 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140212644 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DisableDelegation(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  CCursorClip *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 19656);
  if ( (*(_DWORD *)(v1 + 8) & 2) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v1);
    CCursorClip::OverrideClip(*(CCursorClip **)(UserSessionState + 36296), 0);
    if ( (unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline() )
    {
      W32GetUserSessionState(v1);
      CCursorClip::EnsureValidCursorPosition(v3);
    }
  }
  result = W32GetUserSessionState(v1);
  v5 = *(_QWORD *)(result + 19656);
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 16) = 0;
  return result;
}
