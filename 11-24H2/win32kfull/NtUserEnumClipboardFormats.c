/*
 * XREFs of NtUserEnumClipboardFormats @ 0x1401049D0
 * Callers:
 *     <none>
 * Callees:
 *     _EnumClipboardFormats @ 0x1401052BC (_EnumClipboardFormats.c)
 */

__int64 __fastcall NtUserEnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = EnumClipboardFormats(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
