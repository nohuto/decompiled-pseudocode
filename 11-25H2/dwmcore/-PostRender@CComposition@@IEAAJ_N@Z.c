/*
 * XREFs of ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x180030658 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?IsParallelMode@CClockBase@@UEBA_NXZ @ 0x180030740 (-IsParallelMode@CClockBase@@UEBA_NXZ.c)
 *     ?RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ @ 0x18003074C (-RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x180030870 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800309F0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 *     ?AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z @ 0x180030FEC (-AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180031224 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800312A0 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ @ 0x1800318C0 (-ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ.c)
 *     ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x180031980 (-EndUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800319C0 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180031B80 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x180031CD0 (-AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ?ActiveAnimationsTelemetry@CComposition@@IEAAXXZ @ 0x180031E10 (-ActiveAnimationsTelemetry@CComposition@@IEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCompositorClock@CComposition@@IEAAXXZ @ 0x1800FCF04 (-UpdateCompositorClock@CComposition@@IEAAXXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?FlushRoundTripRequests@CComposition@@AEAAXXZ @ 0x180231DB8 (-FlushRoundTripRequests@CComposition@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     McTemplateU0xxxqqxqxqxqx_EventWriteTransfer @ 0x18026D204 (McTemplateU0xxxqqxqxqxqx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::PostRender(CRenderTargetManager **this, bool a2)
{
  void (*v4)(void); // rax
  __int64 v5; // r8
  void *v6; // rcx
  CD3DDevice **v7; // rsi
  CD3DDevice **i; // rbx
  bool v9; // dl
  bool v10; // al
  CGlobalSurfaceManager *v11; // rcx
  bool v12; // bl
  __int64 (__fastcall *v13)(CGlobalSurfaceManager *__hidden, bool); // rax
  __int64 (__fastcall *v14)(CGlobalSurfaceManager *__hidden, bool); // rdx
  int v15; // eax
  int v16; // esi
  CDeviceManager *v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r8
  int v21; // ebx
  int v22; // eax
  __int64 v23; // r8
  int v24; // ebx
  CClockBase *v25; // rcx
  __int64 (*v26)(void); // rax
  char IsParallelMode; // al
  bool v28; // cl
  unsigned __int64 v29; // r8
  CMeshCacheManager *v30; // rcx
  CRenderTargetManager *v31; // rbx
  CRenderTargetManager *v32; // rbp
  __int64 v33; // rax
  int v34; // eax
  int v35; // ebx
  int v37; // ecx
  int v38; // r10d
  _BYTE v39[16]; // [rsp+70h] [rbp-38h] BYREF

  v4 = (void (*)(void))*((_QWORD *)*this + 5);
  if ( (char *)v4 == (char *)CGlobalComposition::EndUpdateCursors )
    CGlobalComposition::EndUpdateCursors((CGlobalComposition *)this);
  else
    v4();
  if ( *((_DWORD *)this + 1621) || !*((_BYTE *)this[77] + 753) )
  {
    CComposition::CompositionPassNeeded((CComposition *)this, a2);
    CComposition::ActiveAnimationsTelemetry((CComposition *)this);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED,
      v5,
      1LL,
      v39);
  }
  v6 = (void *)*((_QWORD *)this[710] + 2);
  if ( v6 )
    PulseEvent(v6);
  EnterCriticalSection(&CriticalSection);
  v7 = (CD3DDevice **)xmmword_180406B40;
  for ( i = (CD3DDevice **)qword_180406B38; i != v7; i += 2 )
    CD3DDevice::AdvanceFrame(*i);
  LeaveCriticalSection(&CriticalSection);
  v10 = CRenderTargetManager::AdvanceFrame(this[77], v9);
  v11 = this[78];
  v12 = v10;
  v13 = *(__int64 (__fastcall **)(CGlobalSurfaceManager *__hidden, bool))(*(_QWORD *)v11 + 40LL);
  v14 = CGlobalSurfaceManager::AdvanceFrame;
  LOBYTE(v14) = v12;
  if ( v13 == CGlobalSurfaceManager::AdvanceFrame )
    v15 = CGlobalSurfaceManager::AdvanceFrame(v11, v12);
  else
    v15 = v13(v11, (bool)v14);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xDBBu, 0LL);
  if ( v12 )
    CComposition::FlushRoundTripRequests((CComposition *)this);
  CComposition::FlushChannels((CComposition *)this);
  CDeviceManager::ProcessDeviceLost(v17);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PRESENT_Stop,
      v18,
      1LL,
      v39);
  v19 = CComposition::ConfirmCompositionFrame((CComposition *)this);
  v21 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xDCFu, 0LL);
  if ( !v16 || v16 >= 0 && v21 < 0 )
    v16 = v21;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop,
      v20,
      1LL,
      v39);
  v22 = (*(__int64 (__fastcall **)(CRenderTargetManager *, __int64))(*(_QWORD *)this[712] + 24LL))(this[712], 4LL);
  v24 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xDD4u, 0LL);
  if ( !v16 || v16 >= 0 && v24 < 0 )
    v16 = v24;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v23,
      1LL,
      v39);
  v25 = this[39];
  v26 = *(__int64 (**)(void))(*(_QWORD *)v25 + 16LL);
  if ( (char *)v26 == (char *)CClockBase::IsParallelMode )
    IsParallelMode = CClockBase::IsParallelMode(v25);
  else
    IsParallelMode = v26();
  CTelemetryFrames::FrameEnded(v28, IsParallelMode, v29);
  v30 = this[84];
  this[112] = this[111];
  CMeshCacheManager::ReleaseUnusedCaches(v30);
  CComposition::UnmapDeferredSharedSectionViews((CComposition *)this);
  v31 = this[40];
  v32 = this[41];
  while ( v31 != v32 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v31 + 40LL))(*(_QWORD *)v31);
    v31 = (CRenderTargetManager *)((char *)v31 + 8);
  }
  v33 = (this[41] - this[40]) >> 3;
  if ( v33 )
    this[41] = (CRenderTargetManager *)((char *)this[41] - 8 * v33);
  v34 = CComposition::RecordCompositionSurfaceUpdates((CComposition *)this);
  v35 = v34;
  if ( v34 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xDEAu, 0LL);
  if ( !v16 || v16 >= 0 && v35 < 0 )
    v16 = v35;
  if ( *((_BYTE *)this + 6492) )
    CComposition::UpdateCompositorClock((CComposition *)this);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 && this[2] == (CRenderTargetManager *)GetCurrentFrameId() )
  {
    v38 = *((_DWORD *)this + 30);
    if ( v38 )
      McTemplateU0xxxqqxqxqxqx_EventWriteTransfer(
        v37,
        (unsigned __int64)(1000000LL * (_QWORD)this[8]) % g_qpcFrequency.QuadPart,
        (unsigned __int64)(1000000LL * (_QWORD)this[8]) / g_qpcFrequency.QuadPart,
        (unsigned __int64)(1000000LL * (_QWORD)this[9]) / g_qpcFrequency.QuadPart,
        (char)this[10],
        v38,
        *((_DWORD *)this + 31),
        (char)this[11],
        *((_DWORD *)this + 32),
        (char)this[12],
        *((_DWORD *)this + 33),
        (char)this[13],
        *((_DWORD *)this + 34),
        (char)this[14]);
  }
  return (unsigned int)v16;
}
