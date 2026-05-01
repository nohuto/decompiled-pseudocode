/*
 * XREFs of ?GetMonitorFromLastInvocationPoint@CActionCenterExperienceManager@@AEAAPEAUHMONITOR__@@XZ @ 0x18036DE60
 * Callers:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18036DF90 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803702A0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

HMONITOR __fastcall CActionCenterExperienceManager::GetMonitorFromLastInvocationPoint(
        CActionCenterExperienceManager *this)
{
  POINT v2; // [rsp+8h] [rbp+8h]

  v2.x = (int)*((float *)this + 214);
  v2.y = (int)*((float *)this + 215);
  return MonitorFromPoint(v2, 1u);
}
