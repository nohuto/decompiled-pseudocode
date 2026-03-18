/*
 * XREFs of NtUserEmptyClipboard @ 0x1C01CEA10
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1C009AC2C (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxEmptyClipboard(0LL);
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
