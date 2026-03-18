/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x1400F7124
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x1400F74E0 (--1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     DrvQueryMDEVPowerState @ 0x1400F7540 (DrvQueryMDEVPowerState.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F75AC (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400F78B8 (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x14015A948 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvProcessDxgkDisplayCallout(
        struct tagDESKTOP *a1,
        unsigned __int8 *a2,
        bool *a3,
        bool *a4,
        _BYTE *a5)
{
  __int64 DxgkWin32kInterface; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // rbx
  int updated; // eax
  unsigned int v15; // eax
  __int64 UserSessionState; // rax
  __int64 v17; // rcx
  unsigned int v18; // esi
  int v19; // eax
  CDisplayScenarioContextScope *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 v25[4]; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int CurrentProcessSessionId; // [rsp+44h] [rbp-9Dh] BYREF
  char v27[8]; // [rsp+48h] [rbp-99h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v28; // [rsp+50h] [rbp-91h] BYREF
  char v29[8]; // [rsp+58h] [rbp-89h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+60h] [rbp-81h] BYREF
  char v31[8]; // [rsp+68h] [rbp-79h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32; // [rsp+70h] [rbp-71h]
  _WORD v33[2]; // [rsp+80h] [rbp-61h] BYREF
  unsigned int v34[3]; // [rsp+84h] [rbp-5Dh]
  __int64 v35; // [rsp+90h] [rbp-51h]
  char v36[8]; // [rsp+98h] [rbp-49h] BYREF
  struct _GUID *v37; // [rsp+A0h] [rbp-41h]
  __int128 v38; // [rsp+A8h] [rbp-39h]
  __int128 v39; // [rsp+B8h] [rbp-29h]
  __int64 v40; // [rsp+C8h] [rbp-19h]
  unsigned int *v41; // [rsp+D0h] [rbp-11h]

  *(_QWORD *)v34 = 0LL;
  v35 = 0LL;
  v36[0] = 0;
  v33[0] = 128;
  v37 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(0LL);
  v10 = (*(__int64 (__fastcall **)(_WORD *))(DxgkWin32kInterface + 240))(v33);
  v12 = v10;
  if ( v10 >= 0 )
  {
    LOBYTE(v11) = v33[0];
    *a3 = (v33[0] & 0x20) != 0;
    *a4 = (v11 & 0x10) != 0;
    *a5 = v11 & 1;
    if ( (v11 & 2) != 0 )
    {
      v29[0] = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v29, v37, 0, 0);
      v13 = v30;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, v13, 16LL, 0LL, &CurrentProcessSessionId);
      v12 = updated;
      if ( updated < 0 )
      {
        WdLogSingleEntry2(2LL, updated, CurrentProcessSessionId);
        WdLogGlobalForLineNumber = 17513;
        v12 = 0;
      }
      if ( v29[0] )
        DisplayScenarioContextDissociate(&v30);
      LOBYTE(v11) = v33[0];
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 17472;
    *(_QWORD *)v34 = 0LL;
    v11 = 4LL;
    v41 = 0LL;
    v33[0] = 4;
    v38 = 0LL;
    v40 = 0LL;
    v39 = 0LL;
  }
  if ( (v11 & 4) != 0 )
  {
    v15 = v34[0];
    if ( !v34[0] )
      v15 = 2191;
    v34[0] = v15;
    if ( (v11 & 8) != 0 )
      v34[0] = v15 | 0x100;
    UserSessionState = W32GetUserSessionState(v11);
    if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 16LL)) )
    {
      v27[0] = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v27, v37, 0, 0);
      v25[0] = 0;
      v21 = DrvProcessSetDisplayConfigParameters(
              (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v33,
              v34[0],
              a1,
              v25,
              v28);
      if ( v21 < 0 )
      {
        v12 = v21;
        WdLogSingleEntry2(2LL, v21, 1LL);
        v20 = (CDisplayScenarioContextScope *)v27;
        WdLogGlobalForLineNumber = 17610;
        goto LABEL_18;
      }
      if ( v25[0] )
      {
        v22 = W32GetUserSessionState(v11);
        DrvUpdateDpiInfoOnOptimizedModeChange(*(struct _MDEV **)(*(_QWORD *)(v22 + 57008) + 16LL), a2);
        HIBYTE(v33[0]) &= ~1u;
      }
      if ( v27[0] )
        DisplayScenarioContextDissociate(&v28);
    }
    else
    {
      v18 = v34[0];
      if ( (v34[0] & 0x200) != 0 )
      {
        CDisplayScenarioContextScope::CDisplayScenarioContextScope(
          (CDisplayScenarioContextScope *)v31,
          (struct CDisplayScenarioContextCarrier *)v36);
        v19 = DrvProcessSetDisplayConfigParameters(
                (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v33,
                v34[0] & 0xFFFFFF7F,
                a1,
                0LL,
                v32);
        if ( v19 < 0 )
        {
          v12 = v19;
          WdLogSingleEntry2(2LL, v19, 0LL);
          v20 = (CDisplayScenarioContextScope *)v31;
          WdLogGlobalForLineNumber = 17569;
LABEL_18:
          CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v20);
          goto LABEL_31;
        }
        v34[0] = v34[0] & 0x1100 | 0x88F;
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v31);
        v18 = v34[0];
      }
      else if ( (v34[0] & 0xF) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 17586;
        goto LABEL_31;
      }
      *(_DWORD *)(W32GetUserGdiSessionState(v17) + 16) = v18;
    }
  }
  if ( (v33[0] & 0x100) != 0 )
  {
    v23 = W32GetUserSessionState(v11);
    DrvUpdateDpiInfoOnOptimizedModeChange(*(struct _MDEV **)(*(_QWORD *)(v23 + 57008) + 16LL), a2);
  }
LABEL_31:
  if ( v41 )
    *v41 = v12;
  _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::~_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION((_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v33);
  return v12;
}
