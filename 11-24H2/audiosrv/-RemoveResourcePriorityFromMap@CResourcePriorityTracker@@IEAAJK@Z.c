/*
 * XREFs of ?RemoveResourcePriorityFromMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18002A0C4
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180029CC0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180029F40 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V21@@Z @ 0x18004CC34 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@@s.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@AEBK@Z @ 0x180051AB8 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@.c)
 */

__int64 __fastcall CResourcePriorityTracker::RemoveResourcePriorityFromMap(CResourcePriorityTracker *this, int a2)
{
  _QWORD *v2; // r10
  unsigned int v3; // r11d
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Find_lower_bound<unsigned long>(
    (char *)this + 40,
    v6,
    &v9);
  if ( !*(_BYTE *)(v7 + 25) && v3 >= *(_DWORD *)(v7 + 28) && v7 != *v2 && (*(_DWORD *)(v7 + 32))-- == 1 )
    std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>>,0>(
      v2,
      &v8);
  return 0LL;
}
