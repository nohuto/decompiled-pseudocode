/*
 * XREFs of ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1801BCC98 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800E77DC (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800FDC68 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800FDCC8 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x1800FF290 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180100010 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x18013EEDC (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x180180598 (-Report@CProcessAttributionReporter@@QEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1801807D8 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18018086C (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x180181244 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ @ 0x1801BD7B4 (-PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ.c)
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801BF400 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1801CD638 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ @ 0x1801E35C8 (-CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ.c)
 *     ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x1801E49A4 (-MilWerUnregisterMemoryBlock@@YAXPEBX@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?FrameStarted@CTelemetryFrames@@SAXXZ @ 0x1801E7D10 (-FrameStarted@CTelemetryFrames@@SAXXZ.c)
 *     ?UpdateRenderFailureCount@CComposition@@SAXJ@Z @ 0x1801E90B4 (-UpdateRenderFailureCount@CComposition@@SAXJ@Z.c)
 *     ?CanBeginFrame@CKernelTransport@@UEBA_NXZ @ 0x1801EF310 (-CanBeginFrame@CKernelTransport@@UEBA_NXZ.c)
 *     ?ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ @ 0x1801FB054 (-ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x1801FE5C8 (McTemplateU0xxxxq_EventWriteTransfer.c)
 *     McTemplateU0dxt_EventWriteTransfer @ 0x18022ABC4 (McTemplateU0dxt_EventWriteTransfer.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x18022CD24 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     ?FlushRoundTripRequests@CComposition@@AEAAXXZ @ 0x180231DB8 (-FlushRoundTripRequests@CComposition@@AEAAXXZ.c)
 *     ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x180249930 (-Initialize@CProcessAttributionReporter@@SAXXZ.c)
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180249B00 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??0CThreadWaitTick@@QEAA@PEC_K@Z @ 0x180266D30 (--0CThreadWaitTick@@QEAA@PEC_K@Z.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1802699BC (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180269BB4 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x180269E8C (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x1802B7CBC (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1802B8378 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v65; // rcx
  __int64 v66; // rdx
  unsigned int v67; // ecx
  unsigned int v68; // eax
  unsigned __int64 v69; // r9
  __int64 v70; // r8
  int v71; // ecx
  __int64 v72; // rdx
  bool v73; // [rsp+48h] [rbp-49h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-41h] BYREF
  struct ID2D1Bitmap *v75; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 v76; // [rsp+60h] [rbp-31h] BYREF
  void *v77; // [rsp+68h] [rbp-29h]
  _QWORD v78[4]; // [rsp+70h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+90h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+A0h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+B0h] [rbp+1Fh] BYREF

LABEL_1:
  v4 = g_pDebugInspectSurface;
  while ( v4 )
  {
    PerformanceCount.QuadPart = 0LL;
    v57 = v4;
    v75 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&PerformanceCount);
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *, GUID *, LARGE_INTEGER *))v57->lpVtbl->QueryInterface)(
           v57,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &PerformanceCount) < 0 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v75);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *, GUID *, struct ID2D1Bitmap **))v57->lpVtbl->QueryInterface)(
             v57,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v75) >= 0 )
        DebugInspectBitmap(v75);
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
    if ( v75 )
    {
      (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v75 + 16LL))(v75);
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
      &v80);
  v5 = (_QWORD *)((char *)this + 1008);
  if ( *((_BYTE *)this + 1016) && *((_BYTE *)this + 1017) )
  {
    v58 = CDebugFrameCounter::CurrentTime((CComposition *)((char *)this + 1008));
    v76 = v58;
    if ( *((_BYTE *)this + 1018) )
    {
      if ( *(_DWORD *)v5 == -1 )
        *v5 = 0LL;
      *((_QWORD *)this + 130) = v58;
      *(_OWORD *)((char *)this + 16 * *((unsigned int *)this + 253) + 1048) = *(_OWORD *)((char *)this + 1032);
      v66 = *(unsigned int *)v5;
      v67 = *((_DWORD *)this + 253);
      if ( (_DWORD)v66 != v67 )
      {
        v68 = *(_DWORD *)v5;
        do
        {
          v69 = v5[2 * v68 + 5];
          if ( v69 >= *((_QWORD *)this + 130) - 10000000LL )
            break;
          *((_QWORD *)this + 128) += v69 - v5[2 * v68 + 6];
          v5[2 * v68 + 6] = 0LL;
          v5[2 * v68 + 5] = 0LL;
          v66 = (unsigned __int8)(*(_DWORD *)v5 + 1);
          *(_DWORD *)v5 = v66;
          v68 = v66;
          v67 = *((_DWORD *)this + 253);
        }
        while ( (_DWORD)v66 != v67 );
      }
      v70 = *((_QWORD *)this + 128) + *((_QWORD *)this + 2 * v67 + 132) - *((_QWORD *)this + 2 * v67 + 131);
      v71 = (unsigned __int8)(v67 + 1);
      *((_QWORD *)this + 128) = v70;
      *((_DWORD *)this + 253) = v71;
      if ( (_DWORD)v66 == v71 )
      {
        v72 = 2 * v66;
        *((_QWORD *)this + 128) = v70 + *((_QWORD *)this + v72 + 131) - *((_QWORD *)this + v72 + 132);
        v5[v72 + 6] = 0LL;
        v5[v72 + 5] = 0LL;
        *(_DWORD *)v5 = (unsigned __int8)(*(_DWORD *)v5 + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CComposition *)((char *)this + 1008), &v76);
  }
  CScheduler::WaitForWork((CComposition *)((char *)this + 232), *((struct IMessageLoopExtensions **)this + 712));
  v6 = (CMonitorClock *)*((_QWORD *)this + 39);
  CThreadWaitTick::CThreadWaitTick((CThreadWaitTick *)&v79, v7);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Start,
      v8,
      1u,
      &v81);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Compositor_Context,
      &WaitForCompositorClock_Start,
      v8,
      1u,
      (PEVENT_DATA_DESCRIPTOR)v78);
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
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Stop,
      v12 == 0,
      v12 == 4);
  if ( v12 == 1 )
    byte_180406E6C = 1;
  *(_QWORD *)v79.Ptr = GetTickCount64();
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
        (const EVENT_DESCRIPTOR *)"\n",
        v20,
        1u,
        &v80);
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
    *((_DWORD *)this + 1576) = 0;
    if ( v21 )
    {
      v23 = 0;
    }
    else
    {
      LOBYTE(v76) = 1;
      CurrentThreadId = GetCurrentThreadId();
      g_hrFailFastExpectedError = v22;
      g_dwFailFastForThreadId = CurrentThreadId;
      CFailFastInScope::CaptureDxgkRingBuffer((CFailFastInScope *)&v76);
      v23 = v76;
    }
    v24 = qword_180406B88;
    if ( qword_180406B88 )
    {
      if ( !(_BYTE)word_180406BB0 )
        goto LABEL_31;
      if ( (*(unsigned int (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_180406B88 + 104LL))(qword_180406B88) )
      {
        LOBYTE(word_180406BB0) = 0;
        goto LABEL_31;
      }
      LOBYTE(word_180406BB0) = 1;
    }
    v56 = CDisplayManager::UpdateDXGIFactory(v24);
    if ( v56 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x275u, 0LL);
LABEL_31:
    v73 = 1;
    v25 = CComposition::PreRender(this, &v73);
    v27 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x280u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_RENDER_Start,
        v26,
        1u,
        &v79);
    v28 = *((_QWORD *)this + 37);
    if ( byte_180406E72 )
    {
      CReadWriteLock::AcquireExclusive((CReadWriteLock *)&SRWLock);
      byte_180406E72 = 0;
      dword_18040ACB0 = 0;
      xmmword_180406E88 = xmmword_180406E98;
      ReleaseSRWLockExclusive(&SRWLock);
      anonymous_namespace_::SealCurrentFrameSequence(v65, v64);
    }
    v29 = v28 - qword_180406E18;
    qword_180406E18 = v28;
    v30 = 1000 * (v29 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v29 / g_qpcFrequency.QuadPart);
    if ( v30 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
      anonymous_namespace_::SealCurrentFrameSequence(
        (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds,
        1000 * (v29 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart);
    if ( v30 > 0x2A )
    {
      ++dword_1804067BC;
      byte_180406E71 = 1;
    }
    else
    {
      byte_180406E71 = 0;
    }
    v31 = dword_1804067D8;
    if ( !dword_1804067D8 )
    {
      *(_QWORD *)&xmmword_180406920 = v28;
      v55 = *((_QWORD *)qword_180406F18 + 5);
      if ( 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*(_QWORD *)(v55 + 24) - *(_QWORD *)(v55 + 16)) >> 5) )
        dword_1804067EC = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v55, v28);
    }
    v32 = dword_180406E68 | dword_1804067D0;
    dword_1804067D0 |= dword_180406E68;
    byte_180406E6D = byte_180406E6C;
    if ( byte_180406E6C )
    {
      byte_180406E6C = 0;
      dword_1804067D0 = v32 | 0x100;
    }
    dword_1804067D4 |= v16;
    dword_1804067D8 = v31 + 1;
    dword_180406E68 = 0;
    v33 = MEMORY[0x7FFE02E4];
    if ( GetTickCount() - v33 < 0x3E8 )
      dword_1804067D0 |= 1u;
    dword_180406F08 = dword_180406858;
    dword_180406F10 = dword_180406860;
    dword_180406F0C = dword_18040685C;
    dword_180406F14 = dword_180406864;
    CSuperWetInkManager::ClearCachedBoundsData(*((CSuperWetInkManager **)this + 82));
    v34 = CComposition::PerformQueuedRenderSnapshots(this);
    v35 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x287u, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x293u, 0LL);
    if ( !v27 || v27 >= 0 && v38 < 0 )
      v27 = v38;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      LODWORD(v75) = 1;
      v78[2] = &v75;
      v78[3] = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_RENDER_Stop,
        v37,
        2u,
        (PEVENT_DATA_DESCRIPTOR)v78);
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
          v45 = CComposition::PostRender((CRenderTargetManager **)this, v73);
          if ( v45 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x29Eu, 0LL);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
          {
            if ( qword_180407010 )
              CProcessAttributionReporter::Report(qword_180407010);
            else
              CProcessAttributionReporter::Initialize();
          }
          v46 = qword_180407018;
          TickCount64 = GetTickCount64();
          if ( TickCount64 - *(_QWORD *)v46 >= 0x3E8 )
          {
            *(_QWORD *)v46 = TickCount64;
            CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(v46);
          }
          v48 = qword_180407020;
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
            v51 = v77;
            g_dwFailFastForThreadId = 0;
            g_hrFailFastExpectedError = 0;
            if ( v77 )
            {
              MilWerUnregisterMemoryBlock(v77);
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
        LODWORD(v78[0]) = 5;
        memset((char *)v78 + 4, 0, 24);
        v78[1] = __PAIR64__(v40, v39);
        if ( v41 )
        {
          v42 = 0LL;
          v43 = v41;
          do
          {
            v44 = CChannelContext::PostMessageToChannel(
                    *(CChannelContext **)(v42 + *((_QWORD *)this + 117)),
                    (const struct MIL_MESSAGE *)v78);
            if ( v44 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x833u, 0LL);
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
  CComposition::ScheduleCompositionPass((__int64)this, 0, 0x800000u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v52,
      1u,
      &v80);
}
