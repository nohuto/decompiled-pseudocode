/*
 * XREFs of NtUserGetInputEvent @ 0x140296340
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetInputEvent @ 0x140064510 (xxxGetInputEvent.c)
 */

__int64 __fastcall NtUserGetInputEvent(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 InputEvent; // rbx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  InputEvent = xxxGetInputEvent(a1, v2);
  UserSessionSwitchLeaveCrit(v4);
  return InputEvent;
}
