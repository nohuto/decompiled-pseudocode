/*
 * XREFs of ??1?$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@7@@std@@QEAA@XZ @ 0x1800F1168
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$2 @ 0x1800F04E2 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_1800F04E2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>::~unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>(
        __int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x28uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x28uLL);
}
