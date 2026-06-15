/*
 * XREFs of ??8type_info@@QEBA_NAEBV0@@Z @ 0x14005C3BC
 * Callers:
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_5f566a039e163accc7dfac570a0abdcb___::_Get_deleter @ 0x14005E7D0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_5f566a039e163accc7dfac570a0abdcb___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_34f3125d2a5da0aa5cf71fc88976a66f___::_Get_deleter @ 0x14005F530 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_34f3125d2a5da0aa5cf71fc88976a66f___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_70301640f8566826d45154d3ae34dfc4___::_Get_deleter @ 0x14005F570 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_70301640f8566826d45154d3ae34dfc4___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_96bc077b0d5ed2f4f14aec6f3919a807___::_Get_deleter @ 0x14005F5B0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_96bc077b0d5ed2f4f14aec6f3919a807___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_cc3f6c97cf751af85d4e2813ad76e06f___::_Get_deleter @ 0x14005FEC0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_cc3f6c97cf751af85d4e2813ad76e06f___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_0ddf188575ed6f93ada331ebf2848e23___::_Get_deleter @ 0x140060C90 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_0ddf188575ed6f93ada331ebf2848e23___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_0a65f19914acb660f837ec6b1b5eb0b5___::_Get_deleter @ 0x1400632A0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_0a65f19914acb660f837ec6b1b5eb0b5___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_93d1bd3494f7725f046ab0fa90992741___::_Get_deleter @ 0x1400632E0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_93d1bd3494f7725f046ab0fa90992741___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_9fdce3a4aada548f2807d36788b6bc8f___::_Get_deleter @ 0x140063320 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_9fdce3a4aada548f2807d36788b6bc8f___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_d1b68576ef23365e54766c2a08a4df0a___::_Get_deleter @ 0x140063360 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_d1b68576ef23365e54766c2a08a4df0a___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_dfcad306b8fb141de82a0500d5a576ce___::_Get_deleter @ 0x1400633A0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_dfcad306b8fb141de82a0500d5a576ce___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::_Get_deleter @ 0x140066CE0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--_Get_de.c)
 * Callees:
 *     <none>
 */

bool __fastcall type_info::operator==(__int64 a1, __int64 a2)
{
  return (unsigned int)__std_type_info_compare(a1 + 8, a2 + 8) == 0;
}
