/*
 * XREFs of ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18013E9A0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ @ 0x18013E5A0 (-OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ.c)
 *     ?UpdatePrimaryMonitor@CRenderTargetManager@@AEAA_NXZ @ 0x18013E5E4 (-UpdatePrimaryMonitor@CRenderTargetManager@@AEAA_NXZ.c)
 *     ?UpdateFastestMonitor@CRenderTargetManager@@AEAA_NXZ @ 0x18013E6B0 (-UpdateFastestMonitor@CRenderTargetManager@@AEAA_NXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ @ 0x18013E800 (-UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ.c)
 *     ?ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ @ 0x18013E870 (-ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ.c)
 *     ?AddDeferredRenderTargets@CRenderTargetManager@@AEAAXXZ @ 0x18013ED90 (-AddDeferredRenderTargets@CRenderTargetManager@@AEAAXXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x18013FC00 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x180228CD0 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x18023EBE0 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@WEI@EAAJ_N@Z @ 0x180280CB0 (-CheckOcclusionState@CDDisplayRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@WEI@EAAJ_N@Z @ 0x180280D20 (-CheckOcclusionState@CLegacyRenderTarget@@WEI@EAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetManager::CheckOcclusionState(CRenderTargetManager *this)
{
  int v1; // r15d
  __int64 v3; // r12
  unsigned __int8 v4; // r14
  __int64 v5; // r8
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  __int64 (__fastcall *v8)(CLegacyRenderTarget *__hidden, bool); // r9
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  __int64 v10; // r13
  CLegacyRenderTarget *v11; // rcx
  __int64 (__fastcall *v12)(CLegacyRenderTarget *__hidden, bool); // rax
  int v13; // eax
  int v14; // ebp
  _QWORD *v15; // rbx
  _QWORD *v16; // rsi
  char v17; // bl
  __int64 v18; // r8
  void (*v20)(void); // rax
  int v21; // eax
  int v22; // ebp
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  v3 = 0LL;
  v4 = *((_BYTE *)this + 754);
  if ( v4 )
    *((_BYTE *)this + 754) = 0;
  CRenderTargetManager::AddDeferredRenderTargets(this);
  *((_BYTE *)this + 753) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start,
      v5,
      1u,
      &v23);
  *((_BYTE *)this + 744) = 1;
  v6 = (_QWORD *)*((_QWORD *)this + 3);
  v7 = (_QWORD *)*((_QWORD *)this + 4);
  while ( 1 )
  {
    v8 = CLegacyRenderTarget::CheckOcclusionState;
    v9 = CDDisplayRenderTarget::CheckOcclusionState;
    if ( v6 == v7 )
      break;
    v10 = *v6;
    v11 = (CLegacyRenderTarget *)(*v6 + 8LL);
    v12 = *(__int64 (__fastcall **)(CLegacyRenderTarget *__hidden, bool))(*(_QWORD *)v11 + 56LL);
    if ( (char *)v12 == (char *)CLegacyRenderTarget::CheckOcclusionState )
    {
      v13 = CLegacyRenderTarget::CheckOcclusionState(
              v11,
              v4,
              CDDisplayRenderTarget::CheckOcclusionState,
              CLegacyRenderTarget::CheckOcclusionState);
    }
    else if ( (char *)v12 == (char *)CDDisplayRenderTarget::CheckOcclusionState )
    {
      v13 = CDDisplayRenderTarget::CheckOcclusionState(
              v11,
              v4,
              CDDisplayRenderTarget::CheckOcclusionState,
              CLegacyRenderTarget::CheckOcclusionState);
    }
    else if ( v12 == CLegacyRenderTarget::CheckOcclusionState )
    {
      v13 = CLegacyRenderTarget::CheckOcclusionState(v11, v4);
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(CLegacyRenderTarget *, _QWORD, _QWORD, __int64 (__fastcall *)(CLegacyRenderTarget *__hidden, bool)))v12)(
              v11,
              v4,
              CDDisplayRenderTarget::CheckOcclusionState,
              CLegacyRenderTarget::CheckOcclusionState);
    }
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x3Au, 0LL);
      if ( v1 >= 0 )
        v1 = v14;
      ++v6;
    }
    else
    {
      if ( v13 == 142213121 )
        v3 ^= v10;
      else
        *((_BYTE *)this + 753) = 0;
      ++v6;
    }
  }
  v15 = (_QWORD *)*((_QWORD *)this + 10);
  v16 = (_QWORD *)*((_QWORD *)this + 11);
  while ( v15 != v16 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 (__fastcall *)(CLegacyRenderTarget *__hidden, bool)))(*(_QWORD *)*v15 + 56LL))(
            *v15,
            0LL,
            v9,
            v8);
    v22 = v21;
    if ( v21 >= 0 )
    {
      if ( v21 == 142213121 )
        goto LABEL_49;
      *((_BYTE *)this + 753) = 0;
      ++v15;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x4Au, 0LL);
      if ( v1 >= 0 )
        v1 = v22;
LABEL_49:
      ++v15;
    }
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  v17 = CCommonRegistryData::m_dwOverlayTestMode == 5;
  if ( *((_BYTE *)this + 745) || *((_BYTE *)this + 746) || *((_BYTE *)this + 756) != v17 )
  {
    CRenderTargetManager::UpdateMPOCaps(this);
    *((_BYTE *)this + 756) = v17;
  }
  if ( *((_BYTE *)this + 745) || *((_BYTE *)this + 747) || !*(_QWORD *)this )
  {
    v20 = *(void (**)(void))(*(_QWORD *)g_pComposition + 72LL);
    if ( (char *)v20 == (char *)CGlobalComposition::OnMonitorTargetsChanged )
      CGlobalComposition::OnMonitorTargetsChanged(g_pComposition);
    else
      v20();
    if ( CRenderTargetManager::UpdatePrimaryMonitor(this) && !CCommonRegistryData::m_compositorClockPolicy )
      *((_BYTE *)g_pComposition + 6492) = 1;
  }
  if ( (CRenderTargetManager::ApplyClockBoost(this)
     || *((_BYTE *)this + 745)
     || *((_BYTE *)this + 750)
     || *((_BYTE *)this + 748)
     || !*((_QWORD *)this + 1))
    && CRenderTargetManager::UpdateFastestMonitor(this)
    && CCommonRegistryData::m_compositorClockPolicy == 1 )
  {
    *((_BYTE *)g_pComposition + 6492) = 1;
  }
  if ( v3 != *((_QWORD *)this + 88) )
  {
    *((_QWORD *)this + 88) = v3;
    CRenderTargetManager::NotifyTargetsOfOcclusionChange(this);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop,
      v18,
      1u,
      &v23);
  return (unsigned int)v1;
}
