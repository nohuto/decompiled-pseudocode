/*
 * XREFs of GreLockVisRgnShared @ 0x1400EC590
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140021054 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002115C (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreLockVisRgnShared(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d

  v1 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphoreShared<1,>(v1);
  GreAcquireSemaphoreShared<2,>(v1, v2, v3);
  return GreAcquireSemaphoreShared<3,>(v1, v4, v5);
}
