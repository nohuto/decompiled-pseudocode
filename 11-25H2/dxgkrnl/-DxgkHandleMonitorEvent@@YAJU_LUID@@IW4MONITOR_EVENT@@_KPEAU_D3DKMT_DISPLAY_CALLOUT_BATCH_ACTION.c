/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403774A0
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x140377270 (DxgkProcessDisplayCalloutBatch.c)
 *     DxgkPollDisplayChildrenInternal @ 0x1403CA3A0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1400142E8 (McTemplateK0tt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x14005FA3C (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C1310 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x140298BFC (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037781C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x140377FEC (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     DxgkSetPresenterViewMode @ 0x1403F2370 (DxgkSetPresenterViewMode.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  const struct _GUID *v9; // rdx
  __int64 v10; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // r15
  struct DXGGLOBAL *Global; // rcx
  __int64 v13; // r8
  struct DXGGLOBAL *v14; // rax
  bool v15; // zf
  int v16; // eax
  DXGGLOBAL *v17; // rax
  struct DXGADAPTER *v18; // rax
  char v19; // cl
  char v20; // dl
  char v21; // dl
  unsigned int CurrentProcessSessionId; // eax
  __int64 v24; // [rsp+20h] [rbp-E0h]
  struct _LUID v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h]
  int v28; // [rsp+60h] [rbp-A0h]
  char v29; // [rsp+70h] [rbp-90h]
  __int16 v30; // [rsp+71h] [rbp-8Fh]
  char v31; // [rsp+73h] [rbp-8Dh]
  char v32; // [rsp+74h] [rbp-8Ch]
  char v33; // [rsp+75h] [rbp-8Bh]
  char v34; // [rsp+77h] [rbp-89h]
  int v35; // [rsp+78h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v36; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v37; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v39[14]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-28h]
  struct _LUID v41; // [rsp+E0h] [rbp-20h]
  unsigned int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  int v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F4h] [rbp-Ch]
  int v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FCh] [rbp-4h]

  v25 = a1;
  v5 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v26);
  if ( a3 == 12 )
    v30 = 0;
  else
    *(_BYTE *)a5 |= 2u;
  v9 = *(const struct _GUID **)(a5 + 32);
  LOBYTE(v36) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v36, v9, 0, 0);
  v11 = v37;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_11;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_11:
      Global = DXGGLOBAL::GetGlobal();
      _InterlockedExchange((volatile __int32 *)Global + 330, 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v24) = 0;
        McTemplateK0tt_EtwWriteTransfer((__int64)Global, (__int64)&EventDxgkSetPresenterViewMode, v13, 0, v24);
      }
      v5 = HandleMonitorDepartureCase(&v26, &v25, a2, a3, a4, v11);
      v14 = DXGGLOBAL::GetGlobal();
      RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)v14 + 305544, 1u, *(_QWORD *)&v25);
LABEL_28:
      if ( v5 < 0 )
        goto LABEL_40;
      goto LABEL_29;
    }
    v15 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_26;
    v15 = a3 == 3;
  }
  if ( v15 )
  {
LABEL_26:
    DxgkSetPresenterViewMode(0LL, 0LL);
    v16 = HandleMonitorArrival(&v26, &v25, a2, a3, a4, v11);
LABEL_27:
    v5 = v16;
    goto LABEL_28;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4440;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_Parameter == (ULONG_PTR) 0", 4440LL, 0LL, 0LL, 0LL, 0LL);
    }
    v16 = HandleRapidHPDAction((struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v26, &v25, a2, v11);
    goto LABEL_27;
  }
LABEL_29:
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v10) && !v27 )
  {
    v17 = DXGGLOBAL::GetGlobal();
    v18 = DXGGLOBAL::ReferenceAdapterByLuid(v17, v25, &v38);
    if ( v18 )
    {
      *(_BYTE *)a5 |= 16 * (*(_BYTE *)(*((_QWORD *)v18 + 390) + 24LL) & 1);
      DXGADAPTER::ReleaseReference(v18);
    }
  }
  if ( a3 && a3 != 12 || (v19 = 32, a4 != 1) )
    v19 = 0;
  v20 = *(_BYTE *)a5 & 0xDF ^ (v19 | *(_BYTE *)a5) & 0x20;
  *(_BYTE *)a5 = v20;
  if ( v29 )
  {
    v21 = v20 & 0xFB ^ ((HIBYTE(v30) != 0 ? 4 : 0) | v20 & 4);
    *(_BYTE *)a5 = (v34 != 0 ? 0x40 : 0) | (v21 & 0xF7 ^ ((v33 != 0 ? 8 : 0) | v21 & 8)) & 0xBF;
  }
  else
  {
    *(_BYTE *)(a5 + 1) = *(_BYTE *)(a5 + 1) & 0xFE | (a3 == 9);
  }
LABEL_40:
  v39[0] = 2;
  v39[1] = 96;
  memset(&v39[2], 0, 40);
  v39[13] = a3;
  v40 = a4;
  v41 = v25;
  v43 = v35;
  v45 = v26;
  v46 = v28;
  v47 = v27;
  v39[12] = HIBYTE(v30) & 1 | (4 * (v31 & 1 | (2 * (v32 & 1))));
  v42 = a2;
  v44 = v5;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v39, CurrentProcessSessionId);
  if ( (_BYTE)v36 )
    DisplayScenarioContextDissociate(&v37);
  return (unsigned int)v5;
}
