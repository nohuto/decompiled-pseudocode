/*
 * XREFs of ?GrepUnlockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C4240
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F464 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC1CC (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC294 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GrepUnlockVisRgnFast(struct _ERESOURCE **a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  int v5; // r8d

  GreReleaseSemaphoreShared<3,>(a1, a2, a3);
  GreReleaseSemaphoreShared<2,>(a1, v4, v5);
  GreReleaseSemaphoreShared<1,>((__int64 *)a1);
}
