/*
 * XREFs of UpdateCheckpoint @ 0x1C00E1CF4
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00D87B8 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C01F2498 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C01F26BC (xxxSetInternalWindowPos.c)
 * Callees:
 *     CkptRestore @ 0x1C00E1D4C (CkptRestore.c)
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(struct tagWND *a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  GetRect(a1, &v3, 66LL);
  return CkptRestore(a1);
}
