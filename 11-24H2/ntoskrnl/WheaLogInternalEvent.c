/*
 * XREFs of WheaLogInternalEvent @ 0x14065E070
 * Callers:
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x14053EE1C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x1405434A8 (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x140591F10 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x140591FEC (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckProgressCpusFrozen @ 0x1405B2F94 (KiBugCheckProgressCpusFrozen.c)
 *     KiMcheckAlternateReturn @ 0x1405C9C80 (KiMcheckAlternateReturn.c)
 *     PspVsmLogBugCheckCallback @ 0x1405E6800 (PspVsmLogBugCheckCallback.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14065C848 (WheapInitErrorReportDeviceDriver.c)
 *     WheaAttemptRowOffline @ 0x14065CB10 (WheaAttemptRowOffline.c)
 *     WheaPersistBadPageToRegistry @ 0x14065D04C (WheaPersistBadPageToRegistry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x14065D7A4 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapProcessOfflineList @ 0x14065F830 (WheapProcessOfflineList.c)
 *     WheaAddErrorSource @ 0x1407C6980 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x1407C6C00 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407C6FD0 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C791C (WheapAttemptPhysicalPageOffline.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1407C7B98 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x1407C7D6C (WheapClearPoison.c)
 *     WheapOfflinePage @ 0x1407C7F20 (WheapOfflinePage.c)
 *     WheapOfflineRow @ 0x1407C8078 (WheapOfflineRow.c)
 *     WheapLogInitEvent @ 0x1407C8368 (WheapLogInitEvent.c)
 *     WheapProcessWaitingETWEvents @ 0x1407C8690 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8A60 (WheaRegChangeNotifyCallback.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C8EE8 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x1407C918C (WheapPfaLogPageMonitorRemoval.c)
 *     WheapTrackPendingPage @ 0x1407C9634 (WheapTrackPendingPage.c)
 *     HalpCmcWorkerRoutine @ 0x140A4DAA0 (HalpCmcWorkerRoutine.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4DCD8 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4DF40 (HalpInitGenericErrorSourceEntryV2.c)
 *     WheapOpenPolicyRegistryKey @ 0x140C44D34 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     WheaIsCriticalState @ 0x140478110 (WheaIsCriticalState.c)
 *     WheaSelLogEvent @ 0x14065B5A4 (WheaSelLogEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 */

char __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  _DWORD *v1; // rbx
  int v2; // eax
  unsigned int *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // esi
  ULONG **v8; // rbx
  ULONG *SecurityDescriptor; // rax
  _QWORD InputBuffer[4]; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  char *v13; // [rsp+78h] [rbp-19h]
  __int64 v14; // [rsp+80h] [rbp-11h]
  char *v15; // [rsp+88h] [rbp-9h]
  __int64 v16; // [rsp+90h] [rbp-1h]
  _DWORD *v17; // [rsp+98h] [rbp+7h]
  __int64 v18; // [rsp+A0h] [rbp+Fh]
  unsigned int *v19; // [rsp+A8h] [rbp+17h]
  __int64 v20; // [rsp+B0h] [rbp+1Fh]
  _DWORD *v21; // [rsp+B8h] [rbp+27h]
  unsigned int v22; // [rsp+C0h] [rbp+2Fh]
  int v23; // [rsp+C4h] [rbp+33h]

  v1 = Src + 6;
  v2 = Src[6];
  v3 = Src + 2;
  if ( (v2 & 4) != 0 )
  {
    v5 = *v3;
    InputBuffer[0] = Src;
    InputBuffer[1] = v5;
    InputBuffer[2] = 0LL;
    InputBuffer[3] = 15LL;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    *v1 &= ~4u;
    v2 = *v1;
  }
  if ( (v2 & 8) != 0 )
  {
    WheaSelLogEvent((char *)Src);
    *v1 &= ~8u;
    v2 = *v1;
  }
  if ( WheapEventingInitialized )
  {
    if ( (v2 & 2) != 0 )
    {
      LOBYTE(v2) = WheaIsCriticalState();
      if ( !(_BYTE)v2 )
      {
        UserData.Ptr = (ULONGLONG)(Src + 3);
        *(_QWORD *)&UserData.Size = 4LL;
        v13 = (char *)(Src + 4);
        v14 = 4LL;
        v15 = (char *)(Src + 5);
        v22 = *v3;
        v16 = 4LL;
        v17 = v1;
        v18 = 4LL;
        v19 = v3;
        v20 = 4LL;
        v21 = Src;
        v23 = 0;
        LOBYTE(v2) = EtwWriteEx(WheapEtwHandle, &EVENT_WHEA_LOG_ENTRY, 0LL, 0, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  else
  {
    LOBYTE(v2) = KeGetCurrentIrql();
    if ( (unsigned __int8)v2 < 2u )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v6 = (unsigned int)Src[7];
      v7 = v6 + WheapDeferredEventTotalBytes + 48;
      if ( v7 < 0x1000 )
      {
        v8 = (ULONG **)((char *)&WheapDispatchPtr.DeviceLock + (unsigned int)WheapDeferredEventTotalBytes);
        memmove(v8 + 2, Src, v6 + 32);
        SecurityDescriptor = (ULONG *)WheapDispatchPtr.SecurityDescriptor;
        WheapDeferredEventTotalBytes = v7;
        if ( *(struct _DEVICE_OBJECT **)WheapDispatchPtr.SecurityDescriptor != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.ActiveThreadCount )
          __fastfail(3u);
        *v8 = &WheapDispatchPtr.ActiveThreadCount;
        v8[1] = SecurityDescriptor;
        *(_QWORD *)SecurityDescriptor = v8;
        WheapDispatchPtr.SecurityDescriptor = v8;
      }
      LOBYTE(v2) = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return v2;
}
