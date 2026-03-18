/*
 * XREFs of ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF98
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSfmCloseCompositorRef @ 0x14002AC68 (GreSfmCloseCompositorRef.c)
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1401C9A3C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E15CC (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140264BB4 (GreDwmShutdown.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403212B0 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreCancelSynchronizedWindowResize @ 0x1403216AC (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x140321770 (GreConfirmWindowResizeCommit.c)
 *     GreSfmGenerateMoveData @ 0x140330FDC (GreSfmGenerateMoveData.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x140060C4C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<7>::SEMOBJ<7>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 520LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<7>();
  return a1;
}
