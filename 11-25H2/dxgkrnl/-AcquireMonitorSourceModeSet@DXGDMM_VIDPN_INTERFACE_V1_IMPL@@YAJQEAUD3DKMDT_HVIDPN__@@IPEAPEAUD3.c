/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140259670
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140038FF0 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003E4C0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1402C8614 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  VIDPN_MGR *v12; // rdi
  struct DXGADAPTER *ContainingAdapter; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  struct HDXGMONITOR__ *v26; // rdi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+50h] [rbp-20h] BYREF
  __int64 v33; // [rsp+58h] [rbp-18h]
  char v34; // [rsp+60h] [rbp-10h]
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v35; // [rsp+C0h] [rbp+50h] BYREF
  struct HDXGMONITOR__ *v36; // [rsp+C8h] [rbp+58h] BYREF

  v32 = -1;
  v6 = (unsigned int)a2;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 6038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6038);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 6038);
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4680;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"o_phMonitorSourceModeSet != NULL",
      4680LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4681;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"o_ppDxgDmmMonitorSourceModeSetInterface != NULL",
      4681LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 4699;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v32);
    }
    return 3223192323LL;
  }
  v12 = *(VIDPN_MGR **)(v8 + 48);
  v35 = 0LL;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v12);
  v18 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
  *(_QWORD *)(v18 + 24) = ContainingAdapter;
  *(_QWORD *)(v18 + 32) = &v35;
  WdLogGlobalForLineNumber = 4588;
  if ( !ContainingAdapter )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 4596;
    v19 = -1073741811LL;
LABEL_20:
    v20 = VIDPN_MGR::GetContainingAdapter(v12);
    WdLogSingleEntry2(2LL, v20, v19);
    WdLogGlobalForLineNumber = 4721;
    goto LABEL_22;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4618;
  }
  if ( !*((_QWORD *)ContainingAdapter + 390) )
  {
    WdLogSingleEntry1(2LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 4622;
    v19 = -1073741637LL;
    goto LABEL_20;
  }
  v35 = (struct D3DKMDT_HMONITORSOURCEMODESET__ *)&DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DmmMonitorSourceModeSetInterfaceV1;
LABEL_22:
  v21 = *((_QWORD *)v12 + 15);
  v36 = 0LL;
  _InterlockedAdd((volatile signed __int32 *)(v21 + 72), 1u);
  v22 = *((_QWORD *)v12 + 15);
  v23 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v22, v6);
  if ( v23 )
  {
    if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v12, *(_DWORD *)(v23 + 24), &v36) >= 0 && (v26 = v36) != 0LL )
    {
      if ( v22 )
        ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
      v27 = v35;
      *a3 = v26;
      *a4 = v27;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v32);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 4755;
      if ( v22 )
        ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v32);
      return 3223192376LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 4741;
    if ( v22 )
      ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v32);
    return 3223192325LL;
  }
}
