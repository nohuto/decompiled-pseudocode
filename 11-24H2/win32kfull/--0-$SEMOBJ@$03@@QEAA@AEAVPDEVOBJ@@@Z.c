/*
 * XREFs of ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140023090
 * Callers:
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 *     bDrvReconnect @ 0x1402693DC (bDrvReconnect.c)
 *     bDrvShadowDisconnect @ 0x14026A1E0 (bDrvShadowDisconnect.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140310FB4 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140324550 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     GreDrvReconnect @ 0x14033D068 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x14033D51C (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x14033D750 (bDrvDisplayIOCtl.c)
 *     bDrvShadowConnect @ 0x14033D970 (bDrvShadowConnect.c)
 *     vDrvInvalidateRect @ 0x14033DBD0 (vDrvInvalidateRect.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<4>::SEMOBJ<4>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 56LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<4>();
  return a1;
}
