/*
 * XREFs of ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x180061098
 * Callers:
 *     _std::_Hash_std::_Uset_traits_unsigned_long_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_unsigned_long__0___::_Hash_std::_Uset_traits_unsigned_long_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_unsigned_long__0____::_1_::dtor$0 @ 0x1801C7FF0 (_std--_Hash_std--_Uset_traits_unsigned_long_std--_Uhash_compare_unsigned_long_std--hash_unsigned.c)
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$12 @ 0x1801C9210 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$12.c)
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$15 @ 0x1801C9250 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$15.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$13 @ 0x1801C99E0 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$13.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$16 @ 0x1801C9A20 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$16.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$19 @ 0x1801C9A60 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$19.c)
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::dtor$7 @ 0x1801C9AD4 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator_ContextualPro.c)
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::dtor$19 @ 0x1801C9B24 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator__ea_1801C9B24.c)
 *     _ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata_::_1_::dtor$13 @ 0x1801C9BA0 (_ContextualProcessorBuffer--ContextualProcessorMetadata--ContextualProcessorMetadat_ea_1801C9BA0.c)
 *     _ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata_::_1_::dtor$19 @ 0x1801C9BCC (_ContextualProcessorBuffer--ContextualProcessorMetadata--ContextualProcessorMetadat_ea_1801C9BCC.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$8 @ 0x1801C9C40 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$8.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$11 @ 0x1801C9C6C (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$11.c)
 *     _InputContext::Create_::_1_::dtor$10 @ 0x1801C9DA0 (_InputContext--Create_--_1_--dtor$10.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$3 @ 0x1801CAAA0 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$3.c)
 *     _std::_Hash_std::_Umap_traits_enum_GameInputGamepadButtons_unsigned_short_std::_Uhash_compare_enum_GameInputGamepadButtons_std::hash_enum_GameInputGamepadButtons__std::equal_to_enum_GameInputGamepadButtons____std::allocator_std::pair_enum_GameInputGamepadButtons_const__unsigned_short____0___::_Hash_std::_Umap_traits_enum_GameInputGamepadButtons_unsigned_short_std::_Uhash_compare_enum_GameInputGamepadButtons_std::hash_enum_GameInputGamepadButtons__std::equal_to_enum_GameInputGamepadButtons____std::allocator_std::pair_enum_GameInputGamepadButtons_const__unsigned_short____0____::_1_::dtor$0 @ 0x1801CB37B (_std--_Hash_std--_Umap_traits_enum_GameInputGamepadButtons_unsigned_short_std--_Uhash_compare_en.c)
 *     _std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long___::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long____::_1_::dtor$1 @ 0x1801CB3B5 (_std--unordered_set_unsigned_long_std--hash_unsigned_long__std--equal_to_unsigned_long__std--all.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$3 @ 0x1801CC548 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<unsigned int>::~list<unsigned int>(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      operator delete(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  operator delete(*a1, (const struct std::nothrow_t *)0x18);
}
