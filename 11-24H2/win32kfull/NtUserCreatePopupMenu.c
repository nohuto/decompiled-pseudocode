/*
 * XREFs of NtUserCreatePopupMenu @ 0x140174360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1401744B4 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

__int64 NtUserCreatePopupMenu()
{
  struct tagMENU *Menu; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx

  EnterCrit(0LL, 0LL);
  Menu = InternalCreateMenu(1);
  v2 = 0LL;
  if ( Menu )
    v2 = *(_QWORD *)Menu;
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
