/*
 * XREFs of ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800FA028
 * Callers:
 *     ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800FA5D0 (-OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800FA6F0 (-OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x1800FA820 (-OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z.c)
 *     ?OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateData@@@Z @ 0x1800FA8E0 (-OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateDa.c)
 *     ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800FA9A0 (-OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z @ 0x1800FADC0 (-SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x18005A820 (--$find@X@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@.c)
 */

bool __fastcall SystemCursorService2::CursorManagerCursorIdExists(SystemCursorService2 *this, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  return *std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find<void>(
            (_QWORD *)this + 23,
            &v3,
            &v4) != *((_QWORD *)this + 24);
}
