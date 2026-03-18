/*
 * XREFs of NtUserReleaseCapture @ 0x1C01D91D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 */

__int64 NtUserReleaseCapture()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxReleaseCapture();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
