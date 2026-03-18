/*
 * XREFs of NtUserMapDesktopObject @ 0x1C0035BB0
 * Callers:
 *     <none>
 * Callees:
 *     _MapDesktopObject @ 0x1C0035BF0 (_MapDesktopObject.c)
 */

__int64 __fastcall NtUserMapDesktopObject(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = MapDesktopObject(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
