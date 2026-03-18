/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087714
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x140085260 (pProcessDfbSurfaces2.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     GreSfmOpenTokenEvent @ 0x140087600 (GreSfmOpenTokenEvent.c)
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GreSfmDwmShutdown @ 0x1401CE980 (GreSfmDwmShutdown.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2,
        int a3)
{
  struct _GRETHREAD *v5; // rax

  EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", a2, a3);
  v5 = GreGetCurrentThreadCrossSessionCheck();
  if ( v5 )
  {
    if ( (*((_BYTE *)v5 + 15))-- == 1 )
      *(_QWORD *)v5 &= ~0x80uLL;
  }
  return a1(a2);
}
