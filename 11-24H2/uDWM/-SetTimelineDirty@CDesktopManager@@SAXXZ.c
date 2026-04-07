/*
 * XREFs of ?SetTimelineDirty@CDesktopManager@@SAXXZ @ 0x180012290
 * Callers:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180015AEC (-Restart@CTimelineBase@@QEAAXN@Z.c)
 * Callees:
 *     <none>
 */

void CDesktopManager::SetTimelineDirty(void)
{
  CDesktopManager::s_fTimelineDirty = 1;
}
