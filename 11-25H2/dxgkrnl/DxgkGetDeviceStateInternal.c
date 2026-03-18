/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1402A4C80
 * Callers:
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x14002EAE4 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1401FEAC0 (NtDxgkUpdateTrackedWorkload.c)
 *     DxgkGetDeviceState @ 0x1402A4C50 (DxgkGetDeviceState.c)
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403B0580 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z @ 0x14003E43C (-VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z.c)
 *     McTemplateK0pqqqqxxt_EtwWriteTransfer @ 0x14004CCBC (McTemplateK0pqqqqxxt_EtwWriteTransfer.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x140184F98 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1402A5B00 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1402DD110 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1402F9C2C (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, __int64 a3)
{
  int v4; // r15d
  unsigned int DeviceExecutionState; // r12d
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rsi
  struct DXGPROCESS *v10; // r13
  _D3DKMT_GETDEVICESTATE *v11; // rsi
  const void *v12; // rdx
  __int64 v13; // r14
  DXGDEVICE *v14; // rdx
  __int64 v15; // r8
  D3DKMT_DEVICESTATE_TYPE v16; // ecx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // r12
  int v18; // edi
  int v19; // ecx
  __int64 StateType; // rcx
  int v21; // eax
  int v22; // eax
  D3DKMT_DEVICESTATE_TYPE v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // zf
  __int32 v31; // ecx
  __int32 v32; // ecx
  __int64 v33; // rax
  UINT SyncRefreshCount; // eax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  DXGGLOBAL *v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+20h] [rbp-158h]
  __int64 v41; // [rsp+28h] [rbp-150h]
  __int64 v42; // [rsp+30h] [rbp-148h]
  __int64 v43; // [rsp+38h] [rbp-140h]
  LARGE_INTEGER SyncQPCTime; // [rsp+40h] [rbp-138h]
  LARGE_INTEGER SyncGPUTime; // [rsp+48h] [rbp-130h]
  int v46; // [rsp+50h] [rbp-128h]
  DXGDEVICE *v48; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-108h] BYREF
  int v50; // [rsp+78h] [rbp-100h] BYREF
  __int64 v51; // [rsp+80h] [rbp-F8h]
  char v52; // [rsp+88h] [rbp-F0h]
  struct DXGDEVICE *v53[2]; // [rsp+90h] [rbp-E8h] BYREF
  D3DKMT_DEVICESTATE_TYPE *p_StateType; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-D0h]
  _D3DKMT_GETDEVICESTATE v56; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v57[10]; // [rsp+F0h] [rbp-88h] BYREF

  v55 = a1;
  v50 = -1;
  v4 = 0;
  v51 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2028);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 2028);
  DeviceExecutionState = 0;
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v10 )
      goto LABEL_6;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2925;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v10 = v9;
    goto LABEL_6;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v10 )
    goto LABEL_5;
LABEL_6:
  if ( !v10 )
  {
    DeviceExecutionState = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4422;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    v30 = v52 == 0;
    goto LABEL_57;
  }
  memset(&v56, 0, sizeof(v56));
  v11 = &v56;
  if ( a2 )
  {
    v12 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v56, v12, 0x38uLL);
  }
  else
  {
    v11 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  p_StateType = &v11->StateType;
  if ( !a2 )
  {
    p_StateType = &v11->StateType;
    goto LABEL_13;
  }
  if ( v11->StateType != D3DKMT_DEVICESTATE_RESET )
  {
LABEL_13:
    v48 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v53, v11->hDevice, v10, &v48);
    if ( v48 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)v48 + 2) + 16LL);
      v53[1] = (struct DXGDEVICE *)v13;
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v13 + 136, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 152));
      if ( *(_BYTE *)(v13 + 209)
        && (((*p_StateType - 1) & 0xFFFFFFFA) == 0 && *p_StateType != D3DKMT_DEVICESTATE_PRESENT
         || *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) >= 0x20u
         && (v38 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v38) + 4742))
         && v11->StateType == D3DKMT_DEVICESTATE_PRESENT_DWM) )
      {
        StateType = (unsigned int)v11->StateType;
        if ( *(_DWORD *)(v13 + 200) == 1 )
        {
          if ( (_DWORD)StateType == 1 )
          {
            if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) < 0x20u )
              v11->PresentState.VidPnSourceId = 1;
            else
              DeviceExecutionState = DXGDEVICE::GetDeviceExecutionState(v48, &v11->ExecutionState);
          }
          else
          {
            DeviceExecutionState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4664),
                                     v10,
                                     v48,
                                     v11);
          }
          goto LABEL_28;
        }
        if ( (_DWORD)StateType == 1 )
        {
          v11->PresentState.VidPnSourceId = 4;
          goto LABEL_28;
        }
      }
      else
      {
        v16 = v11->StateType;
        if ( v16 == D3DKMT_DEVICESTATE_EXECUTION )
        {
          p_PresentState = &v11->PresentState;
          v18 = 0;
          v49 = 0;
          if ( v11 == (_D3DKMT_GETDEVICESTATE *)-8LL )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 10248;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"pExecutionState != NULL",
              10248LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v19 = *((_DWORD *)v48 + 152);
          if ( v19 == 1 )
          {
            v14 = v48;
            if ( (*((_BYTE *)v48 + 1901) & 1) != 0 )
            {
              StateType = *(unsigned int *)(*((_QWORD *)v48 + 60) + 16LL);
            }
            else
            {
              v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v48 + 2)
                                                                                              + 736LL)
                                                                                  + 8LL)
                                                                      + 192LL))(
                      *((_QWORD *)v48 + 100),
                      &v49);
              StateType = v49;
            }
            v21 = StateType & 0x80000000;
            LODWORD(StateType) = StateType & 0x7FFFFFFF;
            v49 = StateType;
            if ( v18 >= 0 )
            {
              if ( (_DWORD)StateType )
              {
                StateType = (unsigned int)(StateType - 2);
                v14 = (DXGDEVICE *)0x140000000LL;
                switch ( (int)StateType )
                {
                  case 0:
                  case 9:
                  case 10:
                  case 11:
                    p_PresentState->VidPnSourceId = 5;
                    break;
                  case 4:
                    p_PresentState->VidPnSourceId = 6;
                    break;
                  case 5:
                    goto LABEL_129;
                  case 7:
                  case 8:
                  case 13:
                  case 14:
                  case 15:
                  case 16:
                  case 17:
                  case 22:
                    p_PresentState->VidPnSourceId = 7;
                    break;
                  case 12:
                  case 20:
                  case 23:
                  case 24:
                    goto LABEL_107;
                  default:
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 10336;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"Unexpected device error!",
                      10336LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    p_PresentState->VidPnSourceId = 5;
                    break;
                }
              }
              else
              {
                if ( v21 || *((_BYTE *)v48 + 73) )
                  v22 = 2;
                else
                  v22 = 1;
                p_PresentState->VidPnSourceId = v22;
              }
            }
          }
          else
          {
            StateType = (unsigned int)(v19 - 2);
            if ( (_DWORD)StateType )
            {
              StateType = (unsigned int)(StateType - 1);
              if ( (_DWORD)StateType )
              {
                if ( (_DWORD)StateType != 1 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 10348;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"Unexpected device execution state!",
                    10348LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
LABEL_107:
                p_PresentState->VidPnSourceId = 4;
              }
              else
              {
LABEL_129:
                p_PresentState->VidPnSourceId = 3;
              }
            }
            else
            {
              p_PresentState->VidPnSourceId = 2;
            }
          }
          DeviceExecutionState = v18;
          goto LABEL_28;
        }
        v31 = v16 - 2;
        if ( v31 )
        {
          v32 = v31 - 2;
          if ( v32 )
          {
            StateType = (unsigned int)(v32 - 1);
            if ( (_DWORD)StateType )
            {
              if ( (_DWORD)StateType == 1 )
              {
                StateType = *((unsigned int *)v48 + 152);
                if ( (_DWORD)StateType == 1 )
                {
                  DeviceExecutionState = VIDSCH_EXPORT::VidSchWaitForQueuedPresentLimit(
                                           *(VIDSCH_EXPORT **)(*((_QWORD *)v48 + 2) + 736LL),
                                           *((struct _VIDSCH_DEVICE **)v48 + 100),
                                           v11->PresentState.VidPnSourceId,
                                           0);
                  v11->PresentQueueState.bQueuedPresentLimitReached = 0;
                  if ( DeviceExecutionState == -1071775486 )
                  {
                    DeviceExecutionState = 0;
                    v11->PresentQueueState.bQueuedPresentLimitReached = 1;
                  }
                }
                else
                {
                  DeviceExecutionState = -1073741130;
                }
              }
              else
              {
                DeviceExecutionState = -1073741811;
              }
            }
            else
            {
              StateType = *((unsigned int *)v48 + 152);
              if ( (_DWORD)StateType == 1 )
              {
                if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v48 + 2) + 16LL)) )
                {
                  (*(void (__fastcall **)(_QWORD, D3DKMT_DEVICEPAGEFAULT_STATE *))(*(_QWORD *)(*(_QWORD *)(v15 + 736)
                                                                                             + 8LL)
                                                                                 + 200LL))(
                    *((_QWORD *)v14 + 100),
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
              }
              else
              {
                DeviceExecutionState = -1073741130;
              }
            }
          }
          else
          {
            StateType = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v48 + 2) + 16LL) + 200LL);
            if ( (_DWORD)StateType == 1 )
            {
              v33 = *((_QWORD *)v48 + 235);
              if ( v33 && v11->PresentState.VidPnSourceId >= *(_DWORD *)(*(_QWORD *)(v33 + 3120) + 96LL) )
              {
                DeviceExecutionState = -1073741811;
                WdLogSingleEntry2(3LL, v11->PresentState.VidPnSourceId, -1073741811LL);
                WdLogGlobalForLineNumber = 4599;
              }
              else
              {
                memset(v57, 0, sizeof(v57));
                DeviceExecutionState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                                         v48,
                                         v11->PresentState.VidPnSourceId,
                                         (struct _D3DKMT_PRESENT_STATS_DWM2 *)v57);
                v11->PresentState.PresentStats.PresentCount = HIDWORD(v57[0]);
                v11->PresentState.PresentStats.PresentRefreshCount = v57[1];
                v11->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = v57[2];
                v11->PresentState.PresentStats.SyncQPCTime.LowPart = v57[3];
                v11->PresentState.PresentStats.SyncGPUTime.QuadPart = v57[4];
                v11->PresentStateDWM.PresentStatsDWM.CustomPresentDuration = v57[5];
              }
            }
            else
            {
              DeviceExecutionState = -1073741130;
            }
          }
LABEL_28:
          if ( !bTracingEnabled )
            goto LABEL_32;
          v23 = v11->StateType;
          if ( v23 == D3DKMT_DEVICESTATE_EXECUTION )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              LODWORD(v40) = v11->ExecutionState;
              McTemplateK0pt_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&DeviceStateEvent,
                v15,
                v48,
                v40);
            }
LABEL_32:
            if ( (DeviceExecutionState & 0x80000000) == 0 && a2 )
            {
              v24 = v55;
              if ( v55 + 56 < v55 || v55 + 56 > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              *(_OWORD *)v24 = *(_OWORD *)&v11->hDevice;
              *(_OWORD *)(v24 + 16) = *(_OWORD *)(&v11->PresentQueueState + 1);
              *(_OWORD *)(v24 + 32) = *(_OWORD *)(&v11->PresentQueueState + 3);
              *(_QWORD *)(v24 + 48) = *((_QWORD *)&v11->PresentQueueState + 5);
            }
            _InterlockedDecrement((volatile signed __int32 *)(v13 + 152));
            ExReleasePushLockSharedEx(v13 + 136, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
            if ( v53[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v53[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53[0] + 2), v53[0]);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
            if ( !v52 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
              return DeviceExecutionState;
LABEL_48:
            McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v50);
            return DeviceExecutionState;
          }
          if ( v23 == D3DKMT_DEVICESTATE_PRESENT )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
              goto LABEL_32;
            v46 = 0;
            SyncGPUTime = v11->PresentState.PresentStats.SyncGPUTime;
            SyncQPCTime = v11->PresentState.PresentStats.SyncQPCTime;
            SyncRefreshCount = v11->PresentState.PresentStats.SyncRefreshCount;
          }
          else
          {
            if ( v23 != D3DKMT_DEVICESTATE_PRESENT_DWM || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
              goto LABEL_32;
            v46 = 1;
            SyncGPUTime.QuadPart = 0LL;
            SyncQPCTime = v11->PresentState.PresentStats.SyncGPUTime;
            SyncRefreshCount = v11->PresentState.PresentStats.SyncQPCTime.LowPart;
          }
          LODWORD(v43) = SyncRefreshCount;
          LODWORD(v42) = v11->PresentState.PresentStats.PresentRefreshCount;
          LODWORD(v41) = v11->PresentState.PresentStats.PresentCount;
          LODWORD(v40) = v11->ExecutionState;
          McTemplateK0pqqqqxxt_EtwWriteTransfer(
            StateType,
            (__int64)v14,
            v15,
            v48,
            v40,
            v41,
            v42,
            v43,
            SyncQPCTime.QuadPart,
            SyncGPUTime.QuadPart,
            v46);
          goto LABEL_32;
        }
        StateType = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v48 + 2) + 16LL) + 200LL);
        if ( (_DWORD)StateType == 1 )
        {
          v39 = *((_QWORD *)v48 + 235);
          if ( v39 && v11->PresentState.VidPnSourceId >= *(_DWORD *)(*(_QWORD *)(v39 + 3120) + 96LL) )
          {
            DeviceExecutionState = -1073741811;
            WdLogSingleEntry2(3LL, v11->PresentState.VidPnSourceId, -1073741811LL);
            WdLogGlobalForLineNumber = 4574;
          }
          else
          {
            DeviceExecutionState = DXGDEVICE::QueryLastCompletedPresentId(
                                     v48,
                                     v11->PresentState.VidPnSourceId,
                                     &v11->PresentState.PresentStats);
          }
          goto LABEL_28;
        }
      }
      DeviceExecutionState = -1073741130;
      goto LABEL_28;
    }
    DeviceExecutionState = -1073741811;
    WdLogSingleEntry2(2LL, v11->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 4480;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v53[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v53[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53[0] + 2), v53[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    v30 = v52 == 0;
LABEL_57:
    if ( v30 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return DeviceExecutionState;
    goto LABEL_48;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v10 + 11) + 224LL))() )
    v4 = 1;
  *(_DWORD *)(a1 + 8) = v4;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v50);
  return 0LL;
}
