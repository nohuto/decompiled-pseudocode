/*
 * XREFs of ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@@Z @ 0x180199A34
 * Callers:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAG@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAG@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180199008 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAG@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$alloc.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAG@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAG@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180199088 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAG@1@V-$tuple@$$V@1@@-$_Tree_temp__ea_180199088.c)
 *     ??$_Emplace@AEAEV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@1@@Z @ 0x180199300 (--$_Emplace@AEAEV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@@-$_Tree@V-$_Tmap_tr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<unsigned short const,HapticsWaveform>,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = operator new(0x30uLL);
  return a1;
}
