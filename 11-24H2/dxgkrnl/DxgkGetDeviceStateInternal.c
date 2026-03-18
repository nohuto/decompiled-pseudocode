/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1402AB150
 * Callers:
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x14002F084 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1402051D0 (NtDxgkUpdateTrackedWorkload.c)
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402A9CB0 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetDeviceState @ 0x1402AB120 (DxgkGetDeviceState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z @ 0x14003DCFC (-VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z.c)
 *     McTemplateK0pqqqqxxt_EtwWriteTransfer @ 0x14004C76C (McTemplateK0pqqqqxxt_EtwWriteTransfer.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1401872E8 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1402ABBB0 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1402ABF50 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1403DFCD4 (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, __int64 a3)
{
  int v5; // r15d
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rsi
  struct DXGPROCESS *v10; // rax
  _D3DKMT_GETDEVICESTATE *v11; // rsi
  const void *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  D3DKMT_DEVICESTATE_TYPE v16; // ecx
  unsigned int DeviceState; // eax
  __int64 StateType; // rcx
  unsigned int LastCompletedPresentIdDWM; // edi
  D3DKMT_DEVICESTATE_TYPE v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  __int32 v27; // ecx
  __int32 v28; // ecx
  __int64 v29; // rax
  UINT SyncRefreshCount; // eax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  D3DKMT_DEVICESTATE_TYPE v34; // ecx
  DXGGLOBAL *v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+20h] [rbp-148h]
  __int64 v38; // [rsp+28h] [rbp-140h]
  __int64 v39; // [rsp+30h] [rbp-138h]
  __int64 v40; // [rsp+38h] [rbp-130h]
  LARGE_INTEGER SyncQPCTime; // [rsp+40h] [rbp-128h]
  LARGE_INTEGER SyncGPUTime; // [rsp+48h] [rbp-120h]
  int v43; // [rsp+50h] [rbp-118h]
  struct DXGDEVICE *v44; // [rsp+60h] [rbp-108h] BYREF
  char v45; // [rsp+68h] [rbp-100h]
  int v46; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+78h] [rbp-F0h]
  char v48; // [rsp+80h] [rbp-E8h]
  struct DXGPROCESS *v49; // [rsp+88h] [rbp-E0h]
  __int64 v50; // [rsp+90h] [rbp-D8h]
  struct DXGDEVICE *v51[2]; // [rsp+98h] [rbp-D0h] BYREF
  _D3DKMT_GETDEVICESTATE v52; // [rsp+A8h] [rbp-C0h] BYREF
  _QWORD v53[10]; // [rsp+E0h] [rbp-88h] BYREF

  v45 = a2;
  v46 = -1;
  v5 = 0;
  v47 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2028);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 2028);
  v50 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      v49 = v10;
      if ( v10 )
        goto LABEL_6;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      v49 = v10;
      if ( v10 )
        goto LABEL_6;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v10 = v9;
  v49 = v9;
  if ( !v9 )
  {
    LastCompletedPresentIdDWM = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4562;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    v26 = v48 == 0;
    goto LABEL_45;
  }
LABEL_6:
  memset(&v52, 0, sizeof(v52));
  v11 = &v52;
  if ( a2 )
  {
    v12 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v52, v12, 0x38uLL);
    v10 = v49;
  }
  else
  {
    v11 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  if ( !a2 || v11->StateType != D3DKMT_DEVICESTATE_RESET )
  {
    v44 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v51, v11->hDevice, (struct _KTHREAD **)v10, &v44);
    if ( v44 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL);
      v51[1] = (struct DXGDEVICE *)v13;
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v13 + 136, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 152));
      if ( *(_BYTE *)(v13 + 209)
        && ((v34 = v11->StateType, ((v34 - 1) & 0xFFFFFFFA) == 0) && v34 != D3DKMT_DEVICESTATE_PRESENT
         || *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) >= 0x20u
         && (v35 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v35) + 4742))
         && v11->StateType == D3DKMT_DEVICESTATE_PRESENT_DWM) )
      {
        StateType = (unsigned int)v11->StateType;
        if ( *(_DWORD *)(v13 + 200) == 1 )
        {
          if ( (_DWORD)StateType != 1 )
          {
            DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4664),
                            v49,
                            v44,
                            v11);
            goto LABEL_16;
          }
          if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) >= 0x20u )
          {
LABEL_15:
            DeviceState = DXGDEVICE::GetDeviceExecutionState(v44, &v11->ExecutionState);
LABEL_16:
            LastCompletedPresentIdDWM = DeviceState;
            goto LABEL_17;
          }
          v11->PresentState.VidPnSourceId = 1;
          LastCompletedPresentIdDWM = v50;
LABEL_17:
          if ( !bTracingEnabled )
            goto LABEL_21;
          v20 = v11->StateType;
          if ( v20 == D3DKMT_DEVICESTATE_EXECUTION )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              LODWORD(v37) = v11->ExecutionState;
              McTemplateK0pt_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&DeviceStateEvent,
                v15,
                v44,
                v37);
            }
LABEL_21:
            if ( (LastCompletedPresentIdDWM & 0x80000000) == 0 && v45 )
            {
              if ( a1 + 56 < a1 || a1 + 56 > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              *(_OWORD *)a1 = *(_OWORD *)&v11->hDevice;
              *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v11->PresentQueueState + 1);
              *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v11->PresentQueueState + 3);
              *(_QWORD *)(a1 + 48) = *((_QWORD *)&v11->PresentQueueState + 5);
            }
            _InterlockedDecrement((volatile signed __int32 *)(v13 + 152));
            ExReleasePushLockSharedEx(v13 + 136, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
            if ( v51[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v51[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51[0] + 2), v51[0]);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
            if ( !v48 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
              return LastCompletedPresentIdDWM;
LABEL_36:
            McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v46);
            return LastCompletedPresentIdDWM;
          }
          if ( v20 == D3DKMT_DEVICESTATE_PRESENT )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
              goto LABEL_21;
            v43 = 0;
            SyncGPUTime = v11->PresentState.PresentStats.SyncGPUTime;
            SyncQPCTime = v11->PresentState.PresentStats.SyncQPCTime;
            SyncRefreshCount = v11->PresentState.PresentStats.SyncRefreshCount;
          }
          else
          {
            if ( v20 != D3DKMT_DEVICESTATE_PRESENT_DWM || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
              goto LABEL_21;
            v43 = 1;
            SyncGPUTime.QuadPart = 0LL;
            SyncQPCTime = v11->PresentState.PresentStats.SyncGPUTime;
            SyncRefreshCount = v11->PresentState.PresentStats.SyncQPCTime.LowPart;
          }
          LODWORD(v40) = SyncRefreshCount;
          LODWORD(v39) = v11->PresentState.PresentStats.PresentRefreshCount;
          LODWORD(v38) = v11->PresentState.PresentStats.PresentCount;
          LODWORD(v37) = v11->ExecutionState;
          McTemplateK0pqqqqxxt_EtwWriteTransfer(
            StateType,
            v14,
            v15,
            v44,
            v37,
            v38,
            v39,
            v40,
            SyncQPCTime.QuadPart,
            SyncGPUTime.QuadPart,
            v43);
          goto LABEL_21;
        }
        if ( (_DWORD)StateType == 1 )
        {
          v11->PresentState.VidPnSourceId = 4;
          LastCompletedPresentIdDWM = v50;
          goto LABEL_17;
        }
      }
      else
      {
        v16 = v11->StateType;
        if ( v16 == D3DKMT_DEVICESTATE_EXECUTION )
          goto LABEL_15;
        v27 = v16 - 2;
        if ( v27 )
        {
          v28 = v27 - 2;
          if ( v28 )
          {
            StateType = (unsigned int)(v28 - 1);
            if ( (_DWORD)StateType )
            {
              if ( (_DWORD)StateType == 1 )
              {
                StateType = *((unsigned int *)v44 + 152);
                if ( (_DWORD)StateType == 1 )
                {
                  LastCompletedPresentIdDWM = VIDSCH_EXPORT::VidSchWaitForQueuedPresentLimit(
                                                *(VIDSCH_EXPORT **)(*((_QWORD *)v44 + 2) + 736LL),
                                                *((struct _VIDSCH_DEVICE **)v44 + 100),
                                                v11->PresentState.VidPnSourceId,
                                                0);
                  v11->PresentQueueState.bQueuedPresentLimitReached = 0;
                  if ( LastCompletedPresentIdDWM == -1071775486 )
                  {
                    LastCompletedPresentIdDWM = 0;
                    v11->PresentQueueState.bQueuedPresentLimitReached = 1;
                  }
                }
                else
                {
                  LastCompletedPresentIdDWM = -1073741130;
                }
              }
              else
              {
                LastCompletedPresentIdDWM = -1073741811;
              }
            }
            else
            {
              StateType = *((unsigned int *)v44 + 152);
              if ( (_DWORD)StateType == 1 )
              {
                if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v44 + 2) + 16LL)) )
                {
                  (*(void (__fastcall **)(_QWORD, D3DKMT_DEVICEPAGEFAULT_STATE *))(*(_QWORD *)(*(_QWORD *)(v15 + 736)
                                                                                             + 8LL)
                                                                                 + 200LL))(
                    *(_QWORD *)(v14 + 800),
                    &v11->PageFaultState);
                }
                else
                {
                  v11->PageFaultState.FaultedPrimitiveAPISequenceNumber = -1LL;
                  v11->PresentState.PresentStats.PresentCount = 0;
                  v11->PresentState.PresentStats.PresentRefreshCount = -1;
                  v11->PresentState.PresentStats.SyncRefreshCount = 0;
                  v11->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
                }
                LastCompletedPresentIdDWM = v50;
              }
              else
              {
                LastCompletedPresentIdDWM = -1073741130;
              }
            }
          }
          else
          {
            StateType = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL) + 200LL);
            if ( (_DWORD)StateType == 1 )
            {
              v29 = *((_QWORD *)v44 + 237);
              if ( v29 && v11->PresentState.VidPnSourceId >= *(_DWORD *)(*(_QWORD *)(v29 + 3120) + 96LL) )
              {
                LastCompletedPresentIdDWM = -1073741811;
                WdLogSingleEntry2(3LL, v11->PresentState.VidPnSourceId, -1073741811LL);
                WdLogGlobalForLineNumber = 4739;
              }
              else
              {
                memset(v53, 0, sizeof(v53));
                LastCompletedPresentIdDWM = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                                              v44,
                                              v11->PresentState.VidPnSourceId,
                                              (struct _D3DKMT_PRESENT_STATS_DWM2 *)v53);
                v11->PresentState.PresentStats.PresentCount = HIDWORD(v53[0]);
                v11->PresentState.PresentStats.PresentRefreshCount = v53[1];
                v11->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = v53[2];
                v11->PresentState.PresentStats.SyncQPCTime.LowPart = v53[3];
                v11->PresentState.PresentStats.SyncGPUTime.QuadPart = v53[4];
                v11->PresentStateDWM.PresentStatsDWM.CustomPresentDuration = v53[5];
              }
            }
            else
            {
              LastCompletedPresentIdDWM = -1073741130;
            }
          }
          goto LABEL_17;
        }
        StateType = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL) + 200LL);
        if ( (_DWORD)StateType == 1 )
        {
          v36 = *((_QWORD *)v44 + 237);
          if ( !v36 || v11->PresentState.VidPnSourceId < *(_DWORD *)(*(_QWORD *)(v36 + 3120) + 96LL) )
          {
            DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                            v44,
                            v11->PresentState.VidPnSourceId,
                            &v11->PresentState.PresentStats);
            goto LABEL_16;
          }
          LastCompletedPresentIdDWM = -1073741811;
          WdLogSingleEntry2(3LL, v11->PresentState.VidPnSourceId, -1073741811LL);
          WdLogGlobalForLineNumber = 4714;
          goto LABEL_17;
        }
      }
      LastCompletedPresentIdDWM = -1073741130;
      goto LABEL_17;
    }
    LastCompletedPresentIdDWM = -1073741811;
    WdLogSingleEntry2(2LL, v11->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 4620;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v51[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v51[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51[0] + 2), v51[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    v26 = v48 == 0;
LABEL_45:
    if ( v26 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return LastCompletedPresentIdDWM;
    goto LABEL_36;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v10 + 11) + 224LL))() )
    v5 = 1;
  *(_DWORD *)(a1 + 8) = v5;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v46);
  return 0LL;
}
