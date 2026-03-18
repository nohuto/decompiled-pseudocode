/*
 * XREFs of PostWinlogonMessage @ 0x140167BB0
 * Callers:
 *     PowerOffMonitor @ 0x1400E4300 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x14010F530 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxDwmControl @ 0x14017A7C0 (xxxDwmControl.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5610 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x14006AE10 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     SetTimerCoalescingTolerance @ 0x140113BDC (SetTimerCoalescingTolerance.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1401144E4 (IsSetTimerCoalescingToleranceSupported.c)
 *     ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1401B31AC (--0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z.c)
 *     ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401B31EC (--1CAcquireReleaseRundownProtection@@QEAA@XZ.c)
 *     ?TraceLoggingLockMessagePosted@@YAXXZ @ 0x1401BFA20 (-TraceLoggingLockMessagePosted@@YAXXZ.c)
 *     WmsgpPostMessage @ 0x1402C3D84 (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1) + 69376) )
    return 0LL;
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v2);
  CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection(
    (CAcquireReleaseRundownProtection *)&v13,
    UserSessionState + 8673);
  if ( !v13 )
  {
    CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)&v13);
    return 0LL;
  }
  v6 = W32GetUserSessionState(v5);
  v7 = WmsgpPostMessage(*(RPC_BINDING_HANDLE *)(v6 + 69376));
  CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)&v13);
  if ( v7 >= 0 && v1 == 1027 )
  {
    TraceLoggingLockMessagePosted();
    v9 = W32GetUserSessionState(v8);
    CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v9 + 3064), 1);
    if ( (int)IsSetTimerCoalescingToleranceSupported(v11, v10) >= 0 )
      SetTimerCoalescingTolerance(3LL, v12);
  }
  return (unsigned int)v7;
}
