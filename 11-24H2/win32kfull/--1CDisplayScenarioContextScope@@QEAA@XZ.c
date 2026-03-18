/*
 * XREFs of ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1402190C0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 *     RemoteRedrawScreen @ 0x1401E03FC (RemoteRedrawScreen.c)
 *     NtUserRemoteConnect @ 0x1401F4F90 (NtUserRemoteConnect.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 *     ?xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z @ 0x1402707D0 (-xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z @ 0x140270B00 (-xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z.c)
 *     xxxRemoteConsoleShadowStop @ 0x1402B7794 (xxxRemoteConsoleShadowStop.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayScenarioContextScope::~CDisplayScenarioContextScope(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *this)
{
  if ( *(_BYTE *)this )
    DisplayScenarioContextDissociate(this + 1);
}
