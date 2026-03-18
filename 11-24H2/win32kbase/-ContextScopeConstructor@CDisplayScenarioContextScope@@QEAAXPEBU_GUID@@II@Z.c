/*
 * XREFs of ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1400F7124 (DrvProcessDxgkDisplayCallout.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400F78B8 (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     UserThreadCallout @ 0x140166CD0 (UserThreadCallout.c)
 *     NtUserChangeDisplaySettings @ 0x14016B4D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CDisplayScenarioContextScope::ContextScopeConstructor(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT **this,
        const struct _GUID *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rax
  GUID ActivityId; // [rsp+30h] [rbp-38h] BYREF

  ActivityId = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&ActivityId.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&ActivityId.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)ActivityId.Data4;
  if ( v7 )
    ActivityId = *a2;
  else
LABEL_2:
    EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, a3, a4, this + 1, (unsigned __int8 *)this);
}
