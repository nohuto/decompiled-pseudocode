/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x140006B60
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1400067D0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x14004AE30 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x14000504C (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x140005250 (VidSchiProcessIsrCompletedPacket.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x140005B3C (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     VidSchiProcessIsrMonitoredFenceSignaled @ 0x140005C80 (VidSchiProcessIsrMonitoredFenceSignaled.c)
 *     VidSchiProcessIsrVSync @ 0x140005D2C (VidSchiProcessIsrVSync.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x140039884 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     VidSchiProcessIsrSuspendContextCompleted @ 0x140042F24 (VidSchiProcessIsrSuspendContextCompleted.c)
 *     VidSchiProcessIsrSchedulingLogFull @ 0x14004349C (VidSchiProcessIsrSchedulingLogFull.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x14004B230 (McTemplateK0qq_EtwWriteTransfer.c)
 *     VidSchiProcessIsrGpuEngineTimeout @ 0x14004B4BC (VidSchiProcessIsrGpuEngineTimeout.c)
 *     ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x14004BAAC (-VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z.c)
 *     LogPageFaultInformation @ 0x14004F71C (LogPageFaultInformation.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1400500C4 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiProcessIsrHwQueuePageFaulted @ 0x140052AB4 (VidSchiProcessIsrHwQueuePageFaulted.c)
 *     VidSchiProcessIsrNativeFenceSignaled @ 0x140052C54 (VidSchiProcessIsrNativeFenceSignaled.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v5; // edx
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  int v16; // r8d
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v34; // ebx
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r9
  _QWORD *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // ebp
  PSLIST_ENTRY v47; // rbx
  unsigned int v48; // eax
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 *v54; // r15
  __int64 v55; // r15
  unsigned __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  PSLIST_ENTRY v64; // rax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // [rsp+20h] [rbp-58h]
  unsigned int v72; // [rsp+80h] [rbp+8h] BYREF
  __int64 v73; // [rsp+88h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 744);
  v72 = 0;
  v5 = *(_DWORD *)a2;
  v7 = a1;
  if ( v5 <= 0x12 )
  {
    v8 = 263304;
    if ( _bittest(&v8, v5) )
    {
      if ( (*(_DWORD *)(v3 + 36) & 0x10) != 0 && (*(_BYTE *)(v3 + 3268) & 8) == 0 )
      {
        v16 = 0;
        if ( *(_DWORD *)(v3 + 80) <= 1u || (*(_DWORD *)(a2 + 72) & 1) == 0 )
        {
LABEL_23:
          v17 = MEMORY[0xFFFFF78000000320];
          v18 = VidSchiProcessIsrVSync(
                  (union _SLIST_HEADER *)v3,
                  (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a2,
                  v16,
                  MEMORY[0xFFFFF78000000320]);
          if ( v18 == -1 || v18 >= *(_DWORD *)(v3 + 40) )
          {
            v25 = *(unsigned int *)(v3 + 6288);
            *(_QWORD *)(v3 + 8 * v25 + 6296) = v17;
            v26 = 10 * v25;
            *(_OWORD *)(v3 + 8 * v26 + 6328) = *(_OWORD *)a2;
            *(_OWORD *)(v3 + 8 * v26 + 6344) = *(_OWORD *)(a2 + 16);
            *(_OWORD *)(v3 + 8 * v26 + 6360) = *(_OWORD *)(a2 + 32);
            *(_OWORD *)(v3 + 8 * v26 + 6376) = *(_OWORD *)(a2 + 48);
            *(_OWORD *)(v3 + 8 * v26 + 6392) = *(_OWORD *)(a2 + 64);
            *(_DWORD *)(v3 + 6288) = ((unsigned __int8)*(_DWORD *)(v3 + 6288) + 1) & 3;
          }
          else
          {
            _mm_lfence();
            v19 = *(_QWORD *)(v3 + 8LL * v18 + 3432);
            v20 = *(unsigned int *)(v19 + 44492);
            *(_QWORD *)(v19 + 8 * v20 + 44496) = v17;
            v21 = 10 * v20;
            *(_OWORD *)(v19 + 8 * v21 + 44528) = *(_OWORD *)a2;
            *(_OWORD *)(v19 + 8 * v21 + 44544) = *(_OWORD *)(a2 + 16);
            *(_OWORD *)(v19 + 8 * v21 + 44560) = *(_OWORD *)(a2 + 32);
            *(_OWORD *)(v19 + 8 * v21 + 44576) = *(_OWORD *)(a2 + 48);
            *(_OWORD *)(v19 + 8 * v21 + 44592) = *(_OWORD *)(a2 + 64);
            *(_DWORD *)(v19 + 44492) = ((unsigned __int8)*(_DWORD *)(v19 + 44492) + 1) & 3;
          }
          return;
        }
        goto LABEL_81;
      }
    }
  }
  switch ( v5 )
  {
    case 1u:
      if ( (*(_DWORD *)(v3 + 36) & 1) == 0 )
        return;
      v9 = *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v3 + 88);
      if ( a3 )
      {
        if ( _bittest64(
               *(const signed __int64 **)(v3 + 648),
               *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v3 + 88)) )
        {
          return;
        }
      }
      v10 = *(__int64 **)(v3 + 688);
      if ( (unsigned int)v9 < *(_DWORD *)(v3 + 760) )
        v10 += v9;
      v11 = *v10;
      if ( *(_DWORD *)(*v10 + 16) == 1 )
        return;
      if ( a3 && *(_DWORD *)(v11 + 16) == 2 )
      {
        v27 = *(unsigned __int16 *)(v11 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v27, 0LL);
        WdLogGlobalForLineNumber = 906;
      }
      else
      {
        v12 = *(unsigned int *)(a2 + 8);
        v13 = *(unsigned int *)(v11 + 64);
        v14 = *(_QWORD *)(v11 + 24);
        v72 = v12;
        if ( (_DWORD)v12 == (_DWORD)v13 || (_DWORD)v12 == *(_DWORD *)(v11 + 72) )
          goto LABEL_17;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 152), 0, 0);
        if ( v15 < (unsigned int)v13 )
        {
          if ( (unsigned int)v12 <= v15 || (unsigned int)v12 >= (unsigned int)v13 )
            goto LABEL_17;
        }
        else if ( (unsigned int)v12 >= (unsigned int)v13 && (unsigned int)v12 <= v15 )
        {
LABEL_17:
          VidSchiProcessIsrCompletedPacket(v11, v12, a3, (unsigned int *)a2);
          return;
        }
        if ( *(_BYTE *)(v14 + 53) )
        {
          *(_DWORD *)(v11 + 2152) = 1;
          *(_BYTE *)(v11 + 2145) = 1;
          return;
        }
      }
      v28 = *(_QWORD *)(v14 + 16);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 1LL, v12, v13, v28);
      WdLogGlobalForLineNumber = 906;
      break;
    case 0xBu:
      if ( (*(_DWORD *)(v3 + 36) & 1) == 0 )
        return;
      v22 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 88);
      if ( a3 )
      {
        if ( _bittest64(
               *(const signed __int64 **)(v3 + 648),
               *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 88)) )
        {
          return;
        }
      }
      v23 = *(__int64 **)(v3 + 688);
      if ( (unsigned int)v22 < *(_DWORD *)(v3 + 760) )
        v23 += v22;
      v24 = *v23;
      if ( *(_DWORD *)(*v23 + 16) == 1 )
        return;
      if ( !a3 || *(_DWORD *)(v24 + 16) != 2 )
      {
        VidSchiProcessIsrMonitoredFenceSignaled(v24);
        return;
      }
      v51 = *(unsigned __int16 *)(v24 + 4);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v51, 0LL);
      WdLogGlobalForLineNumber = 906;
      goto LABEL_106;
    case 0x13u:
      v35 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 88);
      if ( a3
        && _bittest64(
             *(const signed __int64 **)(v3 + 648),
             *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 88)) )
      {
        return;
      }
      v36 = *(__int64 **)(v3 + 688);
      if ( (unsigned int)v35 < *(_DWORD *)(v3 + 760) )
        v36 += v35;
      v37 = *v36;
      if ( *(_DWORD *)(*v36 + 16) == 1 )
        return;
      if ( a3 && *(_DWORD *)(v37 + 16) == 2 )
      {
        v38 = *(unsigned __int16 *)(v37 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v38, 0LL);
        WdLogGlobalForLineNumber = 906;
        goto LABEL_80;
      }
LABEL_106:
      VidSchiProcessIsrNativeFenceSignaled(a2);
      return;
  }
  if ( v5 != 2 )
  {
    if ( v5 != 4 )
    {
      switch ( v5 )
      {
        case 9u:
          goto LABEL_108;
        case 0xFu:
LABEL_87:
          if ( (*(_DWORD *)(v3 + 36) & 1) != 0 )
          {
            v42 = *(_QWORD **)(v3 + 688);
            v43 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 88);
            if ( (unsigned int)v43 < *(_DWORD *)(v3 + 760) )
              v42 += v43;
            VidSchiProcessIsrSchedulingLogFull(*v42);
          }
          return;
        case 0x10u:
          if ( (*(_DWORD *)(v3 + 36) & 1) != 0 )
          {
            v49 = *(_QWORD **)(v3 + 688);
            v50 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v3 + 88);
            if ( (unsigned int)v50 < *(_DWORD *)(v3 + 760) )
              v49 += v50;
            VidSchiProcessIsrGpuEngineTimeout(*v49);
          }
          break;
        case 0x11u:
          if ( (*(_DWORD *)(v3 + 36) & 1) != 0 )
            VidSchiProcessIsrSuspendContextCompleted(v3, a2);
          break;
        default:
LABEL_92:
          if ( v5 == 12 )
          {
            if ( (*(_DWORD *)(v3 + 36) & 1) != 0 )
              VidSchiProcessIsrHwQueuePageFaulted(v3, a2);
          }
          else if ( v5 == 14 )
          {
            v45 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
                    *(ADAPTER_DISPLAY **)(*(_QWORD *)(v3 + 16) + 3120LL),
                    *(_DWORD *)(a2 + 8));
            v46 = v45;
            if ( v45 == -1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8106;
              DxgkLogInternalTriageEvent(v67, 0x40000LL);
            }
            else if ( (unsigned __int8)*(_DWORD *)(a2 + 12) >= 8u )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8113;
              DxgkLogInternalTriageEvent(v68, 0x40000LL);
            }
            else
            {
              v47 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 8LL * v45 + 3432) + 78976LL));
              v48 = *(_DWORD *)(a2 + 12);
              if ( v47 )
              {
                HIDWORD(v47[2].Next) = v48;
                LODWORD(v47[2].Next) = v46;
                LODWORD(v47->Next) = 14;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 2032), v47 + 1);
                if ( (byte_140081241 & 4) != 0 )
                  McTemplateK0qq_EtwWriteTransfer(
                    v69,
                    &EventPeriodicFrameNotificationInterrupt,
                    v70,
                    LODWORD(v47[2].Next),
                    HIDWORD(v47[2].Next));
              }
              else
              {
                WdLogSingleEntry2(1LL, *(unsigned int *)(a2 + 8), v48);
                v71 = *(unsigned int *)(a2 + 8);
                WdLogGlobalForLineNumber = 8136;
                DxgkLogInternalTriageEvent(v71, 0x40000LL);
              }
            }
          }
          return;
      }
      return;
    }
LABEL_80:
    v39 = *(unsigned int *)(a2 + 8);
    v40 = *(unsigned int *)(a2 + 20);
    v41 = *(unsigned int *)(a2 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, v41, v40, v39);
    WdLogGlobalForLineNumber = 906;
LABEL_81:
    switch ( v5 )
    {
      case 7u:
        v16 = *(_DWORD *)(a2 + 12);
        break;
      case 0xAu:
        v16 = *(_DWORD *)(a2 + 12);
        break;
      case 0x12u:
        v16 = *(_DWORD *)(a2 + 12);
        break;
      default:
        v16 = *(_DWORD *)(a2 + 24);
        break;
    }
    if ( v16 )
      goto LABEL_23;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 6LL, v3, 0LL, 0LL);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_87;
  }
  if ( (*(_DWORD *)(v3 + 36) & 1) != 0 )
  {
    v29 = *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v3 + 88);
    if ( !a3
      || !_bittest64(
            *(const signed __int64 **)(v3 + 648),
            *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v3 + 88)) )
    {
      v30 = *(__int64 **)(v3 + 688);
      if ( (unsigned int)v29 < *(_DWORD *)(v3 + 760) )
        v30 += v29;
      v7 = *v30;
      if ( *(_DWORD *)(v7 + 16) != 1 )
      {
        if ( !a3 || *(_DWORD *)(v7 + 16) != 2 )
        {
          if ( !(unsigned int)VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v7, *(_DWORD *)(a2 + 8), 1, 0LL) )
            return;
          v3 = *(unsigned int *)(a2 + 12);
          v31 = *(unsigned int *)(v7 + 64);
          v32 = *(_QWORD *)(v7 + 24);
          v72 = v3;
          if ( (_DWORD)v3 == (_DWORD)v31 || (_DWORD)v3 == *(_DWORD *)(v7 + 72) )
            goto LABEL_59;
          v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 152), 0, 0);
          if ( v33 < (unsigned int)v31 )
          {
            if ( (unsigned int)v3 <= v33 || (unsigned int)v3 >= (unsigned int)v31 )
              goto LABEL_59;
          }
          else if ( (unsigned int)v3 >= (unsigned int)v31 && (unsigned int)v3 <= v33 )
          {
            do
            {
LABEL_59:
              v34 = VidSchiProcessIsrCompletedPacket(v7, v3, a3, (unsigned int *)a2);
              VidSchiProcessIsrPreemptedPacket(v7, *(_DWORD *)(a2 + 8), a3, a2);
            }
            while ( v34 );
            return;
          }
          if ( *(_BYTE *)(v32 + 53) )
          {
            *(_DWORD *)(v7 + 2152) = 1;
            *(_BYTE *)(v7 + 2145) = 1;
            return;
          }
          v44 = *(_QWORD *)(v32 + 16);
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 1LL, v3, v31, v44);
          WdLogGlobalForLineNumber = 906;
          goto LABEL_92;
        }
        v52 = *(unsigned __int16 *)(v7 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v52, 0LL);
        WdLogGlobalForLineNumber = 906;
LABEL_108:
        if ( (*(_DWORD *)(v3 + 36) & 4) == 0 )
          return;
        VidSchiValidatePageFaultFlags(*(enum _DXGK_PAGE_FAULT_FLAGS *)(a2 + 32));
        v53 = *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v3 + 88);
        if ( a3
          && _bittest64(
               *(const signed __int64 **)(v3 + 648),
               *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v3 + 88)) )
        {
          LogPageFaultInformation(1LL, v7, a2, 0LL);
          return;
        }
        v54 = *(__int64 **)(v3 + 688);
        if ( (unsigned int)v53 < *(_DWORD *)(v3 + 760) )
          v54 += v53;
        v55 = *v54;
        v56 = *(unsigned int *)(v55 + 12);
        if ( (*(_BYTE *)(a2 + 32) & 2) == 0 && (v56 & 2) != 0 )
        {
          v57 = *(unsigned int *)(a2 + 44);
          v58 = *(unsigned int *)(a2 + 40);
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 13LL, (v56 >> 1) & 1, v58, v57);
          WdLogGlobalForLineNumber = 906;
        }
        if ( *(_DWORD *)(v55 + 16) == 1 )
        {
          v59 = 0LL;
          v60 = 2LL;
          v61 = a2;
          v62 = v7;
        }
        else
        {
          if ( a3 && *(_DWORD *)(v55 + 16) == 2 )
          {
            v63 = *(unsigned __int16 *)(v55 + 4);
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 16LL, v3, v63, 0LL);
            WdLogGlobalForLineNumber = 906;
          }
          if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
          {
            v64 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v55 + 11520));
            if ( v64 )
            {
              v64[2].Next = (struct _SLIST_ENTRY *)v55;
              *((_QWORD *)&v64[2].Next + 1) = *(unsigned int *)(a2 + 8);
              *((_QWORD *)&v64[3].Next + 1) = *(_QWORD *)(a2 + 16);
              LODWORD(v64[5].Next) = *(_DWORD *)(a2 + 24);
              HIDWORD(v64[5].Next) = *(_DWORD *)(a2 + 28);
              *((_DWORD *)&v64[5].Next + 2) = *(_DWORD *)(a2 + 32);
              v64[3].Next = *(struct _SLIST_ENTRY **)(a2 + 40);
              *((_DWORD *)&v64[4].Next + 2) = *(_DWORD *)(a2 + 48);
              *((_DWORD *)&v64[4].Next + 3) = *(_DWORD *)(a2 + 52);
              *((_DWORD *)&v64[5].Next + 3) = *(_DWORD *)(a2 + 56);
              LODWORD(v64[6].Next) = *(_DWORD *)(a2 + 60);
              v64[4].Next = *(struct _SLIST_ENTRY **)(a2 + 64);
              LODWORD(v64->Next) = 12;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 2032), v64 + 1);
            }
            else
            {
              WdLogSingleEntry1(1LL, *(unsigned __int16 *)(v55 + 4));
              WdLogGlobalForLineNumber = 8013;
              DxgkLogInternalTriageEvent(v65, 0x40000LL);
            }
            return;
          }
          if ( !(unsigned int)VidSchiVerifyDriverReportedFenceId(
                                (struct _VIDSCH_NODE *)v55,
                                *(_DWORD *)(a2 + 8),
                                0,
                                &v72) )
            return;
          VidSchiProcessIsrCompletedPacket(v55, v72, a3, (unsigned int *)a2);
          v73 = 0LL;
          VidSchiProcessIsrFaultedPacket(v55, v72, a3, a2, (__int64)&v73);
          v66 = *(_DWORD *)(a2 + 32);
          v61 = a2;
          v59 = v73;
          v62 = v7;
          if ( (v66 & 4) != 0 )
          {
            v60 = 3LL;
          }
          else if ( (v66 & 8) != 0 )
          {
            v60 = 4LL;
          }
          else
          {
            v60 = 5LL;
          }
        }
        LogPageFaultInformation(v60, v62, v61, v59);
      }
    }
  }
}
