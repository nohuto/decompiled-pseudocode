/*
 * XREFs of ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002B064
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x14002AC68 (GreSfmCloseCompositorRef.c)
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1401C9A3C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E15CC (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140264BB4 (GreDwmShutdown.c)
 *     bDrvReconnect @ 0x1402693DC (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x14026A1E0 (bDrvShadowDisconnect.c)
 *     GreDrvReconnect @ 0x14033D068 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x14033D51C (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x14033D750 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x14033D970 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x14033DBD0 (vDrvInvalidateRect.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B264 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

_QWORD *__fastcall SEMOBJ<3>::SEMOBJ<3>(_QWORD *a1, _QWORD *a2)
{
  *a1 = *a2 + 728LL;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  return a1;
}
