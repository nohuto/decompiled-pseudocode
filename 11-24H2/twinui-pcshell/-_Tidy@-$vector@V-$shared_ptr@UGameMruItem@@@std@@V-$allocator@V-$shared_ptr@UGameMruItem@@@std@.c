/*
 * XREFs of ?_Tidy@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXXZ @ 0x1800732B0
 * Callers:
 *     ??1JsonGameMruManager@@QEAA@XZ @ 0x1801C18DC (--1JsonGameMruManager@@QEAA@XZ.c)
 *     _PenWorkspace::Discover::RecentAppsCache::SaveDataToJson_::_1_::dtor$0 @ 0x1806CC239 (_PenWorkspace--Discover--RecentAppsCache--SaveDataToJson_--_1_--dtor$0.c)
 *     _MultitaskingViewGestureHandler::MultitaskingViewGestureHandler_::_1_::dtor$9 @ 0x1806D3D32 (_MultitaskingViewGestureHandler--MultitaskingViewGestureHandler_--_1_--dtor$9.c)
 *     _TouchKeyboardExperienceManager::HideAllInputViews_::_1_::dtor$0 @ 0x1806D6A85 (_TouchKeyboardExperienceManager--HideAllInputViews_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::WorkAreaChanged_::_1_::dtor$0 @ 0x1806DD187 (_TouchKeyboardExperienceManager--WorkAreaChanged_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::dtor$0 @ 0x1806E75B6 (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$13 @ 0x1806ED307 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 */

void __fastcall std::vector<std::shared_ptr<GameMruItem>>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v2, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
