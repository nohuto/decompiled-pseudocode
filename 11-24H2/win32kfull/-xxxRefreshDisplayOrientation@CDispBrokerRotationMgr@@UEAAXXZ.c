/*
 * XREFs of ?xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ @ 0x140270870
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402705AC (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ @ 0x140270898 (-xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ.c)
 */

void __fastcall CDispBrokerRotationMgr::xxxRefreshDisplayOrientation(CDispBrokerRotationMgr *this)
{
  CRotationMgr::xxxRefreshDisplayOrientation(this);
  CDispBrokerRotationMgr::RequestAsyncRefreshOrientation(this, 0LL);
}
