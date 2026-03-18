/*
 * XREFs of ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140014D00 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     HmgAllocateDcAttr @ 0x14001E2CC (HmgAllocateDcAttr.c)
 *     HmgNextOwned @ 0x14001F530 (HmgNextOwned.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x140035CEC (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgFreeObjectAttr @ 0x140039540 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x1400397B0 (HmgAllocateObjectAttr.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x14003DA08 (-vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z.c)
 *     GreIncQuotaCount @ 0x140062A60 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x140062B60 (GreDecQuotaCount.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1400851E0 (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x140085480 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140086380 (vDynamicConvertNewSurfaceDCs.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1400868FC (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140086BCC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     HmgNextGarbageCollectible @ 0x1400899DC (HmgNextGarbageCollectible.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z @ 0x1400BF050 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6030 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7CEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1400F6340 (HmgShareUnlockRemoveObject.c)
 *     GreMarkDCUnreadable @ 0x140152E84 (GreMarkDCUnreadable.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019C180 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     GreGetBrushColor @ 0x1401C3FC0 (GreGetBrushColor.c)
 *     EngDeleteSafeSemaphore @ 0x1401C4430 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1401C45F0 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<20>::SEMOBJ<20>(HSEMAPHORE *a1)
{
  HSEMAPHORE v2; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rbx
  __int64 v7; // r8
  char v8; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v12; // edx
  unsigned __int64 i; // rcx
  int v14; // eax

  v2 = (HSEMAPHORE)(**(_QWORD **)(W32GetSessionState(a1) + 88) + 1512LL);
  *a1 = v2;
  GreAcquireSemaphoreInternal(v2);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = (__int64 *)((v4 + 8) & -(__int64)(v4 != 0));
  if ( v6 )
  {
    if ( (*v6 & 0xFFFFFFFFFFF00000uLL) != 0 && (*v6 & 0x100000) == 0 )
    {
      v12 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v14 = i;
        v7 = *v6;
        if ( !_bittest64(&v7, i) )
          v14 = v12;
        v12 = v14;
      }
      if ( v14 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v8 = *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 0x1C);
    *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 0x1C) = v8 + 1;
    if ( !v8 )
      *v6 |= 0x100000uLL;
  }
  return a1;
}
