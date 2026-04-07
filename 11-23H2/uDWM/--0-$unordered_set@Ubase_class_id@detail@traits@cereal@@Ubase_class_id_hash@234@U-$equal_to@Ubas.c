/*
 * XREFs of ??0?$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@7@@std@@QEAA@XZ @ 0x1800F085C
 * Callers:
 *     ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800F03D8 (--0-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@6@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@1@AEBV?$allocator@Ubase_class_id@detail@traits@cereal@@@1@@Z @ 0x1800F05D0 (--0-$_Hash@V-$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V-$_Uhash_compare@Ubase_class_id.c)
 */

__int64 __fastcall std::unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>::unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Uset_traits<cereal::traits::detail::base_class_id,std::_Uhash_compare<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>>,std::allocator<cereal::traits::detail::base_class_id>,0>>::_Hash<std::_Uset_traits<cereal::traits::detail::base_class_id,std::_Uhash_compare<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>>,std::allocator<cereal::traits::detail::base_class_id>,0>>(
    a1,
    &v3);
  return a1;
}
