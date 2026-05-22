/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@1@@Z @ 0x1801845F8
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@1@@Z @ 0x1801845F8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGV-$unique_ptr@$$BY0A@DU-$default_delete@$.c)
 *     ??1?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801849A4 (--1-$_Tree@V-$_Tmap_traits@GV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@U-$less@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@1@@Z @ 0x1801845F8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGV-$unique_ptr@$$BY0A@DU-$default_delete@$.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,std::unique_ptr<char [0]>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,std::unique_ptr<char [0]>>,void *>>>(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  void **v3; // rdi
  void **v6; // rbx
  const struct std::nothrow_t *v7; // rdx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,std::unique_ptr<char [0]>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,std::unique_ptr<char [0]>>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (void **)*v3;
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v6 + 5, v7);
    std::_Deallocate<16,0>((char *)v6, (const struct std::nothrow_t *)0x30);
  }
}
