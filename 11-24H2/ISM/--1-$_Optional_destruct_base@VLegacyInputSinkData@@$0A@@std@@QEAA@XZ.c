/*
 * XREFs of ??1?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAA@XZ @ 0x180037DC8
 * Callers:
 *     ??1InputSite@@UEAA@XZ @ 0x180037CEC (--1InputSite@@UEAA@XZ.c)
 * Callees:
 *     ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1800178C8 (--1-$_Deleted_copy_assign@U-$_Variant_destroy_layer_@PEAXV-$unique_any_t@V-$unique_storage@U-$ha.c)
 */

__int64 __fastcall std::_Optional_destruct_base<LegacyInputSinkData,0>::~_Optional_destruct_base<LegacyInputSinkData,0>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 432) )
    return std::_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(a1);
  return result;
}
