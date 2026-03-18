/*
 * XREFs of ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x140011770
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400117B8 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400118C0 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void DxgkEngAcquireWin32kLocks(void)
{
  __int64 v0; // rbx

  EnterSharedCrit(1u, 1u);
  v0 = *(_QWORD *)(W32GetSessionState() + 88);
  GreAcquireSemaphore<1,>(v0);
  GreAcquireSemaphore<2,>(v0);
  GreAcquireSemaphore<3,>(v0);
}
