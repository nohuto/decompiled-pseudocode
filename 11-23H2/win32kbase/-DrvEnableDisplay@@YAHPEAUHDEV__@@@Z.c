/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBA60
 * Callers:
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C001845C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     DrvEnableMDEV @ 0x1C001A7D8 (DrvEnableMDEV.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0160AF8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00182FC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BD990 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableDisplay(HSEMAPHORE *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  struct _ERESOURCE *v6; // rcx
  struct _ERESOURCE *v7; // rcx
  struct _ERESOURCE *v8; // rcx
  HSEMAPHORE *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v2 = 1;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  WdLogSingleEntry1(4LL, a1);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 80));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v3 + 80), 1);
  EngAcquireSemaphore(a1[7]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[7], 4);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 112));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v3 + 112), 5);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 136));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemHT", *(_QWORD *)(v3 + 136), 6);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[6], 11);
  *(_DWORD *)(v3 + 1428) = 0;
  if ( a1[338] )
  {
    while ( !((unsigned int (__fastcall *)(HSEMAPHORE, __int64))a1[338])(a1[221], 1LL) )
      *(_DWORD *)(v3 + 1428) = 1;
  }
  else
  {
    v2 = 0;
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v10, 0);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)a1[6]);
  v4 = (struct _ERESOURCE *)a1[6];
  if ( v4 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v4);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemHT", *(_QWORD *)(v3 + 136));
  v5 = *(struct _ERESOURCE **)(v3 + 136);
  if ( v5 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v3 + 112));
  v6 = *(struct _ERESOURCE **)(v3 + 112);
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (int)a1[7]);
  v7 = (struct _ERESOURCE *)a1[7];
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v3 + 80));
  v8 = *(struct _ERESOURCE **)(v3 + 80);
  if ( v8 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion();
  }
  GreIncrementDisplaySettingsUniqueness((__int64)v8);
  return v2;
}
