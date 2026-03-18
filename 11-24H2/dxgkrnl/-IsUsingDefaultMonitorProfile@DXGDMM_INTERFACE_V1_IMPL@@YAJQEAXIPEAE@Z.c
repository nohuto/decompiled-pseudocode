/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x140262BA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1402DF70C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1402DF7F8 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        _BYTE *a3,
        unsigned __int8 *a4)
{
  __int64 v5; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  VIDPN_MGR *v13; // r15
  int ConnectedMonitorHandle; // eax
  unsigned int v15; // esi
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  struct HDXGMONITOR__ *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  char v28; // [rsp+60h] [rbp-20h]
  _QWORD v29[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+D0h] [rbp+50h] BYREF
  struct HDXGMONITOR__ *v31; // [rsp+D8h] [rbp+58h] BYREF

  v26 = -1;
  v5 = (unsigned int)a2;
  v27 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6056);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6056);
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 6929;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v26);
    }
    return 3221225485LL;
  }
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 6943;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6951;
  }
  v10 = *((_QWORD *)this + 390);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 6956;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v26);
    return 3223191554LL;
  }
  v13 = *(VIDPN_MGR **)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v30, (__int64)v13);
  v31 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v13, v5, &v31);
  v15 = ConnectedMonitorHandle;
  v16 = -1073741275;
  if ( ConnectedMonitorHandle == -1073741275 )
  {
    WdLogSingleEntry2(2LL, v5, this);
    WdLogGlobalForLineNumber = 6980;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v30 + 40));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v26);
    return 3223192376LL;
  }
  else if ( ConnectedMonitorHandle >= 0 )
  {
    v21 = v31;
    if ( v31 )
    {
      MONITOR_MGR::AcquireMonitorShared(v29, (__int64)v31);
      if ( v29[0] )
      {
        *a3 = *(_BYTE *)(*(_QWORD *)(v29[0] + 232LL) + 116LL);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v29);
        v16 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, -1073741275LL);
        WdLogGlobalForLineNumber = 3304;
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v29);
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6994;
      v16 = -1073741811;
    }
    VIDPN_MGR::ReleaseMonitorHandle(v13, v21);
    if ( v16 >= 0 )
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v30 + 40));
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v26);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, v21, v16);
      WdLogGlobalForLineNumber = 7009;
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v30 + 40));
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v26);
      return (unsigned int)v16;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, v5, this, ConnectedMonitorHandle);
    WdLogGlobalForLineNumber = 6989;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v30 + 40));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v26);
    return v15;
  }
}
