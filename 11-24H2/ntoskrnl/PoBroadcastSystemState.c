/*
 * XREFs of PoBroadcastSystemState @ 0x140B66DA4
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140A35914 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140A35FB0 (PopDirectedDripsResumeDevices.c)
 *     PnprQuiesceDevices @ 0x140B565F4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140B57224 (PnprWakeDevices.c)
 *     PopSetDevicesSystemState @ 0x140B66D04 (PopSetDevicesSystemState.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PopWakeDeviceList @ 0x14041BC4C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14041BE74 (PopSleepDeviceList.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     PopMapInternalActionToIrpAction @ 0x14048FE44 (PopMapInternalActionToIrpAction.c)
 *     PopFxActivateDevicesForSx @ 0x1404908F4 (PopFxActivateDevicesForSx.c)
 *     PopFxIdleDevicesFromSx @ 0x1404A3788 (PopFxIdleDevicesFromSx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IoNotifyPowerOperationVetoed @ 0x14071E148 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x140741200 (ObShutdownSystem.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x14074AAEC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopFxNotifySxTransitionState @ 0x14074C4B0 (PopFxNotifySxTransitionState.c)
 *     PopUpdateSmbiosData @ 0x14075351C (PopUpdateSmbiosData.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140754214 (PopDiagTraceDevicesWakeEnd.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1407A4124 (WmiAcquireSmbiosLockExclusive.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409A9310 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409A9374 (ExReleaseTimeRefreshLockExclusive.c)
 *     WmipReleaseSmbiosLockShared @ 0x140A75DE8 (WmipReleaseSmbiosLockShared.c)
 *     PopDiagTraceDevicesSuspend @ 0x140A891AC (PopDiagTraceDevicesSuspend.c)
 *     EmPowerPagingEnabled @ 0x140AB04E0 (EmPowerPagingEnabled.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140B61834 (PopVerifierFlushMemoryBeforeSleep.c)
 *     MmShutdownSystem @ 0x140B64690 (MmShutdownSystem.c)
 *     PopDiagTraceDevicesLevel @ 0x140B6736C (PopDiagTraceDevicesLevel.c)
 *     PopSetupSleepNotifies @ 0x140B67444 (PopSetupSleepNotifies.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     PopBootLoaderSiDataProcess @ 0x140B6F990 (PopBootLoaderSiDataProcess.c)
 *     BgDisplayFade @ 0x140BB56A4 (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  int *v5; // rsi
  char v6; // al
  char *v7; // rbx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r13d
  int v14; // esi
  _DWORD *v15; // r14
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r14
  int v23; // esi
  _DWORD *v24; // r12
  __int64 i; // r15
  __int64 v26; // r8
  int v27; // edx
  char *v28; // rdx
  __int64 v29; // r8
  unsigned __int64 *v30; // r9
  unsigned int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r10
  char v34; // [rsp+30h] [rbp-30h]
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-28h] BYREF
  unsigned int *v36; // [rsp+40h] [rbp-20h]
  LARGE_INTEGER *p_Interval; // [rsp+48h] [rbp-18h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h]

  v5 = (int *)(a1 + 16);
  v6 = *(_BYTE *)(a1 + 26);
  v7 = (char *)qword_140F0B910;
  v34 = *(_BYTE *)(a1 + 25);
  v4 = v34;
  v36 = (unsigned int *)(a1 + 16);
  *(_BYTE *)qword_140F0B910 = v6;
  *((_DWORD *)v7 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v7 + 112) = 0;
  *((_QWORD *)v7 + 57) = 0LL;
  *(_WORD *)(v7 + 465) = 0;
  v7[467] = 0;
  v7[464] = v34;
  DWORD1(PopCurrentBroadcast) = 0;
  v9 = (*(_DWORD *)a1 & 0xF) << 16;
  DWORD1(PopCurrentBroadcast) = v9;
  if ( v34 )
  {
    v10 = v9 | 0x1100;
    v36 = (unsigned int *)(a1 + 16);
LABEL_3:
    DWORD1(PopCurrentBroadcast) = v10;
    goto LABEL_4;
  }
  DWORD1(PopCurrentBroadcast) = v9 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
  v27 = DWORD1(PopCurrentBroadcast) | ((*(_DWORD *)(a1 + 4) & 0xF) << 12);
  DWORD1(PopCurrentBroadcast) = v27;
  if ( *v5 == 5 )
  {
    v10 = (PopKsrPrepared != 0 ? 0x400000 : 0) | v27;
    goto LABEL_3;
  }
LABEL_4:
  v11 = *v5;
  LOBYTE(PopCurrentBroadcast) = 1;
  DWORD2(PopCurrentBroadcast) = v11;
  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
  {
    Interval.QuadPart = *((unsigned int *)v7 + 1);
    BYTE6(Interval.QuadPart) = *(_BYTE *)(a1 + 26);
    BYTE5(Interval.QuadPart) = *(_BYTE *)(a1 + 24);
    p_Interval = &Interval;
    BYTE4(Interval.QuadPart) = v34;
    v38 = 8LL;
    EtwTraceKernelEvent((int)&p_Interval, 1, 0x80008000, 4644, 5249026);
  }
  v12 = 0x4000000LL;
  if ( *(_BYTE *)(a1 + 26) == 2 && (*(_DWORD *)(a1 + 20) & 0x4000000) == 0 )
    v7[466] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v7[467] = 1;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    DWORD1(PopCurrentBroadcast) |= 0x200000u;
  v13 = *(_DWORD *)(a1 + 20) & 0x4000000;
  if ( v13 )
    DWORD1(PopCurrentBroadcast) |= 0x800000u;
  if ( v34 )
  {
LABEL_13:
    v7[464] = v4;
    if ( !v4 )
      goto LABEL_27;
    goto LABEL_14;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(1);
  if ( *((int *)v7 + 112) >= 0 )
  {
    PopSetupSleepNotifies(v7);
    PopDiagTraceDevicesSuspend(
      *(_BYTE *)(a1 + 26) == 3,
      (DWORD1(PopCurrentBroadcast) >> 8) & 0xF,
      WORD2(PopCurrentBroadcast) >> 12);
    v18 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v18 = 14LL;
    PopCheckpointSystemSleep(v18);
    v21 = *v5;
    if ( *v5 == 4 )
    {
      if ( PopShutdownPowerOffPolicy || *(_QWORD *)&qword_140F0B9C0 )
      {
        v22 = 4LL;
        goto LABEL_45;
      }
    }
    else if ( v21 == 2 )
    {
      goto LABEL_62;
    }
    v22 = 0LL;
    if ( v21 != 3 )
    {
LABEL_45:
      v23 = 4;
      v24 = v7 + 352;
      for ( i = 4LL; ; --i )
      {
        if ( i < v22 )
        {
          v4 = v34;
          goto LABEL_55;
        }
        if ( v23 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v13 )
        {
          if ( dword_140F0B9B4 == 5 )
            WmiAcquireSmbiosLockExclusive();
          EmPowerPagingEnabled(0);
          PopVerifierFlushMemoryBeforeSleep();
          _InterlockedExchange(&PopPagingEnabled, 0);
          if ( *(_BYTE *)(a1 + 24) )
          {
            if ( (DWORD1(PopCurrentBroadcast) & 0x400000) == 0 )
              IoConfigureCrashDump(0LL, 1);
            if ( (PopShutdownCleanly & 0x10) != 0 )
              ObShutdownSystem((PVOID *)1, v28, v29, v30);
            MmShutdownSystem(1);
          }
          else
          {
            ExAcquireTimeRefreshLockExclusive();
            v7[468] = 1;
          }
        }
        LOBYTE(v19) = *v7;
        LOBYTE(v20) = 1;
        PopDiagTraceDevicesLevel((unsigned int)v23, 0LL, v19, v20);
        if ( *v24 )
        {
          if ( *(int *)(a1 + 20) < 0 )
            **((_QWORD **)v7 + 7) = 0LL;
          PopSleepDeviceList((__int64)v7, (__int64)&v7[64 * v23 + 64 + 8 * v23]);
        }
        LOBYTE(v26) = *v7;
        PopDiagTraceDevicesLevel((unsigned int)v23, 0LL, v26, 0LL);
        if ( *((int *)v7 + 112) < 0 )
          break;
        --v23;
        v24 -= 18;
      }
      v34 = 1;
      v4 = 1;
      if ( !*((_QWORD *)v7 + 57) || *(_DWORD *)(a1 + 12) != 1 )
        goto LABEL_97;
      v31 = PopMapInternalActionToIrpAction(*v36, *((_DWORD *)v7 + 1), 0);
      if ( v31 == 7 )
      {
        v32 = **((_QWORD **)v7 + 7);
      }
      else if ( *(int *)(a1 + 20) < 0 )
      {
LABEL_97:
        if ( v13 )
          PopDirectedDripsNotifyTransitionFailed(*((_QWORD *)v7 + 57));
LABEL_55:
        if ( *v7 == 2 && v13 )
          PopFxIdleDevicesFromSx();
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
        if ( *(_BYTE *)(a1 + 26) == 3 )
          PopCheckpointSystemSleep(12LL);
        goto LABEL_59;
      }
      IoNotifyPowerOperationVetoed(v31, v32, v33);
      goto LABEL_97;
    }
LABEL_62:
    v22 = 0LL;
    if ( *v7 == 2 )
      PopFxActivateDevicesForSx(1u);
    goto LABEL_45;
  }
LABEL_59:
  if ( (PopSimulate & 0x20000) == 0 || *(_BYTE *)(a1 + 26) != 2 )
    goto LABEL_13;
  DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
  v34 = 1;
  *((_DWORD *)v7 + 112) = -1073741823;
  v7[464] = 1;
LABEL_14:
  v7[466] = 1;
  *v7 = 2;
  *((_DWORD *)v7 + 1) = 1;
  if ( *(_BYTE *)(a1 + 26) != 2
    || (PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE),
        qword_140F0BF78 = KeQueryPerformanceCounter(0LL).QuadPart,
        *v7 == 2) )
  {
    if ( v13 )
      PopFxActivateDevicesForSx(1u);
  }
  v14 = 0;
  v15 = v7 + 64;
  while ( v14 <= 4 )
  {
    if ( PoResumeFromHibernate && !v14 )
    {
      if ( byte_140F0BBC0 )
        qword_140F0C148 = KeQueryPerformanceCounter(0LL).QuadPart;
      if ( byte_140E65EE2 )
      {
        BgDisplayFade(v12);
        byte_140E65EE1 = 0;
        byte_140E65EA0 = 0;
      }
    }
    LOBYTE(a3) = *v7;
    LOBYTE(a4) = 1;
    PopDiagTraceDevicesLevel((unsigned int)v14, 1LL, a3, a4);
    if ( v15[1] < *v15 )
      PopWakeDeviceList(v7, &v7[64 * v14 + 64 + 8 * v14]);
    LOBYTE(v16) = *v7;
    PopDiagTraceDevicesLevel((unsigned int)v14, 1LL, v16, 0LL);
    if ( v14 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v13 )
    {
      if ( v7[468] )
      {
        v7[468] = 0;
        ExReleaseTimeRefreshLockExclusive();
      }
      if ( PoResumeFromHibernate )
      {
        PopBootLoaderSiDataProcess();
        PopUpdateSmbiosData(
          *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 216) + 1236LL),
          *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 216) + 1237LL),
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 216) + 1232LL),
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 216) + 1224LL));
      }
      if ( dword_140F0B9B4 == 5 )
        WmipReleaseSmbiosLockShared();
      EmPowerPagingEnabled(1);
      _InterlockedExchange(&PopPagingEnabled, 1);
      v12 = (unsigned int)PopDebugFlags;
      if ( (PopDebugFlags & 4) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
      }
    }
    ++v14;
    v15 += 18;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
  {
    PopFxIdleDevicesFromSx();
    qword_140F0BF80 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopDiagTraceDevicesWakeEnd();
    PopCheckpointSystemSleep(36LL);
    if ( (PopDebugFlags & 8) != 0 )
    {
      Interval.QuadPart = -50000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
    }
  }
  v4 = v34;
  *v7 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v7 + 1) = *(_DWORD *)(a1 + 4);
LABEL_27:
  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
  {
    Interval.LowPart = *((_DWORD *)v7 + 112);
    v38 = 4LL;
    p_Interval = &Interval;
    EtwTraceKernelEvent((int)&p_Interval, 1, 0x80008000, 4645, 5249026);
  }
  if ( v4 && *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(0);
  DWORD1(PopCurrentBroadcast) &= ~0x800000u;
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v7 + 112);
}
