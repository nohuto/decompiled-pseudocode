/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140023454
 * Callers:
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1401C9CC0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401CA940 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  a1(a2);
  return GrepAcquireLockValidate<19>();
}
