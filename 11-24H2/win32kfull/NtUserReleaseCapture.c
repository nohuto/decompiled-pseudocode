/*
 * XREFs of NtUserReleaseCapture @ 0x140089E30
 * Callers:
 *     <none>
 * Callees:
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 */

__int64 NtUserReleaseCapture()
{
  __int64 v0; // rbx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxReleaseCapture();
  UserSessionSwitchLeaveCrit();
  return v0;
}
