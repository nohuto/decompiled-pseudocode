/*
 * XREFs of ?GrepLockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C4160
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400117B8 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GrepLockVisRgnFast(struct _ERESOURCE **a1)
{
  GreAcquireSemaphoreShared<1,>(a1);
  GreAcquireSemaphore<2,>(a1);
  GreAcquireSemaphore<3,>((__int64 *)a1);
}
