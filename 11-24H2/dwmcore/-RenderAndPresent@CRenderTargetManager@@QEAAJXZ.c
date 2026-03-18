/*
 * XREFs of ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x1801033D0
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x1800A6188 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180101DE0 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?SyncLockTargets@CParallelModeGroup@@UEAAX_K@Z @ 0x1801029C0 (-SyncLockTargets@CParallelModeGroup@@UEAAX_K@Z.c)
 *     ?IsRemoteRendering@CGlobalComposition@@UEBA_NXZ @ 0x1801036E0 (-IsRemoteRendering@CGlobalComposition@@UEBA_NXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180103FC0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180104410 (-SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV-$vector_facade@VCSortedMonitorTarget@CRender.c)
 *     ??1?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801D0FAC (--1-$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V-$buffer_impl@VCSortedMonitorTar.c)
 *     ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x18020ED1C (-ForceFullDirty@CRenderTargetManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?RenderAndPresent@CDDisplayRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x180278260 (-RenderAndPresent@CDDisplayRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z @ 0x1802782A0 (-RenderAndPresent@CLegacyRenderTarget@@WEI@EAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetManager::RenderAndPresent(CRenderTargetManager *this)
{
  int v1; // esi
  CParallelModeGroup **v3; // r14
  CParallelModeGroup **i; // rbx
  __int64 (*v5)(void); // rax
  char IsRemoteRendering; // al
  __int64 v7; // r8
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  int v11; // eax
  int v12; // r14d
  int v13; // ecx
  int v14; // eax
  _QWORD *v15; // rbx
  _QWORD *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  int v20; // eax
  int v21; // r14d
  CParallelModeGroup *v22; // rcx
  void (__fastcall *v23)(CParallelModeGroup *, __int64); // rax
  _BYTE *v24; // [rsp+38h] [rbp-29h] BYREF
  _BYTE *v25; // [rsp+40h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR *p_PerformanceCount; // [rsp+48h] [rbp-19h]
  _BYTE v27[64]; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR PerformanceCount; // [rsp+90h] [rbp+2Fh] BYREF

  v1 = 0;
  if ( CCommonRegistryData::ForceFullDirtyRendering )
    CRenderTargetManager::ForceFullDirty(this);
  PerformanceCount.Ptr = 0LL;
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  v3 = (CParallelModeGroup **)xmmword_1803FA8E0;
  for ( i = (CParallelModeGroup **)CSyncLockGroup::g_syncLockGroups; i != v3; ++i )
  {
    v22 = *i;
    v23 = **(void (__fastcall ***)(CParallelModeGroup *, __int64))*i;
    if ( v23 == CParallelModeGroup::SyncLockTargets )
      CParallelModeGroup::SyncLockTargets(v22, PerformanceCount.Ptr);
    else
      v23(v22, PerformanceCount.Ptr);
  }
  *((_BYTE *)this + 744) = 1;
  if ( *((_BYTE *)this + 750) )
    CRenderTargetManager::UpdateCapabilities(this);
  v5 = *(__int64 (**)(void))(*(_QWORD *)g_pComposition + 56LL);
  if ( (char *)v5 == (char *)CGlobalComposition::IsRemoteRendering )
    IsRemoteRendering = CGlobalComposition::IsRemoteRendering(g_pComposition);
  else
    IsRemoteRendering = v5();
  if ( IsRemoteRendering )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &VISUALTREEREMOTING_SKIP_RENDER_ON_SERVER,
        v7,
        1u,
        &PerformanceCount);
  }
  else
  {
    if ( g_pComposition && *((_BYTE *)g_pComposition + 6473) )
      v13 = *((_DWORD *)g_pComposition + 1615);
    else
      v13 = 0;
    if ( v13 )
    {
      v14 = CRenderTargetManager::ComputeOverlayConfiguration(this);
      v1 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032B9E8, 3u, v14, 0xB4u, 0LL);
      v24 = v27;
      v25 = v27;
      p_PerformanceCount = &PerformanceCount;
      CRenderTargetManager::SortMonitorTargets(this, &v24);
      v15 = v24;
      v16 = v25;
      while ( v15 != v16 )
      {
        v17 = *((_QWORD *)this + 86);
        v18 = *v15 + 8LL;
        v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL);
        if ( v19 == CLegacyRenderTarget::RenderAndPresent )
        {
          v20 = CLegacyRenderTarget::RenderAndPresent(v18, v17);
        }
        else if ( v19 == CDDisplayRenderTarget::RenderAndPresent )
        {
          v20 = CDDisplayRenderTarget::RenderAndPresent(v18, v17);
        }
        else
        {
          v20 = v19(v18, v17);
        }
        v21 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032B9E8, 3u, v20, 0xBEu, 0LL);
        if ( !v1 || v1 >= 0 && v21 < 0 )
          v1 = v21;
        v15 += 2;
      }
      detail::vector_facade<CRenderTargetManager::CSortedMonitorTarget,detail::buffer_impl<CRenderTargetManager::CSortedMonitorTarget,4,1,detail::liberal_expansion_policy>>::~vector_facade<CRenderTargetManager::CSortedMonitorTarget,detail::buffer_impl<CRenderTargetManager::CSortedMonitorTarget,4,1,detail::liberal_expansion_policy>>(&v24);
    }
  }
  if ( !*((_BYTE *)this + 753) )
  {
    v9 = (_QWORD *)*((_QWORD *)this + 10);
    v10 = (_QWORD *)*((_QWORD *)this + 11);
    while ( v9 != v10 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 64LL))(*v9, *((_QWORD *)this + 86));
      v12 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032B9E8, 3u, v11, 0xCCu, 0LL);
      if ( !v1 || v1 >= 0 && v12 < 0 )
        v1 = v12;
      ++v9;
    }
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v1;
}
