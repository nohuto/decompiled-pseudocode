/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40
 * Callers:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140193B2C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14019D160 (-IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x14028AEA0 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     DxgkUnlock2 @ 0x14028DD70 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x14028EFE0 (DxgkLock2.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1402ABA40 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402B0A90 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402B81C0 (DxgkSubmitCommandToHwQueueInternal.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BA244 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1402BD67C (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkPresent @ 0x1402F11A0 (DxgkPresent.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001428C (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402A5D10 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1402BB188 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402ED8FC (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreResource(PERESOURCE *this, const char *a2)
{
  PERESOURCE v4; // rax
  struct DXGGLOBAL *Global; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // r8
  PERESOURCE v9; // rbp
  __int64 v10; // rsi
  int FirstProfilerInterface; // eax
  ADAPTER_RENDER *v12; // rcx
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ExIsResourceAcquiredSharedLite(this[21]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4267;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4267LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[23] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4268;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"NULL == m_pWorkerThreadOfExclusiveOwner[0]",
      4268LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = this[391];
  if ( v4 && LOBYTE(v4[7].ActiveCount) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4276;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"IsCoreResourceExclusiveOwner()",
        4276LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = (ADAPTER_RENDER *)this[391];
    if ( *((_QWORD *)v12 + 93) )
      ADAPTER_RENDER::ResumeScheduler(v12, 1u, 0);
    LOBYTE(this[391][7].ActiveCount) = 0;
  }
  Global = DXGGLOBAL::GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v6);
  v9 = this[29];
  v10 = CurrentProcess;
  if ( v9 )
  {
    if ( CurrentProcess )
    {
      if ( *((_DWORD *)Global + 514) && *((_BYTE *)Global + 304312) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGGLOBAL *)((char *)Global + 2064), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
        FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
        DripsBlockerTrackingHelper::RemoveProcessEntry((char *)Global + 2232, v9, a2, v10, FirstProfilerInterface);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
      }
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 546;
    }
  }
  else
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 540;
  }
  if ( bTracingEnabled
    && (qword_14015B4C0 & 0x1000000) != 0
    && (qword_14015B4C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventReleaseAdapterLock, v8, this);
  }
  ExReleaseResourceLite(this[21]);
  KeLeaveCriticalRegion();
}
