/*
 * XREFs of ??0?$unordered_map@IUTargetingInfo@ForegroundManager@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@@std@@QEAA@XZ @ 0x18004E8AC
 * Callers:
 *     ??0ForegroundManager@@AEAA@XZ @ 0x18004E794 (--0ForegroundManager@@AEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@1@@Z @ 0x18004E8D8 (--0-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_compare@IU-$hash@I@std@@.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,ForegroundManager::TargetingInfo>::unordered_map<unsigned int,ForegroundManager::TargetingInfo>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>(
    a1,
    &v3);
  return a1;
}
