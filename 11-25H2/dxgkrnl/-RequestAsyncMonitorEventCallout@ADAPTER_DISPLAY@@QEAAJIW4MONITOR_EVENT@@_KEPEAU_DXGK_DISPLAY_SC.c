/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DBBF4
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140255CB0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140184EA4 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1403DBEE4 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rax
  struct DISPLAY_CALLOUT_ENTRY *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  int v18; // ecx
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  struct DISPLAY_CALLOUT_ENTRY **v21; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rdx
  _BYTE v24[16]; // [rsp+50h] [rbp-69h] BYREF
  int v25; // [rsp+60h] [rbp-59h] BYREF
  int v26; // [rsp+64h] [rbp-55h]
  __int64 v27; // [rsp+68h] [rbp-51h]
  __int128 v28; // [rsp+70h] [rbp-49h]
  __int64 v29; // [rsp+80h] [rbp-39h]
  int v30; // [rsp+88h] [rbp-31h]
  int v31; // [rsp+8Ch] [rbp-2Dh]
  int v32; // [rsp+90h] [rbp-29h]
  int v33; // [rsp+94h] [rbp-25h]
  int v34; // [rsp+98h] [rbp-21h]
  int v35; // [rsp+9Ch] [rbp-1Dh]
  __int64 v36; // [rsp+A0h] [rbp-19h]

  v10 = 0;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8957;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 8957LL, 0LL, 0LL, 0LL, 0LL);
  }
  v27 = 0LL;
  v28 = 0LL;
  v31 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(a1 + 544), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v12 = operator new(0x50uLL, 0x4B677844u, 256LL, v11);
  if ( v12 )
    v13 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v12,
                                            (_QWORD *)(*(_QWORD *)(a1 + 16) + 412LL),
                                            a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(a1 + 16);
  v15 = *(_QWORD *)(v14 + 412);
  if ( v13 )
  {
    v18 = *(_DWORD *)(v14 + 412);
    v34 = a2;
    v19 = 0x200000000LL;
    v27 = 0LL;
    v25 = 30;
    v26 = 72;
    v30 = 0;
    v29 = 0LL;
    v28 = 0LL;
    v32 = 46;
    v33 = v18;
    v35 = a3;
    v36 = v15;
    if ( *(_QWORD *)(v14 + 4828) )
      v20 = *(unsigned int *)(v14 + 4836);
    else
      v20 = 0x200000000LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v25, v20);
    if ( *(_BYTE *)(a1 + 592) )
    {
      v21 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 608);
      if ( *v21 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 600) )
        __fastfail(3u);
      *(_QWORD *)v13 = a1 + 600;
      *((_QWORD *)v13 + 1) = v21;
      *v21 = v13;
      *(_QWORD *)(a1 + 608) = v13;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      v23 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v23 + 4828) )
        v19 = *(unsigned int *)(v23 + 4836);
      v10 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((struct DXGGLOBAL *)((char *)Global + 1776), v13, v19);
    }
  }
  else
  {
    v25 = 30;
    v27 = 0LL;
    v26 = 72;
    v30 = 0;
    v29 = 0LL;
    v28 = 0LL;
    v32 = 46;
    v33 = -1073741801;
    v34 = a2;
    v35 = a3;
    v36 = v15;
    if ( *(_QWORD *)(v14 + 4828) )
      v16 = *(unsigned int *)(v14 + 4836);
    else
      v16 = 0x200000000LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v25, v16);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 8982;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for monitor event callout.",
      8982LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v10 = -1073741801;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  return v10;
}
