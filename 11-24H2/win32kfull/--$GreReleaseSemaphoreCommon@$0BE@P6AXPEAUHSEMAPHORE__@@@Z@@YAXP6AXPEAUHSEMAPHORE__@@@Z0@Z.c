/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD250
 * Callers:
 *     NtGdiMakeObjectXferable @ 0x1400DC8D0 (NtGdiMakeObjectXferable.c)
 *     prfntKillList @ 0x1400DCA9C (prfntKillList.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x1400DD5C0 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 *     GreSetPaletteEntries @ 0x14010EB50 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     CleanupHLSURF @ 0x1402196B0 (CleanupHLSURF.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _GRETHREAD *v4; // rax

  EtwTraceGreLockReleaseSemaphore(L"Hmgr", a2);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 28))-- == 1 )
      *(_QWORD *)v4 &= ~0x100000uLL;
    if ( !*(_QWORD *)v4 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
