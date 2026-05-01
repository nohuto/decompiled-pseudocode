/*
 * XREFs of _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::_Emplace_reallocate_std::shared_ptr_KBViewInfo__&__::_1_::catch$0 @ 0x18050A960
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::_Emplace_reallocate_std::shared_ptr_KBViewInfo_____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base **v4; // rbx

  v3 = *(_QWORD *)(a2 + 96);
  if ( v3 != *(_QWORD *)(a2 + 104) )
  {
    v4 = (std::_Ref_count_base **)(v3 + 8);
    do
    {
      if ( *v4 )
        std::_Ref_count_base::_Decref(*v4);
      v4 += 2;
    }
    while ( v4 - 1 != *(std::_Ref_count_base ***)(a2 + 104) );
  }
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 120));
  throw;
}
