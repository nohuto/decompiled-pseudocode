/*
 * XREFs of KeSetCoalescableTimer @ 0x1402BE6B0
 * Callers:
 *     CmpArmLazyWriter @ 0x140230640 (CmpArmLazyWriter.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x1402651AC (CcRescheduleLazyWriteScanOnVolume.c)
 *     CcRescheduleLazyWriteScan @ 0x1402652C4 (CcRescheduleLazyWriteScan.c)
 *     EtwpRequestFlushTimer @ 0x14027D6C4 (EtwpRequestFlushTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1402BCE1C (PopFxEnableWorkOrderWatchdog.c)
 *     ExpSetTimerObject @ 0x1402BD850 (ExpSetTimerObject.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1402BE9E4 (PopFxDispatchPluginWorkOnce.c)
 *     PopPepArmIdleTimer @ 0x1402E6CD8 (PopPepArmIdleTimer.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140468810 (PopFxScheduleDeviceIdleTimer.c)
 *     ExpTimerResume @ 0x14046BDB8 (ExpTimerResume.c)
 *     PopFxArmResidentTimer @ 0x14047E3D0 (PopFxArmResidentTimer.c)
 *     ExpTimerDpcRoutine @ 0x140491570 (ExpTimerDpcRoutine.c)
 *     CmpCompleteLazyWrite @ 0x140492460 (CmpCompleteLazyWrite.c)
 *     CcPostPVCMDelayedDelete @ 0x1404B2BAC (CcPostPVCMDelayedDelete.c)
 *     CcBcbProfiler @ 0x1405055A0 (CcBcbProfiler.c)
 *     CcProcessDelayedDeletePVCM @ 0x1405799B0 (CcProcessDelayedDeletePVCM.c)
 *     IopEnableTimer @ 0x140593260 (IopEnableTimer.c)
 *     ExpTimerAdjust @ 0x140655B90 (ExpTimerAdjust.c)
 *     sub_1406FA130 @ 0x1406FA130 (sub_1406FA130.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 *     PiDrvDbNodeActionCallback @ 0x140927F50 (PiDrvDbNodeActionCallback.c)
 *     IopErrorLogQueueRequest @ 0x140A40394 (IopErrorLogQueueRequest.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140A4B26C (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140A6A690 (CcTelemetryPeriodicTimerCallback.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABD89C (CcSetTelemetryPeriodicTimer.c)
 *     AnFwProgressIndicatorTransition @ 0x140BB2008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB3E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140BE0C74 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140C325EC (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1405C1FC4 (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  unsigned __int8 v5; // di
  int v8; // ebp
  unsigned __int64 v9; // rdi
  int IsEnabledNoReportingNoInline; // eax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdi
  ULONG v13; // r8d
  ULONG v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned __int16 v17; // dx
  bool v18; // zf
  unsigned int v19; // r8d
  char v20; // r8

  v5 = 0;
  v8 = (int)Timer;
  if ( TolerableDelay )
  {
    v9 = 10000LL * TolerableDelay;
    IsEnabledNoReportingNoInline = Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline();
    v11 = 9600000LL;
    if ( !IsEnabledNoReportingNoInline )
      v11 = 63LL;
    if ( v9 > v11 )
    {
      v12 = v9 - v11;
      if ( DueTime.QuadPart >= 0 )
      {
        v13 = v12 + DueTime.LowPart;
        if ( (__int64)(v12 + DueTime.QuadPart) < DueTime.QuadPart )
          v13 = -1;
      }
      else
      {
        v13 = DueTime.LowPart - v12;
        if ( (__int64)(DueTime.QuadPart - v12) > DueTime.QuadPart )
          v13 = 0;
      }
      if ( Period )
      {
        v14 = -1;
        if ( Period + (int)v12 / 10000 >= Period )
          v14 = Period + (int)v12 / 10000;
        Period = v14;
      }
      LODWORD(v9) = v11;
      DueTime.LowPart = v13;
    }
    if ( !(unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline() )
    {
      v15 = (unsigned int)v9 >> 18;
      if ( v15 > 0x3F )
        LOBYTE(v15) = 63;
      goto LABEL_28;
    }
    v16 = (unsigned int)v9 / 0x2710;
    if ( (unsigned __int16)((unsigned int)v9 / 0x2710) > 0x3C0u )
      LOWORD(v16) = 960;
    v17 = 2 * (v16 & 0x1FFF);
    v18 = !_BitScanReverse(&v19, v17);
    if ( v18 || v19 < 3 )
    {
      v20 = 0;
    }
    else
    {
      v20 = v19 - 3;
      v17 >>= v20;
      if ( v20 )
      {
LABEL_27:
        LOBYTE(v15) = (8 * v20) | v17 & 7;
LABEL_28:
        v5 = 4 * v15;
        return KiSetTimerEx(v8, DueTime.LowPart, Period, v5, (__int64)Dpc);
      }
    }
    v17 >>= 1;
    goto LABEL_27;
  }
  return KiSetTimerEx(v8, DueTime.LowPart, Period, v5, (__int64)Dpc);
}
