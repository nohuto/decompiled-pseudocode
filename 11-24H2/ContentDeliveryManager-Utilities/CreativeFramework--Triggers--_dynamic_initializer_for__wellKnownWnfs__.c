/*
 * XREFs of CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__ @ 0x180004520
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@XZ @ 0x18008BBF0 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V-$al.c)
 */

int CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__()
{
  qword_18017B580 = std::_Tree_alloc<0,std::_Tree_base_types<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>>::_Buyheadnode();
  return atexit((void (__cdecl *)())CreativeFramework::Triggers::_dynamic_atexit_destructor_for__wellKnownWnfs__);
}
