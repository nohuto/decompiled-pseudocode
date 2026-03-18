/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x140025820
 * Callers:
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x140025750 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x140025800 (Interrupter_WdfEvtInterruptDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ddqq @ 0x1400016BC (WPP_RECORDER_SF_ddqq.c)
 *     WPP_RECORDER_SF_ddq @ 0x140001BE8 (WPP_RECORDER_SF_ddq.c)
 *     Endpoint_TransferEventHandler @ 0x140002700 (Endpoint_TransferEventHandler.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140002E50 (Bulk_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140005EE0 (Control_ProcessTransferEventWithED1.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x140009CC0 (RootHub_HandlePortStatusChangeEvent.c)
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000C860 (McTemplateK0q_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDD @ 0x140018934 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qd @ 0x140019E0C (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Interrupter_UpdateERDP @ 0x14001AA50 (Interrupter_UpdateERDP.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_ddddidLL @ 0x140021110 (WPP_RECORDER_SF_ddddidLL.c)
 *     Interrupter_ReleaseEventRingLock @ 0x140022364 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140022440 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1400226A0 (Interrupter_DeferToDpcOrWorkItem.c)
 *     WPP_RECORDER_SF_qLL @ 0x14002C7F8 (WPP_RECORDER_SF_qLL.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002F834 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dqd @ 0x140031990 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_LL @ 0x140035A40 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qq @ 0x140035B68 (WPP_RECORDER_SF_qq.c)
 *     Controller_ReportFatalErrorEx @ 0x140041EC0 (Controller_ReportFatalErrorEx.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x140048CDC (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140056D58 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, char a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  char v8; // r14
  char v9; // r13
  int v10; // r15d
  __int64 v11; // r9
  __int64 v12; // rax
  void *v13; // rdx
  char v14; // di
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  unsigned __int64 v19; // r9
  ULONG v20; // r12d
  ULONG v21; // r13d
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // edx
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rax
  unsigned int v30; // r10d
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rdx
  char v39; // al
  char v40; // di
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r9d
  int v44; // edx
  __int64 v45; // rdi
  __int64 v46; // rdi
  unsigned __int8 v47; // ch
  char v48; // al
  char v49; // di
  struct _IO_WORKITEM *v50; // rcx
  char v51; // al
  int v52; // [rsp+20h] [rbp-79h]
  char v53; // [rsp+28h] [rbp-71h]
  __int64 v54; // [rsp+30h] [rbp-69h]
  __int128 v56; // [rsp+78h] [rbp-21h] BYREF
  __int64 v57; // [rsp+88h] [rbp-11h]
  __int64 v58; // [rsp+90h] [rbp-9h]
  __int64 v59; // [rsp+98h] [rbp-1h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+A0h] [rbp+7h] BYREF

  v4 = a1;
  v58 = a1;
  v56 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = *(_QWORD *)(v6 + 8);
  v12 = *(_QWORD *)(v11 + 136);
  ++*(_DWORD *)(v6 + 44);
  v59 = v12;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v5,
      &USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V2,
      v7,
      *(_QWORD *)(v11 + 8),
      *(_DWORD *)(v6 + 32));
  v13 = &WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
      (_DWORD)v13,
      9,
      42,
      (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
      v4,
      a2);
  }
  if ( *(_DWORD *)(v6 + 32) )
    v57 = 0LL;
  else
    v57 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v4,
            off_14006AFC0);
  v14 = Interrupter_AcquireEventRingLock(v6);
  if ( a3 )
    KeClearEvent((PRKEVENT)(v6 + 192));
  v15 = *(_DWORD *)(v6 + 112);
  if ( (v15 & 8) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v6, v14);
    ++*(_DWORD *)(v6 + 68);
    goto LABEL_123;
  }
  if ( (v15 & 0x10) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v6, v14);
    ++*(_DWORD *)(v6 + 72);
    goto LABEL_123;
  }
  *(_DWORD *)(v6 + 112) = v15 | 8;
  Interrupter_ReleaseEventRingLock(v6, v14);
  v20 = 0;
  v21 = 0;
  v22 = *(_QWORD *)(v6 + 152) + 16LL * *(unsigned int *)(v6 + 140);
  if ( (*(_DWORD *)(v22 + 12) & 1) != *(_DWORD *)(v6 + 136) )
  {
LABEL_75:
    v39 = Interrupter_AcquireEventRingLock(v6);
    *(_DWORD *)(v6 + 112) &= ~8u;
    v40 = v39;
    Interrupter_UpdateERDP(v6, 1);
    Interrupter_ReleaseEventRingLock(v6, v40);
    if ( !v10 )
      ++*(_DWORD *)(v6 + 96);
    v17 = *(_DWORD *)(*(_QWORD *)(v6 + 152) + 16LL * *(unsigned int *)(v6 + 140) + 12) & 1;
    if ( v17 != *(_DWORD *)(v6 + 136) )
    {
      ++*(_DWORD *)(v6 + 104);
      v9 = 0;
      goto LABEL_122;
    }
    ++*(_DWORD *)(v6 + 100);
    v4 = v58;
    v9 = 0;
    goto LABEL_124;
  }
  while ( 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v54) = *(_DWORD *)(v6 + 140);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        5u,
        9u,
        0x2Bu,
        (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
        v22,
        v54);
    }
    if ( (v10 & 0x3F) != 0 )
      goto LABEL_28;
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    if ( KeGetCurrentIrql() < 2u || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_28;
    if ( !v20 )
    {
      v24 = 95 * WatchdogInformation.DpcTimeLimit;
      LODWORD(v23) = (1374389535 * (unsigned __int64)(unsigned int)v24) >> 32;
      v20 = (unsigned int)v24 / 0x64;
    }
    if ( !v21 )
    {
      v24 = 25 * WatchdogInformation.DpcWatchdogLimit;
      LODWORD(v23) = (1374389535 * (unsigned __int64)(unsigned int)v24) >> 32;
      v21 = (unsigned int)v24 / 0x64;
    }
    if ( WatchdogInformation.DpcTimeCount < v20 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v21 )
    {
      ++*(_DWORD *)(v6 + 84);
      goto LABEL_115;
    }
LABEL_28:
    v56 = *(_OWORD *)v22;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddddidLL(
        *(_QWORD *)(v6 + 16),
        (HIDWORD(v56) >> 2) & 1,
        WORD6(v56) >> 10,
        DWORD2(v56) & 0xFFFFFF,
        v52);
    v26 = *(_DWORD *)(v6 + 140);
    ++*(_DWORD *)(v6 + 48);
    v27 = v26 + 1;
    *(_DWORD *)(v6 + 140) = v27;
    if ( v27 == *(_DWORD *)(v6 + 132) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
          5u,
          9u,
          0x2Eu,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
      v28 = *(_DWORD *)(v6 + 144) + 1;
      *(_DWORD *)(v6 + 140) = 0;
      *(_DWORD *)(v6 + 144) = v28;
      if ( v28 == *(_DWORD *)(v6 + 124) )
      {
        v27 = *(_DWORD *)(v6 + 136) != 1;
        *(_DWORD *)(v6 + 136) = v27;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            5u,
            9u,
            0x2Fu,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
        v29 = *(_QWORD *)(v6 + 176);
        *(_DWORD *)(v6 + 144) = 0;
      }
      else
      {
        v29 = **(_QWORD **)(v6 + 160);
      }
      *(_QWORD *)(v6 + 160) = v29;
      *(_QWORD *)(v6 + 152) = *(_QWORD *)(v29 + 16);
    }
    v30 = DWORD2(v56);
    if ( HIBYTE(DWORD2(v56)) == 199 && (v31 = *(_QWORD *)(v6 + 8), (*(_QWORD *)(v31 + 736) & 0x2000LL) != 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 3;
        WPP_RECORDER_SF_qLL(
          *(_QWORD *)(v31 + 72),
          v27,
          9,
          48,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
          v22,
          SBYTE11(v56),
          WORD6(v56) >> 10);
      }
    }
    else
    {
      v32 = HIDWORD(v56);
      v33 = WORD6(v56) >> 10;
      if ( v33 == 32 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v33) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v33,
            9,
            49,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            WORD6(v56) >> 10,
            SBYTE11(v56));
          v32 = HIDWORD(v56);
          v30 = DWORD2(v56);
        }
        if ( (v32 & 4) == 0 )
          goto LABEL_139;
        if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v6 + 8) + 736LL), 0x35u) && HIBYTE(v30) - 14 <= 1u )
        {
          v32 = (unsigned int)v32 & 0xFFFFFFFB;
          HIDWORD(v56) = v32;
        }
        if ( (v32 & 4) == 0
          || (v34 = v56 & 3, v34 == 1)
          || _bittest64((const signed __int64 *)(*(_QWORD *)(v6 + 8) + 736LL), 0x25u) )
        {
LABEL_139:
          if ( *(_BYTE *)(v59 + 80) )
            v36 = *(_QWORD *)(v59 + 24);
          else
            v36 = *(_QWORD *)(v59 + 72);
          LODWORD(v19) = v32;
          v37 = *(_QWORD *)(v36 + 8 * ((unsigned __int64)(unsigned int)v32 >> 24));
          if ( v37 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_ddqq(
                *(_QWORD *)(*(_QWORD *)(v37 + 8) + 72LL),
                WORD1(v32) & 0x1F,
                BYTE3(v32),
                ((unsigned __int64)(unsigned int)v32 >> 16) & 0x1F,
                v52);
              v32 = HIDWORD(v56);
            }
            v38 = *(_QWORD *)(v37 + 8LL * (WORD1(v32) & 0x1F) + 176);
            if ( v38 )
            {
              Endpoint_TransferEventHandler((__int64)&v56, v38, v32);
            }
            else if ( (v56 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_ddq(
                *(_QWORD *)(*(_QWORD *)(v37 + 8) + 72LL),
                3u,
                0xCu,
                0x58u,
                (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids);
            }
          }
          else if ( (v56 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qDD(
              *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
              3u,
              9u,
              0x32u,
              (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
          }
        }
        else if ( (v56 & 3) != 0 )
        {
          v35 = v34 - 1;
          if ( v35 && (unsigned __int64)(v35 - 1) <= 1 )
            Bulk_ProcessTransferEventWithED1((__int64)&v56, 0LL, v32, v19);
        }
        else
        {
          Control_ProcessTransferEventWithED1((__int64 *)&v56, 0LL);
        }
      }
      else if ( v33 == 37 && HIBYTE(DWORD2(v56)) == 21 )
      {
        ++*(_DWORD *)(v6 + 76);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v33,
            9,
            51,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
        }
        MicrosoftTelemetryAssertTriggeredArgsMsgKM(
          "usbxhci.sys",
          (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 744LL) >> 27) & 1LL,
          *(unsigned int *)(v6 + 120),
          "Event Ring Full Condition Hit");
        v41 = *(_QWORD *)(v6 + 8);
        if ( (*(_QWORD *)(v41 + 736) & 0x10000000LL) != 0 )
          Controller_ReportFatalErrorEx(v41, 2, 4113, 0, 0LL, 0LL, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v6 + 32) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v42 = *(_QWORD *)(v6 + 8);
          v53 = WORD6(v56) >> 10;
          v43 = 52;
LABEL_94:
          LOBYTE(v33) = 3;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v42 + 72),
            v33,
            9,
            v43,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            v53);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v33) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
            v33,
            9,
            53,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            WORD6(v56) >> 10,
            SBYTE11(v56));
          LODWORD(v32) = HIDWORD(v56);
          HIBYTE(v30) = BYTE11(v56);
        }
        v33 = (unsigned __int16)v32 >> 10;
        v19 = 0x140000000uLL;
        switch ( (unsigned __int16)v32 >> 10 )
        {
          case '!':
          case '0':
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 144LL), (__int64)&v56);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD **)(*(_QWORD *)(v6 + 8) + 152LL), (__int64)&v56);
            break;
          case '%':
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v33) = 3;
              WPP_RECORDER_SF_LL(
                *(_QWORD *)(*(_QWORD *)(v57 + 8) + 72LL),
                v33,
                9,
                54,
                (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
                (unsigned __int16)v32 >> 10,
                SHIBYTE(v30));
            }
            break;
          case '&':
            v44 = v59;
            if ( *(_BYTE *)(v59 + 80) )
              v45 = *(_QWORD *)(v59 + 24);
            else
              v45 = *(_QWORD *)(v59 + 72);
            v46 = *(_QWORD *)(v45 + 8 * ((unsigned __int64)(unsigned int)v32 >> 24));
            if ( v46 )
            {
              v47 = BYTE1(v56);
              if ( (v56 & 0xF0) == 0x10 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v44) = 4;
                  WPP_RECORDER_SF_dqd(
                    *(_QWORD *)(*(_QWORD *)(v46 + 8) + 72LL),
                    v44,
                    12,
                    89,
                    (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                    *(_BYTE *)(v46 + 143),
                    *(_QWORD *)v46,
                    SBYTE1(v56));
                  v47 = BYTE1(v56);
                }
                ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_14006BDA8)(UcxDriverGlobals, *(_QWORD *)v46, v47);
              }
            }
            break;
          case '\'':
            break;
          default:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v43 = 55;
              v53 = (unsigned __int16)v32 >> 10;
              v42 = *(_QWORD *)(v57 + 8);
              goto LABEL_94;
            }
            break;
        }
      }
    }
    v22 = *(_QWORD *)(v6 + 152) + 16LL * *(unsigned int *)(v6 + 140);
    if ( v10 && (v10 & 0x7F) == 0 && (*(_DWORD *)(v22 + 12) & 1) == *(_DWORD *)(v6 + 136) )
      Interrupter_UpdateERDP(v6, 0);
    ++v10;
    if ( (*(_DWORD *)(v22 + 12) & 1) != *(_DWORD *)(v6 + 136) )
      goto LABEL_75;
  }
  ++*(_DWORD *)(v6 + 80);
LABEL_115:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v23) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
      v23,
      9,
      44,
      (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
      v10);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, v23, v25, *(_DWORD *)(v6 + 32));
  Interrupter_UpdateERDP(v6, 0);
  v9 = 1;
LABEL_122:
  v4 = v58;
LABEL_123:
  v8 = 1;
LABEL_124:
  if ( a3 )
    KeSetEvent((PRKEVENT)(v6 + 192), 0, 0);
  if ( v9 )
  {
    ++*(_DWORD *)(v6 + 56);
    v48 = Interrupter_AcquireEventRingLock(v6);
    v49 = v48;
    if ( (*(_DWORD *)(v6 + 112) & 0x12) != 0 )
    {
      Interrupter_ReleaseEventRingLock(v6, v48);
    }
    else
    {
      KeClearEvent((PRKEVENT)(v6 + 192));
      Interrupter_ReleaseEventRingLock(v6, v49);
      v50 = *(struct _IO_WORKITEM **)(v6 + 216);
      if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 784LL) )
      {
        if ( !v50
          || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
                v50,
                Interrupter_IoWorkItemRequeueDpc,
                0LL,
                v6) )
        {
          v51 = Interrupter_AcquireEventRingLock(v6);
          *(_DWORD *)(v6 + 112) &= ~8u;
          Interrupter_ReleaseEventRingLock(v6, v51);
          KeSetEvent((PRKEVENT)(v6 + 192), 0, 0);
          ++*(_DWORD *)(v6 + 64);
          Interrupter_DeferToDpcOrWorkItem(v4);
          goto LABEL_135;
        }
      }
      else
      {
        IoQueueWorkItemEx(v50, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v6);
      }
      ++*(_DWORD *)(v6 + 60);
    }
  }
LABEL_135:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0pqqt_EtwWriteTransfer(
      v17,
      v16,
      v18,
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL),
      *(_DWORD *)(v6 + 32),
      v10,
      v8);
}
