/*
 * XREFs of ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F40
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     GreSfmCloseCompositorRef @ 0x14002AC68 (GreSfmCloseCompositorRef.c)
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1401C9A3C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E15CC (GreDesktopSwitch.c)
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 *     GreDwmShutdown @ 0x140264BB4 (GreDwmShutdown.c)
 *     bDrvReconnect @ 0x1402693DC (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x14026A1E0 (bDrvShadowDisconnect.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     GreSaveScreenBits @ 0x1403308B4 (GreSaveScreenBits.c)
 *     GreDrvReconnect @ 0x14033D068 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x14033D51C (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x14033D750 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x14033D970 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x14033DBD0 (vDrvInvalidateRect.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140023FC8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<6>::SEMOBJ<6>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 1040LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<6>();
  return a1;
}
