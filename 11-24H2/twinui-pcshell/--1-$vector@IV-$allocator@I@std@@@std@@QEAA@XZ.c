/*
 * XREFs of ??1?$vector@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x1802C62E4
 * Callers:
 *     _HotkeyHandler::RaiseUiaNotificationForMonitorMove_::_1_::dtor$2 @ 0x1806F72C0 (_HotkeyHandler--RaiseUiaNotificationForMonitorMove_--_1_--dtor$2.c)
 *     _SnapAccessibilityHelpers::MonitorIDFinder::GetUIIDs_::_1_::dtor$0 @ 0x1806F918D (_SnapAccessibilityHelpers--MonitorIDFinder--GetUIIDs_--_1_--dtor$0.c)
 *     _SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806F9282 (_SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCo_ea_1806F9282.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnRemote_::_1_::dtor$0 @ 0x1807021FF (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1807021FF.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned int>::~vector<unsigned int>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
