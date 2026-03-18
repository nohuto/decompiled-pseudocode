/*
 * XREFs of NtUserMapDesktopObject @ 0x140076F30
 * Callers:
 *     <none>
 * Callees:
 *     _MapDesktopObject @ 0x140077144 (_MapDesktopObject.c)
 */

__int64 __fastcall NtUserMapDesktopObject(__int64 a1)
{
  __int64 v2; // rbx

  EnterCrit(0LL, 0LL);
  v2 = MapDesktopObject(a1);
  UserSessionSwitchLeaveCrit();
  return v2;
}
