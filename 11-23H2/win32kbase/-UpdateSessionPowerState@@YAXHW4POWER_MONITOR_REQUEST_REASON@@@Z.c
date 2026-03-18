/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0133290
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01327A4 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C01328A0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C001124C (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     CitDisplayPowerChange @ 0x1C00A3914 (CitDisplayPowerChange.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTraceDisplayChange @ 0x1C0138EE0 (EtwTraceDisplayChange.c)
 */

void __fastcall UpdateSessionPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  struct tagTHREADINFO *v57; // rax
  __int64 v58; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v60; // rax
  __int64 *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 InputBuffer; // [rsp+38h] [rbp-50h] BYREF
  int v72; // [rsp+40h] [rbp-48h]
  char v73; // [rsp+44h] [rbp-44h]
  bool v74; // [rsp+45h] [rbp-43h]
  __int16 v75; // [rsp+46h] [rbp-42h]
  int v76; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v75 = 0;
  v5 = a1;
  v6 = *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  *(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 3016) = v6;
  v15 = *(_DWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 3080);
  *(_DWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 3076) = v15;
  *(_DWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 3080) = v5 != 0;
  v24 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v25 = (v24 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v28 = v25 - *(_QWORD *)(SGDGetUserSessionState(v24, v25, v26, v27) + 3032);
  *(_QWORD *)(SGDGetUserSessionState(v30, v29, v31, v32) + 3024) = v28;
  v33 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v34 = (v33 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_QWORD *)(SGDGetUserSessionState(v33, v34, v35, v36) + 3032) = v34;
  if ( gProtocolType )
    *(_WORD *)(SGDGetUserSessionState(v38, v37, v39, v40) + 3084) = 0;
  else
    *(_WORD *)(SGDGetUserSessionState(v38, v37, v39, v40) + 3084) = 1;
  *(_DWORD *)(SGDGetUserSessionState(v42, v41, v43, v44) + 2952) = v5;
  UpdateAdaptiveSessionState();
  UserSessionSwitchLeaveCrit(v46, v45, v47, v48);
  InputBuffer = 19LL;
  v53 = *(_DWORD *)SGDGetUserSessionState(v50, v49, v51, v52);
  v74 = gProtocolType == 0;
  v72 = v53;
  v73 = v5;
  v76 = v4;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  v57 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v54, v55, v56);
  gptiCurrent = v57;
  if ( v57 )
  {
    *((_DWORD *)v57 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v58);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v61 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v60 = *v61;
          v61[2] = 0LL;
          if ( !*(_DWORD *)(v60 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v61);
        }
      }
    }
  }
  EtwTraceDisplayChange();
  SGDGetUserSessionState(v63, v62, v64, v65);
  v70 = SGDGetUserSessionState(v67, v66, v68, v69);
  CitDisplayPowerChange(v70 + 3016);
}
