/*
 * XREFs of WheaLogInternalEvent @ 0x14065C840
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x14053C71C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x140540DF8 (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x14058F00C (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405AFF04 (KiBugCheckProgressCpusFrozen.c)
 *     KiMcheckAlternateReturn @ 0x1405C73B0 (KiMcheckAlternateReturn.c)
 *     PspVsmLogBugCheckCallback @ 0x1405E3E00 (PspVsmLogBugCheckCallback.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14065AF68 (WheapInitErrorReportDeviceDriver.c)
 *     WheaAttemptRowOffline @ 0x14065B230 (WheaAttemptRowOffline.c)
 *     WheaPersistBadPageToRegistry @ 0x14065B76C (WheaPersistBadPageToRegistry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x14065BEC4 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapProcessOfflineList @ 0x14065E000 (WheapProcessOfflineList.c)
 *     WheaAddErrorSource @ 0x1407C6DE0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x1407C7080 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407C7470 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1407C8038 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x1407C820C (WheapClearPoison.c)
 *     WheapOfflinePage @ 0x1407C83C0 (WheapOfflinePage.c)
 *     WheapOfflineRow @ 0x1407C8518 (WheapOfflineRow.c)
 *     WheapLogInitEvent @ 0x1407C8808 (WheapLogInitEvent.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8B80 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8F50 (WheaRegChangeNotifyCallback.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C93D8 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x1407C967C (WheapPfaLogPageMonitorRemoval.c)
 *     WheapTrackPendingPage @ 0x1407C9B24 (WheapTrackPendingPage.c)
 *     HalpCmcWorkerRoutine @ 0x140A44630 (HalpCmcWorkerRoutine.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4FD28 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4FF90 (HalpInitGenericErrorSourceEntryV2.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C46E84 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WheaIsCriticalState @ 0x140474710 (WheaIsCriticalState.c)
 *     WheaSelLogEvent @ 0x140659CC4 (WheaSelLogEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 */

char __fastcall WheaLogInternalEvent(_DWORD *Src, __int64 a2)
{
  _DWORD *v2; // rbx
  int v3; // eax
  unsigned int *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD InputBuffer[4]; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  char *v14; // [rsp+78h] [rbp-19h]
  __int64 v15; // [rsp+80h] [rbp-11h]
  char *v16; // [rsp+88h] [rbp-9h]
  __int64 v17; // [rsp+90h] [rbp-1h]
  _DWORD *v18; // [rsp+98h] [rbp+7h]
  __int64 v19; // [rsp+A0h] [rbp+Fh]
  unsigned int *v20; // [rsp+A8h] [rbp+17h]
  __int64 v21; // [rsp+B0h] [rbp+1Fh]
  _DWORD *v22; // [rsp+B8h] [rbp+27h]
  unsigned int v23; // [rsp+C0h] [rbp+2Fh]
  int v24; // [rsp+C4h] [rbp+33h]

  v2 = Src + 6;
  v3 = Src[6];
  v4 = Src + 2;
  if ( (v3 & 4) != 0 )
  {
    v6 = *v4;
    InputBuffer[0] = Src;
    InputBuffer[1] = v6;
    InputBuffer[2] = 0LL;
    InputBuffer[3] = 15LL;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    *v2 &= ~4u;
    v3 = *v2;
  }
  if ( (v3 & 8) != 0 )
  {
    WheaSelLogEvent((char *)Src);
    *v2 &= ~8u;
    v3 = *v2;
  }
  if ( WheapEventingInitialized )
  {
    if ( (v3 & 2) != 0 )
    {
      LOBYTE(v3) = WheaIsCriticalState((__int64)Src, a2);
      if ( !(_BYTE)v3 )
      {
        UserData.Ptr = (ULONGLONG)(Src + 3);
        *(_QWORD *)&UserData.Size = 4LL;
        v14 = (char *)(Src + 4);
        v15 = 4LL;
        v16 = (char *)(Src + 5);
        v23 = *v4;
        v17 = 4LL;
        v18 = v2;
        v19 = 4LL;
        v20 = v4;
        v21 = 4LL;
        v22 = Src;
        v24 = 0;
        LOBYTE(v3) = EtwWriteEx(
                       (REGHANDLE)WheapDispatchPtr.Dpc.DpcData,
                       &EVENT_WHEA_LOG_ENTRY,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       6u,
                       &UserData);
      }
    }
  }
  else
  {
    LOBYTE(v3) = KeGetCurrentIrql();
    if ( (unsigned __int8)v3 < 2u )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v7 = (unsigned int)Src[7];
      v8 = v7 + WheapDeferredEventTotalBytes + 48;
      if ( v8 < 0x1000 )
      {
        v9 = (_QWORD *)((char *)&WheapDeferredEventBuffer + (unsigned int)WheapDeferredEventTotalBytes);
        memmove(v9 + 2, Src, v7 + 32);
        v10 = (_QWORD *)qword_140EF9D48;
        WheapDeferredEventTotalBytes = v8;
        if ( *(__int64 **)qword_140EF9D48 != &WheapDeferredInternalLogs )
          __fastfail(3u);
        *v9 = &WheapDeferredInternalLogs;
        v9[1] = v10;
        *v10 = v9;
        qword_140EF9D48 = (__int64)v9;
      }
      LOBYTE(v3) = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return v3;
}
