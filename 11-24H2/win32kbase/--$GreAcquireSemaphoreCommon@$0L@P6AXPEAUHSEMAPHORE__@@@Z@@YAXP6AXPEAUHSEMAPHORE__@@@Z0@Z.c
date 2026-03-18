/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C2210
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x1400C2230 (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  a1(a2);
  return GrepAcquireLockValidate<11>();
}
