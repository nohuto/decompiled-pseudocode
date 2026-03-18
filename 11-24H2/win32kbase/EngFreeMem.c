/*
 * XREFs of EngFreeMem @ 0x14001A6C0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x14008A220 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     EngDeleteClip @ 0x1400F83B0 (EngDeleteClip.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x14012FFF0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x140155FA0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140157470 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401CF550 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x14001C4D4 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C5BC (--$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  _QWORD *v1; // rbx
  HSEMAPHORE v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax

  if ( pv )
  {
    v1 = (char *)pv - 32;
    v2 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(pv) + 88) + 1720LL);
    GreAcquireSemaphoreInternal(v2);
    GrepAcquireLockValidate<32>();
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( v2 )
      GreReleaseSemaphoreCommon<32,void (*)(HSEMAPHORE__ *)>(v3, v2);
    GreDeleteFastMutex(v1);
  }
}
