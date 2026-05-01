/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18018FB08
 * Callers:
 *     ??$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x180345204 (--$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_traits@_KUTa.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::_Insert_new_node_before(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r11
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v6 = a1[3];
  v7 = 2 * (a2 & a1[6]);
  v8 = *(_QWORD *)(v6 + 16 * (a2 & a1[6]));
  if ( v8 == a1[1] )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
  }
  else
  {
    if ( v8 == a3 )
    {
      *(_QWORD *)(v6 + 8 * v7) = a4;
      return a4;
    }
    if ( *(_QWORD **)(v6 + 8 * v7 + 8) != v4 )
      return a4;
  }
  *(_QWORD *)(v6 + 8 * v7 + 8) = a4;
  return a4;
}
