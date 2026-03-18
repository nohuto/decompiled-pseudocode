/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1401C4378
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

char __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  DXGADAPTER *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  char v16; // di
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h]
  char v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[144]; // [rsp+80h] [rbp-80h] BYREF

  v19 = -1;
  v3 = a2;
  v20 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2180;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, (__int64)&EventProfilerEnter, a3, 2180);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2180);
  v23 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v23);
  v7 = v6;
  if ( !v6 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2826;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Cannot find the caller specified adapter in global adapter list!",
      2826LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v19);
    }
    return 0;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v6, 0LL);
  v8 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
  DXGADAPTER::ReleaseReference(v7);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry2(2LL, v7, v8);
    WdLogGlobalForLineNumber = 2853;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquir the adapter core access lock on adapter 0x%I64x (Status = 0x%I64x)!",
      (__int64)v7,
      v8,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  v9 = *((_QWORD *)v7 + 390);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 2864;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Try to check portrait first target on a non-display adapter 0x%I64x!",
      (__int64)v7,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_18:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    goto LABEL_19;
  }
  v10 = *(_QWORD *)(v9 + 104);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 2875;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Fail to get VidPnMgr on adapter 0x%I64x!",
      (__int64)v7,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, *(_QWORD *)(v9 + 104));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 120) + 72LL));
  v11 = *(_QWORD *)(v10 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v11, v3);
  if ( !TargetById )
  {
    WdLogSingleEntry2(2LL, v3, v7);
    WdLogGlobalForLineNumber = 2888;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Fail to get VideoPresentTarget 0x%I64x from adapter 0x%I64x!",
      v3,
      (__int64)v7,
      0LL,
      0LL,
      0LL);
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
    goto LABEL_18;
  }
  v16 = *((_BYTE *)TargetById + 405);
  if ( v11 )
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v19);
  return v16;
}
