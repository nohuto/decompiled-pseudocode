/*
 * XREFs of ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400118C0
 * Callers:
 *     ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x140011770 (-DxgkEngAcquireWin32kLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x14013D36C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     GreLockDynamicModeChange @ 0x14014AB40 (GreLockDynamicModeChange.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140011900 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001FFF0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall GreAcquireSemaphore<1,>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"DynamicModeChange", *a1 + 624, 0LL);
  return GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v1 + 624);
}
