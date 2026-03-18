/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0132E8C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1C0133C20 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C0133F40 (PowerOnMonitor.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00010D8 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C001124C (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     CitDisplayPowerChange @ 0x1C00A3914 (CitDisplayPowerChange.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00B9E40 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00C536C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z @ 0x1C00D05EC (-MonitorDisplayStateToString@InputTraceLogging@@CAPEBDW4_MONITOR_DISPLAY_STATE@@@Z.c)
 *     ?MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00D0624 (-MonitorRequestReasonToString@InputTraceLogging@@CAPEBDW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0132140 (xxxSendWinlogonPowerMessage.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01329B8 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0132C70 (-SetProximityBlocking@@YAXXZ.c)
 *     EtwTraceDisplayChange @ 0x1C0138EE0 (EtwTraceDisplayChange.c)
 */

void __fastcall UpdateDisplayState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  int v5; // esi
  enum _MONITOR_DISPLAY_STATE v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  char v75; // bl
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  bool v87; // zf
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  unsigned int v100; // ecx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  _BYTE v110[4]; // [rsp+40h] [rbp-49h] BYREF
  int v111; // [rsp+44h] [rbp-45h] BYREF
  BOOL v112; // [rsp+48h] [rbp-41h] BYREF
  __int64 v113; // [rsp+50h] [rbp-39h] BYREF
  __int64 v114[2]; // [rsp+58h] [rbp-31h] BYREF
  _DWORD InputBuffer[3]; // [rsp+68h] [rbp-21h] BYREF
  char v116; // [rsp+74h] [rbp-15h]
  char v117; // [rsp+75h] [rbp-14h]
  char v118; // [rsp+76h] [rbp-13h]
  char v119; // [rsp+77h] [rbp-12h]
  _BYTE v120[48]; // [rsp+78h] [rbp-11h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = (int)a1;
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
  {
    v111 = 1;
    v112 = a3 != 0;
    v113 = (__int64)InputTraceLogging::MonitorDisplayStateToString(v6);
    v114[0] = (__int64)InputTraceLogging::MonitorRequestReasonToString(v5);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C0289810,
      (int)&dword_1C0255B71,
      v7,
      v8,
      (void **)v114,
      (void **)&v113,
      (__int64)&v112,
      (__int64)&v111);
  }
  v9 = *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  *(_DWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 3016) = v9;
  v18 = *(_DWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 3080);
  *(_DWORD *)(SGDGetUserSessionState(v20, v19, v21, v22) + 3076) = v18;
  *(_DWORD *)(SGDGetUserSessionState(v24, v23, v25, v26) + 3080) = v6;
  v27 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v28 = (v27 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v31 = v28 - *(_QWORD *)(SGDGetUserSessionState(v27, v28, v29, v30) + 3032);
  *(_QWORD *)(SGDGetUserSessionState(v33, v32, v34, v35) + 3024) = v31;
  v36 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v37 = (v36 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_QWORD *)(SGDGetUserSessionState(v36, v37, v38, v39) + 3032) = v37;
  if ( gProtocolType )
  {
    v44 = 0;
    *(_WORD *)(SGDGetUserSessionState(v41, v40, v42, v43) + 3084) = 0;
  }
  else
  {
    v44 = 1;
    *(_WORD *)(SGDGetUserSessionState(v41, v40, v42, v43) + 3084) = 1;
  }
  DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>((__int64)v120);
  v49 = SGDGetUserSessionState(v46, v45, v47, v48);
  if ( v6 )
  {
    *(_DWORD *)(v49 + 2952) = 1;
    DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::~ObjectLock<>((__int64)v120);
    *(_DWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 2972) = 0;
    *(_DWORD *)(SGDGetUserSessionState(v63, v62, v64, v65) + 2976) = 0;
  }
  else
  {
    *(_DWORD *)(v49 + 2952) = 0;
    DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::~ObjectLock<>((__int64)v120);
    *(_DWORD *)(SGDGetUserSessionState(v51, v50, v52, v53) + 2972) = v5 == 17;
    if ( v5 == 22 )
      SetProximityBlocking(v55, v54, v56, v57);
  }
  UpdateAdaptiveSessionState();
  UserSessionSwitchLeaveCrit(v67, v66, v68, v69);
  if ( !*(_BYTE *)SGDGetUserGdiSessionState(v70) && (unsigned int)(v6 - 1) > 1 && (v6 || v5 == 17 || v5 == 22) )
  {
    v75 = 0;
  }
  else
  {
    v75 = 1;
    if ( v6 != PowerMonitorDim )
    {
      *(_OWORD *)v114 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(v6 != PowerMonitorOff), (struct _EX_RUNDOWN_REF *)v114, v74);
    }
  }
  InputBuffer[0] = *(_DWORD *)SGDGetUserSessionState(v72, v71, v73, v74);
  InputBuffer[1] = v6;
  InputBuffer[2] = v5;
  v116 = v44;
  v117 = v75;
  v118 = v4;
  if ( *(_DWORD *)(SGDGetUserSessionState(InputBuffer[0], v76, v77, v78) + 2952)
    || *(_DWORD *)(SGDGetUserSessionState(v80, v79, v81, v82) + 2972)
    || (v87 = *(_DWORD *)(SGDGetUserSessionState(v84, v83, v85, v86) + 2976) == 0, v119 = 0, !v87) )
  {
    v119 = 1;
  }
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( *(_BYTE *)(SGDGetUserSessionState(v89, v88, v90, v91) + 712) )
  {
    if ( (*(_DWORD *)(SGDGetUserSessionState(v93, v92, v94, v95) + 2952)
       || *(_DWORD *)(SGDGetUserSessionState(v97, v96, v98, v99) + 2972)
       || *(_DWORD *)(SGDGetUserSessionState(v97, v96, v98, v99) + 2976))
      && !*(_DWORD *)(SGDGetUserSessionState(v97, v96, v98, v99) + 2976) )
    {
      v100 = 0;
    }
    else
    {
      v100 = 2;
    }
    SetInputMode(v100, v96, v98, v99);
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v110, v92, v94, v95);
  EtwTraceDisplayChange();
  SGDGetUserSessionState(v102, v101, v103, v104);
  v109 = SGDGetUserSessionState(v106, v105, v107, v108);
  CitDisplayPowerChange(v109 + 3016);
}
