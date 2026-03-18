/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x14038E710
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x14038E4E0 (DxgkProcessDisplayCalloutBatch.c)
 *     DxgkPollDisplayChildrenInternal @ 0x1403BD190 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1400110E0 (McTemplateK0tt_EtwWriteTransfer.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1400602F4 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C5420 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EA8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x14038F25C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x14038F2A4 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     DxgkSetPresenterViewMode @ 0x1403EC410 (DxgkSetPresenterViewMode.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  const struct _GUID *v9; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10; // r15
  struct DXGGLOBAL *Global; // rcx
  __int64 v12; // r8
  struct DXGGLOBAL *v13; // rax
  bool v14; // zf
  int v15; // eax
  DXGGLOBAL *v16; // rax
  struct DXGADAPTER *v17; // rax
  char v18; // cl
  char v19; // dl
  char v20; // dl
  unsigned int CurrentProcessSessionId; // eax
  __int64 v23; // [rsp+20h] [rbp-E0h]
  struct _LUID v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h]
  int v27; // [rsp+60h] [rbp-A0h]
  char v28; // [rsp+70h] [rbp-90h]
  __int16 v29; // [rsp+71h] [rbp-8Fh]
  char v30; // [rsp+73h] [rbp-8Dh]
  char v31; // [rsp+74h] [rbp-8Ch]
  char v32; // [rsp+75h] [rbp-8Bh]
  char v33; // [rsp+77h] [rbp-89h]
  int v34; // [rsp+78h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v35; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v36; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v38[14]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-28h]
  struct _LUID v40; // [rsp+E0h] [rbp-20h]
  unsigned int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  int v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F4h] [rbp-Ch]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]

  v24 = a1;
  v5 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v25);
  if ( a3 == 12 )
    v29 = 0;
  else
    *(_BYTE *)a5 |= 2u;
  v9 = *(const struct _GUID **)(a5 + 32);
  LOBYTE(v35) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v35, v9, 0, 0);
  v10 = v36;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_11;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_11:
      Global = DXGGLOBAL::GetGlobal();
      _InterlockedExchange((volatile __int32 *)Global + 338, 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v23) = 0;
        McTemplateK0tt_EtwWriteTransfer((__int64)Global, (__int64)&EventDxgkSetPresenterViewMode, v12, 0, v23);
      }
      v5 = HandleMonitorDepartureCase(&v25, &v24, a2, a3, a4, v10);
      v13 = DXGGLOBAL::GetGlobal();
      RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)v13 + 305624, 1u, *(_QWORD *)&v24);
LABEL_28:
      if ( v5 < 0 )
        goto LABEL_40;
      goto LABEL_29;
    }
    v14 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_26;
    v14 = a3 == 3;
  }
  if ( v14 )
  {
LABEL_26:
    DxgkSetPresenterViewMode(0LL, 0LL);
    v15 = HandleMonitorArrival(&v25, &v24, a2, a3, a4, v10);
LABEL_27:
    v5 = v15;
    goto LABEL_28;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4442;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"i_Parameter == (ULONG_PTR) 0",
        4442LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = HandleRapidHPDAction((struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v25, &v24, a2, v10);
    goto LABEL_27;
  }
LABEL_29:
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors() && !v26 )
  {
    v16 = DXGGLOBAL::GetGlobal();
    v17 = DXGGLOBAL::ReferenceAdapterByLuid(v16, v24, &v37);
    if ( v17 )
    {
      *(_BYTE *)a5 |= 16 * (*(_BYTE *)(*((_QWORD *)v17 + 390) + 24LL) & 1);
      DXGADAPTER::ReleaseReference(v17);
    }
  }
  if ( a3 && a3 != 12 || (v18 = 32, a4 != 1) )
    v18 = 0;
  v19 = *(_BYTE *)a5 & 0xDF ^ (v18 | *(_BYTE *)a5) & 0x20;
  *(_BYTE *)a5 = v19;
  if ( v28 )
  {
    v20 = v19 & 0xFB ^ ((HIBYTE(v29) != 0 ? 4 : 0) | v19 & 4);
    *(_BYTE *)a5 = (v33 != 0 ? 0x40 : 0) | (v20 & 0xF7 ^ ((v32 != 0 ? 8 : 0) | v20 & 8)) & 0xBF;
  }
  else
  {
    *(_BYTE *)(a5 + 1) = *(_BYTE *)(a5 + 1) & 0xFE | (a3 == 9);
  }
LABEL_40:
  v38[0] = 2;
  v38[1] = 96;
  memset(&v38[2], 0, 40);
  v38[13] = a3;
  v39 = a4;
  v40 = v24;
  v42 = v34;
  v44 = v25;
  v45 = v27;
  v46 = v26;
  v38[12] = HIBYTE(v29) & 1 | (4 * (v30 & 1 | (2 * (v31 & 1))));
  v41 = a2;
  v43 = v5;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v38, CurrentProcessSessionId);
  if ( (_BYTE)v35 )
    DisplayScenarioContextDissociate(&v36);
  return (unsigned int)v5;
}
