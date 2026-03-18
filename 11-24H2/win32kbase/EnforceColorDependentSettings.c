/*
 * XREFs of EnforceColorDependentSettings @ 0x140146F10
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 */

__int64 __fastcall EnforceColorDependentSettings(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 UserSessionState; // rax

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 57008);
  if ( (*(_DWORD *)(v1 + 140) & 2) != 0
    || (UserSessionState = W32GetUserSessionState(v1),
        (unsigned int)GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(UserSessionState + 57008) + 64LL), 24) != -1) )
  {
    result = W32GetUserSessionState(v1);
    *(_DWORD *)(result + 43304) = 1;
  }
  else
  {
    result = W32GetUserSessionState(v1);
    *(_DWORD *)(result + 43304) = 0;
  }
  return result;
}
