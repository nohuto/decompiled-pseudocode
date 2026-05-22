/*
 * XREFs of ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_K$$QEA_K@Z @ 0x1800F9258
 * Callers:
 *     ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800FA480 (-OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 *     ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800FA5D0 (-OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800FA6F0 (-OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x1800FA820 (-OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z.c)
 *     ?OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateData@@@Z @ 0x1800FA8E0 (-OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateDa.c)
 *     ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800FA9A0 (-OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z @ 0x1800FADC0 (-SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z.c)
 * Callees:
 *     ??$_Try_emplace@_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800F8910 (--$_Try_emplace@_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_t.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,unsigned __int64>::operator[](_QWORD *a1, _QWORD *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64,>(
                      a1,
                      (__int64)v3,
                      a2)
       + 24LL;
}
