/*
 * XREFs of ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1400F7124 (DrvProcessDxgkDisplayCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     UserThreadCallout @ 0x140166CD0 (UserThreadCallout.c)
 *     NtUserChangeDisplaySettings @ 0x14016B4D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayScenarioContextScope::~CDisplayScenarioContextScope(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *this)
{
  if ( *(_BYTE *)this )
    DisplayScenarioContextDissociate(this + 1);
}
