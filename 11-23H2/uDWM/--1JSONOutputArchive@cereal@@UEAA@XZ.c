/*
 * XREFs of ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800F124C
 * Callers:
 *     ??_EJSONOutputArchive@cereal@@UEAAPEAXI@Z @ 0x1800F14A0 (--_EJSONOutputArchive@cereal@@UEAAPEAXI@Z.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2794 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$1 @ 0x1800F29B6 (_tip--details--test_common_data_0_--data_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@QEAA@XZ @ 0x1800F0E14 (--1-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@cereal.c)
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800F15D8 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800F16CC (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 */

void __fastcall cereal::JSONOutputArchive::~JSONOutputArchive(cereal::JSONOutputArchive *this)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rax

  *(_QWORD *)this = &cereal::JSONOutputArchive::`vftable';
  v2 = (unsigned __int64)(*((_QWORD *)this + 61) + *((_QWORD *)this + 60) - 1LL) >> 2;
  v3 = (*((_DWORD *)this + 122) + *((_DWORD *)this + 120) - 1) & 3;
  v4 = *((_QWORD *)this + 58);
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 8 * (v2 & (*((_QWORD *)this + 59) - 1LL))) + 4 * v3) == 1 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject((char *)this + 328);
  }
  else if ( *(_DWORD *)(*(_QWORD *)(v4 + 8 * (v2 & (*((_QWORD *)this + 59) - 1LL))) + 4 * v3) == 3 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndArray((char *)this + 328);
  }
  std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>((__int64)this + 456);
  std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>((__int64)this + 416);
  free(*((void **)this + 44));
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 43));
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>((__int64)this);
}
