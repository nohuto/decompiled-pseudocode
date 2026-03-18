/*
 * XREFs of GreUnlockDisplayDevice @ 0x140013C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1)
{
  return GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, *(_QWORD *)(a1 + 48));
}
