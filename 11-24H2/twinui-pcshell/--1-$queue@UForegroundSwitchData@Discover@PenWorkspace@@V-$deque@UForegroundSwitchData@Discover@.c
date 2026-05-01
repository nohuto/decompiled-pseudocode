/*
 * XREFs of ??1?$queue@UForegroundSwitchData@Discover@PenWorkspace@@V?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@@std@@QEAA@XZ @ 0x1802D0CB8
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$3 @ 0x1806CD7FD (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::queue<PenWorkspace::Discover::ForegroundSwitchData>::~queue<PenWorkspace::Discover::ForegroundSwitchData,std::deque<PenWorkspace::Discover::ForegroundSwitchData>>(
        void **a1)
{
  std::deque<PenWorkspace::Discover::ForegroundSwitchData>::~deque<PenWorkspace::Discover::ForegroundSwitchData>(a1);
}
