/*
 * XREFs of _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1402C0238
 * Callers:
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C1030 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1402C134C (_anonymous_namespace_--WindowSizingUpdate.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401488C8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1402682DC (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

char __fastcall anonymous_namespace_::NotifyShellWindowPosChangedCommon(
        const struct tagWND *a1,
        char a2,
        char a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-78h] BYREF
  int v13; // [rsp+28h] [rbp-70h]
  BOOL v14; // [rsp+30h] [rbp-68h]
  int WindowTrackState; // [rsp+34h] [rbp-64h]
  _BYTE v16[56]; // [rsp+38h] [rbp-60h] BYREF

  memset_0(&v12, 0, 0x50uLL);
  v12 = *(_QWORD *)a1;
  v13 = a4;
  v14 = a2 != 0;
  WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a3);
  v10 = PtiCurrent(v9, v8);
  TransformRectBetweenCoordinateSpaces(v16, *((_QWORD *)a1 + 5) + 88LL, *(_QWORD *)(*((_QWORD *)v10 + 62) + 328LL), a1);
  return anonymous_namespace_::NotifyIAMWindowManagementEvent((__int64)&v12, 0);
}
