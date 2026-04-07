/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800F0D24
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::process_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&__::_1_::dtor$0 @ 0x1800EFC17 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--process_std--basic_string_unsigned_short_st.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$0 @ 0x1800F0227 (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$0.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$1 @ 0x1800F0233 (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$1.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$3 @ 0x1800F024B (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$3.c)
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$10 @ 0x1800F29C2 (_tip--details--test_common_data_0_--data_--_1_--dtor$10.c)
 *     _cereal::JSONInputArchive::Iterator::search_::_1_::dtor$0 @ 0x1800F334D (_cereal--JSONInputArchive--Iterator--search_--_1_--dtor$0.c)
 *     _cereal::JSONInputArchive::Iterator::search_::_1_::dtor$1 @ 0x1800F3359 (_cereal--JSONInputArchive--Iterator--search_--_1_--dtor$1.c)
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$0 @ 0x1800F4024 (_cereal--JSONOutputArchive--writeName_--_1_--dtor$0.c)
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$1 @ 0x1800F4030 (_cereal--JSONOutputArchive--writeName_--_1_--dtor$1.c)
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$2 @ 0x1800F403C (_cereal--JSONOutputArchive--writeName_--_1_--dtor$2.c)
 *     _cereal::util::wstring_to_string_::_1_::dtor$0 @ 0x1800F4176 (_cereal--util--wstring_to_string_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::string::~string(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
    result = std::_Deallocate<16,0>(*(void **)a1, v1 + 1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
