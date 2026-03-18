/*
 * XREFs of ldevUnloadImage @ 0x1401015E0
 * Callers:
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x140100FD8 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x140101130 (ldevLoadDriver.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvInitConsole @ 0x1401794EC (DrvInitConsole.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1401991EC (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall ldevUnloadImage(char *Buffer)
{
  __int64 v2; // rsi
  struct _ERESOURCE *v3; // rbx
  void (*v5)(void); // rax
  __int64 v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = *(_QWORD *)(W32GetSessionState(Buffer) + 88);
  v3 = *(struct _ERESOURCE **)v2;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v2);
  GrepAcquireLockValidate<19>();
  if ( (*((_DWORD *)Buffer + 9))-- == 1 )
  {
    WdLogSingleEntry0(5LL);
    v5 = (void (*)(void))*((_QWORD *)Buffer + 17);
    WdLogGlobalForLineNumber = 1460;
    if ( v5 )
      v5();
    v6 = *((_QWORD *)Buffer + 2);
    if ( v6 && (*((_DWORD *)Buffer + 10) & 2) == 0 && *(_QWORD *)(v6 + 24) )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v6 + 24), 8uLL);
    v7 = (void *)*((_QWORD *)Buffer + 3);
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)Buffer + 3) = 0LL;
    }
    if ( *(_QWORD *)Buffer )
      *(_QWORD *)(*(_QWORD *)Buffer + 8LL) = *((_QWORD *)Buffer + 1);
    v8 = (_QWORD *)*((_QWORD *)Buffer + 1);
    v9 = *(_QWORD *)Buffer;
    if ( v8 )
      *v8 = v9;
    else
      *(_QWORD *)(v2 + 1728) = v9;
    v10 = *((_QWORD *)Buffer + 2);
    if ( v10 )
    {
      GreDeleteFastMutex(*(char **)(v10 + 8));
      GreDeleteFastMutex(*((char **)Buffer + 2));
    }
    GreDeleteFastMutex(Buffer);
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 1544;
  }
  if ( v3 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v3);
}
