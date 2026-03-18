/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x140025E20
 * Callers:
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x140025D50 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x140025E00 (Interrupter_WdfEvtInterruptDpc.c)
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
 *     Control_ProcessTransferEventWithED1 @ 0x140012540 (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 *     WPP_RECORDER_SF_qDD @ 0x14002064C (WPP_RECORDER_SF_qDD.c)
 *     UsbDevice_TransferEventHandler @ 0x140020F10 (UsbDevice_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddddidLL @ 0x140021EE0 (WPP_RECORDER_SF_ddddidLL.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1400232A4 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140023380 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1400234D0 (Interrupter_DeferToDpcOrWorkItem.c)
 *     WPP_RECORDER_SF_qLL @ 0x14002CF68 (WPP_RECORDER_SF_qLL.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14003081C (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dqd @ 0x140032ECC (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_LL @ 0x140037374 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qq @ 0x14003749C (WPP_RECORDER_SF_qq.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     Controller_ReportFatalErrorEx @ 0x140042368 (Controller_ReportFatalErrorEx.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x14004942C (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140057938 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // r13
  char v12; // r14
  int v13; // r15d
  void *v14; // rdx
  char v15; // di
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  ULONG v20; // esi
  ULONG v21; // r12d
  __int64 v22; // rdi
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // edx
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rax
  unsigned int v30; // r10d
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // r9d
  __int16 v41; // r8
  __int64 v42; // rdi
  __int64 v43; // rdi
  unsigned __int8 v44; // ch
  int v45; // edx
  char v46; // al
  char v47; // di
  char v48; // di
  char v49; // al
  char v50; // di
  struct _IO_WORKITEM *v51; // rcx
  char v52; // al
  int v53; // [rsp+20h] [rbp-79h]
  char v54; // [rsp+28h] [rbp-71h]
  __int64 v55; // [rsp+30h] [rbp-69h]
  __int128 v57; // [rsp+78h] [rbp-21h] BYREF
  __int64 v58; // [rsp+88h] [rbp-11h]
  __int64 v59; // [rsp+90h] [rbp-9h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+98h] [rbp-1h] BYREF

  v59 = a1;
  v5 = a1;
  v57 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v9 = v6;
  v10 = *(_QWORD *)(v6 + 8);
  if ( !*(_BYTE *)(v10 + 1004) )
  {
    Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled(v5, a2, a3);
    return;
  }
  v11 = *(_QWORD *)(v10 + 136);
  ++*(_DWORD *)(v6 + 44);
  v12 = 0;
  v13 = 0;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v7,
      &USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V2,
      v8,
      *(_QWORD *)(v10 + 8),
      *(_DWORD *)(v6 + 32));
  v14 = &WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
      (_DWORD)v14,
      9,
      56,
      (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      v5,
      a2);
  }
  if ( *(_DWORD *)(v9 + 32) )
    v58 = 0LL;
  else
    v58 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v5,
            off_14006AFC0);
  v15 = Interrupter_AcquireEventRingLock(v9);
  if ( a3 )
    KeClearEvent((PRKEVENT)(v9 + 192));
  v16 = *(_DWORD *)(v9 + 112);
  if ( (v16 & 8) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v9, v15);
    ++*(_DWORD *)(v9 + 68);
    goto LABEL_119;
  }
  if ( (v16 & 0x10) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v9, v15);
    ++*(_DWORD *)(v9 + 72);
    goto LABEL_119;
  }
  *(_DWORD *)(v9 + 112) = v16 | 8;
  Interrupter_ReleaseEventRingLock(v9, v15);
  v20 = 0;
  v21 = 0;
  v22 = *(_QWORD *)(v9 + 152) + 16LL * *(unsigned int *)(v9 + 140);
  if ( (*(_DWORD *)(v22 + 12) & 1) != *(_DWORD *)(v9 + 136) )
  {
LABEL_106:
    v46 = Interrupter_AcquireEventRingLock(v9);
    *(_DWORD *)(v9 + 112) &= ~8u;
    v47 = v46;
    Interrupter_UpdateERDP(v9, 1);
    Interrupter_ReleaseEventRingLock(v9, v47);
    if ( !v13 )
      ++*(_DWORD *)(v9 + 96);
    v5 = v59;
    v18 = *(_DWORD *)(*(_QWORD *)(v9 + 152) + 16LL * *(unsigned int *)(v9 + 140) + 12) & 1;
    if ( v18 == *(_DWORD *)(v9 + 136) )
    {
      ++*(_DWORD *)(v9 + 100);
      v48 = 0;
      goto LABEL_121;
    }
    ++*(_DWORD *)(v9 + 104);
LABEL_119:
    v48 = 0;
    goto LABEL_120;
  }
  while ( 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v55) = *(_DWORD *)(v9 + 140);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
        5u,
        9u,
        0x39u,
        (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
        v22,
        v55);
    }
    if ( (v13 & 0x3F) != 0 )
      goto LABEL_30;
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    if ( KeGetCurrentIrql() < 2u || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_30;
    if ( !v20 )
    {
      v24 = 95 * WatchdogInformation.DpcTimeLimit;
      v23 = (1374389535 * (unsigned __int64)(unsigned int)v24) >> 32;
      v20 = (unsigned int)v24 / 0x64;
    }
    if ( !v21 )
    {
      v24 = 25 * WatchdogInformation.DpcWatchdogLimit;
      v23 = (1374389535 * (unsigned __int64)(unsigned int)v24) >> 32;
      v21 = (unsigned int)v24 / 0x64;
    }
    if ( WatchdogInformation.DpcTimeCount < v20 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v21 )
    {
      ++*(_DWORD *)(v9 + 84);
      goto LABEL_112;
    }
LABEL_30:
    v57 = *(_OWORD *)v22;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddddidLL(*(_QWORD *)(v9 + 16), (HIDWORD(v57) >> 2) & 1, WORD6(v57) >> 10, 0x3Bu, v53);
    v26 = *(_DWORD *)(v9 + 140);
    ++*(_DWORD *)(v9 + 48);
    v27 = v26 + 1;
    *(_DWORD *)(v9 + 140) = v27;
    if ( v27 == *(_DWORD *)(v9 + 132) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
          5u,
          9u,
          0x3Cu,
          (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
      v28 = *(_DWORD *)(v9 + 144) + 1;
      *(_DWORD *)(v9 + 140) = 0;
      *(_DWORD *)(v9 + 144) = v28;
      if ( v28 == *(_DWORD *)(v9 + 124) )
      {
        v27 = *(_DWORD *)(v9 + 136) != 1;
        *(_DWORD *)(v9 + 136) = v27;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
            5u,
            9u,
            0x3Du,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
        v29 = *(_QWORD *)(v9 + 176);
        *(_DWORD *)(v9 + 144) = 0;
      }
      else
      {
        v29 = **(_QWORD **)(v9 + 160);
      }
      *(_QWORD *)(v9 + 160) = v29;
      *(_QWORD *)(v9 + 152) = *(_QWORD *)(v29 + 16);
    }
    v30 = DWORD2(v57);
    if ( HIBYTE(DWORD2(v57)) == 199 && (v31 = *(_QWORD *)(v9 + 8), (*(_QWORD *)(v31 + 736) & 0x2000LL) != 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 3;
        WPP_RECORDER_SF_qLL(
          *(_QWORD *)(v31 + 72),
          v27,
          9,
          62,
          (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
          v22,
          SBYTE11(v57),
          WORD6(v57) >> 10);
      }
    }
    else
    {
      v32 = HIDWORD(v57);
      v33 = WORD6(v57) >> 10;
      if ( (_DWORD)v33 == 32 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v32) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
            v32,
            9,
            63,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
            32,
            SBYTE11(v57));
          v32 = HIDWORD(v57);
          v30 = DWORD2(v57);
        }
        if ( (v32 & 4) == 0 )
          goto LABEL_136;
        if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v9 + 8) + 736LL), 0x35u) && HIBYTE(v30) - 14 <= 1u )
        {
          v32 &= ~4u;
          HIDWORD(v57) = v32;
        }
        if ( (v32 & 4) == 0
          || (v34 = v57 & 3, v34 == 1)
          || _bittest64((const signed __int64 *)(*(_QWORD *)(v9 + 8) + 736LL), 0x25u) )
        {
LABEL_136:
          if ( *(_BYTE *)(v11 + 80) )
            v36 = *(_QWORD *)(v11 + 24);
          else
            v36 = *(_QWORD *)(v11 + 72);
          v37 = *(_QWORD *)(v36 + 8 * ((unsigned __int64)v32 >> 24));
          if ( v37 )
          {
            UsbDevice_TransferEventHandler(v37, (__int64)&v57, v33, (int)&WPP_RECORDER_INITIALIZED);
          }
          else if ( (v57 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qDD(
              *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
              3u,
              9u,
              0x40u,
              (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
          }
        }
        else if ( (v57 & 3) != 0 )
        {
          v35 = v34 - 1;
          if ( v35 && (unsigned __int64)(v35 - 1) <= 1 )
            Bulk_ProcessTransferEventWithED1((__int64)&v57, 0LL, v33, (__int64)&WPP_RECORDER_INITIALIZED);
        }
        else
        {
          Control_ProcessTransferEventWithED1((__int64 *)&v57, 0LL);
        }
      }
      else if ( (_DWORD)v33 == 37 && HIBYTE(DWORD2(v57)) == 21 )
      {
        ++*(_DWORD *)(v9 + 76);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
            v32,
            9,
            65,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
        }
        if ( (unsigned int)Feature_UMPERS__private_IsEnabledDeviceUsageNoInline() )
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(
            "usbxhci.sys",
            (*(_QWORD *)(*(_QWORD *)(v9 + 8) + 744LL) >> 27) & 1LL,
            *(unsigned int *)(v9 + 120),
            "Event Ring Full Condition Hit");
        v38 = *(_QWORD *)(v9 + 8);
        if ( (*(_QWORD *)(v38 + 736) & 0x10000000LL) != 0 )
          Controller_ReportFatalErrorEx(v38, 2, 4113, 0, 0LL, 0LL, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v9 + 32) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v39 = *(_QWORD *)(v9 + 8);
          v54 = WORD6(v57) >> 10;
          v40 = 66;
LABEL_100:
          LOBYTE(v32) = 3;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v39 + 72),
            v32,
            9,
            v40,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
            v54);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v32) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
            v32,
            9,
            67,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
            v33,
            SBYTE11(v57));
          v32 = HIDWORD(v57);
          HIBYTE(v30) = BYTE11(v57);
        }
        v41 = (unsigned __int16)v32 >> 10;
        switch ( (unsigned __int16)v32 >> 10 )
        {
          case '!':
          case '0':
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 144LL), (__int64)&v57);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD **)(*(_QWORD *)(v9 + 8) + 152LL), (__int64)&v57);
            break;
          case '%':
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v32) = 3;
              WPP_RECORDER_SF_LL(
                *(_QWORD *)(*(_QWORD *)(v58 + 8) + 72LL),
                v32,
                9,
                68,
                (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
                v41,
                SHIBYTE(v30));
            }
            break;
          case '&':
            if ( *(_BYTE *)(v11 + 80) )
              v42 = *(_QWORD *)(v11 + 24);
            else
              v42 = *(_QWORD *)(v11 + 72);
            v43 = *(_QWORD *)(v42 + 8 * ((unsigned __int64)v32 >> 24));
            if ( v43 )
            {
              v44 = BYTE1(v57);
              if ( (v57 & 0xF0) == 0x10 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v45 = *(unsigned __int8 *)(v43 + 135);
                  LOBYTE(v45) = 4;
                  WPP_RECORDER_SF_dqd(
                    *(_QWORD *)(*(_QWORD *)(v43 + 8) + 72LL),
                    v45,
                    12,
                    82,
                    (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
                    *(_BYTE *)(v43 + 135),
                    *(_QWORD *)v43,
                    SBYTE1(v57));
                  v44 = BYTE1(v57);
                }
                ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_14006BDC8)(UcxDriverGlobals, *(_QWORD *)v43, v44);
              }
            }
            break;
          case '\'':
            break;
          default:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v40 = 69;
              v54 = (unsigned __int16)v32 >> 10;
              v39 = *(_QWORD *)(v58 + 8);
              goto LABEL_100;
            }
            break;
        }
      }
    }
    v22 = *(_QWORD *)(v9 + 152) + 16LL * *(unsigned int *)(v9 + 140);
    if ( v13 && (v13 & 0x7F) == 0 && (*(_DWORD *)(v22 + 12) & 1) == *(_DWORD *)(v9 + 136) )
      Interrupter_UpdateERDP(v9, 0);
    ++v13;
    if ( (*(_DWORD *)(v22 + 12) & 1) != *(_DWORD *)(v9 + 136) )
      goto LABEL_106;
  }
  ++*(_DWORD *)(v9 + 80);
LABEL_112:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v23) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
      v23,
      9,
      58,
      (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      v13);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v25, *(_DWORD *)(v9 + 32));
  Interrupter_UpdateERDP(v9, 0);
  v5 = v59;
  v48 = 1;
LABEL_120:
  v12 = 1;
LABEL_121:
  if ( a3 )
    KeSetEvent((PRKEVENT)(v9 + 192), 0, 0);
  if ( v48 )
  {
    ++*(_DWORD *)(v9 + 56);
    v49 = Interrupter_AcquireEventRingLock(v9);
    v50 = v49;
    if ( (*(_DWORD *)(v9 + 112) & 0x12) != 0 )
    {
      Interrupter_ReleaseEventRingLock(v9, v49);
      goto LABEL_132;
    }
    KeClearEvent((PRKEVENT)(v9 + 192));
    Interrupter_ReleaseEventRingLock(v9, v50);
    v51 = *(struct _IO_WORKITEM **)(v9 + 216);
    if ( *(_BYTE *)(*(_QWORD *)(v9 + 8) + 784LL) )
    {
      if ( !v51
        || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
              v51,
              Interrupter_IoWorkItemRequeueDpc,
              0LL,
              v9) )
      {
        v52 = Interrupter_AcquireEventRingLock(v9);
        *(_DWORD *)(v9 + 112) &= ~8u;
        Interrupter_ReleaseEventRingLock(v9, v52);
        KeSetEvent((PRKEVENT)(v9 + 192), 0, 0);
        ++*(_DWORD *)(v9 + 64);
        Interrupter_DeferToDpcOrWorkItem(v5);
        goto LABEL_132;
      }
    }
    else
    {
      IoQueueWorkItemEx(v51, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v9);
    }
    ++*(_DWORD *)(v9 + 60);
  }
LABEL_132:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0pqqt_EtwWriteTransfer(
      v18,
      v17,
      v19,
      *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL),
      *(_DWORD *)(v9 + 32),
      v13,
      v12);
}
