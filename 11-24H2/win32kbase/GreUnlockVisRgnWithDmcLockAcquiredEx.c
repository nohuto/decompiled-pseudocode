/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1401C4BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC1CC (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC294 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreUnlockVisRgnWithDmcLockAcquiredEx(__int64 a1)
{
  struct _ERESOURCE **v1; // rbx
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  GreReleaseSemaphoreShared<3,>(v1, v2, v3);
  GreReleaseSemaphoreShared<2,>(v1, v4, v5);
}
