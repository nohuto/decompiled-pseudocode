/*
 * XREFs of _anonymous_namespace_::_dynamic_initializer_for___currentSequence__ @ 0x1801CD570
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1801CDE6C (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 */

int anonymous_namespace_::_dynamic_initializer_for___currentSequence__()
{
  __int64 v0; // rax
  __int64 v1; // rax

  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v0 = v0;
  *(_QWORD *)(v0 + 8) = v0;
  *(_QWORD *)(v0 + 16) = v0;
  *(_WORD *)(v0 + 24) = 257;
  qword_1804068F8 = 0LL;
  qword_180406900 = 0LL;
  qword_1804068E8 = v0;
  v1 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v1 = v1;
  *(_QWORD *)(v1 + 8) = v1;
  *(_QWORD *)(v1 + 16) = v1;
  *(_WORD *)(v1 + 24) = 257;
  qword_1804068F8 = v1;
  xmmword_180406910 = 0LL;
  *(_QWORD *)&xmmword_180406910 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
  xmmword_180406920 = 0LL;
  return atexit((void (__cdecl *)())anonymous_namespace_::_dynamic_atexit_destructor_for___currentSequence__);
}
