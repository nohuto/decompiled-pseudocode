/*
 * XREFs of ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40
 * Callers:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x14028AEA0 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     DxgkUnlock2 @ 0x14028DD70 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x14028EFE0 (DxgkLock2.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x140293140 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     DxgkOfferAllocations @ 0x140295550 (DxgkOfferAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x1402963B0 (DxgkReclaimAllocations2.c)
 *     DxgkSetQueuedLimit @ 0x140297C10 (DxgkSetQueuedLimit.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140298C68 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x14029B670 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1402A6DD0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1402ABA40 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402B0A90 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402B81C0 (DxgkSubmitCommandToHwQueueInternal.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BD4A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402E6CE0 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADA.c)
 *     DxgkPresent @ 0x1402F11A0 (DxgkPresent.c)
 *     DxgkQueryVideoMemoryInfo @ 0x140309910 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14032A180 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x14032FA20 (DxgkMapGpuVirtualAddress.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14033C358 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14033C7E8 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14033CCD4 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkGetScanLine @ 0x140342C80 (DxgkGetScanLine.c)
 *     EnforceDriverModelScalingPolicy @ 0x140359DB0 (EnforceDriverModelScalingPolicy.c)
 *     DxgkLock @ 0x14037A890 (DxgkLock.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x140387360 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 * Callees:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x140013AB0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1400161C0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     DpiRequestDevicePowerState @ 0x14002A4E8 (DpiRequestDevicePowerState.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x140290620 (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402A5D10 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1402A5F38 (--1DXGDEADLOCK_TRACKER@@QEAA@XZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1402A6008 (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402ED3B4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceShared(DXGADAPTER *this, const char *a2)
{
  struct DXGGLOBAL *Global; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  bool v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // r8
  struct DXGTHREAD *DxgThread; // rax
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  DXGGLOBAL *v22; // rdi
  __int64 v23; // rcx
  struct _EPROCESS *v24; // rax
  int FirstProfilerInterface; // eax
  __int64 v26; // [rsp+20h] [rbp-208h]
  int v27; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-1D0h]
  char v29; // [rsp+60h] [rbp-1C8h]
  _BYTE v30[24]; // [rsp+68h] [rbp-1C0h] BYREF
  _BYTE v31[400]; // [rsp+80h] [rbp-1A8h] BYREF
  struct DXGTHREAD *v32; // [rsp+230h] [rbp+8h] BYREF

  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4053;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4053LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v5);
  v7 = *((_QWORD *)this + 29);
  v8 = CurrentProcess;
  if ( v7 )
  {
    if ( CurrentProcess )
    {
      if ( *((_DWORD *)Global + 514) && *((_BYTE *)Global + 304312) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGGLOBAL *)((char *)Global + 2064), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
        FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
        DripsBlockerTrackingHelper::AddProcessEntry((char *)Global + 2232, v7, a2, v8, FirstProfilerInterface);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
      }
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 510;
    }
  }
  else
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 504;
  }
  v9 = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 104, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGADAPTER *)((char *)this + 104), v10, v12);
    ExAcquirePushLockSharedEx((char *)this + 104, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 30);
  if ( *((_DWORD *)this + 40) == 1 )
  {
    v27 = -1;
    v28 = 0LL;
    if ( (qword_14015B4C0 & 2) != 0 )
    {
      v29 = 1;
      v27 = 8013;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerEnter, v12, 8013);
    }
    else
    {
      v29 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 8013);
    DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 72));
    if ( *((_DWORD *)this + 50) == 1 )
    {
      v22 = DXGGLOBAL::GetGlobal();
      v24 = (struct _EPROCESS *)PsGetCurrentProcess(v23);
      DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(v22, *((_QWORD *)this + 29), v24);
      DpiRequestDevicePowerState(*((_QWORD *)this + 27), 1, 0);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 22);
    ExReleasePushLockSharedEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v27);
    v9 = 1;
  }
  else
  {
    v13 = *((_QWORD *)this + 27);
    if ( v13 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 64) + 4232LL));
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 30);
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( bTracingEnabled
    && (qword_14015B4C0 & 0x1000000) != 0
    && (qword_14015B4C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    LODWORD(v26) = 0;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventPreAcquireAdapterLock,
      v14,
      this,
      v26);
  }
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v31, this, v9);
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 21), 1u);
    DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER((DXGDEADLOCK_TRACKER *)v31);
  }
  *((_DWORD *)this + 1229) = 0;
  v15 = -1;
  v32 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v32) >= 0 )
  {
    DxgThread = v32;
    if ( v32 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v32 = DxgThread) != 0LL) )
      v15 = *((_DWORD *)DxgThread + 14);
  }
  v18 = bTracingEnabled == 0;
  *((_DWORD *)this + 1230) = v15;
  if ( !v18
    && (qword_14015B4C0 & 0x1000000) != 0
    && (qword_14015B4C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    LODWORD(v26) = 1;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventPostAcquireAdapterLock,
      v16,
      this,
      v26);
  }
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 4232), 0xFFFFFFFF) == 1 )
      DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(v19);
  }
}
