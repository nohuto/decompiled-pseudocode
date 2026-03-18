/*
 * XREFs of ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800ED258 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180040084 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18008215C (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1800EDAB0 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x1801033D0 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x18012CCB8 (-Report@CProcessAttributionReporter@@QEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x18012CEF8 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18012CF8C (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18012D964 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x180157830 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1801587D0 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x180158984 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     ?PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ @ 0x1801ADFE4 (-PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1801BBCC8 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ @ 0x1801D7168 (-CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ.c)
 *     ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x1801D8A2C (-MilWerUnregisterMemoryBlock@@YAXPEBX@Z.c)
 *     ?FrameStarted@CTelemetryFrames@@SAXXZ @ 0x1801DC6BC (-FrameStarted@CTelemetryFrames@@SAXXZ.c)
 *     ?UpdateRenderFailureCount@CComposition@@SAXJ@Z @ 0x1801DF634 (-UpdateRenderFailureCount@CComposition@@SAXJ@Z.c)
 *     ?CanBeginFrame@CKernelTransport@@UEBA_NXZ @ 0x1801E50B0 (-CanBeginFrame@CKernelTransport@@UEBA_NXZ.c)
 *     ?ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ @ 0x1801EE904 (-ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x1801F2068 (McTemplateU0xxxxq_EventWriteTransfer.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1802097C8 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180209828 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     McTemplateU0dxt_EventWriteTransfer @ 0x18021F694 (McTemplateU0dxt_EventWriteTransfer.c)
 *     ?FlushRoundTripRequests@CComposition@@AEAAXXZ @ 0x180226148 (-FlushRoundTripRequests@CComposition@@AEAAXXZ.c)
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180242DA0 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 *     ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x180246208 (-Initialize@CProcessAttributionReporter@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??0CThreadWaitTick@@QEAA@PEC_K@Z @ 0x18025CDC0 (--0CThreadWaitTick@@QEAA@PEC_K@Z.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x18025FA7C (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x18025FC74 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x18025FF4C (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1802AE0CC (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1802AE788 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::ProcessComposition(CComposition *this, __int64 a2, __int64 a3)
{
  volatile struct IUnknown *volatile v4; // rax
  _QWORD *v5; // rbx
  CMonitorClock *v6; // rsi
  volatile unsigned __int64 *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(CMonitorClock *, __int64); // rax
  int Tick; // eax
  int v12; // r14d
  unsigned __int64 (__fastcall *v13)(CMonitorClock *__hidden); // rax
  __int64 updated; // rax
  __int64 v15; // r15
  __int32 v16; // r15d
  CKernelTransport *v17; // rcx
  __int64 (*v18)(void); // rax
  char CanBeginFrame; // al
  __int64 v20; // r8
  bool v21; // cc
  int v22; // ebx
  char v23; // r12
  CDisplayManager *v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  int v27; // esi
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r14
  int v31; // r10d
  int v32; // ecx
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  __int64 v37; // r8
  int v38; // ebx
  unsigned int v39; // r14d
  int v40; // ebx
  unsigned int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // r14
  int v44; // eax
  int v45; // eax
  CProcessResourceAttributionReporter *v46; // rbx
  ULONGLONG TickCount64; // rax
  CEnergyReporter *v48; // rbx
  ULONGLONG v49; // rax
  unsigned __int64 v50; // rcx
  void *v51; // rbx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // eax
  volatile struct IUnknown *v57; // rbx
  unsigned __int64 v58; // rax
  char v59; // bl
  __int64 v60; // rax
  int v61; // edx
  int v62; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v64; // rdx
  unsigned int v65; // ecx
  unsigned int v66; // eax
  unsigned __int64 v67; // r9
  __int64 v68; // r8
  int v69; // ecx
  __int64 v70; // rdx
  bool v71; // [rsp+48h] [rbp-49h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-41h] BYREF
  struct ID2D1Bitmap *v73; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 v74; // [rsp+60h] [rbp-31h] BYREF
  void *v75; // [rsp+68h] [rbp-29h]
  _QWORD v76[4]; // [rsp+70h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+90h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+A0h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+B0h] [rbp+1Fh] BYREF

LABEL_1:
  v4 = g_pDebugInspectSurface;
  while ( v4 )
  {
    PerformanceCount.QuadPart = 0LL;
    v57 = v4;
    v73 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&PerformanceCount);
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *, GUID *, LARGE_INTEGER *))v57->lpVtbl->QueryInterface)(
           v57,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &PerformanceCount) < 0 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v73);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *, GUID *, struct ID2D1Bitmap **))v57->lpVtbl->QueryInterface)(
             v57,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v73) >= 0 )
        DebugInspectBitmap(v73);
    }
    else
    {
      DebugInspectTexture((struct ID3D11Texture2D *)PerformanceCount.QuadPart, 0);
    }
    v4 = g_pDebugInspectSurface;
    if ( g_pDebugInspectSurface == v57 )
    {
      v4 = 0LL;
      g_pDebugInspectSurface = 0LL;
      __debugbreak();
    }
    if ( v73 )
    {
      (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v73 + 16LL))(v73);
      v4 = g_pDebugInspectSurface;
    }
    if ( PerformanceCount.QuadPart )
    {
      (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)PerformanceCount.QuadPart + 16LL))(PerformanceCount);
      goto LABEL_1;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start,
      a3,
      1u,
      &v78);
  v5 = (_QWORD *)((char *)this + 1008);
  if ( *((_BYTE *)this + 1016) && *((_BYTE *)this + 1017) )
  {
    v58 = CDebugFrameCounter::CurrentTime((CComposition *)((char *)this + 1008));
    v74 = v58;
    if ( *((_BYTE *)this + 1018) )
    {
      if ( *(_DWORD *)v5 == -1 )
        *v5 = 0LL;
      *((_QWORD *)this + 130) = v58;
      *(_OWORD *)((char *)this + 16 * *((unsigned int *)this + 253) + 1048) = *(_OWORD *)((char *)this + 1032);
      v64 = *(unsigned int *)v5;
      v65 = *((_DWORD *)this + 253);
      if ( (_DWORD)v64 != v65 )
      {
        v66 = *(_DWORD *)v5;
        do
        {
          v67 = v5[2 * v66 + 5];
          if ( v67 >= *((_QWORD *)this + 130) - 10000000LL )
            break;
          *((_QWORD *)this + 128) += v67 - v5[2 * v66 + 6];
          v5[2 * v66 + 6] = 0LL;
          v5[2 * v66 + 5] = 0LL;
          v64 = (unsigned __int8)(*(_DWORD *)v5 + 1);
          *(_DWORD *)v5 = v64;
          v66 = v64;
          v65 = *((_DWORD *)this + 253);
        }
        while ( (_DWORD)v64 != v65 );
      }
      v68 = *((_QWORD *)this + 128) + *((_QWORD *)this + 2 * v65 + 132) - *((_QWORD *)this + 2 * v65 + 131);
      v69 = (unsigned __int8)(v65 + 1);
      *((_QWORD *)this + 128) = v68;
      *((_DWORD *)this + 253) = v69;
      if ( (_DWORD)v64 == v69 )
      {
        v70 = 2 * v64;
        *((_QWORD *)this + 128) = v68 + *((_QWORD *)this + v70 + 131) - *((_QWORD *)this + v70 + 132);
        v5[v70 + 6] = 0LL;
        v5[v70 + 5] = 0LL;
        *(_DWORD *)v5 = (unsigned __int8)(*(_DWORD *)v5 + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CComposition *)((char *)this + 1008), &v74);
  }
  CScheduler::WaitForWork((CComposition *)((char *)this + 232), *((struct IMessageLoopExtensions **)this + 712));
  v6 = (CMonitorClock *)*((_QWORD *)this + 39);
  CThreadWaitTick::CThreadWaitTick((CThreadWaitTick *)&v77, v7);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Start,
      v8,
      1u,
      &v79);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Compositor_Context,
      &WaitForCompositorClock_Start,
      v8,
      1u,
      (PEVENT_DATA_DESCRIPTOR)v76);
  v9 = *((_QWORD *)this + 29);
  v10 = *(__int64 (__fastcall **)(CMonitorClock *, __int64))(*(_QWORD *)v6 + 40LL);
  if ( (char *)v10 == (char *)CMonitorClock::WaitForNextTick )
    Tick = CMonitorClock::WaitForNextTick(v6, v9);
  else
    Tick = v10(v6, v9);
  v12 = Tick;
  v13 = *(unsigned __int64 (__fastcall **)(CMonitorClock *__hidden))(*(_QWORD *)v6 + 48LL);
  if ( v13 == CMonitorClock::UpdateTiming )
    updated = CMonitorClock::UpdateTiming(v6);
  else
    updated = v13(v6);
  v15 = updated;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
  {
    v59 = (*(__int64 (__fastcall **)(CMonitorClock *))(*(_QWORD *)v6 + 16LL))(v6);
    v60 = (*(__int64 (__fastcall **)(CMonitorClock *))(*(_QWORD *)v6 + 24LL))(v6);
    McTemplateU0dxt_EventWriteTransfer(v62, v61, v12, *(_QWORD *)(v60 + 8), v59);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)"\a",
      v12 == 0,
      v12 == 4);
  if ( v12 == 1 )
    byte_1803FAE64 = 1;
  *(_QWORD *)v77.Ptr = GetTickCount64();
  *((_QWORD *)this + 37) = v15;
  v16 = _InterlockedExchange((volatile __int32 *)this + 63, 0);
  v17 = (CKernelTransport *)*((_QWORD *)this + 709);
  v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 40LL);
  if ( (char *)v18 == (char *)CKernelTransport::CanBeginFrame )
    CanBeginFrame = CKernelTransport::CanBeginFrame(v17);
  else
    CanBeginFrame = v18();
  if ( CanBeginFrame )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PROCESS_FRAME_Start,
        v20,
        1u,
        &v78);
    CTelemetryFrames::FrameStarted();
    if ( *((_BYTE *)this + 1016) )
    {
      *(_WORD *)((char *)this + 1017) = 1;
      *((_QWORD *)this + 130) = 0LL;
      *((_QWORD *)this + 129) = 0LL;
      *((_QWORD *)this + 129) = CDebugFrameCounter::CurrentTime((CComposition *)((char *)this + 1008));
    }
    v21 = CComposition::s_cRenderFailures <= 0x3C;
    v22 = CComposition::s_hrExpectedError;
    *((_DWORD *)this + 1570) = 0;
    if ( v21 )
    {
      v23 = 0;
    }
    else
    {
      LOBYTE(v74) = 1;
      CurrentThreadId = GetCurrentThreadId();
      g_hrFailFastExpectedError = v22;
      g_dwFailFastForThreadId = CurrentThreadId;
      CFailFastInScope::CaptureDxgkRingBuffer((CFailFastInScope *)&v74);
      v23 = v74;
    }
    v24 = qword_1803FAB38;
    if ( qword_1803FAB38 )
    {
      if ( !(_BYTE)word_1803FAB60 )
        goto LABEL_31;
      if ( (*(unsigned int (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_1803FAB38 + 104LL))(qword_1803FAB38) )
      {
        LOBYTE(word_1803FAB60) = 0;
        goto LABEL_31;
      }
      LOBYTE(word_1803FAB60) = 1;
    }
    v56 = CDisplayManager::UpdateDXGIFactory(v24);
    if ( v56 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x27Cu, 0LL);
LABEL_31:
    v71 = 1;
    v25 = CComposition::PreRender(this, &v71);
    v27 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x287u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_RENDER_Start,
        v26,
        1u,
        &v77);
    v28 = *((_QWORD *)this + 37);
    if ( byte_1803FAE78 )
    {
      CReadWriteLock::AcquireExclusive((CReadWriteLock *)&SRWLock);
      byte_1803FAE78 = 0;
      dword_1803FEBA0 = 0;
      xmmword_1803FAE88 = xmmword_1803FAE68;
      ReleaseSRWLockExclusive(&SRWLock);
      ((void (*)(void))anonymous_namespace_::SealCurrentFrameSequence)();
    }
    v29 = v28 - qword_1803FAE00;
    qword_1803FAE00 = v28;
    v30 = 1000 * (v29 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v29 / g_qpcFrequency.QuadPart);
    if ( v30 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
      anonymous_namespace_::SealCurrentFrameSequence(
        (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds,
        1000 * (v29 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart);
    if ( v30 > 0x2A )
    {
      ++dword_1803FA75C;
      byte_1803FADF9 = 1;
    }
    else
    {
      byte_1803FADF9 = 0;
    }
    v31 = dword_1803FA778;
    if ( !dword_1803FA778 )
    {
      *(_QWORD *)&xmmword_1803FA8C0 = v28;
      v55 = *((_QWORD *)qword_1803FAF10 + 5);
      if ( 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*(_QWORD *)(v55 + 24) - *(_QWORD *)(v55 + 16)) >> 5) )
        dword_1803FA78C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v55, v28);
    }
    v32 = dword_1803FAE60 | dword_1803FA770;
    dword_1803FA770 |= dword_1803FAE60;
    byte_1803FAE65 = byte_1803FAE64;
    if ( byte_1803FAE64 )
    {
      byte_1803FAE64 = 0;
      dword_1803FA770 = v32 | 0x100;
    }
    dword_1803FA774 |= v16;
    dword_1803FA778 = v31 + 1;
    dword_1803FAE60 = 0;
    v33 = MEMORY[0x7FFE02E4];
    if ( GetTickCount() - v33 < 0x3E8 )
      dword_1803FA770 |= 1u;
    dword_1803FAEF8 = dword_1803FA7F8;
    dword_1803FAF00 = dword_1803FA800;
    dword_1803FAEFC = dword_1803FA7FC;
    dword_1803FAF04 = dword_1803FA804;
    CSuperWetInkManager::ClearCachedBoundsData(*((CSuperWetInkManager **)this + 82));
    v34 = CComposition::PerformQueuedRenderSnapshots(this);
    v35 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x28Eu, 0LL);
    if ( !v27 || v27 >= 0 && v35 < 0 )
      v27 = v35;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))McTemplateU0xxxxq_EventWriteTransfer)(
          v54,
          v53,
          (LARGE_INTEGER)PerformanceCount.QuadPart);
    }
    v36 = CRenderTargetManager::RenderAndPresent(*((CRenderTargetManager **)this + 77));
    v38 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x29Au, 0LL);
    if ( !v27 || v27 >= 0 && v38 < 0 )
      v27 = v38;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      LODWORD(v73) = 1;
      v76[2] = &v73;
      v76[3] = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_RENDER_Stop,
        v37,
        2u,
        (PEVENT_DATA_DESCRIPTOR)v76);
    }
    CComposition::UpdateRenderFailureCount(v27);
    v39 = *((_DWORD *)this + 218);
    if ( v27 == -2003304307 )
    {
      v40 = 1;
    }
    else
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 77) + 753LL) )
      {
        v40 = 2;
        if ( v39 == 2 )
        {
LABEL_60:
          if ( *((_DWORD *)this + 248) )
            CComposition::FlushRoundTripRequests(this);
LABEL_73:
          v45 = CComposition::PostRender(this, v71);
          if ( v45 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x2A5u, 0LL);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
          {
            if ( qword_1803FAF38 )
              CProcessAttributionReporter::Report(qword_1803FAF38);
            else
              CProcessAttributionReporter::Initialize();
          }
          v46 = qword_1803FAF40;
          TickCount64 = GetTickCount64();
          if ( TickCount64 - *(_QWORD *)v46 >= 0x3E8 )
          {
            *(_QWORD *)v46 = TickCount64;
            CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(v46);
          }
          v48 = qword_1803FAF48;
          v49 = GetTickCount64();
          v50 = v49 - *(_QWORD *)v48;
          if ( v50 >= 0x3E8 )
          {
            *((_DWORD *)v48 + 2) = v50;
            *(_QWORD *)v48 = v49;
            CEnergyReporter::SendReportToE3(v48);
          }
          if ( v23 )
          {
            v51 = v75;
            g_dwFailFastForThreadId = 0;
            g_hrFailFastExpectedError = 0;
            if ( v75 )
            {
              MilWerUnregisterMemoryBlock(v75);
              operator delete(v51);
            }
          }
          return;
        }
        CMmcssTask::Revert((CComposition *)((char *)this + 736));
        goto LABEL_65;
      }
      v40 = 0;
    }
    if ( v39 != 2 )
    {
LABEL_66:
      if ( v40 != v39 )
      {
        *((_DWORD *)this + 218) = v40;
        v41 = *((_DWORD *)this + 240);
        LODWORD(v76[0]) = 5;
        memset((char *)v76 + 4, 0, 24);
        v76[1] = __PAIR64__(v40, v39);
        if ( v41 )
        {
          v42 = 0LL;
          v43 = v41;
          do
          {
            v44 = CChannelContext::PostMessageToChannel(
                    *(CChannelContext **)(v42 + *((_QWORD *)this + 117)),
                    (const struct MIL_MESSAGE *)v76);
            if ( v44 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x83Au, 0LL);
            v42 += 8LL;
            --v43;
          }
          while ( v43 );
        }
      }
      if ( v40 != 2 )
        goto LABEL_73;
      goto LABEL_60;
    }
    CMmcssTask::Apply((LPCRITICAL_SECTION)((char *)this + 736), 0);
LABEL_65:
    CComposition::UpdateMmcssPartners(this);
    goto LABEL_66;
  }
  CComposition::ScheduleCompositionPass(this, 0LL, 0x800000LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v52,
      1u,
      &v78);
}
