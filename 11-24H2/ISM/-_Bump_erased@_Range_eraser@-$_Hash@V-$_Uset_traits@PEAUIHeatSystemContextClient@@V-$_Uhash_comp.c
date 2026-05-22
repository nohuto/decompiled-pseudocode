/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180097464
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBII@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800847C8 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@s.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@PEAUISystemContextObserver@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800AEE04 (-_Unchecked_erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISys.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18017D688 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_c.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18017D7C0 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameIn.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = (char *)a1[2];
  a1[2] = *(_QWORD *)v2;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x18);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
