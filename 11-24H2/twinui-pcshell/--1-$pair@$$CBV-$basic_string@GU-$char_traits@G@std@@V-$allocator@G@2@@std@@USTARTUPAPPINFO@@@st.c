/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@QEAA@XZ @ 0x1800B8E74
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805835E4 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits_ea_1805835E4.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18058383C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_18058383C.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$5 @ 0x1806CFD21 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$5.c)
 * Callees:
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x1800BAA38 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 */

void __fastcall std::pair<std::wstring const,STARTUPAPPINFO>::~pair<std::wstring const,STARTUPAPPINFO>(char *a1)
{
  STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)(a1 + 32));
  std::wstring::_Tidy_deallocate(a1);
}
