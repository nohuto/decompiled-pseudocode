/*
 * XREFs of ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180027BAC
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180026CE0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unordered_set@_KU-$hash@_K@std@@U-$equal.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009B9F0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unordered_set@_KU-$hash@_.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D9F38 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ??1CustomCursorApplication2@@QEAA@XZ @ 0x1800F63F0 (--1CustomCursorApplication2@@QEAA@XZ.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x18010AA58 (--1SystemContextProvider@@MEAA@XZ.c)
 *     ??1KeyboardModifierState@@EEAA@XZ @ 0x180198E64 (--1KeyboardModifierState@@EEAA@XZ.c)
 *     ??1TouchInfoAdapter@@UEAA@XZ @ 0x1801C5FC4 (--1TouchInfoAdapter@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@W4_Button@@PEAX@std@@@std@@@?$_List_node@W4_Button@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@W4_Button@@PEAX@std@@@1@PEAU01@@Z @ 0x18001C418 (--$_Free_non_head@V-$allocator@U-$_List_node@W4_Button@@PEAX@std@@@std@@@-$_List_node@W4_Button@.c)
 */

void __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::_List_node<enum _Button,void *>::_Free_non_head<std::allocator<std::_List_node<enum _Button,void *>>>(
    (__int64)v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(char **)(a1 + 8), (const struct std::nothrow_t *)0x18);
}
