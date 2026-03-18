/*
 * XREFs of DxgkPollDisplayChildrenInternal @ 0x1403BD190
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1403BD170 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??0_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x14006A7A0 (--0_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x14006A7F0 (--1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14006A828 (--4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x14038E710 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403BD4AC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403BE1F0 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall DxgkPollDisplayChildrenInternal(_D3DKMT_POLLDISPLAYCHILDREN *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // rsi
  __int64 v7; // rcx
  _D3DKMT_POLLDISPLAYCHILDREN v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // ebx
  DXGGLOBAL *Global; // rax
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  _D3DKMT_POLLDISPLAYCHILDREN v18; // [rsp+50h] [rbp-C8h] BYREF
  struct _LUID Current; // [rsp+58h] [rbp-C0h]
  int v20; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-B0h]
  char v22; // [rsp+70h] [rbp-A8h]
  unsigned __int8 v23[8]; // [rsp+78h] [rbp-A0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // [rsp+80h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+88h] [rbp-90h] BYREF
  _BYTE v26[24]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v27[72]; // [rsp+B8h] [rbp-60h] BYREF

  v23[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x2Bu, 0, &v24, v23);
  v6 = v24;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, v5, 2036);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2036);
  v18 = 0LL;
  Current = (struct _LUID)DXGPROCESS::GetCurrent(v7);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v18, a1, 8uLL);
    v8 = v18;
  }
  else
  {
    v8 = *a1;
    v18 = *a1;
  }
  v9 = HIDWORD(*(unsigned __int64 *)&v8);
  if ( (unsigned int)v9 >= 0x20 )
    *((_DWORD *)&v18 + 1) = v9 & 1;
  v10 = ((*((_BYTE *)&v18 + 4) & 1) != 0 ? 1 : 4) | 2;
  if ( (*((_BYTE *)&v18 + 4) & 0x10) == 0 )
    v10 = (*((_BYTE *)&v18 + 4) & 1) != 0 ? 1 : 4;
  if ( (*((_BYTE *)&v18 + 4) & 8) == 0 )
  {
    v12 = PollDisplayChildrenForAdapter(&v18, v10, v6);
    goto LABEL_19;
  }
  if ( !v18.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v18, v10, v6);
LABEL_19:
    v13 = v12;
    goto LABEL_20;
  }
  v13 = -1073741811;
LABEL_20:
  if ( v13 >= 0 && (*((_BYTE *)&v18 + 4) & 4) != 0 )
  {
    Current = (struct _LUID)-1LL;
    _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION((_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v26);
    CDisplayScenarioContextCarrier::operator=((__int64)v27, (const struct _GUID *)v6);
    v14 = DxgkHandleMonitorEvent(Current, 0xFFFFFFFF, 5u, 2LL, (__int64)v26);
    _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::~_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION((_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v26);
    v13 = 0;
    if ( v14 != -1071774941 )
      v13 = v14;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v20);
  if ( v23[0] )
    DisplayScenarioContextDissociate(&v24);
  return (unsigned int)v13;
}
