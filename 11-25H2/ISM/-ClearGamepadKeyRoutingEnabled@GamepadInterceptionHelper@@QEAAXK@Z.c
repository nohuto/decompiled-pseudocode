/*
 * XREFs of ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180106018
 * Callers:
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180087DA0 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x1801318D0 (-OnGamepadKeyRoutingEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D0ACC (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E1544 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKI@std@@@std@@@std@@QEAAPEAU-$_Tree_node.c)
 */

void __fastcall GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled(GamepadInterceptionHelper *this, int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 *v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (_QWORD *)((char *)this + 72);
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (__int64 *)this + 9,
    (__int64)&v8,
    &v9);
  v5 = v8;
  if ( v8 != *v2 && (*(_DWORD *)(v8 + 32))-- == 1 )
  {
    v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned int>>>::_Extract(v2, v5, v3, v4);
    std::_Deallocate<16,0>((char *)v7, (const struct std::nothrow_t *)0x28);
  }
}
