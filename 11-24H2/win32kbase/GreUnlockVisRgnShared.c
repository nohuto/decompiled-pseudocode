/*
 * XREFs of GreUnlockVisRgnShared @ 0x1400BC190
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F464 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC1CC (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC294 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreUnlockVisRgnShared(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = *(__int64 **)(W32GetSessionState(a1) + 88);
  GreReleaseSemaphoreShared<3,>(v1);
  GreReleaseSemaphoreShared<2,>(v1);
  GreReleaseSemaphoreShared<1,>(v1);
}
