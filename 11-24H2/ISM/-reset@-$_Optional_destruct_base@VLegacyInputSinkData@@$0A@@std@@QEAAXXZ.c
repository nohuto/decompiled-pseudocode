/*
 * XREFs of ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x1800523A8
 * Callers:
 *     ?RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z @ 0x18001D8B8 (-RemoveIdForNamespace@InputSite@@QEAAXW4InputSiteIdNamespace@@@Z.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180051F60 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1800178C8 (--1-$_Deleted_copy_assign@U-$_Variant_destroy_layer_@PEAXV-$unique_any_t@V-$unique_storage@U-$ha.c)
 */

__int64 __fastcall std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 432) )
  {
    result = std::_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(a1);
    *(_BYTE *)(a1 + 432) = 0;
  }
  return result;
}
