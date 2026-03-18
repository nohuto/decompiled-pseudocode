/*
 * XREFs of ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026C118
 * Callers:
 *     bDrvReconnect @ 0x1402693DC (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x14026A1E0 (bDrvShadowDisconnect.c)
 *     DrvFindRemoteDriverhdevInMDEV @ 0x140322AA4 (DrvFindRemoteDriverhdevInMDEV.c)
 *     GreDrvReconnect @ 0x14033D068 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x14033D51C (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x14033D750 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x14033D970 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x14033DBD0 (vDrvInvalidateRect.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015C474 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 *__fastcall SEMOBJ<1>::SEMOBJ<1>(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdx

  v3 = *a2 + 624LL;
  *a1 = v3;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v3);
  return a1;
}
