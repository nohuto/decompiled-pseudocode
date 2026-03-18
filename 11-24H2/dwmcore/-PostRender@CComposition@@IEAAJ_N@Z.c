/*
 * XREFs of ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ActiveAnimationsTelemetry@CComposition@@IEAAXXZ @ 0x18003F8C0 (-ActiveAnimationsTelemetry@CComposition@@IEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCompositorClock@CComposition@@IEAAXXZ @ 0x1800F0B34 (-UpdateCompositorClock@CComposition@@IEAAXXZ.c)
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x1800F2360 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?IsParallelMode@CClockBase@@UEBA_NXZ @ 0x1800F2450 (-IsParallelMode@CClockBase@@UEBA_NXZ.c)
 *     ?RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ @ 0x1800F245C (-RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x1800F2540 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800F26C0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 *     ?AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z @ 0x1800F2B5C (-AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x1800F2D94 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800F2E10 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ @ 0x1800F3430 (-ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ.c)
 *     ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1800F34C0 (-EndUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800F3500 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x1800F36C0 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800F3810 (-AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ?FlushRoundTripRequests@CComposition@@AEAAXXZ @ 0x180226148 (-FlushRoundTripRequests@CComposition@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     McTemplateU0xxxqqxqxqxqx_EventWriteTransfer @ 0x1802611B4 (McTemplateU0xxxqqxqxqxqx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::PostRender(CRenderTargetManager **this, bool a2)
{
  void (*v4)(void); // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // rcx
  CD3DDevice **v9; // rsi
  CD3DDevice **i; // rbx
  bool v11; // dl
  bool v12; // al
  CGlobalSurfaceManager *v13; // rcx
  bool v14; // bl
  __int64 (__fastcall *v15)(CGlobalSurfaceManager *__hidden, bool); // rax
  __int64 (__fastcall *v16)(CGlobalSurfaceManager *__hidden, bool); // rdx
  int v17; // eax
  int v18; // esi
  CDeviceManager *v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r8
  int v23; // ebx
  int v24; // eax
  __int64 v25; // r8
  int v26; // ebx
  CClockBase *v27; // rcx
  __int64 (*v28)(void); // rax
  char IsParallelMode; // al
  bool v30; // cl
  unsigned __int64 v31; // r8
  CMeshCacheManager *v32; // rcx
  CRenderTargetManager *v33; // rbx
  CRenderTargetManager *v34; // rbp
  __int64 v35; // rax
  int v36; // eax
  int v37; // ebx
  int v39; // ecx
  int v40; // r10d
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+70h] [rbp-38h] BYREF

  v4 = (void (*)(void))*((_QWORD *)*this + 5);
  if ( (char *)v4 == (char *)CGlobalComposition::EndUpdateCursors )
    CGlobalComposition::EndUpdateCursors((CGlobalComposition *)this);
  else
    v4();
  if ( *((_DWORD *)this + 1615) || !*((_BYTE *)this[77] + 753) )
  {
    CComposition::CompositionPassNeeded((CComposition *)this, a2);
    CComposition::ActiveAnimationsTelemetry((CComposition *)this, v6, v7);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED,
      v5,
      1u,
      &v41);
  }
  v8 = (void *)*((_QWORD *)this[710] + 2);
  if ( v8 )
    PulseEvent(v8);
  EnterCriticalSection(&CriticalSection);
  v9 = (CD3DDevice **)xmmword_1803FAAF0;
  for ( i = (CD3DDevice **)qword_1803FAAE8; i != v9; i += 2 )
    CD3DDevice::AdvanceFrame(*i);
  LeaveCriticalSection(&CriticalSection);
  v12 = CRenderTargetManager::AdvanceFrame(this[77], v11);
  v13 = this[78];
  v14 = v12;
  v15 = *(__int64 (__fastcall **)(CGlobalSurfaceManager *__hidden, bool))(*(_QWORD *)v13 + 40LL);
  v16 = CGlobalSurfaceManager::AdvanceFrame;
  LOBYTE(v16) = v14;
  if ( v15 == CGlobalSurfaceManager::AdvanceFrame )
    v17 = CGlobalSurfaceManager::AdvanceFrame(v13, v14);
  else
    v17 = v15(v13, (bool)v16);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xD2Au, 0LL);
  if ( v14 )
    CComposition::FlushRoundTripRequests((CComposition *)this);
  CComposition::FlushChannels((CComposition *)this);
  CDeviceManager::ProcessDeviceLost(v19);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PRESENT_Stop,
      v20,
      1u,
      &v41);
  v21 = CComposition::ConfirmCompositionFrame((CComposition *)this);
  v23 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xD3Eu, 0LL);
  if ( !v18 || v18 >= 0 && v23 < 0 )
    v18 = v23;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop,
      v22,
      1u,
      &v41);
  v24 = (*(__int64 (__fastcall **)(CRenderTargetManager *, __int64))(*(_QWORD *)this[712] + 24LL))(this[712], 4LL);
  v26 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xD43u, 0LL);
  if ( !v18 || v18 >= 0 && v26 < 0 )
    v18 = v26;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v25,
      1u,
      &v41);
  v27 = this[39];
  v28 = *(__int64 (**)(void))(*(_QWORD *)v27 + 16LL);
  if ( (char *)v28 == (char *)CClockBase::IsParallelMode )
    IsParallelMode = CClockBase::IsParallelMode(v27);
  else
    IsParallelMode = v28();
  CTelemetryFrames::FrameEnded(v30, IsParallelMode, v31);
  v32 = this[84];
  this[112] = this[111];
  CMeshCacheManager::ReleaseUnusedCaches(v32);
  CComposition::UnmapDeferredSharedSectionViews((CComposition *)this);
  v33 = this[40];
  v34 = this[41];
  while ( v33 != v34 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v33 + 40LL))(*(_QWORD *)v33);
    v33 = (CRenderTargetManager *)((char *)v33 + 8);
  }
  v35 = (this[41] - this[40]) >> 3;
  if ( v35 )
    this[41] = (CRenderTargetManager *)((char *)this[41] - 8 * v35);
  v36 = CComposition::RecordCompositionSurfaceUpdates((CComposition *)this);
  v37 = v36;
  if ( v36 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0xD59u, 0LL);
  if ( !v18 || v18 >= 0 && v37 < 0 )
    v18 = v37;
  if ( *((_BYTE *)this + 6468) )
    CComposition::UpdateCompositorClock((CComposition *)this);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 && this[2] == GetCurrentFrameId() )
  {
    v40 = *((_DWORD *)this + 30);
    if ( v40 )
      McTemplateU0xxxqqxqxqxqx_EventWriteTransfer(
        v39,
        (unsigned __int64)(1000000LL * (_QWORD)this[8]) % g_qpcFrequency.QuadPart,
        (unsigned __int64)(1000000LL * (_QWORD)this[8]) / g_qpcFrequency.QuadPart,
        (unsigned __int64)(1000000LL * (_QWORD)this[9]) / g_qpcFrequency.QuadPart,
        (char)this[10],
        v40,
        *((_DWORD *)this + 31),
        (char)this[11],
        *((_DWORD *)this + 32),
        (char)this[12],
        *((_DWORD *)this + 33),
        (char)this[13],
        *((_DWORD *)this + 34),
        (char)this[14]);
  }
  return (unsigned int)v18;
}
