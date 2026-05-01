/*
 * XREFs of ??1ExeData@@QEAA@XZ @ 0x180574584
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180573FFC (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ??1?$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ @ 0x18057448C (--1-$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180574508 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@s.c)
 *     ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x180574A18 (-FindExeDataForPid@Win32AppInfo@@QEAA-AV-$optional@UExeData@@@std@@I@Z.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x180575840 (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575B30 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall ExeData::~ExeData(void **this)
{
  std::wstring::_Tidy_deallocate(this + 5);
  std::wstring::_Tidy_deallocate(this + 1);
}
