/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C
 * Callers:
 *     HmgAllocateDcAttr @ 0x14001E2CC (HmgAllocateDcAttr.c)
 *     HmgNextOwned @ 0x14001F530 (HmgNextOwned.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x140021A94 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
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
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 *     HmgFreeFast @ 0x1401C2310 (HmgFreeFast.c)
 *     GreGetBrushColor @ 0x1401C3FC0 (GreGetBrushColor.c)
 *     EngDeleteSafeSemaphore @ 0x1401C4430 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1401C45F0 (EngInitializeSafeSemaphore.c)
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C4E28 (HmgDecProcessHandleCountFastOpt.c)
 *     HmgFreeDcAttrFastOpt @ 0x1401C4EA0 (HmgFreeDcAttrFastOpt.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C4F84 (HmgIncProcessHandleCountExFast.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJ<20>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", *a1);
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
    v6 = v4 + 8;
    v7 = -v4;
    if ( (v6 & -(__int64)(v7 != 0)) != 0 && (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0x1C))-- == 1 )
      *(_QWORD *)(v6 & -(__int64)(v7 != 0)) &= ~0x100000uLL;
    GreReleaseSemaphoreSharedInternal(v1);
    *a1 = 0LL;
  }
}
