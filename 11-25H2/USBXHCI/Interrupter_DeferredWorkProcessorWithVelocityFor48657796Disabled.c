/*
 * XREFs of Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140006BE0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x14000AEBC (RootHub_HandlePortStatusChangeEvent.c)
 *     Interrupter_UpdateERDP @ 0x14000BF30 (Interrupter_UpdateERDP.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_qd @ 0x14000D698 (WPP_RECORDER_SF_qd.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_qDD @ 0x14002064C (WPP_RECORDER_SF_qDD.c)
 *     UsbDevice_TransferEventHandler @ 0x140020F10 (UsbDevice_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddddidLL @ 0x140021EE0 (WPP_RECORDER_SF_ddddidLL.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1400232A4 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140023380 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1400234D0 (Interrupter_DeferToDpcOrWorkItem.c)
 *     TR_TransferEventHandler @ 0x140023AE0 (TR_TransferEventHandler.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1400243D0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     WPP_RECORDER_SF_qLL @ 0x14002CF68 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_LL @ 0x140037374 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qq @ 0x14003749C (WPP_RECORDER_SF_qq.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x14003CBF8 (UsbDevice_DeviceNotificationEventHandler.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140057938 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  ULONG v7; // r15d
  char v8; // r13
  char v9; // di
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // esi
  ULONG v14; // r14d
  __int64 v15; // rdi
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rcx
  int v24; // edx
  int v25; // r10d
  __int64 UsbDeviceHandleArray; // rax
  __int64 v27; // r8
  int v28; // r9d
  void *v29; // r10
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // r9d
  __int64 v35; // rax
  unsigned int v36; // edx
  _QWORD *v37; // rcx
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // di
  char v42; // al
  char v43; // di
  struct _IO_WORKITEM *v44; // rcx
  char v45; // al
  int v46; // [rsp+20h] [rbp-79h]
  char v47; // [rsp+28h] [rbp-71h]
  __int64 v48; // [rsp+30h] [rbp-69h]
  __int128 v50; // [rsp+78h] [rbp-21h] BYREF
  __int64 v51; // [rsp+88h] [rbp-11h]
  __int64 v52; // [rsp+90h] [rbp-9h]
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+98h] [rbp-1h] BYREF

  v50 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v6 = *(_QWORD *)(v5 + 8);
  v52 = *(_QWORD *)(v6 + 136);
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v6 + 72),
      5u,
      9u,
      0x2Au,
      (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      a1,
      a2);
  ++*(_DWORD *)(v5 + 44);
  v8 = 0;
  if ( *(_DWORD *)(v5 + 32) )
    v51 = 0LL;
  else
    v51 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a1,
            off_14006AFC0);
  v9 = Interrupter_AcquireEventRingLock(v5);
  if ( a3 )
    KeClearEvent((PRKEVENT)(v5 + 192));
  v10 = *(_DWORD *)(v5 + 112);
  if ( (v10 & 8) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v5, v9);
    ++*(_DWORD *)(v5 + 68);
    goto LABEL_100;
  }
  if ( (v10 & 0x10) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v5, v9);
    ++*(_DWORD *)(v5 + 72);
    goto LABEL_100;
  }
  *(_DWORD *)(v5 + 112) = v10 | 8;
  Interrupter_ReleaseEventRingLock(v5, v9);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V1, v12, *(_DWORD *)(v5 + 32));
  v13 = 0;
  v14 = 0;
  v15 = *(_QWORD *)(v5 + 152) + 16LL * *(unsigned int *)(v5 + 140);
  while ( 1 )
  {
    if ( (*(_DWORD *)(v15 + 12) & 1) != *(_DWORD *)(v5 + 136) )
    {
      v38 = Interrupter_AcquireEventRingLock(v5);
      *(_DWORD *)(v5 + 112) &= ~8u;
      v41 = v38;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        McTemplateK0q_EtwWriteTransfer(
          v39,
          (__int64)&USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1,
          v40,
          *(_DWORD *)(v5 + 32));
      Interrupter_UpdateERDP(v5, 1);
      Interrupter_ReleaseEventRingLock(v5, v41);
      goto LABEL_100;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v48) = *(_DWORD *)(v5 + 140);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        5u,
        9u,
        0x2Bu,
        (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
        v15,
        v48);
    }
    if ( (v13 & 0x3F) != 0 )
      goto LABEL_28;
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    if ( KeGetCurrentIrql() < 2u || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_28;
    if ( !v14 )
    {
      v17 = 95 * WatchdogInformation.DpcTimeLimit;
      v16 = (1374389535 * (unsigned __int64)(unsigned int)v17) >> 32;
      v14 = (unsigned int)v17 / 0x64;
    }
    if ( !v7 )
    {
      v17 = 25 * WatchdogInformation.DpcWatchdogLimit;
      v16 = (1374389535 * (unsigned __int64)(unsigned int)v17) >> 32;
      v7 = (unsigned int)v17 / 0x64;
    }
    if ( WatchdogInformation.DpcTimeCount < v14 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v7 )
    {
      ++*(_DWORD *)(v5 + 84);
      goto LABEL_110;
    }
LABEL_28:
    v50 = *(_OWORD *)v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddddidLL(*(_QWORD *)(v5 + 16), (HIDWORD(v50) >> 2) & 1, WORD6(v50) >> 10, 0x2Du, v46);
    v19 = *(_DWORD *)(v5 + 140);
    ++*(_DWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 140) = ++v19;
    if ( v19 == *(_DWORD *)(v5 + 132) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          5u,
          9u,
          0x2Eu,
          (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
      v20 = *(_DWORD *)(v5 + 144) + 1;
      *(_DWORD *)(v5 + 140) = 0;
      *(_DWORD *)(v5 + 144) = v20;
      if ( v20 == *(_DWORD *)(v5 + 124) )
      {
        *(_DWORD *)(v5 + 136) = *(_DWORD *)(v5 + 136) != 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            5u,
            9u,
            0x2Fu,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
        v21 = *(_QWORD *)(v5 + 176);
        *(_DWORD *)(v5 + 144) = 0;
      }
      else
      {
        v21 = **(_QWORD **)(v5 + 160);
      }
      *(_QWORD *)(v5 + 160) = v21;
      *(_QWORD *)(v5 + 152) = *(_QWORD *)(v21 + 16);
    }
    v22 = DWORD2(v50);
    if ( HIBYTE(DWORD2(v50)) == 199 && (v23 = *(_QWORD *)(v5 + 8), (*(_QWORD *)(v23 + 736) & 0x2000LL) != 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLL(
          *(_QWORD *)(v23 + 72),
          3u,
          9u,
          0x30u,
          (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
    }
    else
    {
      v24 = HIDWORD(v50);
      v25 = WORD6(v50) >> 10;
      if ( v25 == 32 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            5u,
            9u,
            0x31u,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
          v24 = HIDWORD(v50);
          v22 = DWORD2(v50);
        }
        if ( (v24 & 4) != 0
          && _bittest64((const signed __int64 *)(*(_QWORD *)(v5 + 8) + 736LL), 0x35u)
          && HIBYTE(v22) - 14 <= 1u )
        {
          v24 &= ~4u;
          HIDWORD(v50) = v24;
        }
        if ( (v24 & 4) == 0
          || (v50 & 3) == 1
          || _bittest64((const signed __int64 *)(*(_QWORD *)(v5 + 8) + 736LL), 0x25u) )
        {
          UsbDeviceHandleArray = XilDeviceSlot_GetUsbDeviceHandleArray(v52);
          v31 = *(_QWORD *)(UsbDeviceHandleArray + 8 * ((unsigned __int64)v30 >> 24));
          if ( v31 )
          {
            UsbDevice_TransferEventHandler(v31, (__int64)&v50, v27, v28);
          }
          else if ( (v27 & 3) != 1 && WPP_RECORDER_INITIALIZED != v29 )
          {
            WPP_RECORDER_SF_qDD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
              3u,
              9u,
              0x32u,
              (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
          }
        }
        else
        {
          TR_TransferEventHandler(&v50, 0LL);
        }
      }
      else if ( v25 == 37 && HIBYTE(DWORD2(v50)) == 21 )
      {
        ++*(_DWORD *)(v5 + 76);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            v24,
            9,
            51,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
        }
        if ( (unsigned int)Feature_UMPERS__private_IsEnabledDeviceUsageNoInline() )
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(
            "usbxhci.sys",
            (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 744LL) >> 27) & 1LL,
            *(unsigned int *)(v5 + 120),
            "Event Ring Full Condition Hit");
        v32 = *(_QWORD *)(v5 + 8);
        if ( (*(_QWORD *)(v32 + 736) & 0x10000000LL) != 0 )
          Controller_ReportFatalError(v32, 2, 4113, 0, 0LL, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v5 + 32) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v33 = *(_QWORD *)(v5 + 8);
          v47 = WORD6(v50) >> 10;
          v34 = 52;
LABEL_84:
          LOBYTE(v24) = 3;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v33 + 72),
            v24,
            9,
            v34,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
            v47);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            5u,
            9u,
            0x35u,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
          v24 = HIDWORD(v50);
        }
        switch ( (unsigned __int16)v24 >> 10 )
        {
          case '!':
LABEL_90:
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 144LL), (__int64)&v50);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD **)(*(_QWORD *)(v5 + 8) + 152LL), (__int64)&v50);
            break;
          case '%':
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_LL(
                *(_QWORD *)(*(_QWORD *)(v51 + 8) + 72LL),
                3u,
                9u,
                0x36u,
                (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
            break;
          case '&':
            v35 = XilDeviceSlot_GetUsbDeviceHandleArray(v52);
            v37 = *(_QWORD **)(v35 + 8 * ((unsigned __int64)v36 >> 24));
            if ( v37 )
              UsbDevice_DeviceNotificationEventHandler(v37, &v50);
            break;
          default:
            if ( (unsigned __int16)v24 >> 10 != 39 )
            {
              if ( (unsigned __int16)v24 >> 10 == 48 )
                goto LABEL_90;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v34 = 55;
                v47 = (unsigned __int16)v24 >> 10;
                v33 = *(_QWORD *)(v51 + 8);
                goto LABEL_84;
              }
            }
            break;
        }
      }
    }
    v15 = *(_QWORD *)(v5 + 152) + 16LL * *(unsigned int *)(v5 + 140);
    if ( v13 && (v13 & 0x7F) == 0 && (*(_DWORD *)(v15 + 12) & 1) == *(_DWORD *)(v5 + 136) )
      Interrupter_UpdateERDP(v5, 0);
    ++v13;
  }
  ++*(_DWORD *)(v5 + 80);
LABEL_110:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
      v16,
      9,
      44,
      (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      v13);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v18, *(_DWORD *)(v5 + 32));
  Interrupter_UpdateERDP(v5, 0);
  v8 = 1;
LABEL_100:
  if ( a3 )
    KeSetEvent((PRKEVENT)(v5 + 192), 0, 0);
  if ( v8 )
  {
    ++*(_DWORD *)(v5 + 56);
    v42 = Interrupter_AcquireEventRingLock(v5);
    v43 = v42;
    if ( (*(_DWORD *)(v5 + 112) & 0x12) != 0 )
    {
      Interrupter_ReleaseEventRingLock(v5, v42);
    }
    else
    {
      KeClearEvent((PRKEVENT)(v5 + 192));
      Interrupter_ReleaseEventRingLock(v5, v43);
      v44 = *(struct _IO_WORKITEM **)(v5 + 216);
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 784LL) )
      {
        if ( !v44
          || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
                v44,
                Interrupter_IoWorkItemRequeueDpc,
                0LL,
                v5) )
        {
          v45 = Interrupter_AcquireEventRingLock(v5);
          *(_DWORD *)(v5 + 112) &= ~8u;
          Interrupter_ReleaseEventRingLock(v5, v45);
          KeSetEvent((PRKEVENT)(v5 + 192), 0, 0);
          ++*(_DWORD *)(v5 + 64);
          Interrupter_DeferToDpcOrWorkItem(a1);
          return;
        }
      }
      else
      {
        IoQueueWorkItemEx(v44, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v5);
      }
      ++*(_DWORD *)(v5 + 60);
    }
  }
}
